#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liste[82]={0};
    int a=0;
    int b=0;
    int c=0;
    int d,e,w=0; //sütun numarasi ve satir numarasi
    int d1=0;
    int e1=1;
    int f=0;
    int j,k;
    int p,s,i,v,a1,a2,a3,a4;
    int x = 1;
    int x2 = 0;
    int t[] = {1,2,3,4,5,6,7,8,9};
    int r = 0;
    int y = 0;
    int z = 0;
    int sayi_list_1[9]={0};
    int sayi_list_2[9]={0};
    int sayi_list_3[9]={0};
    int karakter_sirasi;
    printf("Girilecek rakam sayisi");
    scanf("%d",&c);
    while(b<c){
        printf("sütun numarasi:");
        scanf("%d",&d);
        printf("satir numarasi:");
        scanf("%d",&e);
        printf("deger:");
        scanf("%d",&w);
        karakter_sirasi=(e-1)*9+d;
        liste[karakter_sirasi]= w;
        b += 1;
    }
    while(!x==0){
    for(i=1;i<82;i++){
        p = liste[i];
        if(d1 == 9){
            e1 +=1;
            d1 = 0;
        }
        d1 += 1;
        if(p == 0){
            for(f=0;f<9;f++){
                j = f*9+d1;
                sayi_list_1[f]=liste[j];
            }
            for(f=0;f<9;f++){
                k = (e1-1)*9+f+1;
                sayi_list_2[f]=liste[k];
            }
            f=0;
            while(f==0){
                if(d1/4==0){
                    a1 = 1;
                }
                else if(d1/7==0){
                    a1 = 2;
                }
                else if(d1/10==0){
                    a1 = 3;
                }
                if(e1/4==0){
                    a2 = 1;
                }
                else if(e1/7==0){
                    a2 = 2;
                }
                else if(e1/10==0){
                    a2 = 3;
                }
                f=1;
            }
            f=0;
            while(f==0){
                a3 = a1 - 1;
                a4 = a2 - 1;
                sayi_list_3[0]=liste[(a3*27)+(a4*3)+1];
                sayi_list_3[1]=liste[(a3*27)+(a4*3)+2];
                sayi_list_3[2]=liste[(a3*27)+(a4*3)+3];
                sayi_list_3[3]=liste[(a3*27)+(a4*3)+10];
                sayi_list_3[4]=liste[(a3*27)+(a4*3)+11];
                sayi_list_3[5]=liste[(a3*27)+(a4*3)+12];
                sayi_list_3[6]=liste[(a3*27)+(a4*3)+19];
                sayi_list_3[7]=liste[(a3*27)+(a4*3)+20];
                sayi_list_3[8]=liste[(a3*27)+(a4*3)+21];
                f = 1;
            }
            for(f=1;f<10;f++){
                for(r=0;r<9;r++){
                    s = sayi_list_1[r];
                    if(s == f){
                        t[f-1] = 0;
                    }
                }
                for(r=0;r<9;r++){
                    s = sayi_list_2[r];
                    if(s == f){
                        t[f-1] = 0;
                    }
                }
                for(r=0;r<9;r++){
                    s = sayi_list_3[r];
                    if(s == f){
                        t[f-1] = 0;
                    }
                }
            }
            for(y=0;y<9;y++){
                if(!t[y]==0){
                    z += 1;
                }
            }
            if(z==1){
                for(v=0;v<9;v++){
                    if(!t[v]==0){
                        liste[i] = t[v];
                        printf("bulundu");
                    }
                }
            }
            t[0] = 1;
            t[1] = 2;
            t[2] = 3;
            t[3] = 4;
            t[4] = 5;
            t[5] = 6;
            t[6] = 7;
            t[7] = 8;
            t[8] = 9;
            sayi_list_1[0] = 0;
            sayi_list_1[1] = 0;
            sayi_list_1[2] = 0;
            sayi_list_1[3] = 0;
            sayi_list_1[4] = 0;
            sayi_list_1[5] = 0;
            sayi_list_1[6] = 0;
            sayi_list_1[7] = 0;
            sayi_list_1[8] = 0;
            sayi_list_2[0] = 0;
            sayi_list_2[1] = 0;
            sayi_list_2[2] = 0;
            sayi_list_2[3] = 0;
            sayi_list_2[4] = 0;
            sayi_list_2[5] = 0;
            sayi_list_2[6] = 0;
            sayi_list_2[7] = 0;
            sayi_list_2[8] = 0;
            sayi_list_3[0] = 0;
            sayi_list_3[1] = 0;
            sayi_list_3[2] = 0;
            sayi_list_3[3] = 0;
            sayi_list_3[4] = 0;
            sayi_list_3[5] = 0;
            sayi_list_3[6] = 0;
            sayi_list_3[7] = 0;
            sayi_list_3[8] = 0;
            z = 0;
            for(a = 0 ; a<9;a++){
                printf("%d,%d\n",a+1,sayi_list_1[a]);
            }
            for(a = 0 ; a<9;a++){
                printf("%d,%d\n",a+1,sayi_list_2[a]);
            }
            for(a = 0 ; a<9;a++){
                printf("%d,%d\n",a+1,sayi_list_3[a]);//kare içerisinde taramada sorun var neden kaynaklandigi bilinmiyor
            }
         }
    }
    for(a=1; a<82;a++){
        if(liste[a]==0){
            x2 += 1;
        }
    }
    if(x2==0){
        x = 0;
    }
    if(!x2==0){
        x2 = 0;
    }
    }
    for(a = 1 ; a<82;a++){
        printf("%d ",liste[a]);
        if(a%27==0){
            printf("\n");
        }
        if(a%9==0){
            printf("\n");
        }
        else if(a%3==0){
            printf("  ");
        }
    }
    return 0;
}
