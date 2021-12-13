#include <iostream>

template <typename T, typename S>
void  iter(T *arr, S size, void   (*func)(T &)) { for(int i = 0;i < size; i++) (*func)(arr[i]); }
template <typename T>
void    inc(T &elem) { elem++; }
template <typename T>
void    ft_putchar(T &c) { std::cout << c; }
template <typename T>
int ft_strlen(T elem) { int i = 0;while (elem[i])i++;return(i); }

int main(int    argc, char **argv)
{
    int arr[3] = {0, 1, 2};
    iter(arr, 3, &inc);
    for (int i = 0;i < 3;i++)
        std::cout << arr[i];
    std::cout << std::endl;
    char space = ' ';
    for (int i = 0; i < argc;i++)
    {
        for (int y = 0;y < ft_strlen(argv[i]);y++)
            ft_putchar(argv[i][y]);
        ft_putchar(space);
    }
}
