#include <iostream>
#include <vector>
using namespace std;
int main()
{
        char star='*';
        unsigned  int i,j;
        vector <vector <char> >starm;
        //        do{
        cout<< "Enter rows and columns of stars:"<<endl;
        cin>>i;
        cin>>j;
        //          } while (i<0 && j<0);
        if (i>0 && j>0)
        {
                starm.resize(i);
                for(int row=0; row<starm.size();row++)
                {
                        starm[row].resize(j);

                        for(int column=0; column<starm[row].size();column++)
                        {
                                cout<< star;
                        }
                        cout<<endl;
                }
        }
        return 0;
}
