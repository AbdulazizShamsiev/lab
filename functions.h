#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

/// lab 7 \\\

int lab7Soru1(){
    /* Soru: 1- Klavyeden girilen iki sayının toplamını hesaplayıp ekrana yazdıran programı C
dili ile yazınız*/

    int sayi1,sayi2;
    printf("Sayi giriniz:");
    scanf("%d %d",&sayi1,&sayi2);
    printf("%d",sayi1 + sayi2);
}

int lab7Soru2(){
    /* Soru: 2- Klavyeden A ve B tamsayı değişkenlerinde tutulan iki sayı giriliyor. A ve B
değişkenlerinin değerlerini kendi arasında yer değiştirerek ekrana yazdıran
programı C dili ile yazınız.*/

    int a,b;
    printf("a ve b sayilarini giriniz: ");
    scanf("%d %d",&a,&b);
    a = a - b;
    b = b + a;
    a = b - a;
    printf("a = %d, b = %d",a,b);
}
int lab7Soru3(){
    /* Soru: 3- Klavyeden bir öğrenci için öğrenci no, vize ve final girildiğinde, öğrencinin
vize notunun %40’ı ve final notunun %60’ı alarak geçme notunu hesaplayan ve
öğrencinin numarası ile birlikte ekrana sonucu yazdıran programı C dili ile
yazınız */

    int vize,final;
    printf("Önce vize sonra final notunuzu giriniz:");
    scanf("%d %d",&vize,&final);
    printf("%f",vize * 0.40 + final * 0.60);
}

int lab7Soru4(){
    /* Soru: 4- Klavyeden bir dairenin yarıçap bilgisi ve işlem türü girildiğinde işlem türü 1
ise dairenin çevresini hesaplanıp yazdıran 2 girilirse alanının hesaplayıp
yazdıran, bunların dışındaki girişler için “Yanlış giriş” mesajı vererek sonlanan
programı C dili ile yazınız. */

    int radius,islem;
    printf("yaricap giriniz: ");
    scanf("%d",&radius);
    printf("işlem giriniz: ");
    scanf("%d",&islem);
    
    islem = (islem == 1) ? printf("%.1f", 2 * 3.14 * radius) : (islem == 2) ? printf("%.1f", 3.14 * radius * radius) : printf("yanlis giriş");
}
int lab7Soru5(){
    /* Soru: 5- Klavyeden girilen bir para miktarını en az banknot kullanarak oluşturmak
istediğimizde içinde kaç tane 100, 50, 20 ve 10’luk olduğunu bulan programı C
dili ile yazınız. Not: Klavyeden girilen para miktarı 10’un katları olmalıdır. */

    int paraMiktari,yuzluk,onluk,yirmilik,ellilik;
    printf("Para miktari giriniz: ");
    scanf("%d",&paraMiktari);
    printf("Çekmek istediğiniz para miktarı %d",paraMiktari);
    
    yuzluk = paraMiktari / 100;
    paraMiktari = paraMiktari % 100;

    ellilik = paraMiktari / 50;
    paraMiktari = paraMiktari % 50;

    yirmilik = paraMiktari / 20;
    paraMiktari = paraMiktari % 20;

    onluk = paraMiktari / 10;
    paraMiktari = paraMiktari % 10;

    printf("için \n%d tane yuzluk,\n %d tane ellilik,\n %d tane yirmilik,\n %d tane daha 10luk kullanmanız gerekiyor",yuzluk,ellilik,yirmilik,onluk);

    return 0;
}

/// lab 8 \\\

int lab8Soru1(){
    /* 1) Write C code to add two numbers entered by user */
    int a,b;
    printf("Sayi giriniz: ");
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d",a,b,a+b);
}

int lab8Soru2(){
    /* 2) Calculate the area of a circle with given radius. */
    int radius;
    printf("Yariçap giriniz: ");
    scanf("%d",&radius);
    printf("%f",3.14 * radius * radius);
}
int lab8Soru3(){
    /* Soru: kullanıcıdan alınan sayının çıft olup olmadığını kontrol ediniz */
    int sayi;
    printf("sayi giriniz: ");
    scanf("%d",&sayi);
    sayi = (sayi % 2 == 0) ? printf("Çıft") : printf("deil");
}
int lab8Soru4(){
    /* 4) Determine Whether a Temperature is Below or Above the Freezing Point. */
    int Temperature;
    printf("sıcaklık giriniz: ");
    scanf("%d",&Temperature);
    Temperature = (Temperature <= 0 ) ? printf("Soğuk") : printf("Sicak");

}
int lab8Soru5(){
    /* 5) Convert Temperature from Fahrenheit (℉) to Celsius (℃). */
    int Fahrenheit;
    printf("Fahrenheit giriniz: ");
    scanf("%d",&Fahrenheit);
    printf("%d",(Fahrenheit - 32) * 5/9);
}

int lab8Soru6(){
    /* 6) Write C code to convert the length in feet to centimeter. */
    int cm;
    printf("cm giriniz: ");
    scanf("%d",&cm);
    printf("%.2f",cm * 30.48);
}
int lab8Soru7(){
    /* 7) Write C code to find the largest of three numbers A, B, and C. */
    int enBuyuk,a,b,c;
    printf("Üç sayı giriniz: ");
    scanf("%d %d %d",&a,&b,&c);
    enBuyuk = (a > b && a > c) ? printf("%d en büyük sayı",a) : (b > a && b > c) ? printf("%d en büyük sayı",b) : printf("%d en buyuk sayi",c);
}

/// lab 9 \\\

/* ! Hatırlatma lab9Soru1 ile lab8Soru7 aynı */

int lab9Soru2(){
    /* 2) Write a C program for computing factorial N (N!). */
    int faktoryel=1,i,sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++){
        faktoryel *= i;
    }
    printf("%d",faktoryel);
}
int lab9Soru3(){
    /* 3) Write a C program which generates even numbers between 1000 and 2000 and then prints them */
    int i;
    for(i=1000;i<=2000;i++){
        if(i % 2 == 0)
            printf("%d\n",i);
    }
}
int lab9Soru4(){
    /* 4) Write a C program to check whether a given number from keyboard is Palindrome number or not.*/
    /* Yapım aşamasında 🏗*/
}
int lab9Soru5(){
    /* 5) Write a C program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]. */
    /* Yapım aşamasında 🏗*/
}

int lab11Soru1(){
    /*
    Soru 1:
    Pentagon sayıları Pn = n(3n - 1)/2 formülüne göre üretilmektedir,
    100den küçük pentagon sayılarını ekrana basınız
    */
    int i,pentagon;
    for(i=0;i<100;i++){
        pentagon = i*(3 * i - 1)/2;
        if(pentagon>100)
            continue;
        else
            printf("%d\n",pentagon);
    }

}
int lab11Soru3(){
    // bir sınıftaki 10 öğrencinin boy ve kilo bilgilerini tutan bir program yazınız. ve ortalamayı yazınız
    int boy[2][10] = {
        {1,2,3,4,5,6,7,8,9,10},
        {1,2,3,4,5,6,7,8,9,10}};
        int boyToplam = 0,kiloToplam = 0;
    for(int i=0; i<10; i++){
        printf("%d. öğrencinin boyunu giriniz: ", i+1);
        scanf("%d", &boy[i][0]);
        printf("%d. öğrencinin kilosunu giriniz: ", i+1);
        scanf("%d", &boy[i][1]);
        boyToplam += boy[i][0];
        kiloToplam += boy[i][1];
        printf("boy ve kilosu %d %d\n",boy[i][0],boy[i][1]);
        
    }
  printf("Boy ortalamasi %d ,kiloOrtalamasi %d",boyToplam/10,kiloToplam/10);
}
// Şükrü Biçer soruları
int Soru1(){
    /* 1) Ekrana 10 defa "Merhaba" yazdıran program yazınız */
    int i;
    for(i=1;i<=10;i++){
        printf("%d. Merhaba dunya\n",i);
    }
}

int Soru2(){
    /* 2) Kullanıcıdan bir sayı alın ve 1den o sayıya kadar olan sayıları ekrana yazdırınız (while kullanın)*/
    int i=0,n;
    printf("Sayi giriniz: ");
    scanf("%d",&n);
    while(i<n) i++,printf("%d\n",i);
}

int Soru3(){
    /* 3) Kullanıcıdan bir sayı alın ve o sayının faktöryelini hesaplayıp ekrana yazdırınız (while-loop kullanın)*/
    int sayi,i=1,faktoryel=1;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    do{
        faktoryel *= i;
        i++;
    }while(i<=sayi);
    printf("%d",faktoryel);
}

int Soru4(){
    /* 4) Kullanıcıdan bir sayı alın ve o sayının basamaklarının toplamını ekrana yazdırın (for döngüsü kullanın)*/
    int basamak,toplam=0,sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    for(;sayi!=0;sayi/=10){
        basamak = sayi %10;
        toplam += basamak;
    }
    printf("%d",toplam);
}
int Soru5(){
    /* 5) Kullanıcıdan bir sayı alın ve o sayının asal olup olmadığını kontrol ediniz */
    int sayi,i=2,asal=1;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    while (i<= sayi / 2)
    {
        if(sayi % i == 0){
            asal = 0;
            break;
        }
        i++;
    }
    if(asal == 1 && sayi > 1){
        printf("asal sayi");
    }   
    else{
        printf("deil");
    }
}

int Soru6(){
    /*  Soru 6: Kullanıcıdan bir sayı alın ve o sayıya kadar olan Fibonacci sayılarını ekrana yazdırın. (do-while döngüsü kullanın) */
    int ilk=0,son=1,i,sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    do{
        printf("%d\n", son);
        i = ilk + son;
        ilk = son;
        son = i;
        
    }while(son<=sayi);
}

int Soru7(){
    /* Soru 7: Kullanıcıdan bir sayı alın ve o sayının tam bölenlerini ekrana yazdırın. (for döngüsü kullanın) */
    int sayi,i,j;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    
    for(i=1;i<= sayi; i++){
       j = (sayi % i == 0) ? printf("%d\n",i) : printf(" "); // aşağıdakinin kısaltılmış halı 
       /*if(sayi % i == 0){
        printf("%d\n",i);
       }*/
    }
}
int Soru8(){
    /* Soru 8: Kullanıcıdan bir sayı alın ve o sayının mükemmel sayı olup olmadığını ekrana yazdırın. 
    (Mükemmel sayı, kendisi hariç pozitif tam bölenlerinin toplamı kendisine eşit olan sayıdır.
     Örneğin, 6 = 1 + 2 + 3) (while döngüsü kullanın) */
    int sayi, toplam=0,bolen=1;
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);
    while (bolen <= sayi / 2) {
        if (sayi % bolen == 0) {
            toplam += bolen;
        }
        bolen++;
    }
    if (toplam == sayi) {
        printf("%d mukemmel sayi\n", sayi);
    } else {
        printf("%d mukemmel değil.\n", sayi);
    }
}

int Soru9(){
    /* Soru 9: Kullanıcıdan bir sayı alın ve o sayının basamaklarını tersten ekrana yazdırın.
     (do-while döngüsü kullanın) */
    int sayi, tersi = 0, kalan;
    printf("Sayi girin: ");
    scanf("%d", &sayi);
    do {
        kalan = sayi % 10;
        tersi = tersi * 10 + kalan;
        sayi = sayi / 10;
    } while (sayi > 0);
    printf("Sayinin tersi: %d\n", tersi);

}