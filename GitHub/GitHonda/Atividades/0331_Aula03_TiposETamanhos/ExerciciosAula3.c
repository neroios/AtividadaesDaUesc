#include <stdio.h>

// A) Tipos basicos sao o char, void, float, double e o int



// B)
int main(){
    int main(){
        char nome[] = "tome";

        printf("%s\n", nome);
        printf("%li", sizeof(nome));
        return 0;

    }


#include <stdio.h>


    void main(){
        void a;

        printf("%li", sizeof(a)); // Por ser void n tem nada, ent n pega
        return;

    }


    int main(){
        float dale;
        int bresque;
        double xesque;

        dale = 100;
        bresque = 200;
        xesque = 300;

        printf("%li , %li, %li", sizeof(dale), sizeof(bresque), sizeof(xesque));

        return 0;
        // int tem 4
        // float tem 4 igual int
        // Double por ser um long float tem o dobro


    }




    // C)

    int main(){
        float resultado3, var1, var2, resultado,resultado2;


        scanf("%f", &var1); // pega input
        scanf("%f", &var2); // pega input
        resultado = var1 + var2; // faz as operacoes de soma e guarda no resultado
        resultado2 = var1 * var2; // faz a multiplicadao e gaurda no resultado
        resultado3 = var1 / var2; // faz a divisao e guarda no resutlado

        printf("%.2f + %.2f = %.2f\n", var1, var2, resultado);
        printf("%.2f * %.2f = %.2f\n", var1, var2, resultado2);
        printf("%.2f / %.2f = %.2f\n", var1, var2, resultado3);

        return 0;

    }


