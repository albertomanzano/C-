#include <iostream>
#include <vector>
#include "template_clases.cpp"
using namespace std;

int main(){
vector<int> v1(4,0);// 0 0 0 0
// cout<<v1.size()<<endl;
for (int i=0;i<4;i++) v1[i] = i+2;
//for (int i=0;i<4;i++) cout<<v1[i]<<endl;

// iterador
vector<int>::iterator it;
for (it = v1.begin();it!=v1.end();it++) cout<<*it<<endl;

// copias
vector<double> v2(4,2.5);
vector<double> v3(v2);
v3.resize(10);

// clases propias
vector<Punto<float>> v4(2);
vector<Punto<float>>::iterator it4;
for(it4 = v4.begin();it4!=v4.end();it4++)
	cout<<it3->getx()<<endl;

}
