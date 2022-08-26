#include <stdio.h>

int main(void) {
    int p1,p2,p3,p4;
    scanf("%d\t%d\t%d\t%d",&p1,&p2,&p3,&p4);
    int ans=0;
    if(10<=p1){
        ans+=1;
    }
    if(10<=p2){
        ans+=1;
    }
    if(10<=p3){
        ans+=1;
    }
    if(10<=p4){
        ans+=1;
    }
	printf("%d",ans);
	return 0;
}

