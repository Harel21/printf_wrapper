#include <stdio.h>
#include <stdlib.h>

void printf_longer(long long number){
	printf("%lld", number);
}

int main(){

	long long n = 1234567586987;
	printf_longer(n);

	return 0;
}