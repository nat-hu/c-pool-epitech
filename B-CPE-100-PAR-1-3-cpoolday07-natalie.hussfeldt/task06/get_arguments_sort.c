/*
** EPITECH PROJECT, 2024
** my_sort_params
** File description:
** displays all its arguments, in ascii order
*/

int my_strcmp(char const *s1, char const *s2);
void my_putstr(char const *str);
void my_putchar(char c);
int main(int argc, char **argv)
{
    char temp[];
    int x;
    
    for (int i = 1; i < argc; i++) {

	x = my_strcmp(argv[i - 1],argv[i]);

	if (x -= 1) {
            temp = argv[i - 1];
	    argv[i] = argv[i - 1];
	    argv[i - 1] = temp
	}
    }

    for (int j = 0; j < argc; j++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }

    return 0;
}
