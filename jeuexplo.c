#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
char choixd[20];
int savechoix;
int carte;
int pvjoueur;
char lieu1[8];

char lieu2[9];

char lieu3[7];

char lieu4[7];

char lieu5[10];

char tableaulieu[100];

char repos[6];

char avantposted[12];
//Les sauvegardes de l'avant poste
int grottesafe;
int villagesafe;
int magmasafe;
int moulinsafe;
int montagnesafe;
int enduranceuse;
int endurance;
int avantposte;
int endroit;
int endroitsave;
int utilisationendurance(int enduranceuse) {
  enduranceuse = endroitsave + endroit;
  return enduranceuse;
}

int main() {

grottesafe=0;
villagesafe=0;
magmasafe=0;
moulinsafe=0;
montagnesafe=0;

endurance=100;
avantposte=1;

  lieu1[0]='v';
  lieu1[1]='i';
  lieu1[2]='l';
  lieu1[3]='l';
  lieu1[4]='a';
  lieu1[5]='g';
  lieu1[6]='e';
  lieu1[7]='\0';

  lieu2[0]='m';
  lieu2[1]='o';
  lieu2[2]='n';
  lieu2[3]='t';
  lieu2[4]='a';
  lieu2[5]='g';
  lieu2[6]='n';
  lieu2[7]='e';
  lieu2[8]='\0';

  lieu3[0]='g';
  lieu3[1]='r';
  lieu3[2]='o';
  lieu3[3]='t';
  lieu3[4]='t';
  lieu3[5]='e';
  lieu3[6]='\0';

  lieu4[0]='m';
  lieu4[1]='o';
  lieu4[2]='u';
  lieu4[3]='l';
  lieu4[4]='i';
  lieu4[5]='n';
  lieu4[6]='\0';

  lieu5[0]='m';
  lieu5[1]='a';
  lieu5[2]='g';
  lieu5[3]='m';
  lieu5[4]='a';
  lieu5[5]='c';
  lieu5[6]='a';
  lieu5[7]='v';
  lieu5[8]='e';
  lieu5[9]='\0';

  repos[0]='r';
  repos[1]='e';
  repos[2]='p';
  repos[3]='o';
  repos[4]='s';
  repos[5]='\0';

  avantposted[0]='a';
  avantposted[1]='v';
  avantposted[2]='a';
  avantposted[3]='n';
  avantposted[4]='t';
  avantposted[5]='p';
  avantposted[6]='o';
  avantposted[7]='s';
  avantposted[8]='t';
  avantposted[9]='e';
  avantposted[10]='d';
  avantposted[11]='\0';

  savechoix=0;
 carte=0;
 pvjoueur=100;
 //Au spawn + choix
printf("==================\nBienvenue aventurier!\n==================\n");
Sleep(1000);
printf("Votre endurance : %d \n\n",endurance);
printf("Ou souhaitez vous aller? (pour creer un avant poste plus tard taper avantposted ou si vous voulez un repos : repos. Sinon ecrivez votre destination) \n");
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
if (strcmp(choixd, lieu1) == 0) {
printf("\nVous allez au village... \n ... \n \n");
endurance=endurance-5;
savechoix=1;
carte=1;
}
else if (strcmp(choixd, lieu2) == 0) {
printf("\nVous allez a la montagne... \n ... \n \n");
endurance=endurance-30;
savechoix=1;
carte=10;
}
else if (strcmp(choixd, lieu3) == 0) {
endurance=endurance-20;
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
endroitsave=5;
savechoix=0;

while(savechoix==0){

Sleep(1000);
printf("===========\nVous etes arriver au village...\n===========\n");
printf("Votre endurance : %d \n\n",endurance);
printf("Ou voulez vous aller?  Ou faire\n \n");

printf("grotte? StaminaZone=20 \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
Sleep(1000);
printf("\n \nmontagne? StaminaZone=30 \n");
printf("La montagne de l'étrange...On dit qu'un magicien debutant y était enferme... Chemin : Moulin(4),Village(1)");
Sleep(1000);
printf("\n \nmoulin? StaminaZone=10\n");
printf("Petit moulin tranquille...Vous pourrez y faire quelques achats... Chemin: Village(1),Grotte(5),Montagne(10) \n");
Sleep(1000);
printf("\n \nrepos? 20 endurance regeneré \n");
printf("Vous vous reposerez et donc vous regagnerez un peu d'endurance \n");
Sleep(1000);
printf("\n \n avantposted? Etablir un avant poste. Avant poste restant : %d \n",avantposte);
printf("L'avant poste diminuera de moitié la jauge d'endurance pour aller dans la zone \n");


scanf("%s",&choixd);

if (strcmp(choixd, lieu3) == 0 && endurance>=25) {
printf("\nVous allez a la grotte... \n ... \n");
endroit=20;
  if (villagesafe==1) {
    endurance=endurance-utilisationendurance(enduranceuse)/2;
    savechoix=1;
    carte=5;
  } else {
    endurance=endurance-utilisationendurance(enduranceuse);
    savechoix=1;
    carte=5;}
}
else if (strcmp(choixd, lieu2) == 0 && endurance>=35) {
printf("\nVous allez a la montagne... \n ... \n");
endroit=30;
if (villagesafe==1) {
  endurance=endurance-utilisationendurance(enduranceuse)/2;
  savechoix=1;
  carte=10;
}
else {
endurance=endurance-utilisationendurance(enduranceuse);
savechoix=1;
carte=10;}
}
else if (strcmp(choixd, lieu4) == 0 && endurance>=15) {
printf("\nVous allez au moulin... \n ... \n");
endroit=10;
if (villagesafe==1) {
  endurance=endurance-utilisationendurance(enduranceuse)/2;
  savechoix=1;
  carte=4;
} else {
endurance=endurance-utilisationendurance(enduranceuse);
savechoix=1;
carte=4;}
}
else if (strcmp(choixd, repos) == 0 && endurance<=80) {
printf("\n Vous vous reposez ... \n");
endurance=endurance+20;
}
else if (strcmp(choixd, avantposted) == 0 && avantposte==1) {
printf("Vous mettez un avant poste ici ...\n");
avantposte=0;
villagesafe=1;
}
else {
  if (endurance<20) {
    printf("Vous manquez d'endurance attention !");
  } else {
printf("Veuillez choisir autre chose...\n");
}

}
}
}

//Chemin pour la grotte(5)
if (carte==5) {
endroitsave=20;
savechoix=0;
while(savechoix==0){

Sleep(1000);
printf("===========\nVous etes arrive dans la grotte...\n===========\n");
printf("Votre endurance : %d \n\n",endurance);
printf("Ou voulez vous aller? \n \n");

printf("magmacave? StaminaZone=50 \n");
printf("La magma cave est tres dangeureuse...Attention il y'a pleins d'ennemis a vaincre ici Chemin : grotte(5)");
Sleep(1000);
printf("\n \nvillage? Stamina Zone=10\n");
printf("Le village de nivadelir est un endroit paisible plus qu'ici du moins... Chemin : Moulin(4),Grotte(1),Montagne(10) \n");
Sleep(1000);
printf("\n \nrepos? +20 endurance\n");
printf("Vous vous reposerez et donc vous regagnerez un peu d'endurance \n");
Sleep(1000);
printf("\n \n avantposted? Avant poste restant : %d \n",avantposte);
printf("L'avant poste diminuera de moitié la jauge d'endurance pour aller dans la zone \n");
scanf("%s",&choixd);

if (strcmp(choixd, lieu5) == 0 && endurance>=70 || strcmp(choixd, lieu5) == 0 && endurance>=35 && grottesafe==1) {
printf("\nVous allez à la magma cave... \n ... \n");
Sleep(500);
printf("Bonne chance à vous...");
endroit=50;
if (grottesafe==1) {
  endurance=endurance-utilisationendurance(enduranceuse)/2;
  savechoix=1;
  carte=19;
} else {
endurance=endurance-utilisationendurance(enduranceuse);
savechoix=1;
carte=19;}
}
else if (strcmp(choixd, lieu1) == 0 && endurance>=25) {
printf("\nVous allez au village... \n ... \n");
Sleep(500);
printf("Il vaut mieux...\n");
endroit=5;
if (grottesafe==1) {
  endurance=endurance-utilisationendurance(enduranceuse)/2;
  savechoix=1;
  carte=1;
}
else {
endurance=endurance-utilisationendurance(enduranceuse);
savechoix=1;
carte=1;}
}


else if (strcmp(choixd, repos) == 0 && endurance<=80) {
printf("\n Vous vous reposez ... \n");
endurance=endurance+20;
}
else if (strcmp(choixd, avantposted) == 0 && avantposte==1) {
printf("Vous mettez un avant poste ici ...\n");
avantposte=0;
grottesafe=1;
}


else  {
  if (endurance<35) {
    printf("Vous manquez d'endurance attention \n !");
  } else {
printf("Veuillez choisir autre chose...\n");
}
}

}
}
//Chemin pour la magma cave(19)
if (carte==19) {
endroitsave=50;
savechoix=0;
while(savechoix==0){

Sleep(1000);
printf("\n \n===========\nVous etes arrive dans la MAGMA CAVE...\n===========\n");
printf("Votre endurance : %d \n\n",endurance);
printf("Ou voulez vous aller? Ou que souhaitez vous faire?? (Petit jeu de combat ici on verra) \n \n");
Sleep(1000);
printf("grotte? StaminaZone=20 \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
Sleep(1000);
printf("\n \nrepos? +20 endurance \n");
printf("Vous vous reposerez et donc vous regagnerez un peu d'endurance \n");
Sleep(1000);
printf("\n \n Etablir en avant poste? Avant poste restant : %d \n",avantposte);
printf("L'avant poste diminuera de moitie la jauge d'endurance pour aller dans la zone \n");
scanf("%s",&choixd);

if (strcmp(choixd, lieu3) == 0 && endurance>=70 || strcmp(choixd, lieu3) == 0 && endurance>=35 && magmasafe==1) {
printf("\nVous retournez en arriere a la grotte... \n ... \n");
endroit=20;
if (magmasafe==1) {
  endurance=endurance-utilisationendurance(enduranceuse)/2;
  savechoix=1;
  carte=5;
}
else {
endurance=endurance-utilisationendurance(enduranceuse);
savechoix=1;
carte=5;
}
}

else if (strcmp(choixd, repos) == 0 && endurance<=80) {
printf("\n Vous vous reposez ... \n");
endurance=endurance+20;
}
else if (strcmp(choixd, avantposted) == 0 && avantposte==1) {
printf("Vous mettez un avant poste ici ...\n");
avantposte=0;
magmasafe=1;
}

else  {
  if (endurance<20) {
    printf("Vous manquez d'endurance attention \n !");
  } else {
printf("Veuillez choisir autre chose...\n");
}
}


}
}


//Chemin pour le moulin(4)
if (carte==4) {
savechoix=0;
endroitsave=10;
while(savechoix==0){

Sleep(1000);
printf("===========\nVous etes arriver au moulin...\n===========\n");
printf("Votre endurance : %d \n\n",endurance);
printf("Ou voulez vous aller? \n \n");

printf("grotte? StaminaZone=20 \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
Sleep(1000);
printf("\n \nmontagne? StaminaZone=30 \n");
printf("La montagne de l'etrange...On dit qu'un magicien debutant y était enferme... Chemin : Moulin(4),Village(1)");
Sleep(1000);
printf("\n \nvillage? StaminaZone=5\n");
printf("Le village de nivadelir est un endroit paisible plus qu'ici du moins... Chemin : Moulin(4),Grotte(1),Montagne(10) \n");
Sleep(1000);
printf("\n \nrepos? \n");
printf("Vous vous reposerez et donc vous regagnerez un peu d'endurance \n");
Sleep(1000);
printf("\n \n Etablir en avant poste? Avant poste restant : %d \n",avantposte);
printf("L'avant poste diminuera de moitié la jauge d'endurance pour aller dans la zone \n");
scanf("%s",&choixd);

if (strcmp(choixd, lieu3) == 0 && endurance>=30) {
printf("\nVous allez à la grotte... \n ... \n");
endroit=20;
if (moulinsafe==1) {
  endurance=endurance-utilisationendurance(enduranceuse)/2;
  savechoix=1;
  carte=5;
} else {
endurance=endurance-utilisationendurance(enduranceuse);
savechoix=1;
carte=5;}
}


else if (strcmp(choixd, lieu2) == 0 && endurance>=40) {
endroit=30;
printf("\nVous allez a la montagne... \n ... \n");
if (moulinsafe==1){
  endurance=endurance-utilisationendurance(enduranceuse)/2;
  savechoix=1;
  carte=10;
} else {
endurance=endurance-utilisationendurance(enduranceuse);
savechoix=1;
carte=10;
}
}


else if (strcmp(choixd, lieu1) == 0 && endurance>=15 ) {
  endroit=5;
printf("\nVous allez au village de nivadelir... \n ... \n");
if (moulinsafe==1) {
  endurance=endurance-utilisationendurance(enduranceuse)/2;
  savechoix=1;
  carte=1;
} else {
endurance=endurance-utilisationendurance(enduranceuse);
savechoix=1;
carte=1;}
}

else if (strcmp(choixd, repos) == 0 && endurance<=80) {
printf("\n Vous vous reposez ... \n");
endurance=endurance+20;
}
else if (strcmp(choixd, avantposted) == 0 && avantposte==1) {
printf("Vous mettez un avant poste ici ...\n");
avantposte=0;
moulinsafe=1;
}


else  {
  if (endurance<20) {
    printf("Vous manquez d'endurance attention \n!");
  } else {
printf("Veuillez choisir autre chose...\n");
}}


}
}
//Chemin montagne(10)
    if (carte==10) {
          savechoix=0;
            while(savechoix==0){

              Sleep(1000);
              printf("===========\nVous etes arriver a la montagne du magicien déchu...\n===========\n");
              printf("Votre endurance : %d \n\n",endurance);
              printf("Ou voulez vous aller? \n \n");
              Sleep(1000);
              printf("village? StaminaZone=5 \n");
              printf("Le village de nivadelir est un endroit paisible plus qu'ici du moins... Chemin : Moulin(4),Grotte(1),Montagne(10)");
              Sleep(1000);
              printf("\n \nmoulin? StaminaZone=10 \n");
              printf("Petit moulin tranquille...Vous pourrez y faire quelques achats... Chemin: Village(1),Grotte(5),Montagne(10) \n");
              Sleep(1000);
              printf("\n \nrepos? Regen de stamina hehe \n");
              printf("Vous vous reposerez et donc vous regagnerez un peu d'endurance \n");
              Sleep(1000);
              printf("\n \n Etablir en avant poste? Avant poste restant : %d \n",avantposte);
              printf("L'avant poste diminuera de moitié la jauge d'endurance pour aller dans la zone \n");
              scanf("%s",&choixd);

                  if (strcmp(choixd, lieu1) == 0 && endurance>=35) {
                    endroit=5;
                      printf("\nVous allez au village de nivadelir... \n ... \n");
                      if (montagnesafe==1) {
                        endurance=endurance-utilisationendurance(enduranceuse)/2;
                        savechoix=1;
                        carte=1;
                      } else{
                      endurance=endurance-utilisationendurance(enduranceuse);
                      savechoix=1;
                      carte=1;}
                  }
                    else if (strcmp(choixd, lieu4) == 0 && endurance>=40) {
                      endroit=10;
                        printf("\nVous allez au moulin... \n ... \n");
                        if (montagnesafe==1) {
                          endurance=endurance-utilisationendurance(enduranceuse)/2;
                          savechoix=1;
                          carte=4;
                        } else {
                        endurance=endurance-utilisationendurance(enduranceuse);
                        savechoix=1;
                        carte=4;}
                      }

                      else if (strcmp(choixd, repos) == 0 && endurance<=80) {
                      printf("\n Vous vous reposez ... \n");
                      endurance=endurance+20;
                      }
                      else if (strcmp(choixd, avantposted) == 0 && avantposte==1) {
                      printf("Vous mettez un avant poste ici ...\n");
                      avantposte=0;
                      montagnesafe=1;
                      }


                        else  {
                          if (endurance<20) {
                            printf("Vous manquez d'endurance attention ! \n");
                          } else {
                          printf("\nVeuillez choisir autre chose...\n");
                        }}
              }
    }

  }
}
