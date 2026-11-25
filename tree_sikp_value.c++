
#include <iostream>
using namespace std;

int main() {

    int tree[10];

    for (int i = 0; i < 7; i++) {

        cout << "Enter a value (-1 for NULL): ";
        cin >> tree[i];

        if (tree[i] == -1) {
            cout << " NULL" << endl;
        }
    }

    cout << "\nTree Array: ";

    for (int i = 0; i < 7; i++) {
        if (tree[i] == -1)
            cout << "NULL ";
        else
            cout << tree[i] << " ";
    }

    return 0;
}


#include<iostream>
using namespace std;
int main(){
    int tree[10];
    for(int i=0;i<7;i++){

        cout<<"enter a value (-1 for null ):";
        cin>>tree[i];

        if(tree [i ]== -1){
            cout<<" null"<<endl;
    
        }
    }
    cout<<"\n tree array :";
    for(int i=0;i<7;i++){
        if(tree[i]==-1)
            cout<<"null ";
        else
            cout<<tree[i]<<" ";
    }
    cout<<endl;
    return 0;
}