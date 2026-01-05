#include <stdio.h>
#include <string.h>

int main()
{
    char a[20],b[20];

    scanf("%s%s",a,b);

    printf("%d\n",strlen(a));
    strcpy(b,a);
    strcat(a,b);
    printf("%d",strcmp(a,b));

    return 0;
}
