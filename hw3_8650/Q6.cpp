#include <iostream>

typedef std::string Elem;

class CNode {
    
private: Elem elem;
CNode* next;

friend class CircleList;
    
};

class CircleList {
 
public: 
    
    CircleList();
    ~CircleList();
    
    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;
    
    void advance(); // move cursor to the next element.
    void add(const Elem& e);
    
    void remove(); // remove a node after cursor.
    
private:
    
    CNode* cursor;
    
};

CircleList::CircleList()
: cursor(NULL) { }


CircleList::~CircleList()
{while (!empty()) remove();};


bool CircleList::empty() const
{return cursor == NULL; }

const Elem& CircleList::back() const
{return cursor -> elem; }

const Elem& CircleList::front() const
{return cursor -> next -> elem; }

void CircleList::advance()
{cursor = cursor -> next; }

void CircleList::add(const Elem& e){
    
 CNode* v = new CNode;
 v -> elem = e;
 
 if (cursor == NULL){
  v -> next = v;
  cursor = v;
 } else {
  v -> next = cursor -> next;
  cursor -> next = v;
 }
    
}

void CircleList::remove(){
    
    
    CNode* old = cursor -> next;
    if (old == cursor)
        cursor = NULL;
    else 
        cursor -> next = old -> next;
        delete old;
    
}



int main(){
    
 CircleList playList;
 
 playList.add("temp1");
 playList.add("temp2");
 playList.add("temp3");
 playList.add("temp4");
 
 /*
 
 std::cout << playList.front() << std::endl;
 std::cout << "The end is : " << playList.back() << std::endl;
 
 playList.advance();
 
 std::cout << "after 1 advance() " << std::endl;
 
 
 std::cout << playList.front() << std::endl;
 std::cout << "The end is : " << playList.back() << std::endl;
 
 */
 
 playList.add("mark");
 
 playList.advance();
 int counter = 0;
 while (playList.front() != "mark"){
     playList.advance();
     counter += 1;
 }
     
 std::cout << counter << std::endl;
 
    
}
