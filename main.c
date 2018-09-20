#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your letter grade: ");
    char myGrade;
    scanf("%c", &myGrade);
    switch(myGrade)
    {
    case 'A':
        printf("Great Job");
        break;
        case 'B':
        break;
        case 'F':
        printf("Try Harder!");
        break;

    }



    return 0;
}
