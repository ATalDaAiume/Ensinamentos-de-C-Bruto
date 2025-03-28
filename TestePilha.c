#include <stdio.h>>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* initialize(){
	return NULL;
}

struct Node* push(struct Node* top, int value){
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	if (newNode == NULL){
		printf("Falha na alocação de memória.\n");
		printf("Não é possível adicionar mais elementos.\n");
		return top;
	}
	newNode->data = value;
	newNode->next = top;
	return newNode;
}

int size(struct Node* top){
	int count = 0;
	struct Node* temp = top;
	while(temp !=NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

int main(){
	struct Node* stack = initialize();
	int value, choice;
	
	while(1){
		printf("MENU:\n");
		printf("1. Empilhar(Push):\n");
		printf("2. Desempilhar(Pop):\n");
		printf("3. Ver topo(Peek):\n");
		printf("4. Ver tamanho da pilha():\n");
		printf("5. Sair\n");
		printf("Escolha uma opção:");
		scanf("%d", &choice);
		
		switch (choice){
			case 1 :
				printf("Digite o valor a ser empilhado:");
				scanf("%d", &value);
				stack = push(stack, value);
				break;
			case 4 :
				printf("Tamanho da Pilha: %d\n", size(stack));
				break;

		}
	}
}