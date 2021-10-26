LL::LL()
: head(NULL) { }


LL::~LL()
{ while ( ! empty ( ) ) removefront();}



bool LL::empty() const
{return head == NULL; }

//??

const tuple <int, int, double> LL::front() const
{return head -> elem; }




void LL::addfront(const tuple<int, int, double> e)
{
  StringNode* v = new StringNode;
  v -> elem = e;
  v -> next = head;
  head = v;
}


void LL::removefront()
{
  StringNode* old = head;
  head = old -> next;
  delete old;
}
