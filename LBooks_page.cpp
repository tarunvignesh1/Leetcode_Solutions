//Questions below
/*The Amazon Kindle Store is an online e-book store where readers can choose a book from a wide range of categories. It also provides the ability to bookmark pages the user wishes to return to later. A book is represented as a binary string having two types of pages:

'0': an ordinary page
'1': a bookmarked page

Find the number of ways to select 3 pages in ascending index order such that no two adjacent selected pages are of the same type.

Example

book = '01001'

The following sequences of pages match the criterion:

[1, 2 ,3], that is, 01001 → 010.
[1, 2 ,4], that is, 01001 → 010.
[2, 3 ,5], that is, 01001 → 101.
[2, 4 ,5], that is, 01001 → 101.

The answer is 4. */

// Brute force method

#include<bits/stdc++.h>

using namespace std;


int no_books(string book){
    
    int res=0;
    
    for(int i=0;i<book.size();i++)
    {
        int j=i+1,k=j+1;
        while(j<book.size()){
            k=j+1;
            if(book[i]!=book[j]){
                
                while(k<book.size()){

                        if(book[j]!=book[k]){
                            cout<<"i: "<<i<<" val: "<<book[i]<<"\t";
                            cout<<"j: "<<j<<" val: "<<book[j]<<"\t";
                            cout<<"k: "<<k<<" val: "<<book[k]<<endl;
                            res++;
                            k++;
                        }
                        else{
                            k++;
                        }
                }
                j++;
            }

            else{
                j++;
            }
        }
    }
    return res;
}


int main() {
    string book1 = "110110110101010100001010111001";
    cout<<no_books(book1)<<endl;
    return 0;
}
