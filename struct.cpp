#include<iostream>
using namespace std;
class digit {
	int n;
	public:
		void enter() {
			cout<<"enter thew value of n"<<endl;
			cin>>n;
		}
		void show() {
			cout<<"number = "<<n<<endl;
			
		}
		int compare(digit d2) {
			if(n<d2.n) {
				return -1;
			} else	if(n>d2.n) {
				return 1;
			}
			else return 0;
		}
};
int main() {
	digit d1,d2;
	cout<<"for first object"<<endl;
	d1.enter();
	cout<<"for second object"<<endl;
	d2.enter();
	d1.show();
	d2.show();
	
	int x=d1.compare(d2);
	
		if(x==-1) {
				cout<<"first object is smaller than second"<<endl;
		} else if(x==-1) {
							cout<<"first object is greater than second"<<endl;
		} 	else {
			cout<<"both objects are equal"<<endl;
		}
		return 0;
	}
	
	
	
	
