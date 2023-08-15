#include<stdio.h>
#include<ctype.h>

int main(){


    char questions[][200] = {" 1. Who invested the lightbulb:?" ,
                            "  2. What year did the c language debut :?" ,
                            "  3. Who killed a giant with stone in the bible:?" ,
                            "  4. Who said the quote the let the poor breathe:?"};
                            

    char options[][200] =  {" A. Michael Jordan" , "B. Thomas Edison" , "C. Madea Jackson", 
                            " A. 1969" , "B. 1972" , "C. 1975" ,
                            " A. David" , "B . John" , "C. Mary ", 
                            " A. Tinubu" , "B. Abacha" , "c . Jessie"}; 

    char answers [5] = {'B' , 'B' , 'A' , 'A'};  
    int numberofQuestions = sizeof(questions)/sizeof(questions[0]);


    char guess;
    int score;

    printf("QUIZ GAME\n");

    for(int i=0 ; i < numberofQuestions; i++)
    {
      printf("*************\n");
      printf("%s\n", questions[i]);
      printf("**************\n");


      for( int j = (i * 3); j < (i * 3) + 3; j++ )
      {
        printf("%s\n" , options[j]);
      }  

        printf("guess: ");
        scanf("%c" , &guess);
        scanf("%c");// clear \n from new buffer 

        //guess = toupper(guess);

        if(guess == answers[i])
        {
          printf("CORRECT ANSWER!!!!\n");
          score++;
        }
        else
        {
          printf("WRONG ANSWER\n");
        }
      
    }
       
       printf("*************\n");
       printf("FINAL SCORE :%d/%d\n" , score , numberofQuestions);
       printf("*************\n");









    return 0;
}