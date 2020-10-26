#include <iostream>
#include<bits/stdc++.h>

using namespace std;
class Queue{
    int sizee=0;
    stack<int> s1,s2;
public:
    void enque(int x)
   {

    while(!s1.empty())
        {
            int r=s1.top();
            s2.push(r);
            s1.pop();
        }
    s1.push(x);
    sizee++;
    while(!s2.empty())
        {
            int y=s2.top();
            s1.push(y);
            s2.pop();
        }
   }

   void dequeu()
   {
       if(s1.empty()==true)
        printf("queue is empty\n");
       else
       {
           sizee--;
           int b=s1.top();
           s1.pop();
           printf("the deleted item is %d\n",b);
       }
   }
   int sizze()
    {
        return sizee;
    }


    };

int main()
{
    Queue q;
    q.enque(1);
    q.enque(2);

    cout << "current size: " << q.sizze()
         << endl;
    q.enque(3);
    q.dequeu();
    q.enque(4);

    cout << "current size: " << q.sizze()
         << endl;
    q.dequeu();
    q.dequeu();

    cout << "current size: " << q.sizze()
         << endl;
    q.dequeu();
    q.dequeu();
    return 0;
}
