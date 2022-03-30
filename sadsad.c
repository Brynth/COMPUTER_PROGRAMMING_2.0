#include <stdio.h>
int validate(int ic[3][2],int id,int pin){
    int isvalid = 0;
    for(int i = 0; i<3; i++){
        if(id == ic[i][0] && pin == ic[i][1]){
            isvalid = 1;
        }
    }
    return isvalid;
}
int main(){
    int ic[2][3]= {{111,112},{222,223},{333,334}};
    int id,pin;
    printf("enter ID number :");
    scanf("%d",&id);
    printf("enter PIN :");
    scanf("%d",&pin);
    validate(ic,id,pin) ? printf("you have logged in successfully\nID#:%d",id) :printf("invalid ID/PIN\nPIN#:%d",pin);


    return 0;
}
















