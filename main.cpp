#include "header.hpp"



int main(int argc, char *argv[])
{
    UNUSED(argc);
    UNUSED(argv);
    int op;
    string menu[5][2]={
        {"1", "Sell a Car"},
        {"2", "Add a Car"},
        {"3", "Today's sales"},
        {"4", "Catalog"},
        {"5", "Settings"}
        //6, search car by spec
    };
    while (1){
        cout<<companyName<<"\n";
        for (int i = 0; i < 5; i++)
        {
            cout<<menu[i][0]+": "+menu[i][1]<<"\n";
        }
        cout<<"You: ";
        cin>>op;
        operations[1];
    };
    return 0;
}