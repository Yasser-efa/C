#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valeur;
    struct Node *suivant;
} Node;

Node* creer_node(int valeur) {
    Node *nouveau = (Node*)malloc(sizeof(Node));
    nouveau->valeur = valeur;
    nouveau->suivant = NULL;
    return nouveau;
}

void ajouter(Node **tete, int valeur) {
    Node *nouveau = creer_node(valeur);
    nouveau->suivant = *tete;
    *tete = nouveau;
}

void afficher(Node *tete) {
    Node *courant = tete;
    while (courant != NULL) {
        printf("%d -> ", courant->valeur);
        courant = courant->suivant;
    }
    printf("NULL\n");
}

void liberer(Node *tete) {
    Node *courant = tete;
    while (courant != NULL) {
      Node *temp = courant->suivant;
      free(courant);
      courant = temp;
    }
}

int main() {
    Node *tete = NULL;
    ajouter(&tete, 1);
    ajouter(&tete, 2);
    ajouter(&tete, 3);
    afficher(tete);
    liberer(tete);
    return 0;
}