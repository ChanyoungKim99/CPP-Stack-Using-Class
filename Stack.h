#pragma once

const int STACK_SIZE{ 10 };

enum Command
{
    PUSH = 1,
    POP = 2
};

class Stack
{
    int container[STACK_SIZE]{};
    int topIndex = -1;

public:
    void PrintInfo();
    void PrintStack();
    void Push(int value);
    void Pop();
    void ProcessUserInput();
};

// 구조체와 달리 클래스는 "암시적 this" 에 의해 자동으로 넘어온다



