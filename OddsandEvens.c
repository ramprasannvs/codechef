#include <stdio.h>

int main(void) {
     int t;
    scanf("%d",&t);
    while(t){
        int a,b;
        scanf("%d\n %d",&a,&b);
        a+b;
        if((a+b)%2==0){
            printf("Bob\n");

        }
        else{
            printf("Alice\n");
        }
        t--;
    }
	// your code goes here
	return 0;
}

