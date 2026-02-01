#!/bin/bash

gcc -I ../../include -c *.c
ar cr libmy.a *.o
