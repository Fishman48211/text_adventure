#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "item.h"

struct Room {
    char *name;
    
    struct Room *north;
    struct Room *south;
    struct Room *east;
    struct Room *west;

    union Item *items;
    int item_count;
};

struct Room *generate_level() {

}

int main(int argc, char **argv) {
    struct Room rooms[] = {(struct Room){"room a", 0}, {"room b", 0}, {"room c", 0}, {"room d", 0}, {"room e", 0}, {"room f", 0}};
    int room_count = 6;

    rooms[0].north = rooms + 1;
    rooms[0].south = rooms + 2;
    rooms[1].south = rooms + 0;
    rooms[1].east = rooms + 3;
    rooms[2].north = rooms + 0;
    rooms[3].west = rooms + 1;

    struct Room *current_room = rooms;

    int quit = 0;
    char buf[256];

    while (!quit) {
        printf("Current Room:\t%s\n\n", current_room->name);
        if (current_room->north != 0) {
            printf("North:\t%s\n", current_room->north->name);
        }
        if (current_room->east != 0) {
            printf("East:\t%s\n", current_room->east->name);
        }
        if (current_room->south != 0) {
            printf("South:\t%s\n", current_room->south->name);
        }
        if (current_room->west != 0) {
            printf("West:\t%s\n", current_room->west->name);
        }
        printf("\n");
        scanf("%255s", buf);
        if (strncasecmp(buf, "quit", 4) == 0 || strncasecmp(buf, "exit", 4) == 0) {
            quit = 1;
        } else if (strncasecmp(buf, "north", 5) == 0) {
            current_room = current_room->north;
        } else if (strncasecmp(buf, "east", 4) == 0) {
            current_room = current_room->east;
        } else if (strncasecmp(buf, "south", 5) == 0) {
            current_room = current_room->south;
        } else if (strncasecmp(buf, "west", 4) == 0) {
            current_room = current_room->west;
        }
    }
}