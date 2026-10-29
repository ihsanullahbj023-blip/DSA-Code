
#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;


// Function to determine precedence
int precedence(char ch)
{
    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}


int main()
{
    // /////////////////////////////////////////////////////////////////
    // Step 1 : Push ( onto STACK and add ) to the end of IE.
    // /////////////////////////////////////////////////////////////////

    // IMPORTANT:
    // Do not put the final ')' here because the algorithm
    // will add it automatically.
    string IE = "A+B*(C-D";

    stack<char> STACK;
    string PE = "";

    STACK.push('(');
    IE = IE + ")";

    // The IE, STACK, and PE will be:
    //
    // IE    = A+B*(C-D)
    // STACK = (
    // PE    = empty


    /////////////////////////////////////////////////////////////////////////
    // Step 2 : Scan IE from left to right.
    /////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < IE.length(); i++)
    {
        char ch = IE[i];


        //////////////////////////////////////////////////////////////////
        // Step 3 : If an operand is encountered, add it to PE.
        // Operands are usually letters or numbers.
        //////////////////////////////////////////////////////////////////

        if (isalnum(ch))
        {
            PE = PE + ch;
        }


        //////////////////////////////////////////////////////////////////
        // Step 4 : If a left parenthesis ( is encountered,
        // push it onto STACK.
        //////////////////////////////////////////////////////////////////

        else if (ch == '(')
        {
            STACK.push(ch);
        }


        //////////////////////////////////////////////////////////////////
        // Step 5 : If an operator is encountered:
        //
        // (a) Pop operators from STACK that have equal or
        //     higher precedence and add them to PE.
        //
        // (b) Push the current operator.
        //////////////////////////////////////////////////////////////////

        else if (ch == '+' || ch == '-' ||
                 ch == '*' || ch == '/' || ch == '^')
        {
            while (STACK.top() != '(' &&
                   precedence(STACK.top()) >= precedence(ch))
            {
                PE = PE + STACK.top();
                STACK.pop();
            }

            STACK.push(ch);
        }


        //////////////////////////////////////////////////////////////////
        // Step 6 : If a right parenthesis ) is encountered:
        // Keep popping until ( is found.
        //////////////////////////////////////////////////////////////////

        else if (ch == ')')
        {
            while (STACK.top() != '(')
            {
                PE = PE + STACK.top();
                STACK.pop();
            }

            // Remove '('
            STACK.pop();
        }
    }


    //////////////////////////////////////////////////////////////////
    // Step 7 : Exit.
    // Do not add the left parenthesis to PE.
    //////////////////////////////////////////////////////////////////

    cout << "Infix:   " << IE << endl;
    cout << "Postfix: " << PE << endl;


    return 0;
}