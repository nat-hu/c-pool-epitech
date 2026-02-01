/*
** EPITECH PROJECT, 2024
** get_color
** File description:
** handels a color with RGB values
** 0xRRGGBB
** RR = red, GG = green, BB = blue
** Left shift << moves bits to the left
** adding zeros to the back
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return (red << 16) | (green << 8) | blue;
}
