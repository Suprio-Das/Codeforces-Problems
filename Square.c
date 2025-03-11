#include<stdio.h>

int main(){
    int t, l, r, d, u;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d %d", &l, &r, &d, &u);
        if(l == r && r == d && r == u){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
