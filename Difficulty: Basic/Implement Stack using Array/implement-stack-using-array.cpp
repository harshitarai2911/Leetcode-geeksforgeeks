class myStack {
    int* arr;
    int size;
    int top;

public:
    myStack(int n) {
        size = n;
        top = -1;
        arr = new int[n];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void push(int x) {
        if (top == size - 1) {
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            return -1;
        }
        return arr[top];
    }
};