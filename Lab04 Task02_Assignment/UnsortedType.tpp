#include<iostream>
#include"UnsortedType.h"
#include"StudentInfo.h"

template<class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length=0;
    currentPos=-1;
}
template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    length=0;
}
template<class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return(length==MAX_ITEMS);
}
template<class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}
template<class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos=-1;
}
template<class ItemType>
bool UnsortedType<ItemType>::GetNextItem(ItemType& item)
{
    if(currentPos<length-1)
    {
        currentPos++;
        item= info[currentPos];
        return true;
    }
    return false;
}
template<class ItemType>
bool UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool &found)
{
    int location=0;
    found= false;
    while((location<length)&&!found)
    {
        if(item==info[location])
        {
            found= true;
            item= info[location];
        }
        else
        {
            location++;
        }
    }
    return found;
}
template<class ItemType>
bool UnsortedType<ItemType>::InsertItem(ItemType item)
{
    if(!IsFull())
    {
        info[length]=item;
        length++;
        return true;
    }
    return false;
}
template<class ItemType>
bool UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    int flag=0;
    int location=0;
    while(location<length)
    {
        if(item==info[location])
        {
            flag=1;
            break;
        }
        location++;
    }
    if(flag==1)
    {
        info[location]=info[length-1];
        length--;
        return true;
    }
    return false;
}
template<class ItemType>
void UnsortedType<ItemType>::print()
{
    for(int i=0;i<length;i++)
    {
       std::cout<<info[i]<<" ";

    }
 ResetList();
}

