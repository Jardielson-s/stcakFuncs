#define MAX 4
#define MAX_STORE 8

typedef struct stack  Stack;
typedef struct stack2  Stack2;
typedef struct stackStore Store;

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

struct stackStore{

int store[MAX_STORE];
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

/*
 *A struct Store ira armazena a pilha1 e pilha 2
 * obs: uma pilha cresce em direção a outra
 * ex: pilha1->pilha2 ou pilha2->pilha1
 */
void criarStore(Store *d);
void empilharStore(Store *d,Stack *s,Stack2 *S);
int desempilharStore(Store *d);
void listStore(Store *d);
void esvaziarStore(Store *d);
int retorna_topo_store(Store *d);
void destruirStore(Store *d);
int vaziaStore(Store  *d);
int cheiaStore(Store *d);
void menuStore();