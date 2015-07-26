#define MARCO VALUE

#elif CONDITION

#else

#endif

#error MESSAGE

#if CONDITION
/* your code */
#endif  // IF CONDITION

#ifdef MARCO
/* your code */
#endif  // IFDEF MARCO

#ifndef MARCO
/* your code */
#endif  // IFNDEF MARCO

#ifndef MARCO
#define MARCO
/* your code */
#endif  // MARCO

#include "header file"

#include <header file>

#line LINE_NUMBER "FILE_NAME"

#pragma PARAMETERS

#undef MARCO

__asm

alignas(/* expression or type */);

alignof(/*expression or type*/);

asm

auto

bool

break

case /* value */:
    /* your code */
    break;

catch (/* exception */) {
    /* your code */
}

char

char16_t

char32_t

class { /* name */
  public:
    /* name */();
    ~/* name */();

    /* your code */
  private:
    /* private code */
};  // class /* name */

const

const_cast</* target type */>(/* expression */)

constexpr

continue

//
// Copyright /* year */ /* name */
//


decltype(/* expression */);

default

    delete

    do {
        /* your code */
    } while (/* condition */)  // do ... while

        dynamic_cast</* target type */>(/* expression */);

else {
    /* your code */
}


else if (/* condition */) {
    /* your code */
}

enum class /* name */ {
    /* enums */
};  // enum class /* name */

enum /* name */ {
    /* enums */
};  // enum /* name */

explicit

export

extern

false

final

float

for (/* initlization */;
                       /* condition */;
                       /* process */) {
    /* your code */
}  // for

for (auto &e : /* object */) {
    /* your code */
}  // foreach in /* object */

friend

goto /* somewhere */;

if (/* condition */) {
    /* your code */
}

inline

int

long double

long long

long

int main(int argc, char **argv) {
    /* your code */
    return 0;
}  // function main

mutable

namespace { /* name */
/* your code */
}  // namespace /* name */

new

noexcept

nullptr

operator

override

private

protected

public

register

reinterpret_cast</* target type */>(/* expression */)

return

    short

    signed

class { /* name */
  public:
    //This is a singleon:
    /* name */() = delete;
    ~/* name */() = delete;
    /* name */(const /* name */&) = delete;
    /* name */(/* name */&&) = delete;
    /* name */ &operator=(const /* name */&) = delete;
    /* name */ &operator=(/* name */&&) = delete;

    /* your code */
  private:
    /* private code */
};  // singleton class /* name */

sizeof...(/* expression */)

sizeof(/* expression or type */)

static

static_assert(/* condition */);

static_cast</* target type */>(/* expression */)

struct { /* name */
    /* your code */
};  // struct /* name */

default:
/* your code */
break;

switch (/* target */) {
    /* your code */
}  // switch to /* target */

template <typename T>

this

thread_local

throw /* exception */;

true

try {
    /* your code */
}

typedef /* origin type */ /* new name */;

typeid(/* expression or type */);

typename

unsigned long long

unsigned long

union { /* name */
    /* your code */
};  // union /* name */

unsigned int

unsigned

using namespace std;

using

virtual

void

volatile

wchar_t

while (/*condition*/) {
    /* your code */
} // while

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int num;
    cin >> num;

    if

    cout << num
         << endl;
return 0;
}  // function main
