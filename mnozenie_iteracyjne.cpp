#include <stdio.h>

int mnoz(int x, int y){
	int z = 0;
	for (int i = 1; i<=y; ++i){
		z += x;
	}
	
	return z;
}

int mnoz_rek(int x, int y){		//pierwsza wersja mnozenia rekurencyjnego
	if (y==1){
		return x;
	}else{
		return x+mnoz_rek(x, y-1);
	}
	
}

int mnoz_rek2(int x, int y){		//druga wersja mnozenia rekurencyjnego
	return (y==1) ? x : x + mnoz_rek(x, y-1);
}

int main(){
	int a=4, b=7, wynik;
	
	wynik = mnoz_rek2(a, b);	//lub pierwsza wersja wynik = mnoz_rek(a, b
	printf("%d * %d = %d\n", a, b, wynik);
	
	return 0;
}

