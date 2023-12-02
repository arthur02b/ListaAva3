#include <stdio.h>
#include <string.h>
#include<stdbool.h>
#include <ctype.h>
  



bool valida_placa(char placa[]){
    int len = strlen(placa);
    int i = 0;
    int j = 4;
    
    if ((len==7)||(len==8)){
        if (len==8){
            if(placa[3]!='-'){
                printf("Placa invalida\n");
                return 0;
            }
            for(i; i<3; i++){
                if((placa[i]<65)&&(placa[i]>90)){
                    printf("Placa invalida\n");

                    return 0;

                    }
                }
            for(j; j<9; j++){
                if((placa[j]<48)&&(placa[j]>58)){
                    printf("Placa invalida\n");
                    return 0;
                    }
                }
        return 1;
        }
        if(len==7){
            if(placa[4]<65){
                if(placa[4]<90){
                    printf("Placa invalida\n");
                    return 0;
                }
            }
            for(i=0; i<3; i++){
                if((placa[i]<65)&&(placa[i]>90)){
                    printf("Placa invalida\n");
                    return 0;
                }
            }
            if((placa[4]<48)&&(placa[4]>58)){
                printf("Placa invalida\n");
                return 0;
            }
            
            for(j=5; j<7; j++){
                if((placa[j]<48)&&(placa[j]>58)){
                    printf("Placa invalida\n");
                    return 0;
                }

            }
            return 1;

            }
        
        }
    else {
        printf("Placa invalida\n");
        return 0;
    }
    
}

void conversor(char dia_da_semana[], char dia_lower[]) {
    for (int i = 0; dia_da_semana[i] != '\0'; i++){
        dia_lower[i] = dia_da_semana[i]+32;
    }
    printf("%s", dia_lower);
}


bool valida_dia (char dia_da_semana[]){

    if(strcmp(dia_da_semana,"SEGUNDA-FEIRA")==0){
        return 1;
    }
    if(strcmp(dia_da_semana,"TERCA-FEIRA")==0){
        return 1;
    }
    if(strcmp(dia_da_semana,"QUARTA-FEIRA")==0){
        return 1;
        }
    if(strcmp(dia_da_semana,"QUINTA-FEIRA")==0){
        return 1;
        }
    if(strcmp(dia_da_semana,"SEXTA-FEIRA")==0){
        return 1;
        }
    if(strcmp(dia_da_semana,"SABADO")==0){
        return 1;
        }
    if(strcmp(dia_da_semana,"DOMINGO")==0){
        return 1;
    } 
    printf("Dia da semana invalido\n");
    return 0;

}


int rodizio(char placa[], char dia_da_semana[]){

    int len = strlen(placa);
    int len_dia = strlen(dia_da_semana);
    int x = 0;
    
    if(strcmp(dia_da_semana, "DOMINGO")==0){
        printf ("Nao ha proibicao no fim de semana\n");
        return 0;
    }
    if(strcmp(dia_da_semana, "SEGUNDA-FEIRA")==0){
        if (placa[len-1]==(48)||placa[len-1]==(49)){
            printf ("%s nao pode circular segunda-feira\n", placa);
            return 0;
        }
    }
    if(strcmp(dia_da_semana, "TERCA-FEIRA")==0){       
        if (placa[len-1]==(50)||placa[len-1]==(51)){
            printf ("%s nao pode circular terca-feira\n", placa);
            return 0;
        }
    }
    if(strcmp(dia_da_semana, "QUARTA-FEIRA")==0){
        if (placa[len-1]==(52)||placa[len-1]==(53)){
            printf ("%s nao pode circular quarta-feira\n", placa);
            return 0;
        }
    }
    if(strcmp(dia_da_semana, "QUINTA-FEIRA")==0){
        if (placa[len-1]==(54)||placa[len-1]==(55)){
            printf ("%s nao pode circular quinta-feira\n", placa);
            return 0;
        }
    }
    if(strcmp(dia_da_semana, "SEXTA-FEIRA")==0){
        if (placa[len-1]==(56)||placa[len-1]==(57)){
            printf ("%s nao pode circular sexta-feira\n", placa);
            return 0;
        }
    }
    if(strcmp(dia_da_semana, "SABADO")==0){
        printf ("Nao ha proibicao no fim de semana\n");
        return 0;
    }
    else{
        
        if((dia_da_semana[0]=='Q') && (dia_da_semana[2]=='A')){
            printf ("%s pode circular quarta-feira\n", placa);
        }
        if((dia_da_semana[0]=='Q') && (dia_da_semana[2]=='I')){
            printf ("%s pode circular quinta-feira\n", placa);
        }
        if((dia_da_semana[0]=='S') && (dia_da_semana[2]=='G')){
            printf ("%s pode circular segunda-feira\n", placa);}
        if((dia_da_semana[0]=='S') && (dia_da_semana[2]=='X')){
            printf ("%s pode circular sexta-feira\n", placa);
        }
        if(dia_da_semana[0]=='T'){
            printf("%s pode circular terca-feira\n", placa);
        }
        }
    
}

int main(){

    char placa[20];
    scanf("%s", placa);
    char dia_da_semana[20];
    scanf("%s", dia_da_semana);

    int y = valida_placa(placa);
    int x = valida_dia(dia_da_semana);
    if(y==1&&x==1){
    rodizio(placa, dia_da_semana);
    }

    return 0;
}