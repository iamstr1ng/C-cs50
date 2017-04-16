#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, i, n;           //intialize the height of the pyramid,intialize i for columns and n for rows.
    do                          //check if the height of the pyramid is between 0 and 23.
    {
        printf("Height: ");
        height=get_int();
    }
    while (height<0 || height>23);
    if (height==0)
       printf("");
    else
        for(i=1;i<=height;i++)       //this for loop is for the coloumns,
               {
                n=0;
                                     //printf("i=%d",i); for debug
                while(n<height*2+2)  //  this loop is for rows
                   { 
                                  /* the below while loop prints # and spaces.i changes with the relative position of the rows.
                                       for height = 4, the total row length will be given by (height*2)+spaces, so (4*2)+2 =10 or  
                                           0123456789
                                               \n
                                              #  #
                                             ##  ##
                                            ###  ###
                                           ####  ####   */
                                                             // printf("n=%d",n); for debug
                    if(n>=height-i && n<height)              //prints left half of the pyramid
                         printf("#");
                    else if(n>height+1 && n<=(height+1)+i)   //prints right half of the pyramid
                         if(n==(height+1)+i)       
                             {
                             printf("#\n");
                             break;
                              }
                         else
                             printf("#");
                    else 
                          printf(" ");                 //print the spaces
                    n++;
                        
                    }
              }   
               
}
