#include<stdio.h>
#include<stdlib.h>
#include "prototype.h"



void menu(){
    printf("\n\t 1- empilhar");
    printf("\n\t 2- desempilhar");
    printf("\n\t 3- retorna topo");
    printf("\n\t 4- list");
    printf("\n\t 5- listDC");
    printf("\n\t 6- esvazia pilha \n");
    printf("\n\t 7- empilhar pilha 2");
    printf("\n\t 8- desempilhar pilha 2");
    printf("\n\t 9- retorna topo pilha 2");
    printf("\n\t 10- list pilha 2");
    printf("\n\t 11- listDC pilha 2");
    printf("\n\t 12- esvazia pilha pilha 2\n");
    printf("\n\t 13- tranferir de pilha 1 para pilha 2");
    printf("\n\t 14- tranferir de pilha 2 para pilha 1\n");
    printf("\n\t 15- empilhar Store");
    printf("\n\t 16- desempilhar Store");
    printf("\n\t 17- esvaziar Store");
    printf("\n\t 18- list Store");
    printf("\n\t 19- retorna topo da Store\n");
    
}
int vazia(Stack *s){
  if(s->topo == -1)
    return 1;
  else
    return 0;
  
}

int cheia(Stack *s){

  if(s->topo == MAX-1)
   return 1;
  else
   return 0;
  
}

void criar(Stack *s){

  s->topo = -1;
  s->value = (int *)malloc(MAX * sizeof(int));

}

void empilhar(Stack *s,int v){
  
  
  for(int i = 0;i < MAX;i++)
   {
     if(s->value[s->topo] == v)
     {
        printf("\n\t valor ja existe digite outro:\t");
        scanf("%d",&v);
        i = 0;
     }
   }
   s->topo++;
   s->value[s->topo] = v;

}

int desempilhar(Stack *s){
   
   
   
    int aux;
    aux = s->value[s->topo];
    s->topo--;
    return aux;
   
}

int retorna_topo(Stack *s){
  
      return s->value[s->topo];
  
}


void list(Stack *s){
  int aux = s->topo;
  
  while(aux > -1){
   printf("\n\t valor = %d \n",s->value[aux]);
   aux--;
  }
}
int list_BC(Stack *s){
  
  int aux = s->topo; 

  aux = -1;
 
  for(aux;aux <= s->topo;aux++)
  {
      if(s->value[aux] == 0)
      {
         continue;
      }
      printf("\n\t valor = %d \n",s->value[aux]);
  }
  
}

void destruir(Stack *s){
  
  
  free(s->value);

}

void esvazia_pilha(Stack *s){

 for(int i = 0;i < MAX;i++)
 {
   s->topo--;
   s->value[s->topo];
 }
}


  //    PILHA 2

int vazia2(Stack2 *S){
  if(S->topo == -1)
    return 1;
  else
    return 0;
  
}

int cheia2(Stack2 *S){

  if(S->topo == MAX-1)
   return 1;
  else
   return 0;
  
}

void criar2(Stack2 *S){

  S->topo = -1;
  S->value = (int *)malloc(MAX * sizeof(int));

}

void empilhar2(Stack2 *S,int v){
  
  
  for(int i = 0;i < MAX;i++)
   {
     if(S->value[S->topo] == v)
     {
        printf("\n\t valor ja existe digite outro:\t");
        scanf("%d",&v);
        i = 0;
     }
   }
   S->topo++;
   S->value[S->topo] = v;

}

int desempilhar2(Stack2 *S){
   
   
   
    int aux;
    aux = S->value[S->topo];
    S->topo--;
    return aux;
   
}

int retorna_topo2(Stack2 *S){
  
      return S->value[S->topo];
  
}


void list2(Stack2 *S){
  int aux = S->topo;
  
  while(aux > -1){
   printf("\n\t valor = %d \n",S->value[aux]);
   aux--;
  }
}
int list_BC2(Stack2 *S){
  
  int aux = S->topo; 

  aux = -1;
 
  for(aux;aux <= S->topo;aux++)
  {
      if(S->value[aux] == 0)
      {
         continue;
      }
      printf("\n\t valor = %d \n",S->value[aux]);
  }
  
}

void destruir2(Stack2 *S){
  
  
  free(S->value);

}

void esvazia_pilha2(Stack2 *S){

 for(int i = 0;i < MAX;i++)
 {
   S->topo--;
   S->value[S->topo];
 }
}



// RELAÇÃO EENTRE AS PILHAS

void transferir_pilha1_para_pilha2(Stack *s,Stack2 *S){
    
    for(s->topo;s->topo >= 0;s->topo--)
    {
      S->topo++;
      S->value[S->topo] = s->value[s->topo];
    }

}

void transferir_pilha2_para_pilha1(Stack *s,Stack2 *S){
    
    for(S->topo;S->topo >= 0;S->topo--)
    {
      s->topo++;
      s->value[S->topo] = S->value[S->topo];
    }

}



// STORE

void criarStore(Store *d){
  
  d->topo = -1;
  for(int i = 0;i < 8;i++)
  {
     d->store[i] = 0;
  }
}

void menuStore(){
   printf("\n\t 1- tranferir pilha 1 para o Array");
   printf("\n\t 2- tranferir pilha 2 para o Array");
   printf("\n\t 3- tranferir as duas pilhas para o Array\n");
}


void empilharStore(Store *d,Stack *s,Stack2 *S){
  
  int op;
  menuStore();
  printf("\t escolha a opcao:\t");
  scanf("%d",&op);
  
  if(op == 1)
  {

     for(s->topo;s->topo >= 0;s->topo--)
     {
       d->topo++;
       d->store[d->topo] = s->value[s->topo];
     }
  }
  else if(op == 2)
  {
     for(S->topo;S->topo >= 0;S->topo--)
     {
          d->topo++;
          d->store[d->topo] = S->value[S->topo];
     }
  }
  else 
  {
     for(s->topo;s->topo >= 0;s->topo--)
     {
       d->topo++;
       d->store[d->topo] = s->value[s->topo];
     }

     for(S->topo;S->topo >= 0;S->topo--)
     {
          d->topo++;
          d->store[d->topo] = S->value[S->topo];
     }
  }
}

int desempilharStore(Store *d){
  
    int aux;
    aux = d->store[d->topo];
    d->topo--;
    return aux;
}


void esvaziarStore(Store *d){

  for(int i = MAX_STORE;i > 0;i--)
  {
    d->topo--;
  }
}

void listStore(Store *d){
 
  for(int i = 0;i <= d->topo;i++)
  {
     printf("\n\t stored = %d \n ",d->store[i]);
  }
}

int retorna_topo_store(Store *d){
   
   return d->store[d->topo];
}

int vaziaStore(Store *d){
  
  if(d->topo == -1)
    return 1;
  else 
    return 0;
}

int cheiaStore(Store *d){
  if(d->topo == MAX_STORE-1)
    return 1;
  else 
    return 0;
}
