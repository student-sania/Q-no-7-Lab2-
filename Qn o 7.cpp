# include<iostream>
using namespace std;
int main (){
    int index;
    int size;
    cout << " Enter size: ";
    cin >> size;
    int items[size];
    for (int i=1; i<=size; i++){
        cin >> items[i];
    }    
    cout << " Enter index: ";
    cin >> index;
    if ( index <= size){
        for (int i=1; i<=size; i++){
            if(i >= index){
                items[i] = items[i+1];
                if (i == size){
                    break;
                }    
            }
            cout << items[i] << " ";
        }
    }
    else{
        cout << "Index is out of Bound.Element Cannot be delete" <<endl;
        
    }  
    return 0;
    
}