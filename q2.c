// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    int avg = sum/n;
    printf("%d",avg);

    return 0;
}
