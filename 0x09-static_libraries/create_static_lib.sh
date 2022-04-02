#!/bin/bash
sudo gcc -Wall -pedantic -Werror -Wextra -c *.c
sudo ar -rc liball.a *.o
