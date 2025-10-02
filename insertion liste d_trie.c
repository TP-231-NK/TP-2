#include <stdio.h>
#include <stdlib.h>

struct noeud{
    int valeur;
    struct noeud*precedent;
    struct noeud*suivant;
    };
        typedef struct noeud* liste;
    int main(){
        struct noeud*p;struct noeud*n;struct noeud*t;
        int m; m = 5;
    liste l = NULL;
    for(int i = 0; i<m; i++){
     p = (struct noeud*)malloc(sizeof(struct noeud));
     if(l == NULL){
        p->valeur = (i+1)*(i+1);
        p->suivant = l;
        p->precedent = NULL;
        l = p;
     }else{
     p->valeur = (i+1)*(i+1);
     p-> suivant = l;
     l->precedent = p;
     p->precedent = NULL;
     l = p;
    }
    }
    p=l;
     while(p!= NULL){
        printf("\n%d", p->valeur);
        p = p->suivant;
     }
     n = (struct noeud*)malloc(sizeof(struct noeud));
     printf("entrer la valeur de l'element");
     scanf("%d",&n->valeur);
     p = l;
     while(p->valeur > n->valeur){
        p = p->suivant;
        if (p->suivant==NULL && p->valeur > n->valeur) break;
     }if(p==l){
         n->suivant = l;
        n->precedent = NULL;
        l = n;
     }else if (p->suivant==NULL && p->valeur > n->valeur){
        n->suivant = NULL;
        n->precedent = p;
        p->suivant = n;
     }else {t = p->precedent;
     t->suivant = n;
     n->precedent = t;
     p->precedent = n;
     n->suivant = p;}
     p = l;
      while(p!=NULL){
        printf("\n%d",p->valeur);
        p = p->suivant;
     }
return 0;
    }