#include <iostream>
int minus(int a,int b){
	return a -= b;
}
int plus(int a, int b){
	return a +=b;
}
int  mnog(int a,int b){
	return a *=b;
}
int main(){
	int a = 1000000, b = 1;
	std::cout << "Hello, it`s plus-minus program!" << std::endl;
	for (int i = 1; i <= 2048; i++){

	std::cout << "Result program:"<<mnog(i,i) <<std::endl;
	}
	return 0;
}
