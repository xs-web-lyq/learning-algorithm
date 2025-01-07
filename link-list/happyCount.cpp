#include <iostream>
using namespace std;
    int GetNext(int n){
        int x,y;
        int z = 0;
        while(n){
            x = n%10;
            z = z + x * x;
            n = n/10;
        }
        return z;
    }
    bool isHappy(int n) {
        int p = n;
        int q = n;
        do {
            p = GetNext(p);
            q = GetNext(GetNext(q));
        }while(p != q && q != 1);
        if(q==1) return true;
        return false;
    }



int main(){
	int sum = 0;
	int n = 100000;
	while(n--){
		if(isHappy){
			sum += n;
		}
	}
	bool flag = isHappy(2);
	cout << sum;
	return 0;
}
