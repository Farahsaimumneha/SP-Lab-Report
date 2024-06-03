#include<stdio.h>
int main(){

    int size,i,target;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d Elements:",size);
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }

    printf("Enter the Target Value:");
    scanf("%d",&target);

    for(i=0;i<size;i++){
        if(array[i]==target){
            printf("%d Found at Location %d",target,i+1);
        break;
        }
    }
    if(i==size){
        printf("Not Found");
    }
return 0;
}
