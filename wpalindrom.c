#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    //variable declaration
    int stringLength;
    char wordCheck[50];
    printf("Enter the word to be checked: ");
    scanf("%s", &wordCheck);
    //find word length
    stringLength=strlen(wordCheck);
    //initialise first and last letter of the word like an arrays zero based
    int first = 0;
    int last = stringLength-1;
    bool isPalindrome;
    //comparing first and last letter
    while (last>first)
    {
        if(wordCheck[first]!=wordCheck[last])
        {
            isPalindrome= false;
        }
        else
        {
            isPalindrome = true;
        }
        
        first++;
        last--;
    } 
    if (isPalindrome)
    {
        printf("%s is a palindrome",wordCheck);
    }
    else
    {
        printf("%s is not a palindrome",wordCheck);
    }


    return 0;
}