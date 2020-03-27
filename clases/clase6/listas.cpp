#include <iostream>
#include <list>
using namespace std;

void mostrar(list<int> &lista){
	list<int>::iterator it;
	for (it = lista.begin();it!=lista.end();it++) cout<<*it<<endl;
}
int main(){
list<int> list1,list2;
list<int>::iterator it;
for (int i = 0;i<10;i++) list1.push_back(i+1);
for (int i = 0;i<10;i++) list2.push_front(i+1);

cout<<"Mostrando la lista 1"<<endl;
mostrar(list1);
cout<<"Mostrando la lista 2"<<endl;
mostrar(list2);


// ordenar

cout<<"Mostrando la lista 2 ordenada"<<endl;
list2.sort();
mostrar(list2);

// borrar
cout<<"Mostrando la lista borrando cinco posiciones"<<endl;
int veces = 5;
while (veces--) list1.pop_front();
mostrar(list1);

// primero ultimo
cout<<"Primer elemento de la lista: "<<list1.front()<<endl;
cout<<"Ultimo elemento de la lista: "<<list1.back()<<endl;

// insertar
cout<<"Insertando en la posicion 5 de la lista 1 el numero 10"<<endl;
list1.insert(list1.begin(),5,10);
mostrar(list1);
list1.size();
list1.empty();

// Borrar
it = list1.begin();
it++;
list1.erase(it);
}
