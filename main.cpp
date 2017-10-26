/*
CH08-320143
a6_p2.cpp
Oana Miron
o.miron@jacobs-university.de
*/
#include <iostream>
#include <sstream>
using namespace std;

class Test {
	private:
		int *a;
		int n;
	public:
		Test() {
			a=NULL;
			n=0;
		}
		Test(int *a, int n) {
			this->n = n;
			if (this->a != NULL) {
				delete this->a;
			}
			this->a = new int[n];
			for(int i=0; i<n; i++)
				this->a[i] = a[i];
		}
		string toString() {
			ostringstream ss;
			ss << "Length: " << n << endl << "Elements: ";
			for(int i=0; i<n; i++)
				ss << a[i] << " ";
			ss << endl;
			return ss.str();
		}
		~Test() {
			delete a;
		}
};

int main() {
	Test arr[5];
	int v[3] = {1, 2, 3};
	Test *obj1;
	obj1=&arr[0];
	Test *obj2=new Test(v, 3);
	Test *obj3=new Test();//before was just Test *obj3;
	cout << obj1->toString();
	cout << obj2->toString();
	cout << obj3->toString();
	delete obj1;
	delete obj2;
	delete obj3;
	return 0;
}
/*
By running the debugger I noticed that I have no problem printing the first two objects.
However, for the third object you couldn't access the memory since it was used uninitialized.
The commands I used
b 49
b 50
b 51
b 32
b 33
b 35
run
c
p n
c
c
c
p n
p a[0]
p a[1]
p a[2]
c
c
c
c
c
c
p n// it cannot access memory meaning that it wasn't initialized
*/
