#include<stdio.h>
#include "func.c"


int main(){
  Stack s;  Stack2 S;

  int op,v;

  criar(&s);
  criar2(&S);
  do{
    
   
    menu();
    printf("\n\t escolha a opcao:\t");
    scanf("%d",&op);
    

     
    switch (op)
    {
    case 1:
        if(cheia(&s) == 1){
            printf("\n\t PILHA CHEIA \n");
        }
        else 
        {
          printf("\n\t digite um valor:\t");
          scanf("%d",&v);
          empilhar(&s,v);
        }
        break;
    case 2:
       if(vazia(&s) == 1){
           printf("\n\t PILHA VAZIA \n");
       }
       else
       {
           desempilhar(&s);
       }
       break;
    case 3:
       if(vazia(&s) == 1){
            printf("\n\t PILHA VAZIA \n");
       }
       else 
       {
            printf("\n\t topo = %d \n",retorna_topo(&s));
       }
       break;
    case 4:
       if(vazia(&s) == 1){
            printf("\n\t PILHA VAZIA \n");
       }
       else 
       {
          list(&s);
       }
       break;
    case 5:
       if(vazia(&s) == 1){
            printf("\n\t PILHA VAZIA \n");
       }
       else 
       {
          list_BC(&s);
       }
       break;
    case 6:
        if(vazia(&s) == 1){
            printf("\n\t PILHA VAZIA \n");
        }
        else 
        {
          esvazia_pilha(&s);
        }
        break;
   case 7:
        if(cheia2(&S) == 1){
            printf("\n\t PILHA CHEIA \n");
        }
        else 
        {
          printf("\n\t digite um valor:\t");
          scanf("%d",&v);
          empilhar2(&S,v);
        }
        break;
    case 8:
       if(vazia2(&S) == 1){
           printf("\n\t PILHA VAZIA \n");
       }
       else
       {
           desempilhar2(&S);
       }
       break;
    case 9:
       if(vazia2(&S) == 1){
            printf("\n\t PILHA VAZIA \n");
       }
       else 
       {
            printf("\n\t topo = %d \n",retorna_topo2(&S));
       }
       break;
    case 10:
       if(vazia2(&S) == 1){
            printf("\n\t PILHA VAZIA \n");
       }
       else 
       {
          list2(&S);
       }
       break;
    case 11:
       if(vazia2(&S) == 1){
            printf("\n\t PILHA VAZIA \n");
       }
       else 
       {
          list_BC2(&S);
       }
       break;
    case 12:
        if(vazia2(&S) == 1){
            printf("\n\t PILHA VAZIA \n");
        }
        else 
        {
          esvazia_pilha2(&S);
        }
        break;
    case 13:
        if(vazia(&s) == 1){
            printf("\n\t PILHA VAZIA \n");
        }
        else if(cheia2(&S) == 1){
            printf("\n\t PILHA VAZIA \n");
        }
        else 
        {
            transferir_pilha1_para_pilha2(&s,&S);
        }
        break;
    case 14:
        if(vazia2(&S) == 1){
            printf("\n\t PILHA VAZIA \n");
        }
        else if(cheia(&s) == 1){
            printf("\n\t PILHA VAZIA \n");
        }
        else 
        {
            transferir_pilha1_para_pilha2(&s,&S);
        }
        break;
    
    }
  }while (op != 0);
  
  destruir(&s);
  destruir2(&S);

}