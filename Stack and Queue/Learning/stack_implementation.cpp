
void MyStack :: push(int x)
{
    // Your Code
        top++;
        arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code 
    if(top==-1){
        return -1;
    }
    int ele = arr[top] ;
    top--;
    return ele;
}