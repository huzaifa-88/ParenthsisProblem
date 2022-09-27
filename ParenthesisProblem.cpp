#include <stack>
#include <iostream>
using namespace std;

bool isStringTrue(char array[10]);
main()
{
    const int max = 10;
    string input;
    cout << "Enter input:";
    cin >> input;
    char array[max];
    for (int i = 0; i < input.length(); i++)
    {
        array[i] = input[i];
    }
    bool isFound = isStringTrue(array);

    cout << "Given string is " << isFound;
}

bool isStringTrue(char array[10])
{
    int max = 10;
    stack<char> a;
    for (int i = 0; i < max; i++)
    {
        if (array[i] == '(')
            a.push('(');
        else if (array[i] == '{')
            a.push('{');
        else
            a.push('[');

        if (a.top() == '(' && (array[i] == '(') && array[i + 1] == ')')
        {
            a.pop();
            return true;
        }
        else
        {
            return false;
        }
        if (a.top() == '[' && (array[i] == '[') && array[i + 1] == ']')
        {
            a.pop();
            return true;
        }
        else
        {
            return false;
        }
        if (a.top() == '{' && (array[i] == '{') && array[i + 1] == '}')
        {
            a.pop();
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}
