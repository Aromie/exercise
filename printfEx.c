#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    char str[100];
    char sen[100];
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    scanf("%c", &ch);
    
    scanf("%s", str);
    
    scanf(" %[^\n]", sen);
    
    printf("%c",ch);
    printf("\n%s",str);
    printf("\n%s",sen);
    
    return 0;
}
