#include <iostream>
#include <stack>

/*  Adapter Container
    Late IN Frist OUT
*/

using namespace std;

/*
stack_in    := Enter a element in the stack from front.

stack_out   := Remove the element from the stack from front.

stack_view  := View the size of the stack and front element.

stack_all   := View the elements of the stack.

*/

stack<int> stack_in(stack<int>, int);
void stack_out(stack<int>);
void stack_view(stack<int>);
void stack_all(stack<int>);

int main()
{
    stack<int> Number_stack;
    int num_in = 0;
    char flag = 'r';
    char op = 'i';
    while (flag != 'q')
    {
        cout << "Enter Operation {i = input, o = delete, v = view top, a = view stack} :";
        cin >> op;
        if (op == 'i')
        {
            cout << "Enter Stack element... \n";
            cin >> num_in;
            Number_stack = stack_in(Number_stack, num_in);
        }
        else if (op == 'o')
        {
            stack_out(Number_stack);
        }
        else if (op == 'v')
        {
            stack_view(Number_stack);
        }
        else if (op == 'a')
        {
            stack_all(Number_stack);
        }
        else
        {
            cout << "Invalide Operation..." << endl;
        }
        cout << "Operation Complete.... \n Update Flag :" << endl;
        cin >> flag;
    }
    cout << "Program Complete\n";
    return 0;
}

stack<int> stack_in(stack<int> numbers, int x)
{
    cout << "Member input completed" << endl;
    numbers.push(x);
    return numbers;
}

void stack_out(stack<int> numbers)
{
    if (numbers.empty())
    {
        cout << "Stack is empty....\n";
    }
    else
    {
        numbers.pop();
    }
}

void stack_view(stack<int> numbers)
{
    if (!numbers.empty())
    {
        cout << "Size of the stack is : " << numbers.size() << endl;
        cout << "Stack Head :" << numbers.top() << endl;
    }
    else
    {
        cout << "Stack is empty\n";
    }
}

void stack_all(stack<int> numbers)
{
    if (numbers.empty())
    {
        cout << "Stack is empty....\n";
    }
    else
    {
        cout << "Full stack elements are : ";
        stack<int> viewstack = numbers;
        stack<int> swapstack;
        for (int i = 0; i < numbers.size(); i++)
        {
            cout << viewstack.top() << "\t";
            viewstack.pop();
        }
        swapstack.swap(numbers);
        cout << swapstack.top() << endl;
        cout << "\nStack View Complete" << endl;
    }
}