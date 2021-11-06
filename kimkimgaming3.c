#include<stdio.h>
int main(){
    system("COLOR 0A");
int choices, price, payment, change;
    printf("Please pick you favorite beverage:");
    printf("\n[1]Tanduay (P130) \n[2]Red Horse (P125) \n[3]Embassy (P400) \nChoice:");
    scanf("%d", &choices);
    switch (choices){

    case 1:
    price = 130;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Tanduay Sir/Ma'am.\n");
    change = payment-price;
    printf("\nChange: %d\n", change);
}
else{
    printf("Apparently you do not have enough money");
}
    break;

    case 2:
    price = 125;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Succes! Enjoy your Red Horse Sir/Ma'am.\n");
    change = payment-price;
    printf("\nChange: %d\n", change);
}
else{
    printf("Apparently you do not have enough money");
}
     break;


     case 3:
    price = 400;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Embassy Sir/Ma'am.\n");
    change = payment-price;
    printf("\nChange: %d\n", change);
}
else {
  printf("Apparently you do not have enough money");
}
  break;
   default:
   printf("The item that you wanted does not exist");
}
return 0;
}
