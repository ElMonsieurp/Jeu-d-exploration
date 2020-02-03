#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char choixd[20];
int savechoix;

char village[8];

char montagne[9];

char grotte[7];

int main() {
  village[0]='v';
  village[1]='i';
  village[2]='l';
  village[3]='l';
  village[4]='a';
  village[5]='g';
  village[6]='e';
  village[7]='\0';

  montagne[0]='m';
  montagne[1]='o';
  montagne[2]='n';
  montagne[3]='t';
  montagne[4]='a';
  montagne[5]='g';
  montagne[6]='n';
  montagne[7]='e';
  montagne[8]='\0';

  grotte[0]='g';
  grotte[1]='r';
  grotte[2]='o';
  grotte[3]='t';
  grotte[4]='t';
  grotte[5]='e';
  grotte[6]='\0';
  savechoix=0;

printf("==================\n Bienvenue aventurier! \n==================\n");

printf("Ou souhaitez vous aller? \n");

printf("village? \n");

printf("grotte? \n");

printf("montagne? \n");
while (savechoix==0) {
scanf("%s",&choixd);
if (strcmp(choixd, village) == 0) {
printf("Vous allez au village... \n ... \nVous etes arriver au village");
savechoix=1;
}
else if (strcmp(choixd, montagne) == 0) {
printf("Vous allez a la montagne... \n ... \nVous etes arriver au pied de la montagne attention!");
savechoix=1;
}
else if (strcmp(choixd, grotte) == 0) {
printf("Vous allez dans une grotte... \n ... \nVous etes arriver dans la grotte...");
savechoix=1;
}
else  {
printf("Veuillez choisir un autre endroit...");
}
}
}
