#include<iostream>

using namespace std;

template <class T>
void Lsearch(T *a, T item, int n)
{
        int z=0;
        for(int i=0;i<n;i++)
        {
                if(a[i]== item)
                {
                        cout<<"\nItem found at position = "<<i+1<<"\n";
                        z=1;
                        return;
                }
        }
        cout<<"\nElement Not Found!\n";
}
int main()
{
        int arrayInt[10] = {2,42,56,86,87,99,323,546,767,886};
        double arrayDouble[6]= {2.4, 5.53,44.4, 54.45, 65.7,89.54};
        char arrayChar[5]={'c','o','d','e'};
        int itemI;
        double itemD;
        char itemC;
        cout<<"Elements of Integer Array:\n";
        for(int i=0;i<10;i++)
        {
                cout<<arrayInt[i]<<" ";
        }
        cout<<"\nEnter an item to be searched: ";
        cin>>itemI;

        cout<<"\nLinear Search Method is being implemented..\n";
        Lsearch(arrayInt,itemI,10);

        cout<<"\nElements of Double Array:\n";
        for(int i=0;i<6;i++)
        {
                cout<<arrayDouble[i]<<" ";
        }
        cout<<"\nEnter an item to be searched: ";
        cin>>itemD;

        cout<<"\n\nLinear Search Method is being implemented..\n";
        Lsearch(arrayDouble,itemD,6);

        cout<<"\nElements of character Array:\n";
        for(int i=0;i<4;i++)
        {
                cout<<arrayChar[i]<<" ";
        }
        cout<<"\nEnter an item to be search: ";
        cin>>itemC;

        cout<<"\n\nLinear Search Method is being implemented..\n";
        Lsearch(arrayChar,itemC,4);
        return 0;
}
