#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
char choixd[20];
int savechoix;
int carte;
int pvjoueur;
char village[8];

char montagne[9];

char grotte[7];

char moulin[7];

char magmacave[10];
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

  moulin[0]='m';
  moulin[1]='o';
  moulin[2]='u';
  moulin[3]='l';
  moulin[4]='i';
  moulin[5]='n';
  moulin[6]='\0';

  magmacave[0]='m';
  magmacave[1]='a';
  magmacave[2]='g';
  magmacave[3]='m';
  magmacave[4]='a';
  magmacave[5]='c';
  magmacave[6]='a';
  magmacave[7]='v';
  magmacave[8]='e';
  magmacave[9]='\0';
  savechoix=0;
 carte=0;
 pvjoueur=100;
 //Au spawn + choix
printf("==================\nBienvenue aventurier!\n==================\n");
Sleep(1000);
printf("Ou souhaitez vous aller? \n");
Sleep(1000);
printf("\nvillage? \n");
printf("Le village de Nivadelir(1), les debutants sont les bienvenues, Chemin : Grotte(5),Montagne(10),Moulin(4)");
Sleep(2000);
printf("\n\ngrotte? \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
Sleep(2000);
printf("\n\nmontagne? \n");
printf("La montagne de l'etrange...On dit qu'un magicien debutant y était enferme... Chemin : Moulin(4),Village(1)");

  while (savechoix==0 && carte==0) {
printf("\n \nVous etes au spawn...\n Choississez un endroit.\n");
scanf("%s",&choixd);
if (strcmp(choixd, village) == 0) {
printf("\nVous allez au village... \n ... \n \n");
savechoix=1;
carte=1;
}
else if (strcmp(choixd, montagne) == 0) {
printf("\nVous allez a la montagne... \n ... \n \n");
savechoix=1;
carte=10;
}
else if (strcmp(choixd, grotte) == 0) {
printf("\nVous allez dans une grotte... \n ... \n \n");
savechoix=1;
carte=5;
}
else  {
printf("\nVeuillez choisir un autre endroit...\n");
}
}
while (pvjoueur==100) {
//Chemin pour le village(1)
if (carte==1) {
savechoix=0;
while(savechoix==0){

Sleep(1000);
printf("===========\nVous etes arriver au village...\n===========\n");
printf("Ou voulez vous aller? \n \n");

printf("grotte? \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
Sleep(1000);
printf("\n \nmontagne? \n");
printf("La montagne de l'étrange...On dit qu'un magicien debutant y était enferme... Chemin : Moulin(4),Village(1)");
Sleep(1000);
printf("\n \nmoulin? \n");
printf("Petit moulin tranquille...Vous pourrez y faire quelques achats... Chemin: Village(1),Grotte(5),Montagne(10) \n");
scanf("%s",&choixd);

if (strcmp(choixd, grotte) == 0) {
printf("\nVous allez a la grotte... \n ... \n");
savechoix=1;
carte=5;
}
else if (strcmp(choixd, montagne) == 0) {
printf("\nVous allez a la montagne... \n ... \n");
savechoix=1;
carte=10;
}
else if (strcmp(choixd, moulin) == 0) {
printf("\nVous allez au moulin... \n ... \n");
savechoix=1;
carte=4;
}
else  {
printf("Veuillez choisir un autre endroit...\n");
}
}
}

//Chemin pour la grotte(5)
if (carte==5) {
savechoix=0;
while(savechoix==0){

Sleep(1000);
printf("===========\nVous etes arrive dans la grotte...\n===========\n");
printf("Ou voulez vous aller? \n \n");

printf("magmacave? \n");
printf("La magma cave est tres dangeureuse...Attention il y'a pleins d'ennemis a vaincre ici Chemin : grotte(5)");
Sleep(1000);
printf("\n \nvillage? \n");
printf("Le village de nivadelir est un endroit paisible plus qu'ici du moins... Chemin : Moulin(4),Grotte(1),Montagne(10) \n");
scanf("%s",&choixd);

if (strcmp(choixd, magmacave) == 0) {
printf("\nVous allez à la magma cave... \n ... \n");
Sleep(500);
printf("Bonne chance à vous...");
savechoix=1;
carte=19;
}
else if (strcmp(choixd, village) == 0) {
printf("\nVous allez au village... \n ... \n");
Sleep(500);
printf("Il vaut mieux...\n");
savechoix=1;
carte=1;
}
else  {
printf("Veuillez choisir un autre endroit...\n");
}
}
}
//Chemin pour la magma cave(19)
if (carte==19) {
savechoix=0;
while(savechoix==0){

Sleep(1000);
printf("\n \n===========\nVous etes arrive dans la MAGMA CAVE...\n===========\n");
printf("Ou voulez vous aller? Ou que souhaitez vous faire?? (Petit jeu de combat ici on verra) \n \n");
Sleep(1000);
printf("grotte? \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
scanf("%s",&choixd);

if (strcmp(choixd, grotte) == 0) {
printf("\nVous retournez en arriere a la grotte... \n ... \n");
savechoix=1;
carte=5;
}
else  {
printf("Veuillez choisir un autre endroit...\n");
}
}
}
//Chemin pour le moulin(4)
if (carte==4) {
savechoix=0;
while(savechoix==0){

Sleep(1000);
printf("===========\nVous etes arriver au moulin...\n===========\n");
printf("Ou voulez vous aller? \n \n");

printf("grotte? \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
Sleep(1000);
printf("\n \nmontagne? \n");
printf("La montagne de l'etrange...On dit qu'un magicien debutant y était enferme... Chemin : Moulin(4),Village(1)");
Sleep(1000);
printf("\n \nvillage? \n");
printf("Le village de nivadelir est un endroit paisible plus qu'ici du moins... Chemin : Moulin(4),Grotte(1),Montagne(10) \n");
scanf("%s",&choixd);

if (strcmp(choixd, grotte) == 0) {
printf("\nVous allez à la grotte... \n ... \n");
savechoix=1;
carte=5;
}
else if (strcmp(choixd, montagne) == 0) {
printf("\nVous allez a la montagne... \n ... \n");
savechoix=1;
carte=10;
}
else if (strcmp(choixd, village) == 0) {
printf("\nVous allez au village de nivadelir... \n ... \n");
savechoix=1;
carte=1;
}
else  {
printf("Veuillez choisir un autre endroit...\n");
}
}
}
//Chemin montagne(10)
    if (carte==10) {
          savechoix=0;
            while(savechoix==0){

              Sleep(1000);
              printf("===========\nVous etes arriver a la montagne du magicien déchu...\n===========\n");
              printf("Ou voulez vous aller? \n \n");
              Sleep(1000);
              printf("village? \n");
              printf("Le village de nivadelir est un endroit paisible plus qu'ici du moins... Chemin : Moulin(4),Grotte(1),Montagne(10)");
              Sleep(1000);
              printf("\n \nmoulin? \n");
              printf("Petit moulin tranquille...Vous pourrez y faire quelques achats... Chemin: Village(1),Grotte(5),Montagne(10) \n");
              scanf("%s",&choixd);

                  if (strcmp(choixd, village) == 0) {
                      printf("\nVous allez au village de nivadelir... \n ... \n");
                      savechoix=1;
                      carte=1;
                  }
                    else if (strcmp(choixd, moulin) == 0) {
                        printf("\nVous allez au moulin... \n ... \n");
                        savechoix=1;
                        carte=4;
                      }
                        else  {
                          printf("\nVeuillez choisir un autre endroit...\n");
                        }
              }
    }

  }
}
