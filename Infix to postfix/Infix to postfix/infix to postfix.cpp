#include<cstdio>
#include<cctype>
#define MAX 1000
typedef struct stack {
    int top, a[MAX];
} stack;

char pop(stack *);
void push(stack *,char);
char top(stack *);

int empty(stack *);
int full(stack *);

int differentiate(char);
void init(stack *);

int differentiate(char x) {
    if (x == '(')
        return (0);
    if (x == '+' || x == '-')
        return (1);
    if (x == '*' || x == '/' || x == '%')
        return (2);
    return (3);
}

void init(stack *s) {
    s->top = -1;
}

int empty(stack *s) {
    if (s->top == -1)
        return (1);
    else
        return (0);
}

int full(stack *s) {
    if (s->top == MAX - 1)
        return (1);
    else
        return (0);
}

void push(stack *s,char x)
{
  s->top=s->top+1;
  s->a[s->top]=x;
}

char pop(stack *s) {
    int x;
    x = s->a[s->top];
    s->top = s->top - 1;
    return (x);
}

char top(stack * s) {
    return (s->a[s->top]);
}

int main() {
    stack s;
    char y;
    int token;
    init(&s);

    printf("\n\tEnter your infix expression to convert to a postfix expression:\n");
    while ((token = getchar()) != 'n') {
        if (isalnum(token))
            printf("%c", token);
        else if (token == '(')
            push(&s, '(');
        else {
            if (token == ')')
                while ((y = pop(&s)) != '(')
                    printf("%c", y);
            else {
                while (differentiate(token) <= differentiate(top(&s)) && !empty(&s)) {
                    y = pop(&s);
                    printf("%c", y);
                }
                push(&s, token);
            }
        }
    }
    while (!empty(&s)) {
        y = pop(&s);
        printf("%c", y);
    }
}