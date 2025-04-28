#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(){
    printf("Veux-tu jouer %c 1 ou 2 joueurs ?(Il faut choisir entre les choix propos%ces : 1, 2 ou 3) \n\n", 133, 130) ;
    printf("Choix 1 : 1 joueur \n\n" ) ;
    printf("Choix 2 : 2 joueurs \n\n") ;
    printf("Choix 3 : Arr%cter le jeu \n\n", 136) ;
    printf("Votre choix : \n\n") ;
}
int nombreAleatoire(){
    srand(time(NULL));
    int nombre = rand() %100 ;
    return nombre ;
}

int nombrePiece(){
    srand(time(NULL));
    int piece = rand() %2 +1 ;
    return piece ;
}

int main(){
    int choixFinal ;
    int lecture ;
    printf("Bienvenue %c 'Trouve le nombre' cr%c%c par K%cvin Bardet \n\n", 133, 130, 130, 130) ;
    do{
        int choixMenu ;
        do{
            menu() ;
            lecture = scanf("%d", &choixMenu) ;

            if(lecture == 0){
                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                return 0 ;
            }
        }while(choixMenu != 1 && choixMenu != 2 && choixMenu != 3) ;

        if(choixMenu == 1){
            int choix ;
            int tentative = 0 ;
            int nombre = nombreAleatoire() ;

            do{
                printf("Le but du jeu est de trouver un nombre entier entre 0 et 99 inclus en 5 tentatives maximum, choisis-en un  : \n\n") ;
                lecture = scanf("%d", &choix) ;

                if(lecture == 0){
                    printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                    return 0 ;
                }

            }while(choix<0 || choix >=100) ;

            tentative+= 1 ;

            if(choix != nombre){
                do{
                    if(choix<nombre){
                        do{
                            if(choix<0 || choix >=100){
                                printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                lecture = scanf("%d", &choix) ;

                                if(lecture == 0){
                                    printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                    return 0 ;
                                }
                            }
                        }while(choix<0 || choix >=100) ;

                        printf("Le nombre choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus grand : \n\n") ;
                        lecture = scanf("%d", &choix) ;

                        if(lecture == 0){
                            printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                            return 0 ;
                        }

                        tentative+= 1 ;
                    }
                    else{

                        do{
                            if(choix<0 || choix >=100){
                                printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                lecture = scanf("%d", &choix) ;

                                if(lecture == 0){
                                    printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                    return 0 ;
                                }
                            }
                        }while(choix<0 || choix >=100) ;

                        printf("Le nombre choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus petit : \n\n") ;
                        lecture = scanf("%d", &choix) ;

                        if(lecture == 0){
                            printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                            return 0 ;
                        }

                        tentative+= 1 ;
                    }

                }while(choix != nombre &&  tentative < 5) ;

                if(choix != nombre && tentative >= 5)
                    printf("Tu as perdu ! Tu n'as pas trouv%c le nombre entier en %d tentatives, essaie de faire mieux la prochaine fois ! \n\n", 130, tentative) ;
                    printf("le nombre entier %ctait : %d \n\n", 130, nombre) ;
            }

            if(choix == nombre ){

                if(choix == nombre && tentative <= 5)
                    printf("F%clicitation tu as gagn%c ! Tu as mis %d tentatives pour trouver le nombre entier  \n\n", 130, 130, tentative) ;

            }

            do{
                printf("Voulez-vous rejouer ? (oui : 1, non : 0 ) \n\n") ;
                lecture = scanf("%d", &choixFinal) ;

                if(lecture == 0){
                    printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                    return 0 ;
                }

            }while(choixFinal != 1 && choixFinal != 0) ;

            if(choixFinal == 0){
                printf("le programme va s'arr%cter ! \n\n", 136) ;
                return 0 ;
            }

        }
        if(choixMenu == 2){
            int choixJoueur1 ;
            int choixJoueur2 ;
            int pieceChoisi ;
            int pieceJoueur1 ;
            int pieceJoueur2 ;
            int tentativeJoueur1 = 0 ;
            int tentativeJoueur2 = 0 ;
            pieceChoisi = nombrePiece() ;
            do{
                printf("Pour savoir quel joueur commence, on lance une pi%Cce %c 2 faces( face : 1, pile : 2), il faut choisir entre 1 et 2, vous ne pouvez pas choisir le m%cme  : \n\n", 138, 133, 136) ;
                printf("Joueur 1 : Quelle face choisis-tu ? \n\n") ;
                lecture = scanf("%d", &pieceJoueur1) ;

                if(lecture == 0){
                    printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                    return 0 ;
                }
                printf("Joueur 2 : Quelle face choisis-tu ? \n\n") ;
                lecture = scanf("%d", &pieceJoueur2) ;

                if(lecture == 0){
                    printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                    return 0 ;
                }
            }while(pieceJoueur1 == pieceJoueur2 || pieceJoueur1<1 || pieceJoueur1>2 || pieceJoueur2<1 || pieceJoueur2>2 ) ;

            if(pieceChoisi == pieceJoueur1){
                int nombreJoueur1 = nombreAleatoire() ;
                printf("La pi%cce est tomb%ce sur la face : %d \n\n", 138 , 130, pieceChoisi) ;
                printf("Le Joueur 1 commence \n\n") ;

                do{
                    printf("Le but du jeu est de trouver un nombre entier entre 0 et 99 inclus, le joueur qui trouve le nombre entier avec le moins de tentatives gagne ! , choisis-en un  : \n\n") ;
                    lecture = scanf("%d", &choixJoueur1) ;

                    if(lecture == 0){
                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                        return 0 ;
                    }
                }while(choixJoueur1<0 || choixJoueur1 >=100) ;

                if(choixJoueur1 != nombreJoueur1){
                    do{
                        if(choixJoueur1<nombreJoueur1){
                            tentativeJoueur1+= 1 ;
                            do{
                                if(choixJoueur1<0 || choixJoueur1 >=100){
                                    printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                    lecture = scanf("%d", &choixJoueur1) ;

                                    if(lecture == 0){
                                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                        return 0 ;
                                    }
                                }
                            }while(choixJoueur1<0 || choixJoueur1 >=100) ;

                            printf("Le nombre choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus grand : \n\n") ;
                            lecture = scanf("%d", &choixJoueur1) ;

                            if(lecture == 0){
                                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                return 0 ;
                            }
                        }
                        else{
                            tentativeJoueur1+= 1 ;
                            do{
                                if(choixJoueur1<0 || choixJoueur1 >=100){
                                    printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                    lecture = scanf("%d", &choixJoueur1) ;

                                    if(lecture == 0){
                                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                        return 0 ;
                                    }
                                }
                            }while(choixJoueur1<0 || choixJoueur1 >=100) ;

                            printf("Le nombre entier choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus petit : \n\n") ;
                            lecture = scanf("%d", &choixJoueur1) ;

                            if(lecture == 0){
                                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                return 0 ;
                            }
                        }

                    }while(choixJoueur1 != nombreJoueur1) ;
                }

                if(choixJoueur1 == nombreJoueur1 ){
                    tentativeJoueur1+= 1 ;
                    printf("F%clicitation ! Tu as mis %d tentatives pour trouver le nombre entier  \n\n", 130, tentativeJoueur1) ;
                    printf("le nombre entier %ctait : %d \n\n", 130, nombreJoueur1) ;
                }

                int nombreJoueur2 = nombreAleatoire() ;
                printf("Au tour du joueur 2 \n\n") ;

                do{
                    printf("Le but du jeu est de trouver un nombre entier entre 0 et 99 inclus, le joueur qui trouve le nombre entier avec le moins de tentatives gagne ! , choisis-en un  : \n\n") ;
                    lecture = scanf("%d", &choixJoueur2) ;

                    if(lecture == 0){
                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                        return 0 ;
                    }
                }while(choixJoueur2<0 || choixJoueur2 >=100) ;

                if(choixJoueur2 != nombreJoueur2){
                    do{
                        if(choixJoueur2<nombreJoueur2){
                            tentativeJoueur2+= 1 ;
                            do{
                                if(choixJoueur2<0 || choixJoueur2 >=100){
                                    printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                    lecture = scanf("%d", &choixJoueur2) ;

                                    if(lecture == 0){
                                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                        return 0 ;
                                    }
                                }
                            }while(choixJoueur2<0 || choixJoueur2 >=100) ;

                            printf("Le nombre choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus grand : \n\n") ;
                            lecture = scanf("%d", &choixJoueur2) ;

                            if(lecture == 0){
                                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                return 0 ;
                            }

                        }
                        else{
                            tentativeJoueur2+= 1 ;
                            do{
                                if(choixJoueur2<0 || choixJoueur2 >=100){
                                    printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                    lecture = scanf("%d", &choixJoueur2) ;

                                    if(lecture == 0){
                                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                        return 0 ;
                                    }
                                }
                            }while(choixJoueur2<0 || choixJoueur2 >=100) ;

                            printf("Le nombre choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus petit : \n\n") ;
                            lecture = scanf("%d", &choixJoueur2) ;

                            if(lecture == 0){
                                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                return 0 ;
                            }

                        }

                    }while(choixJoueur2 != nombreJoueur2) ;
                }

                if(choixJoueur2 == nombreJoueur2 ){
                    tentativeJoueur2+= 1 ;
                    printf("F%clicitation ! Tu as mis %d tentatives pour trouver le nombre entier  \n\n", 130, tentativeJoueur2) ;
                    printf("le nombre entier %ctait : %d \n\n", 130, nombreJoueur2) ;
                }
            }

            if(pieceChoisi == pieceJoueur2){
                int nombreJoueur2 = nombreAleatoire() ;
                printf("La pi%cce est tomb%ce sur la face : %d \n\n", 138 , 130, pieceChoisi) ;
                printf("Le Joueur 2 commence \n\n") ;

                do{
                    printf("Le but du jeu est de trouver un nombre entier entre 0 et 99 inclus, le joueur qui trouve le nombre entier avec le moins de tentatives gagne ! , choisis-en un  : \n\n") ;
                    lecture = scanf("%d", &choixJoueur2) ;

                    if(lecture == 0){
                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                        return 0 ;
                    }
                }while(choixJoueur2<0 || choixJoueur2 >=100) ;

                if(choixJoueur2 != nombreJoueur2){
                    do{
                        if(choixJoueur2<nombreJoueur2){
                            tentativeJoueur2+= 1 ;
                            do{
                                if(choixJoueur2<0 || choixJoueur2 >=100){
                                    printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                    lecture = scanf("%d", &choixJoueur2) ;

                                    if(lecture == 0){
                                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                        return 0 ;
                                    }
                                }
                            }while(choixJoueur2<0 || choixJoueur2 >=100) ;

                            printf("Le nombre choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus grand : \n\n") ;
                            lecture = scanf("%d", &choixJoueur2) ;

                            if(lecture == 0){
                                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                return 0 ;
                            }

                        }
                        else{
                            tentativeJoueur2+= 1 ;
                            do{
                                if(choixJoueur2<0 || choixJoueur2 >=100){
                                    printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                    lecture = scanf("%d", &choixJoueur2) ;

                                    if(lecture == 0){
                                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                        return 0 ;
                                    }
                                }
                            }while(choixJoueur2<0 || choixJoueur2 >=100) ;

                            printf("Le nombre choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus petit : \n\n") ;
                            lecture = scanf("%d", &choixJoueur2) ;

                            if(lecture == 0){
                                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                return 0 ;
                            }

                        }

                    }while(choixJoueur2 != nombreJoueur2) ;
                }

                if(choixJoueur2 == nombreJoueur2 ){
                    tentativeJoueur2+= 1 ;
                    printf("F%clicitation ! Tu as mis %d tentatives pour trouver le nombre entier  \n\n", 130, tentativeJoueur2) ;
                    printf("le nombre entier %ctait : %d \n\n", 130, nombreJoueur2) ;
                }

                int nombreJoueur1 = nombreAleatoire() ;
                printf("Au tour du joueur 1 \n\n") ;

                do{
                    printf("Le but du jeu est de trouver un nombre entier entre 0 et 99 inclus, le joueur qui trouve le nombre entier avec le moins de tentatives gagne ! , choisis-en un  : \n\n") ;
                    lecture = scanf("%d", &choixJoueur1) ;

                    if(lecture == 0){
                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                        return 0 ;
                    }
                }while(choixJoueur1<0 || choixJoueur1 >=100) ;

                if(choixJoueur1 != nombreJoueur1){
                    do{
                        if(choixJoueur1<nombreJoueur1){
                            tentativeJoueur1+= 1 ;
                            do{
                                if(choixJoueur1<0 || choixJoueur1 >=100){
                                    printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                    lecture = scanf("%d", &choixJoueur1) ;

                                    if(lecture == 0){
                                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                        return 0 ;
                                    }
                                }
                            }while(choixJoueur1<0 || choixJoueur1 >=100) ;

                            printf("Le nombre entier choisi n'est pas le bon nombre, veuillez choisir un nombre entier plus grand : \n\n") ;
                            lecture = scanf("%d", &choixJoueur1) ;

                            if(lecture == 0){
                                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                return 0 ;
                            }

                        }
                        else{
                            tentativeJoueur1+= 1 ;
                            do{
                                if(choixJoueur1<0 || choixJoueur1 >=100){
                                    printf("Le nombre entier choisi n'est pas entre 0 et 99 inclus, veuillez choisir un nouveau nombre entier : \n\n") ;
                                    lecture = scanf("%d", &choixJoueur1) ;

                                    if(lecture == 0){
                                        printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                        return 0 ;
                                    }
                                }
                            }while(choixJoueur1<0 || choixJoueur1 >=100) ;

                            printf("Le nombre entier choisi n'est pas le bon nombre entier, veuillez choisir un nombre entier plus petit : \n\n") ;
                            lecture = scanf("%d", &choixJoueur1) ;

                            if(lecture == 0){
                                printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                                return 0 ;
                            }

                        }

                    }while(choixJoueur1 != nombreJoueur1) ;
                }

                if(choixJoueur1 == nombreJoueur1 ){
                    tentativeJoueur1+= 1 ;
                    printf("F%clicitation ! Tu as mis %d tentatives pour trouver le nombre entier  \n\n", 130, tentativeJoueur1) ;
                    printf("le nombre entier %ctait : %d \n\n", 130, nombreJoueur1) ;
                }
            }

            if(tentativeJoueur1 < tentativeJoueur2)
                printf("Le joueur 1 a gagn%c \n\n", 130) ;
            if(tentativeJoueur1 > tentativeJoueur2)
                printf("Le joueur 2 a gagn%c \n\n", 130) ;
            if(tentativeJoueur1 == tentativeJoueur2)
                printf("Aucun joueur a gagn%c, il y a %cgalit%c \n\n", 130, 130, 130) ;

            do{
                printf("Voulez-vous rejouer ? (oui : 1, non : 0 ) \n\n") ;
                lecture = scanf("%d", &choixFinal) ;

                if(lecture == 0){
                    printf("La valeur choisie n'est pas un nombre entier, le programme va s'arr%cter ! \n\n", 136) ;
                    return 0 ;
                }
            }while(choixFinal != 1 && choixFinal != 0) ;

            if(choixFinal == 0){
                printf("le programme va s'arr%cter ! \n\n", 136) ;
                return 0 ;
            }

        }

        if(choixMenu == 3){
            printf("le programme va s'arr%cter ! \n\n", 136) ;
            return 0 ;
        }

    }while(choixFinal == 1) ;

}

