#include <iostream>
#include <tuple>
#include "linked_list.hpp"

using namespace std;

int main(){

  linked_list a;
  a.addfront(make_tuple(2,3,1.3));
  cout << get<0>(a.front()) << endl;

}
