#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char a[100];
    char str[100];
    char rev_str[100];
    char reverse_a[100];
    input_string(&a);
    str_reverse(&str, &rev_str);
    output(&a,&reverse_a);

}