#include <iostream>
#include <vector>

using namespace std;


class stringnode{
    
friend class stringlist;
 
private:
    
    stringnode* next;
    string elem;
};


class stringlist{
 
public: 
    stringlist();
    ~stringlist();
    
    bool empty();
    const string& front() const;
    
    void addfront(const string& e);
    void removefront();
    
private: 
    
    stringnode* head;
    
};

stringlist::stringlist()
: head(NULL) { }

stringlist::~stringlist()
{while (!empty()) removefront(); }

bool stringlist::empty()
{return head == NULL;}

const string& stringlist::front() const
{return head -> elem;}

void stringlist::addfront(const string& e){
 
    stringnode* v = new stringnode;
    v -> elem = e;
    v -> next = head;
    head = v;
    
}

void stringlist::removefront(){
 
    stringnode* old = head;
    head = old -> next;
    delete old;
    
}


int main(){

    stringlist a;
    a.addfront("temp");
    cout << a.front() << endl;
    
}
