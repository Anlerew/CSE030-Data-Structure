#ifndef StringQueue_h
#define StringQueue_h
#include <string>
struct Link {
	// Provide your code here...
    std::string data;
    Link *link;
};
struct Queue{
    // Provide your code here...
    Link *front = NULL;
    Link *back = NULL;
    int isEmpty(){
        if(front == NULL)
            return 1;
        else
            return 0;
    }
    void push(std::string value){
        Link *ptr = new Link();
        ptr->data= value;
        ptr->link = NULL;
        if(front == NULL){
            front = ptr;
            back = ptr;
        }
        else{
            back->link = ptr;
            back = ptr;
        }
    }
    std::string pop(){
        Link *temp;
        std::string state = "";
        if(front == NULL)
        {
            state = "Empty...";
        }
        else
        {
            state = front->data;
            temp = front;
            front = front->link;
            delete(temp);
        }
        return state;
    }
    std::string peek(){
        std::string state;
        if(isEmpty() == 1){
            state = "Empty...";
        }
        else{
            state = front->data;
        }
        return state;
    }
    std::string rear(){
        std::string state;
        if(isEmpty() == 1){
            state = "Empty...";
        }
        else{
            state = back->data;
        }
        return state;
    }
};

#endif