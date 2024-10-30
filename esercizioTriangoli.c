#include <stdio.h>
#include <math.h>

int main(void){



    int a,b,c;

    int bo=1;

    do{
        printf("Inserisci i 3 numeri\n");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);

        if(a>0&&b>0&&c>0){
            if(a<(b+c)&&b<(a+c)&&c<(b+a)){
                if(a>(b-c)&&a>(c-b)){
                    bo=0;
                }
            }
        }
    }while(bo);



    if(a==b&&a==c&&b==c){
        printf("Triangolo equilatero\n");
    }else if(a!=b&&a!=c&&b!=c){
        printf("Triangolo scaleno\n");
        double a2=pow(a,2);
        double cb=pow(b,2)+pow(c,2);
        if(a2==cb){
            printf("Triangolo rettangolo\n");
        }
    }else if((a==b)||(a==c)||(b==c)){
        printf("Triangolo isoscele\n");
    }




    return 0;
}