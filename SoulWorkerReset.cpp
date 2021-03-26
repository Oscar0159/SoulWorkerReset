#include <windows.h>

int main() {
    HWND window = FindWindow(NULL, L"SoulWorker");

    SetWindowPos(window, NULL, 0, 0, NULL, NULL, SWP_NOSIZE | SWP_NOZORDER);
}
