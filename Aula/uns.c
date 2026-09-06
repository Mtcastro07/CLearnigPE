#include <stdio.h>

int calcular(int num, int pow){
    
    if(pow == 0){
        return 1;
    }

    if(pow == 1){
        return num;
    }
    if(pow > 1){
        return num * calcular(num, pow-1);
    } 
}


int contarDigitos(int n, int res){
    if(n>0){
        res++;
        n /= 10;
        return contarDigitos(n,res);
    }
    if(res == 0 && n < 10){
        return n;
    }else{
        return res;
    }
}

int uns(int n, int um, int exp){
    if(um%n == 0){
        return contarDigitos(um,0);
    }else{
        return um += calcular(10,exp);
    }
}

int main(){
    int n = 3;
    printf("%i",uns(3,1,1));
}


