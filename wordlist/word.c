/*
  # Author: Nysioko and Crazit
  # Create Time: 2021-04-21 14:04:17
  # Modified by: Nysioko and Crazit
  # Modified time: 21-04-2021 14:17:36
  # Description: Program to generate a wordlist
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define mins 0
#define maj 1
#define nb 2
#define spe 3

void generate_words(int min, int max, long nbword)
{
    for (int rec = 0; rec < nbword; rec++) {
        int the_rand = rand() % (max - min + 1);
        int length = the_rand + min;
        int x;
        char special[13] = "+-=#&*@$%%";
        char y;
        char *str = malloc(sizeof(char) * (length + 2));
        int i;

        for (i = 0; i != length; i++) {
            x = rand() % 4;
            switch (x) {
                case (mins):
                    y = (rand() % 27) + 'a';
                    break;
                case (maj):
                    y = (rand() % 27) + 'A';
                    break;
                case (nb):
                    y = (rand() % 10) + '0';
                    break;
                case (spe):
                    y = special[(rand() % 10)];
                default:
                    break;
            }
            str[i] = y;
        }
        str[i] = '\n';
        str[i + 1] = '\0';
        write(1, str, strlen(str));
        free(str);
    }
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        printf("./wordlist [minimum length] [maximum length] [number of words]\n");
        return 0;
    }
    if (ac != 4)
        return -1;
    int min = atoi(av[1]);
    int max = atoi(av[2]);
    long nbword = atoi(av[3]);
    generate_words(min, max, nbword);
}
