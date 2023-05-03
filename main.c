#include <stdio.h>
#include<stdlib.h>

void mAYUSCULA(char *);
int main() {
    char texto[1000];
    printf("Ingresar texto: ");
    fflush(stdin);
    gets(texto);
    mAYUSCULA(texto);
    printf("%s",texto);
    return 0;
}

void mAYUSCULA(char *string){
    for (int i = 0; string[i]!='\0' ;++i) {
        string[i]-=32;

        if(string[i]==' '){
            string[i+1]+=32;
        }
    }

}
