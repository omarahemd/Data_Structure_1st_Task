#include <iostream>
using namespace std;
template<class Type>
class stackADT
{
    private:
    Type *list;
    int max_size;
    int stacktop ; 
    void copystack(const stackADT<Type>&);
    public:
    bool isempty();
    bool isfull();
    void intialize_int();
    void intialize_string();
    void display();
    void puch(const Type &newitem);
    void pop();
    Type top();
    void TraverseStack();
    void reverse();
    int stack_size();
    void ClearStack();
    template <class T> friend bool equivlante(  const stackADT<T> &one ,const stackADT<T> &so );// "ooerator =="
    stackADT(int);
    stackADT(const stackADT<Type>&);
    ~stackADT();
};