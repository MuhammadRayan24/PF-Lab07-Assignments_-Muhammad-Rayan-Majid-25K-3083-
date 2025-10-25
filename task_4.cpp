//#include<stdio.h>
//#include<string.h>
//int main ()
//{
//	char str[50];
//	printf("\n Enter the string: ");
//	scanf("%[^0-9]", str);
//	printf("\n You entered the string: %s", str);
//	return 0;
//}
/* above program will print the instructions when the first numeric 
character encountered and will not include the characters after the 
digit .So the following program will fix the problem of prevoius one*/

#include <stdio.h>

int main() {
    char str[100];
    char result[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // include spaces!
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') 
		{  
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';
    printf("String after removing numbers: %s", result);
    return 0;
}

