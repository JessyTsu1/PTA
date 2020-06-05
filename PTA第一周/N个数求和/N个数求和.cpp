#include stdio.h
#include stdlib.h
#include string.h
int fun(int a,int b){
    if(a==0)    
        return b;
    else 
        return fun(b%a,a);
}
int main(){
    int a[110],b[110],i,j,numer,denom,cjx,tem,n;
    while(scanf(%d,&n)!=EOF){
        cjx=0;
        for(i=0; in; i++)
            scanf(%d%d,&a[i],&b[i]);
        numer=0;
        denom=1;
        for(i=0; in; i++){
            tem=fun(denom,b[i]);
            numer=numer(b[i]tem)+a[i](denomtem);
            denom=(denomtem)b[i];
            cjx=cjx+numerdenom;   
            numer=numer-(numerdenom)denom;
            tem=numer0numer(-numer);  
            j=fun(tem,denom);
            numer=numerj;
            denom=denomj;
        }
        if(numer == 0) 
            printf(%dn,cjx);
        if(cjx==0 && numer!=0)  
            printf(%d%dn,numer,denom);
        if(cjx != 0 && numer!=0) 
            printf(%d %d%dn,cjx,numer,denom);
    }
    return 0;
}
