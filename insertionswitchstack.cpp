#include<iostream>
using namespace std;
int main()
{
    stack<int> s;
    int ch, v;

    while (1) {
        cout << "\n1.Push 2.Pop 3.Display 4.Exit\n";
        cin >> ch;

        switch (ch) {
            case 1: // push
                cin >> v;
                s.push(v);
                break;

            case 2: // pop
                if (s.empty()) cout << "Underflow\n";
                else {
                    cout << "Popped: " << s.top() << endl;
                    s.pop();
                }
                break;

            case 3: // display
                if (s.empty()) cout << "Empty\n";
                else {
                    stack<int> t = s;   // copy to print
                    while (!t.empty()) {
                        cout << t.top() << " ";
                        t.pop();
                    }
                    cout << endl;
                }
                break;

            case 4: return 0;

            default: cout << "Invalid\n";
        }
    }
return 0;
}