#include <stdio.h>

/*Body Mass Index Calculator*/
/*M and C are two variables to creat a finish button*/

int main(){
    
    float height, weight, BMI;
    char m, c;

    printf("Your Weight (KG):");
    scanf("%f", &weight);
    printf("Your Height (Metres) (Exemple: 1.70):");
    scanf("%f", &height);

    BMI = weight/(height*height); 

    if(BMI < 18.5){
        puts("Underweight");
    }else if(BMI < 24.9){
        puts("Normal");
    }else if(BMI < 34.9){
        puts("Obese");
    }else{
        puts("Extremely Obese");
    }

    printf("BMI: %.2f\n", BMI);

    puts("Press Enter to finish the program");
    scanf("%c%c", &m, &c);

    

    


    return 0;
}