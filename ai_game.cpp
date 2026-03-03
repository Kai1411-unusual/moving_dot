#include <iostream>
#include <conio.h>   // _getch, _kbhit
#include <vector>
#include <windows.h> // Sleep

using namespace std;

// simple console moving dot game using arrow keys (Windows)
// compile: g++ main.cpp -o moving_dot.exe

int main() {
    const int width = 20;
    const int height = 10;
    int x = width / 2;
    int y = height / 2;
    bool running = true;

    auto draw = [&]() {
        // clear screen (Windows)
        system("cls");
        for (int j = 0; j < height; ++j) {
            for (int i = 0; i < width; ++i) {
                if (i == x && j == y)
                    cout << "O";  // the dot
                else
                    cout << '.';
            }
            cout << '\n';
        }
        cout << "Use arrow keys to move, Q to quit.\n";
    };

    draw();

    while (running) {
        if (_kbhit()) {
            int ch = _getch();
            if (ch == 0 || ch == 0xE0) {
                // arrow keys return two codes
                ch = _getch();
                switch (ch) {
                    case 72: if (y > 0) --y; break; // up
                    case 80: if (y < height - 1) ++y; break; // down
                    case 75: if (x > 0) --x; break; // left
                    case 77: if (x < width - 1) ++x; break; // right
                }
            } else {
                // normal keys
                if (ch == 'q' || ch == 'Q') {
                    running = false;
                }
            }
            draw();
        }
        // tiny delay to reduce CPU usage
        Sleep(50);
    }

    cout << "Goodbye!\n";
    return 0;
}
