#include <bits/stdc++.h>
using namespace std;

int dqueue[11], front = -1, rear = -1;
// void printq()
// {
//     if (front == -1)
//         printf("\nQueue is Empty!!!");
//     else
//     {
//         int i;
//         printf("\nQueue elements are:\n");
//         for (i = front; i <= rear; i++)
//             printf("%d  ", dqueue[i]);
//     }
//     printf("\n");
// }
void push_Left(int n, int x)
{
    if (rear == n - 1)
        cout << "The queue is full\n";
    else
    {
        if (front == -1)
            front = 0;
        ++rear;
        for (int i = rear; i > 0; i--)
            dqueue[i] = dqueue[i - 1];
        dqueue[front] = x;
        printf("Pushed in left: %d\n", x);
    }
    // printq();
}

void push_Right(int n, int x)
{
    if (rear == n - 1)
        cout << "The queue is full\n";
    else
    {
        if (front == -1)
            front = 0;
        dqueue[++rear] = x;
        printf("Pushed in right: %d\n", x);
    }
    // printq();
}

void pop_Left()
{
    if (front == -1)
        cout << "The queue is empty\n";
    else
    {
        printf("Popped from left: %d\n", dqueue[front]);
        --rear;
        for (int i = 0; i <= rear; i++)
            dqueue[i] = dqueue[i + 1];

        if (rear == -1)
            front = -1;
    }
    // printq();
}

void pop_Right()
{
    if (front == -1)
        cout << "The queue is empty\n";
    else
    {
        printf("Popped from right: %d\n", dqueue[rear]);
        --rear;
        if (rear == -1)
            front = -1;
    }
    // printq();
}

int main()
{
    int t, x;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        printf("Case %d:\n", tc);
        int n, m;
        cin >> n >> m;

        while (m--)
        {
            string s;
            cin >> s;
            if (s == "pushLeft" || s == "pushRight")
            {
                cin >> x;
                if (s == "pushLeft")
                    push_Left(n, x);
                else
                    push_Right(n, x);
            }
            else
            {
                if (s == "popLeft")
                    pop_Left();
                else
                    pop_Right();
            }
        }
    }
}