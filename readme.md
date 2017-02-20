# Codeforces

All this code are my solutions to the problems of Codeforce.

There are solutions in C++ and in Python.

Just ask me if you need any help understanding my codes.

## Rapidity

### Language
Of course, C++ is faster than Python.
Because of this, some problems cannot run in the required time while in Python.

### Condition
Using

    a = b > c ? b : c;

is way faster than using this.

    if(b > c)
        a = b;
    else
        a = c;

### Functions
Inline functions are faster than normal ones in some cases.

### Lists
This

    int liste[1e8];
    int main() {
        //some code
    }

is faster than this.

    int main() {
        int liste[1e8];
        //some code
    }
