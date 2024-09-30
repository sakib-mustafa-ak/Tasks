#include <bits/stdc++.h>
using namespace std;
struct Stack
{
    int top, mx = -1;
    char webPage[101][50];
};

typedef struct Stack st;

void createStack(st *s)
{
    s->top = 0;
    s->mx = 0;
    strcpy(s->webPage[s->top], "http://www.lightoj.com/");
}

void visitWeb(st *s, char *web)
{
    strcpy(s->webPage[++s->top], web);
    s->mx = s->top;
    cout << web << endl;
}

void backPage(st *s)
{
    if (s->top == 0)
        cout << "Ignored" << endl;
    else
        cout << s->webPage[--s->top] << endl;
}

void forwardPage(st *s)
{
    if (s->top == s->mx)
        cout << "Ignored" << endl;
    else
        cout << s->webPage[++s->top] << endl;
}

signed main()
{
    int t, tc = 1;
    cin >> t;
    while (tc <= t)
    {
        cout << "Case " << tc << ":" << endl;
        char ss[10];
        st stack;
        createStack(&stack);
        while (cin >> ss)
        {
            if (strcmp(ss, "VISIT") == 0)
            {
                char web[50];
                cin >> web;
                visitWeb(&stack, web);
            }
            else if (strcmp(ss, "BACK") == 0)
                backPage(&stack);
            else if (strcmp(ss, "FORWARD") == 0)
                forwardPage(&stack);
            else if (strcmp(ss, "QUIT") == 0)
            {
                tc++;
                break;
            }
        }
    }
}
