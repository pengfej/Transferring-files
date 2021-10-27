#include <iostream>
#include <tuple>

using namespace std;


class StringNode{
private:
  tuple <int, int, double> elem;
  StringNode* next;

  friend class linked_list;
};

class linked_list{
public:
  linked_list();
  ~linked_list();
  bool empty() const;
  const tuple <int, int, double> front() const;
  void addfront(const tuple<int, int, double>);
  void removefront();
private:
  StringNode* head;
};

linked_list::linked_list()
: head(NULL) { }


linked_list::~linked_list()
{ while ( ! empty ( ) ) removefront();}



bool linked_list::empty() const
{return head == NULL; }


const tuple <int, int, double> linked_list::front() const
{return head -> elem; }


void linked_list::addfront(const tuple<int, int, double> e)
{
  StringNode* v = new StringNode;
  v -> elem = e;
  v -> next = head;
  head = v;
}


void linked_list::removefront()
{
  StringNode* old = head;
  head = old -> next;
  delete old;
}
