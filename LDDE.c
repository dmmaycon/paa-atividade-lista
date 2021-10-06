#include "LDDE_privado.h"

// cria um novo nó e retorna o ponteiro para o elemento
struct Node* criarNovoNo(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

// insere um no no inicio da lista
void inserirNoInicio(int x) {
	struct Node* newNode = criarNovoNo(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}

// insere um nó no final da lista
void inserirNoFim(int x) {
	struct Node* temp = head;
	struct Node* newNode = criarNovoNo(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while (temp->next != NULL) {
        temp = temp->next; // Vai para o ultimo no
    }  
	temp->next = newNode;
	newNode->prev = temp;
}

//imprimime toda a lista do inicio para o fim
void imprimi() {
	struct Node* temp = head;
	printf("Do inicio para o Fim: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

// imprime toda a lista do fim para o inicio
void imprimiInvertido() {
	struct Node* temp = head;
	if (temp == NULL) {
        return; // se tiver vazio sai
    }
	// vai para o ultimo no
	while(temp->next != NULL) {
		temp = temp->next;
	}
	// volta para o ponteiro anterior
	printf("Do Fim para o inicio: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}