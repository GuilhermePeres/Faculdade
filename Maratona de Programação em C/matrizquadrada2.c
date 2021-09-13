#include <stdio.h>

int main()
{
  int imput, lin, col, Matriz[100][100], contlin, i, contcol;
  
  contlin = 1;
    
  scanf ("%i", &imput);  
  
  while (imput != 0)
  {
    for (lin=0; lin<imput; lin++)
    {
      if (lin == 0)
        i = 0;
      else
        i++;
        
      for (col=i; col<imput; col++)
      {
        Matriz[lin][col] = contlin;
        
        contlin++;
      }
      
      contlin = 1;
    }
    
    i = 0;
    
    for (col=0; col<imput; col++)
    {       
       if (col == 0)  
         i = 0;
       else
         i++;
       
       for(lin=i; lin<imput; lin++)
       {
         
         Matriz[lin][col] = contlin;
        
         contlin++;
      
      }
      
      contlin = 1;
   
    }
        
    
    for (lin=0; lin<imput; lin++)
    {
      for (col=0; col<imput; col++)
      {
        if (col == 0)
          printf ("%3i", Matriz[lin][col]);
          
        else
          printf ("%4i", Matriz[lin][col]);
      }
      
      printf ("\n");
      
    }
    
     printf ("\n");
    
     scanf("%i", &imput);
       
  }
  
  return 0;
}