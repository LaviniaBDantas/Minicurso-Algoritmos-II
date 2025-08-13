typedef struct pilha Pilha;
Pilha* cria (void);
void empilha (Pilha* p, char* str);
void desempilha (Pilha* p);
int vazia (Pilha* p);