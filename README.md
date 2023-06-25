# Kattis Solutions

This repository contains my Kattis solutions.
I am working through the problems, sorted from easy to hard, to learn `c++`.

## Template

I use various shorthands in my template to write less code.

Examples:

```cpp
// https://stackoverflow.com/questions/31162367/significance-of-ios-basesync-with-stdiofalse-cin-tienull
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ld long double
#define ll long long
#define vec vector
#define arr array
#define str string

#define print(x) cout << #x << " = " << x << endl;
#define OUT(x) cout << x << "\n";

#define FOR(i, from, to_excl, inc) for (int i = from; i < to_excl; i += inc)
#define FORALL(item, container) for (auto item: container)
#define WHILE(n) while (n-- > 0)
```

## Solved problems

Look at the `problems` directory.

To run a particular solution, simply copy-paste the cpp file into your desired editor, compile it, and run it.
