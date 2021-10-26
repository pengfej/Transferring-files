#include <iostream>
#include <tuple>

using namespace std;

class LL;

class StringNode{
private:
  //E i,j,k;
  //int elem;
  tuple <int, int, double> elem;
  StringNode* next;

  friend class LL;
};


class LL{
public:
  LL();
  ~LL();
  bool empty() const;
  const tuple <int, int, double> front() const;
  void addfront(const tuple<int, int, double>);
  void removefront();
private:
  StringNode* head;
};
