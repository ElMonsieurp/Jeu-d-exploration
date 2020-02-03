#include <stdio.h>
#include <stdlib.h>

int grotte;
int montagne;
int village;
int choixd;

int main() {
choixd=0;
printf("==================\n Bienvenue aventurier! \n==================\n");
printf("Ou souhaitez vous aller? \n 1= Village \n 2= Montagne \n 3= grotte \n");
while (choixd!=1 || choixd!=2 || choixd!=3) {
scanf("%d",&choixd);
if (choixd==1) {
printf("Vous allez au village... \n ... \nVous etes arriver au village");
}
if (choixd==2) {
printf("Vous allez a la montagne... \n ... \nVous etes arriver au pied de la montagne attention!");
}
if (choixd==3) {
printf("Vous allez dans une grotte... \n ... \nVous etes arriver dans la grotte...");
}
if (choixd>3) {
printf("Veuillez choisir un autre numero...");
choixd=0;
}
}
}
