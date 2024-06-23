#include <iostream>
#include <set>
using namespace std;
int main()
{
   set<int>s;

   s.insert(1); 
   s.insert(2); 
   s.insert(2); 
   s.insert(3);


   for(auto it:s)
   {
      cout<<it<<" ";
   }

   cout<<endl;

   for(auto i=s.rbegin();i != s.rend(); i++)
   {
         cout << *i << " ";
   }
   cout<<endl;

   cout<<"Lower and Uppper Bound "<<endl;

   cout<<"Lower bound of 2: "<<*s.lower_bound(2)<<endl;
   cout<<"lower bound of 3: "<<*s.lower_bound(3)<<endl;
   cout<<"Upper bound of 3: "<<*s.upper_bound(3)<<endl;
   cout<<"Upper bound of 5: "<<(s.upper_bound(5)==s.end())<<endl;



   cout <<"Custom Comparator ";
   set<int,greater<int>> s1;

   s1.insert(1);
   s1.insert(2);
   s1.insert(3);

   for(auto it:s1)
   {
      cout<<it<<" ";
   }
   cout<<endl;

   cout<<"Erased number 2 "<<endl;
   cout<<s1.erase(2);
   for(auto it:s1)
   {
      cout<<it<<" ";
   }



   return 0;  
}

