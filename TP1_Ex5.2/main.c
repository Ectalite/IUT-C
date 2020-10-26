//
//  main.c
//  TP1_Ex5.2
//
//  Created by Xavier Hueber on 26/10/2020.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i1,i2,i3,i4,i5,i6;
    printf("Donnez l'état logique des intérrupteurs i1 à i6:\n");
    printf("i1:");
    scanf("%d",&i1);
    printf("i2:");
    scanf("%d",&i2);
    printf("i3:");
    scanf("%d",&i3);
    printf("i4:");
    scanf("%d",&i4);
    printf("i5:");
    scanf("%d",&i5);
    printf("i6:");
    scanf("%d",&i6);
    if ((i1&&i5 == 1) || (i1&&i3&&i4 == 1) || (i2&&i6 == 1)) {
        printf("La lampe est allumée\n");
    }else{
        printf("La lampe est éteinte\n");
    }
}
