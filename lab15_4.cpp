#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int dangsenseipay[] = {a, b, c, d};
    int n = 4;
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(dangsenseipay[i], dangsenseipay[j]);
    }
    a = dangsenseipay[0];
    b = dangsenseipay[1];
    c = dangsenseipay[2];
    d = dangsenseipay[3];
}