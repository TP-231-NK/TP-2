#include<stdio.h>
#include<stdlib.h>
    struct noeud{
        int valeur;
        struct noeud*suivant;
        };
typedef struct noeud* liste;
    int main(){
    printf("\n\n Dans ce programme l'utilisateur manipulera uniquement des entiers \n\n");
    liste l = NULL; struct noeud*p;
    int n,a,b; struct noeud*temp;
    printf("Entrer le nombre d'element :   ");
    scanf("%d",&n);
    printf("Le nombre d'element est %d \n", n);
        for(int i=0 ; i<n;i++){
        p = (struct noeud*)malloc(sizeof(struct noeud));
        p-> suivant = l;
        printf("\nEntrer la valeur a:  ");
        scanf("\n %d",&a);
        p->valeur = a;
        l = p;
        }
            while(p!= NULL){
                printf(" \n%d",p->valeur);
                p = p->suivant;

            }
            printf("\nEntrer l'element a supprimer:");
            scanf("%d",&b);
            p = l;
            while(p!= NULL){
             temp = l;
            p = temp->suivant;
            if(temp->valeur == b){
                l = l-> suivant;
                free(temp);
            }else{

            while(p->valeur!= b){
            p = p->suivant;
                temp = temp->suivant;
            if(p == NULL){
                printf("\n Il n'y a plus d'occurence");
                break;
            }
            }
            if(p!=NULL){
            temp->suivant = p->suivant;
                free(p);
            }
            }
            }

                p = l;
            while(p != NULL){
                printf("\n%d",p->valeur);
                p = p->suivant;
            }
            return 0;
    }

