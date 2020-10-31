#include<stdio.h>
#include "func.c"


int main(){
  Stack s;  Stack2 S; Store d;

  int op,v;

  criar(&s);
  criar2(&S);
  criarStore(&d);
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
           printf("\n\t desenpilhado = %d \n ",desempilhar(&s));
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
           printf("\n\t desempilhado = %d \n",desempilhar2(&S));
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
    case 15:
        if(cheiaStore(&d) == 1){
            printf("\n\t PILHA CHEIA \n");
        }
        else 
        {
          empilharStore(&d,&s,&S);
        }
        break;
    case 16:
       if(vaziaStore(&d) == 1){
           printf("\n\t PILHA VAZIA \n");
       }
       else
       {
           printf("\n\t desempilhado = %d \n",desempilharStore(&d));
       }
       break;
    case 17:
        if(vaziaStore(&d) == 1){
            printf("\n\t PILHA VAZIA \n");
        }
        else 
        {
          esvaziarStore(&d);
        }
        break;
    case 18:
       if(vaziaStore(&d) == 1){
            printf("\n\t PILHA VAZIA \n");
       }
       else 
       {
          listStore(&d);
       }
       break;
    case 19:
       if(vaziaStore(&d) == 1){
            printf("\n\t PILHA VAZIA \n");
       }
       else 
       {
            printf("\n\t topo = %d \n",retorna_topo_store(&d));
       }
       break;
    
    }
  }while (op != 0);
  
  destruir(&s);
  destruir2(&S);
  

}