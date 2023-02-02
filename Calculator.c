#include <stdio.h>
#include <math.h>

/*Body Mass Index Calculator*/
/*M and C are two variables to creat a finish button*/

/*Function to calculate BMI*/
void BodyMass(float weight, float height, float *BMI){

    *BMI = weight/(height*height);

}

int main(){
    
    float height, weight, BMI;
    char M, C;

    printf("Your Weight (KG):");
    scanf("%f", &weight);
    printf("Your Height (Metres) (Exemple: 1.70):");
    scanf("%f", &height);

    BodyMass(weight, height, &BMI);

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
    scanf("%c%c", &M, &C);

    

    


    return 0;
}