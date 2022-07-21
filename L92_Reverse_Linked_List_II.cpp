/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void vout(vector<int> data){
        cout<<"data in vector ";
        for(int t:data){
            cout<<t<<"\t";
        }
        cout<<endl;
    }
    void sout(stack<int> st){
        cout<<"stack value";
        while(!st.empty()){
            cout<<st.top()<<"\t";
            st.pop();
        }
        cout<<endl;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int> stk;
        vector<int> data;
        int index=1;
        
        while(head!=nullptr){
            //cout<<"index "<<index<<"\n";
            if(index<left){
                data.push_back(head->val);
            }
            if(index>=left and index<=right){
                stk.push(head->val);
                //cout<<"in stack pushing val "<<head->val<<"\t";
            }
            if(index>right){
                data.push_back(head->val);
            }
            head=head->next;
            index++;
            
        }
        //sout(stk);
        index = left-1;
        while(!stk.empty()){
            data.insert(data.begin()+index,stk.top());
            stk.pop();
            index++;
        }
        
        int i = data.size()-1;
        ListNode *head1 = new ListNode();
        head1 -> val = data[i];
        i--;
        while(i >= 0){
            ListNode* new_node = new ListNode();
            new_node -> val = data[i];
            new_node -> next = head1;
            head1 = new_node;
            i--;
        }
        
        return head1;
    }
};
