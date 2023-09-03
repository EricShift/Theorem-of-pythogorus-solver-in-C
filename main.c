#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <Time.h>
#include <math.h>

int main()
{
    //int r,x,y;
    double ans,fans;
    float val1,val2;
    float fval1,fval2;
    char side;
    int and;
    printf("Hello world!\n");
    Sleep(3000);
    printf("Welcome to Solve Pythagoras with Eric\n");
    printf("_______________________________________________________\n");
    Sleep(2000);
    printf(" |\\\n");
    printf(" | \\\n");
    printf(" |  \\ \n");
    printf(" |   \\ \n");
    printf("y|    \\r  \n");
    printf(" |     \\  \n");
    printf(" |      \\   \n");
    printf(" |_      \\  \n");
    printf(" |_|______\\\n");
    printf("    x\n");
    printf("This is the Pythagoras Theorem Formula:\n");
    Sleep(1000);
    printf("r^2 = x^2 + y^2 \n");
    printf("_______________________________________________________\n");
    printf("\n");
    Sleep(4000);
    printf("Choose which Side You Would Like To Calculate by typing the letter in the given range:\n");
    Sleep(1000);
    printf(":r\n");
    printf(":x\n");
    printf(":y\n");
    Sleep(900);
    scanf("%c",&side);
    while(1){
        if(side=='r'){
        printf("Please enter the values of (x) and (y):\n");
        scanf("%f \n%f",&val1,&val2);
        printf("r^2 = (%f)^2 + (%f)^2 \n",val1,val2);
        fval1=val1*val1;
        fval2=val2*val2;
        ans=fval1+fval2;
        fans=sqrt(ans);
        printf("r^2 = (%f) + (%f)\n",fval1,fval2);
        printf("r = %lf \n",fans);
        break;
        }else if(side=='x'){
        printf("Please enter the values of (y) and (r):\n");
        scanf("%f \n%f",&val1,&val2);
        printf("x^2 = (%f)^2 - (%f)^2 \n",val1,val2);
         fval1=val1*val1;
        fval2=val2*val2;
        ans=fval1-fval2;
        fans=sqrt(ans);
        printf("x^2 = (%f) - (%f)\n",fval1,fval2);
        printf("x = %lf \n",fans);
        break;

        }else if(side=='y'){
        printf("Please enter the values of (x) and (r):\n");
        scanf("%f \n%f",&val1,&val2);
        printf("y^2 = (%f)^2 - (%f)^2 \n",val1,val2);
        fval1=val1*val1;
        fval2=val2*val2;
        ans=fval1-fval2;
        fans=sqrt(ans);
        printf("y^2 = (%f) - (%f)\n",fval1,fval2);
        printf("y = %lf \n",fans);
        break;
        }else{
        printf("Please enter a character within a given range!!\n");
        Sleep (4000);
        }
    }
        printf("******************************************************\n");
        printf("\n");
        Sleep(1000);
        printf("Would you like to do another calculation(1/2):\n");
        printf("1.Yes\n");
        printf("2.No\n");
        scanf("%d",&and);
        while (1){
            if(and==1){
             printf("\n");
    Sleep(4000);
    printf("Choose which Side You Would Like To Calculate by typing the letter in the given range:\n");
    Sleep(1000);
    printf(":r\n");
    printf(":x\n");
    printf(":y\n");
    Sleep(900);
    scanf(" %c",&side);
    while(1){
        if(side=='r'){
        printf("Please enter the values of (x) and (y):\n");
        scanf("%f \n%f",&val1,&val2);
        printf("r^2 = (%f)^2 + (%f)^2 \n",val1,val2);
        fval1=val1*val1;
        fval2=val2*val2;
        ans=fval1+fval2;
        fans=sqrt(ans);
        printf("r^2 = (%f) + (%f)\n",fval1,fval2);
        printf("r = %lf \n",fans);
        break;
        }else if(side=='x'){
        printf("Please enter the values of (y) and (r):\n");
        scanf("%f \n%f",&val1,&val2);
        printf("x^2 = (%f)^2 - (%f)^2 \n",val1,val2);
         fval1=val1*val1;
        fval2=val2*val2;
        ans=fval1-fval2;
        fans=sqrt(ans);
        printf("x^2 = (%f) - (%f)\n",fval1,fval2);
        printf("x = %lf \n",fans);
        break;

        }else if(side=='y'){
        printf("Please enter the values of (x) and (r):\n");
        scanf("%f \n%f",&val1,&val2);
        printf("y^2 = (%f)^2 - (%f)^2 \n",val1,val2);
        fval1=val1*val1;
        fval2=val2*val2;
        ans=fval1-fval2;
        fans=sqrt(ans);
        printf("y^2 = (%f) - (%f)\n",fval1,fval2);
        printf("y = %lf \n",fans);
        break;
        }else{
        printf("Please enter a character within a given range!!\n");
        Sleep (4000);
        }
    }
        printf("******************************************************\n");
        printf("\n");
        Sleep(1000);
        printf("Would you like to do another calculation(1/2):\n");
        printf("1.Yes\n");
        printf("2.No\n");
        scanf("%d",&and);

        }else if(and==2){
        Sleep(2000);
            printf("Thank you for using our program, feel free to do more calculations!!\n");
            Sleep(1000);
            printf("Exiting...\n");
            Sleep(5000);
            break;
            }else{
            printf("Enter a number within a given Range !!!");
            }

        }


    return 0;
}
