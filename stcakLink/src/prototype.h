typedef struct stack  Stack;
typedef struct stack2  Stack2;

struct stack
{
    int *value;
    int topo;
};

struct stack2
{
   int *value;
   int topo;
};


void menu();
void criar(Stack *s);
int vazia(Stack *s);
int cheia(Stack *s);
void empilhar(Stack *s,int v);
int desempilhar(Stack *s);
int retorna_topo(Stack *s);
void list(Stack *s);
void esvazia_pilha(Stack *s);

void criar2(Stack2 *S);
int vazia2(Stack2 *S);
int cheia2(Stack2 *S);
void empilhar2(Stack2 *S,int v);
int desempilhar2(Stack2 *S);
int retorna_top2(Stack2 *S);
void list2(Stack2 *S);
void esvazia_pilha2(Stack2 *S);

void transferir_pilha(Stack *s,Stack2 *S);