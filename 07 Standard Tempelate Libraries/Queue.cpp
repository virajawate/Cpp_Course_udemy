#include <iostream>
#include <queue>

/*
    Adapter Container
    First IN First OUT
*/
using namespace std;

/*
num_q_in    := Enter a element in the queue from back.

num_q_out   := Remove the element from the queue from front.

num_q_view  := View the size of the queue, front and back.

num_q_all   := View the elements of the queue.

*/
queue<int> num_q_in(queue<int>, int);
void num_q_view(queue<int>);
void num_q_all(queue<int>);
queue<int> num_q_out(queue<int>);

int main()
{
    queue<int> numbers;
    int num = 0;
    char flag = 'r';
    char op = 'i';

    while (flag != 'q')
    {
        cout << "Enter Operation {i = input, o = delete, v = view top, a = view stack} :";
        cin >> op;
        if (op == 'i')
        {
            cout << "Enter Stack element... \n";
            cin >> num;
            numbers = num_q_in(numbers, num);
        }
        else if (op == 'o')
        {
            numbers = num_q_out(numbers);
        }
        else if (op == 'v')
        {
            num_q_view(numbers);
        }
        else if (op == 'a')
        {
            num_q_all(numbers);
        }
        else
        {
            cout << "Invalide Operation..." << endl;
        }
        cout << "Operation Complete.... \n Update Flag :" << endl;
        cin >> flag;
    }
}

queue<int> num_q_in(queue<int> nums, int x)
{
    cout << "Member input completed" << endl;
    nums.push(x);
    return nums;
}

queue<int> num_q_out(queue<int> nums)
{
    if (nums.empty())
    {
        cout << "Queue is empty...." << endl;
    }
    else
    {
        cout << nums.front() << " Elements out of the queue...." << endl;
        nums.pop();
        return nums;
    }
}

void num_q_view(queue<int> nums)
{
    if (nums.empty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Size of the queue is : " << nums.size() << endl;
        cout << "Queue Head :" << nums.front() << endl;
        cout << "Queue Back :" << nums.back() << endl;
    }
}

void num_q_all(queue<int> nums)
{
    if (nums.empty())
    {
        cout << "Queue is empty....\n";
    }
    else
    {
        cout << "Full Queue elements are : ";
        queue<int> viewqueue = nums;
        queue<int> swap_queue;
        for (int i = 0; i < nums.size(); i++)
        {
            cout << viewqueue.front() << "\t";
            viewqueue.pop();
        }
        swap_queue.swap(nums);
        cout << swap_queue.front() << endl;
        cout << "\nStack View Complete" << endl;
    }
}