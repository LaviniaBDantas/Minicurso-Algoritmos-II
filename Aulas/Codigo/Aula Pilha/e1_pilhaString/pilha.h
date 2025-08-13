typedef struct pilha Pilha;
Pilha* cria (void);
void empilha (Pilha* p, char* str);
char* desempilha (Pilha* p);
int vazia (Pilha* p);