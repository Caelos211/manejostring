#include <stdio.h>
//6) El usuario ingresa una palabra. Determinar qu� letra aparece mayor cantidad de veces. Para simplificar el problema, trabaje solo con may�sculas.
int main()
{
    char a[20] = {0};
    int arr[27] = {0};
    int col1 = 0;
    int col2=0;
    printf("Ingrese una palabra de hasta 20 letras en may�sculas: ");
    scanf("%s", a);
    for (int i = 0; i<20; i++){
        arr[(a[i]-65)]++;
    }
    for (int i = 0; i<26; i++){
        printf("\n%d", arr[i]);
        if (arr[i] > col1){
            col1 = arr[i];
            col2 = i+65;
        }
    }
    printf("\nLetra mas repetida: %c", col2);
    return 0;
}

