#include <stdio.h>
#include <stdlib.h>

struct noeud{
int valeur ;
struct noeud*precedent;
struct noeud*suivant;
};
typedef struct noeud*liste;
    int main(){
    struct noeud*p, *d;struct noeud*t;
    int n;n=3;
    liste l = NULL;
    d = (struct noeud*)malloc(sizeof(struct noeud));
    printf("entrer une valeur:   ");
    scanf("%d",&d->valeur);
    printf("Sa valeur est %d",d->valeur);
    d->suivant = l;
    d->precedent = l;
    l = d;
    printf("\nEntrer 3 valeurs qu'on inserera en tete \n\n");
    printf("Entrer la valeur 1 : ");
     t = (struct noeud*)malloc(sizeof(struct noeud));
     scanf("%d", &t->valeur);
     t->suivant = l;
     l->precedent = t;
     t->precedent = l;
     l->suivant = t;
     l = t;
    for(int i= 1;i<n;i++){
     printf("Entrer la valeur %d : ", i+1);
     t = (struct noeud*)malloc(sizeof(struct noeud));
     scanf("%d", &t->valeur);
     t->suivant = l;
     t->precedent = d;
     l->precedent = t;
     d->suivant = t;
     l = t;
    }
    p = l;
    do{
        printf ("\n%d", p->valeur);
        p = p->suivant;
    }while(p!=l);
    printf("\nEntrer 3 valeurs qu'on inserera en queue \n\n");
    for(int i= 0;i<n;i++){
     printf("Entrer la valeur %d : ", i+1);
     t = (struct noeud*)malloc(sizeof(struct noeud));
     scanf("%d", &t->valeur);
     d = l->precedent;
     d->suivant = t;
     t->precedent = d;
     t->suivant = l;
     l->precedent = t;
    }
    p = l;
    do{
        printf ("\n%d", p->valeur);
        p = p->suivant;
    }while(p!=l);

}

