#include <stdio.h>
#include "functions.h"

int main(){
    int sayi,menu,sayi0,sayi1,sayi2,sayi3,sayi4;
    printf("Menuden seçiniz:\n 1.Lab sorulari.\n 2.Şükrünün sorulari: ");
    scanf("%d",&sayi);
    switch(sayi){
    case 1:
        printf("Lab sorularından seçiniz (7 ile 11 arasi): ");
        scanf("%d",&menu);
        switch(menu){
            case 7:
                printf("Lab 7den 5 soru bulunmakta numara giriniz: ");
                scanf("%d",&sayi0);
                switch (sayi0)
                {
                case 1:
                    lab7Soru1();
                    break;
                case 2:
                    lab7Soru2();
                    break;
                case 3:
                    lab7Soru3();
                    break;
                case 4:
                    lab7Soru4();
                    break;
                case 5:
                    lab7Soru5();
                    break;
                default:
                    break;
                }
                break;
            case 8:
                printf("Lab 8 den 7 soru bulunmakta soru numarası giriniz");
                scanf("%d",&sayi1);
                switch (sayi1)
                {
                case 1:
                    lab8Soru1();
                    break;
                case 2:
                    lab8Soru2();
                    break;
                case 3:
                    lab8Soru3();
                    break;
                case 4:
                    lab8Soru4();
                    break;
                case 5:
                    lab8Soru5();
                    break;
                case 6:
                    lab8Soru6();
                    break;
                case 7:
                    lab8Soru7();
                    break;
                default:
                    break;
                }
                break;
            case 9:
                printf("Lab 9dan soru numarası giriniz 2,3,4,5: ");
                scanf("%d",&sayi2);
                switch (sayi2)
                {
                case 2:
                    lab9Soru2();
                    break;
                case 3:
                    lab9Soru3();
                    break;
                case 4:
                    lab9Soru4();
                    break;
                case 5:
                    lab9Soru5();
                    break;
                default:
                    break;
                }
                break;
            case 11:
                printf("lab 11de 1 ve 3: ");
                scanf("%d",&sayi3);
                switch (sayi3)
                {
                case 1:
                    lab11Soru1();
                    break;
                case 3:
                    lab11Soru3();
                    break;
                
                default:
                    break;
                }
                break;
            default:
                break;
        }
        break;
    case 2:
        printf("Şükrünün sorularından seçiniz (1 den 9 kadar): ");
        scanf("%d",&sayi4);
        switch (sayi4)
        {
        case 1:
            Soru1();
            break;
        case 2:
            Soru2();
            break;
        case 3:
            Soru3();
            break;
        case 4:
            Soru4();
            break;
        case 5:
            Soru5();
            break;
        case 6:
            Soru6();
            break;
        case 7:
            Soru7();
            break;
        case 8:
            Soru8();
            break;
        case 9:
            Soru9();
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }

    return 0;
}