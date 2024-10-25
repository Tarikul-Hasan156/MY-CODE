#include <stdio.h>
int main()
{
    int x,y,z,  c = 0;
    scanf("%d%d%d", &x,&y,&z);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x; i++)

    {
        if (arr[i] >=y  && arr[i] <=z )
        
            c++;
        
            
    }
    printf("%d\n", c);
    return 0;
}