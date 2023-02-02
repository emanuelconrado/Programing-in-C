#include <stdio.h>
#include <math.h>

/*Body Mass Index Calculator*/
/*F is variable to creat a finish button*/
/*Loop is a variable to control how many BMI do you want calculate*/
/*Trash is a variable to eliminate "Enter" in the memorie buff*/



/*Function to calculate BMI*/
void BodyMass(float weight, float height, float *BMI){

    *BMI = weight/(height*height);

}

/*Function BMI Status*/
void BmiStatus(float BMI){
     
     if(BMI < 18.5){
        puts("Underweight");
    }else if(BMI < 24.9){
        puts("Normal");
    }else if(BMI < 34.9){
        puts("Obese");
    }else{
        puts("Extremely Obese");
    }

}

int main(){
    
    float height, weight, BMI;
    char F, loop, trash;

    while(loop = 'y' || loop == 'Y'){
        printf("Your Weight (KG):");
        scanf("%f%c", &weight, &trash);
        printf("Your Height (Metres) (Exemple: 1.70):");
        scanf("%f%c", &height, &trash);

        BodyMass(weight, height, &BMI);

        BmiStatus(BMI);

        printf("BMI: %.2f\n", BMI);

        puts("Type 'Y' to calculate another BMI or 'N' to exit");
        scanf("%c%c",&loop, &trash);

        if(loop == 'n' || loop == 'N'){
            break;
        }
    }
    puts("Press Enter to finish the program");
    scanf("%c", &F);

    return 0;
}