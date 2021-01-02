#include <stdio.h>
main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if (a>0)
    printf("The number %d is a positive number.",a);
    else if (a==0)
    printf("The number %d is neither a positive nor a negative number.",a);
    else 
    printf("The number %d is a negative number",a);

    return 0;
}
