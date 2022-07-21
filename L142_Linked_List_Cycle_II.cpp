ListNode *detectCycle(ListNode *head) {
        
        if(head==nullptr) return nullptr;
        
        if(head->next == nullptr) return nullptr;
            
        
        auto p1 = head;
        auto p2 = head;
        
        while(p2 and p2->next){    
            p1 = p1->next;
            p2 = p2->next->next;
            if(p1==p2)
                break;
        }
        
        if(p2==nullptr) return nullptr;
        
        p2 = head;
        while(p2!=p1){
            if(p1->next==nullptr) 
                return nullptr;
            p2 = p2->next;
            
            p1 = p1->next;
        }
        
        return p2;
    }
