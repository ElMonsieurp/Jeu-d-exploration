#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//fonction jeu de combat
 int attaquedumonstre(int atkmonstre) {
	srand(time( NULL ) );
   atkmonstre = rand()%40 + 1;
   return atkmonstre;
 }
 int attaquejoueur(int atkj){
	 srand(time( NULL ) );
  atkj = rand()%30 + 4;
  return atkj;
 }
int attaquejoueurP(int atkjP){
	 srand(time( NULL ) );
  atkjP = rand()%50 + 2;
  return atkjP;
 }
 int choixdumonstre(int choixm) {
	  srand(time( NULL ) );
   choixm = rand()%4 + 1;
   return choixm;
 }

//var jeu d'aventure
char choixd[20];
int savechoix;
int carte;
int pvjoueur;
char lieu1[8];

char lieu2[9];

char lieu3[7];

char lieu4[7];

char lieu5[10];

char repos[6];

char reposl[6];

char avantposted[12];

char attaquer[3];

char commerce[4];
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
//fonction jeu d'aventure
int utilisationendurance(int enduranceuse) {
  enduranceuse = endroitsave + endroit;
  return enduranceuse;
}

int main() {
	//variable shop
	int epee;
	int bombe;
	int fleche;
	int arc;
	int choix;
	int choixA;
	int argent;
	argent = 200;
	arc = 1;
	epee=0;
	bombe=0;
	fleche=0;
	
	//variable du jeu de combat
  int pv;
  int pvactuel;
  int pmonstre;
  int actuelmonstre;
  int atk;
  int def;
  int choixcombat;
  int atkmonstre;
  int atkj;
  int choixm;
  int atkmonstresave;
  int atkjsave;
  int choixsave;
  int defm;
  int soin;
  int atkPnb;
  int atkjP;
  int soinM;
pv=100;
pvactuel=pv;
pmonstre=100;
actuelmonstre=pmonstre;
defm=0;
soin=3;
atkPnb=3;
soinM=3;
	
	//variable du jeu d'aventure

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
  
  repos[0]='r';
  repos[1]='e';
  repos[2]='p';
  repos[3]='o';
  repos[4]='s';
  repos[5]='\0';
  
  attaquer[0]='a';
  attaquer[1]='t';
  attaquer[2]='k';
  attaquer[3]='\0';

  commerce[0]='b';
  commerce[1]='u';
  commerce[2]='y';
  commerce[3]='\0';
  
  savechoix=0;
 carte=0;
 pvjoueur=100;
 //Au spawn + choix
printf("==================\nBienvenue aventurier!\n==================\n");
Sleep(1000);

printf("Votre endurance : %d \n\n",endurance);

printf("Ou souhaitez vous aller? (pour creer un avant poste plus tard tapez avantposted, si vous voulez un repos : repos \n Si vous voulez acheter chez le commercant du moulin tapez buy ou si vous voulez attaquer le monstre dans la magmacave \n tapez atk. Sinon ecrivez votre destination attention la staminazone represente le montant a additionner avec \n l'ancienne staminazone  C'est a dire une zone à 50 neccessitera 50+x de la zone actuelle ou vous etes.) \n");

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
printf("L'avant poste diminuera de moitie la jauge d'endurance pour aller dans la zone \n");


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
printf("L'avant poste diminuera de moitie la jauge d'endurance pour aller dans la zone \n");
scanf("%s",&choixd);

if (strcmp(choixd, lieu5) == 0 && endurance>=70 || strcmp(choixd, lieu5) == 0 && endurance>=35 && grottesafe==1) {
printf("\nVous allez a la magma cave... \n ... \n");
Sleep(500);
printf("Bonne chance a vous...");
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
  if (endurance<70) {
    printf("Vous manquez d'endurance attention ! \n ");
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

printf("Un ennemi endormi se trouve devant vous, c'est un pangolin enrage ... attention a sa carapace si vous attaquez...  \n \n");
printf("Que voulez vous faire ? Fuir ? Ou attaquer?? \n \n");
Sleep(1000);
printf("grotte? StaminaZone=20 \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
Sleep(1000);

printf("\n attaquer? \n");
printf("Vous allez attaquer l'ennemi, attention vous devrez le battre ou mourir... si vous le battez vous recevrez certainement un peu d'argent de poche ... pas mal...");
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
else if (strcmp(choixd, attaquer) == 0) {
printf("\n Vous attaquez l'ennemi ! \n");
savechoix=1;
carte=100;
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
else if (strcmp(choixd, avantposted) == 0 && avantposte==0) {
printf("Vous n'avez plus d'avant poste ...\n");
}

else  {
  if (endurance<70) {
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

printf("Ou voulez vous aller? Ou voulez vous acheter quelque chose chez le commerçant? \n \n");

printf("grotte? StaminaZone=20 \n");
printf("La grotte de Thanos...Attention il a voulu recupere ses pierres ici, enfin du moins c'est ce qu'il voulait... Chemin : Magma Cave(19), Village(1)");
Sleep(1000);
printf("\n \nmontagne? StaminaZone=30 \n");
printf("La montagne de l'etrange...On dit qu'un magicien debutant y était enferme... Chemin : Moulin(4),Village(1)");
Sleep(1000);
printf("\n \nvillage? StaminaZone=5\n");
printf("Le village de nivadelir est un endroit paisible plus qu'ici du moins... Chemin : Moulin(4),Grotte(1),Montagne(10) \n");
Sleep(1000);

printf("\n \nacheter?(ecrire :buy) \n");
printf("Vous pourrez y acheter certains items pour pouvoir combattre certain ennemi plus facilement... \n");
Sleep(1000);

printf("\n \nrepos? \n");
printf("Vous vous reposerez et donc vous regagnerez un peu d'endurance \n");
Sleep(1000);
printf("\n \n Etablir en avant poste? Avant poste restant : %d \n",avantposte);
printf("L'avant poste diminuera de moitie la jauge d'endurance pour aller dans la zone \n");
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
else if (strcmp(choixd, commerce) == 0) {
printf("\n Vous allez chez le commercant du moulin \n");
savechoix=1;
carte=80;
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
              printf("L'avant poste diminuera de moitie la jauge d'endurance pour aller dans la zone \n");
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

//jeu de combat dans la magmacave
if (carte==100) {
	pvactuel=100;
	actuelmonstre=100;
	soinM=3;
	atkPnb=3;
	savechoix=0;
	while (pvactuel>0 && actuelmonstre>0){
		Sleep(100);
printf(" \n \n =========================== \n");

printf("Vous avez %d",pvactuel);
printf(" de point de vie. \n ");




printf("Le monstre a %d",actuelmonstre);
printf(" de point de vie. \n");


printf("Vous avez %d",soin);
printf(" bandage. \n");

if (epee>0) {
printf("Vous avez %d",atkPnb);
printf(" d'attaque percante. \n");
printf("=========================== \n");
} else {
printf("Vous n'avez pas achete l'epee qui perce dommage... \n");
printf("=========================== \n");
}

printf("Que voulez vous faire? Attaquez?\n Ou se defendre? 1=Atk 0=Def 2=soin 3=Attaque Percante (Attention si le monstre ne s'est pas défendu l'epee rebondira sur sa peau elastique et vous subirez les degats!) \n \n");
scanf("%d",&choixcombat);
if (choixcombat==0){
  printf("Vous vous defendez ! La prochaine attaque de votre ennemie sera divise par 3 ! \n");
  Sleep(100);
  def=1;
}
if (choixcombat==1){
  printf("Vous ATTAQUEZ ! VOUS LANCEZ STORMBREAKER SUR VOTRE OPPOSANT ! Peut être il y'aura un coup critique??? \n");
  Sleep(100);
    atk=1;
}
if (choixcombat==2 && soin<=0) {
  printf("Vous avez plus de bandage, vous avez gaché une opportunité dommage...");
  Sleep(100);
}
if (choixcombat==2 && pvactuel==100) {
  printf("Vous etes full vie, vous avez gache une opportunite dommage...");
  Sleep(100);
}
if (choixcombat==2 && soin>0 && pvactuel!=100){
  printf("Vous vous soignez !  \n");
  pvactuel=pvactuel+10;
  soin=soin-1;
  Sleep(100);
}
if (choixcombat==3 && atkPnb<=0 || choixcombat==3 && epee==0) {
	if (epee==0) {
 printf("Vous ne pouvez pas faire cette attaque car vous n'avez pas acheter l'epee qui perce !...Vous allez donc attaquer normalement!! \n");
 atk=1;
} else {
 printf("Vous ne pouvez pas faire cette attaque car vous n'avez plus de assez competance pour l'effectuer...Vous allez donc attaquer normalement!! \n");
 atk=1;
}}
if (choixcombat==3 && atkPnb>0 && epee>0) {
	
  printf("Vous provoquez une attaque qui va percer la defense de l'ennemi si il la utilise... \n");	
  atk=2;
  atkPnb=atkPnb-1;
}
if (atk==1) {
  if (defm==0) {
  atkjsave=attaquejoueur(atkj);
  actuelmonstre=actuelmonstre-atkjsave;
  Sleep(100);
  printf("%d ont ete donne au monstre \n",atkjsave);
  printf("Le monstre a prit cher, il a %d",actuelmonstre);
  printf(" de point de vie. \n");
  atk=0;
  }
 
  if (defm==1) {
  atkjsave=attaquejoueur(atkj)/3;
  actuelmonstre=actuelmonstre-atkjsave;
  Sleep(100);
  printf("%d ont ete donne au monstre \n",atkjsave);
  
  printf("Le monstre a reduit les degats de 3, il a %d",actuelmonstre);
  printf(" de point de vie. \n");
  atk=0;
  defm=0;
  }
}
if (atk==2) {
	if (defm==0) {
	atkjsave=attaquejoueurP(atkjP);
	pvactuel=pvactuel-atkjsave;
	printf("Vous avez voulu donner %d de degats au monstre mais celui-ci ne s'etait pas defendu...L'epee rebondit sur vous dommage... \n",atkjsave);
	printf("Vous avez subit %d de degat \n",atkjsave);
	Sleep(100);
	printf("Vous avez maintenant %d",pvactuel);
	printf(" de points de vie... \n \n");
	
	atk=0;
}
   if (defm==1) {
	atkjsave=attaquejoueurP(atkjP);
	actuelmonstre=actuelmonstre-atkjsave;
	printf("WOW Vous avez perce l'armure de l'ennemi !! Bravo, vous lui infligez LE MAXIMUM de dégats \n");
	printf("Vous avez mit %d",atkjsave);
	printf(" de degats... \n");
	Sleep(100);
	printf("Le monstre a %d",actuelmonstre);
	printf(" de point de vie \n");
	atk=0;
    defm=0;	
   }
}
choixsave=choixdumonstre(choixm);
if (choixsave>3 && actuelmonstre<75 && soinM>0 || choixsave==2 && actuelmonstre<75 && soinM>0 ) {
	printf("Le monstre va se soigner de 25PV! \n");
	actuelmonstre=actuelmonstre+25;
	soinM=soinM-1;
}
else{
if (choixsave==1 || choixsave==2){
Sleep(1000);
printf("Le monstre va attaquer ! Attention ! \n");
Sleep(100);
if (def==1){
  printf("Le monstre attaque ! \n \n");
  atkmonstresave=attaquedumonstre(atkmonstre)/3;
  pvactuel=pvactuel-atkmonstresave;
  Sleep(100);
  printf("Vous avez réduit les degats ! Vous avez subi seulement %d",atkmonstresave);
  printf(" de degats \n");
  def=0;
}
else{
  printf("Le monstre attaque! \n \n");
  atkmonstresave=attaquedumonstre(atkmonstre);
  pvactuel=pvactuel-atkmonstresave;
  Sleep(100);
  printf("Vous avez prit plein pot ! Vous avez subi %d",atkmonstresave);
  printf(" de degats \n");
  def=0;
}
}
if (choixsave>2) {
 printf("Le monstre se defend \n");
 Sleep(100);
 defm=1;
  }

}
  if (pvactuel<=0 && actuelmonstre>0){
    printf("Vous avez ete vaincu ! Dommage... \n");
	pvjoueur=0;
									}
  if (actuelmonstre<=0){
    printf("Vous avez vaincu le monstre, bien joue \n");
	carte=5;
	argent=argent+50;
	
						}

		}
}

//shop 
if (carte==80) {
savechoix=0;
	while (argent>0 && savechoix==0) {
 printf("====================== \n");
 printf("INVENTAIRE :\n");
 printf("Argent : %d \n",argent);
if (epee>0) {
	printf("Epee qui perce : %d \n",epee);
}
if (bombe>0) {
	printf("Bombe(s) : %d \n",bombe);
}
if (soin>0) {
	printf("Soin(s) : %d \n",soin);
}
if (arc>0) {
	printf("Arc(s) : %d \n",arc);
} 
if (fleche>0) {
	printf("Fleche(s) : %d ",fleche);
}
 printf("\n ====================== \n");


int shop[5] = {200,50,30,25,300};
printf("Que voulez vous faire? \n Acheter? =1 Quitter? =2?");
scanf("%d",&choix);
choixA=0;
if (choix==1){
 printf("=-=-=-=-=-=-= \n Bienvenue dans notre magasin !! \n Nous avons une multitude d'objets à vendre \n Epee qui perce 200 golds \n Bombe 50 golds \n Soin 30 golds \n Fleches 25 golds \n Arc 300 golds \n =-=-=-=-=-=-= \n ");
 while (choixA!=10 && argent>0) {
 printf ("Que voulez vous achetez? 1= Epee , 2= Bombe, 3= Soin 4= Fleches 5= Arc 10= Quitter \n");
 scanf("%d",&choixA);
 if (choixA==1 && argent>=200) {
 argent=argent-shop[0];
 epee=epee+1;
 printf("Argent : %d \n",argent);
 choixA=0;
 }
 else if (choixA==1 && argent<200) {
 printf("Vous n'avez pas assez de Golds \n Argent : %d \n",argent); 
 choixA=0;
 }
 if (choixA==2 && argent>=50) {
 argent=argent-shop[1];
 bombe=bombe+1;
printf("Argent : %d \n",argent); 
 choixA=0;
 }
  else if (choixA==2 && argent<50) {
 printf("Vous n'avez pas assez de Golds \n Argent : %d \n",argent); 
 choixA=0;
 }
 if (choixA==3 && argent>=30) {
 argent=argent-shop[2];	 
 soin=soin+1;
 printf("Argent : %d \n",argent);
  choixA=0;
 }
  else if (choixA==3 && argent<30) {
 printf("Vous n'avez pas assez de Golds \n Argent : %d \n",argent); 
 choixA=0;
 }
 if (choixA==4 && argent>=25) {
 argent=argent-shop[3];	
fleche=fleche+1;
 printf("Argent : %d \n",argent);
  choixA=0;
 }
  else if (choixA==4 && argent<25) {
 printf("Vous n'avez pas assez de Golds \n Argent : %d \n",argent); 
 choixA=0;
 }
 if (choixA==5 && argent>=300) {
 argent=argent-shop[4];	
 arc=arc+1;
printf("Argent : %d \n",argent); 
 choixA=0;
 }
  else if (choixA==5 && argent<300) {
 printf("Vous n'avez pas assez de Golds \n Argent : %d \n",argent); 
 choixA=0;
 }
 if (choixA>5 && choixA!=10) {
printf("Veuillez choisir un autre chiffre...");
 choixA=0;
 }
  if (choixA==10) {
choix=0;
 
 }
 
 }
 
}

if (choix==2)


	{
	
printf("Merci bien pour votre visite a bientot !\n");
choix=0;
savechoix=1;
carte=4;
Sleep(1000);

}
} if (argent<=0) {
printf("Vous n'avez plus d'argent... Allez vous en ! \n");
choix=0;
carte=4;
savechoix=1;
Sleep(1000);
}
}

  }
}
