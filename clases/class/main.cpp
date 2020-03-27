#include <iostream>
#include "individuo.h"
using namespace std;

int main(){
Individuo uno;
cout<<uno.get_speed()<<endl;
uno.set_speed(30.0);
cout<<uno.get_speed()<<endl;
}
