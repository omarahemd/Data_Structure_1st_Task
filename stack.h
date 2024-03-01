#include <iostream>
using namespace std;
template<class Type>
class stackADT
{
    private:
    Type *list;
    int max_size = 100;
    int stacktop ; 
    void copystack(const stackADT<Type>&);
    public:
    bool isempty();
    bool isfull();
    void intialize();
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