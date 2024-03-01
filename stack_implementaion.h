#pragma once
#include <string>
template<class Type> stackADT<Type>::stackADT(int x)
{
     stacktop = 0;
    list = new Type[max_size];
    for (int i = 0 ; i < x ; i++)
    {
        cout<<"enter the stack["<<i+1<<"] ";
        cin>>list[i];
        stacktop++;
    }

}
template<class Type> void stackADT<Type>::intialize()
{
  
}
template <class Type> bool stackADT<Type>::isfull()
{
    return (stacktop == max_size);
}
template <class Type> bool stackADT<Type>::isempty()
{
    return (stacktop == 0);
}
template <class Type> void stackADT<Type>::puch(const Type &newitem)
{
if (!isfull())
 {
    list[stacktop] = newitem;
    stacktop++;
 }
 else 
 cout<<" omar";

}
template <class Type> void stackADT<Type>::pop()
{
 if (!isempty())
  stacktop--;
  else 
  cout<<"r u kidding me idotic check ur size first then try again";
}
template <class Type> void stackADT<Type>::display()
{
 if (stacktop == 0)
 cout<<"The stack is Empty \n";

 for(int i = 0 ;  i < stacktop ; i++)
 cout<<list[i]<<" ";
}
template <class Type> void stackADT<Type>::TraverseStack()
{
    for(int i = stacktop-1 ; i >= 0 ;i-- )
    {
        cout<<list[i]<<" ";
    }
}
template <class Type> void stackADT<Type>::reverse()
{

}
template <class Type> void stackADT<Type>::ClearStack()
{

    stacktop = 0;
    cout<<"The Stack is Cleared successfully \n";
}
template <class Type> int stackADT<Type>::stack_size()
{
return stacktop;
}
template <class Type> Type stackADT<Type>::top()
{
   return list[stacktop];
}
template <class T> bool equivlante ( const stackADT<T>&  other , const stackADT<T>& seconde)
{

for(int i = 0  ; i < max(other.stacktop,seconde.stacktop) ; i++)
{
    if (other.list[i] != seconde.list[i])
    return false;
}
 return true;

}
template <class Type> void stackADT<Type>::copystack(const stackADT<Type>& other)
{
 max_size = other.max_size;
 stacktop = other.stacktop;
 list = new Type[max_size];
 for (int i = 0 ; i < stacktop ; i++)
 {
    list[i] = other.list[i];
 }
}
template <class Type> stackADT<Type>::stackADT(const stackADT<Type>& stack)
{

    copystack(stack);
}
template <class Type> stackADT<Type>::~stackADT()
{
    delete [] list;

}
