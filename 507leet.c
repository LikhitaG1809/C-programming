#include <stdio.h>
int main() {
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0)
         sum+=i;
    }
    if(n==sum)
     printf("Yes");
    else
     printf("No");

    return 0;
}