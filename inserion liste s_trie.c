#include <stdio.h>
#include <stdlib.h>
struct noeud{
    int valeur;
    struct noeud*suivant;
    };
    typedef struct noeud* liste;

int main(){
    struct noeud*p ; struct noeud*temp ;struct noeud*n ;
    int m; m= 5;
    liste l = NULL;
    for(int i= 0; i<m; i++){
     p = (struct noeud*)malloc(sizeof(struct noeud));
     p->valeur = (i+1)*(i+1);
     p-> suivant = l;
     l = p;
     }

     while(p!=NULL){
        printf("\n%d",p->valeur);
        p = p->suivant;
     }

     n = (struct noeud*)malloc(sizeof(struct noeud));
     printf("entrer la valeur de l'element");
     scanf("%d",&n->valeur);
     temp = l;
     p = temp->suivant;
     if(temp->valeur < n->valeur){
        n->suivant = l;
        l = n;
        }else{
        while(p->valeur > n->valeur){
            p = p->suivant;
            temp = temp->suivant;
            if (p == NULL) break;
        }
        temp->suivant = n;
        n->suivant = p;
        }
        p = l;
        while(p!=NULL){
        printf("\n%d",p->valeur);
        p = p->suivant;
     }

    return 0;
}