#include <stdio.h>

// void lengthOfArray(char string[]) {
//     printf("%ld\n", sizeof(string));
// }

// void lengthOfPointer(char *string) {
//     printf("%ld\n", sizeof(string));
// }

// int main(void) {
//     char string1[] = "11111";
//     char *string2 = "11111";

//     printf("%ld\n", sizeof(string1));
//     printf("%ld\n", sizeof(string2));
//     lengthOfArray(string1);
//     lengthOfArray(string2);
//     lengthOfPointer(string1);
//     lengthOfPointer(string2);

//     return 0;
// }

int main(void)
{
    int a[] = {1, 1, 1};
    printf("%d\n", a);
    printf("%d\n", *a);
}