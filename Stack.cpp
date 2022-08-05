#include "Stack.h"
#include <iostream>

void Stack::PrintInfo()
{
    std::cout << "<STACK>" << std::endl;
    std::cout << "[1] push" << std::endl;
    std::cout << "[2] pop" << std::endl;
    std::cout << "---------------" << std::endl;
}


void Stack::PrintStack()
{
    std::cout << "--- stack ---" << std::endl;
    if (topIndex < 0)
    {
        std::cout << "-------------" << std::endl;
        std::cout << "EMPTY" << std::endl;
        return;
    }

    for (int i = topIndex; i >= 0; --i)
    {
        std::cout << container[i] << std::endl;
    }
    std::cout << "-------------" << std::endl;
}

void Stack::Push(int value)
{
    if (topIndex >= STACK_SIZE - 1)
    {
        std::cout << "Stack is FULL!!!" << std::endl;
        return;
    }

    container[++topIndex] = value;
}

void Stack::Pop()
{
    if (topIndex < 0)
    {
        return;
    }

    std::cout << container[topIndex--] << " pop!" << std::endl;
}

void Stack::ProcessUserInput()
{
    int command = -1;
    while (true)
    {
        PrintStack();

        std::cout << std::endl;
        std::cout << "> ";
        std::cin >> command;
        switch (command)
        {
            case PUSH:
            {
                int value;
                std::cout << "  push value >> ";
                std::cin >> value;
                Push(value);
                break;
            }

            case POP:
                Pop();
                break;

            default:
                std::cout << "잘못된 명령어 입니다." << std::endl;
                break;
        }
    }
}
