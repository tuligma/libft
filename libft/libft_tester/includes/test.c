#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main() {
    struct winsize size;

    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &size) == -1) {
        perror("ioctl");
        return 1;
    }

    int terminalWidth = size.ws_col;
    int terminalHeight = size.ws_row;

    // Get the maximum possible terminal size
    struct winsize maxSize;
    maxSize.ws_col = 0;
    maxSize.ws_row = 0;

    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &maxSize) == -1) {
        perror("ioctl");
        return 1;
    }

    int maxWidth = maxSize.ws_col;
    int maxHeight = maxSize.ws_row;

    // Check if the terminal is in full-screen mode
    if (terminalWidth == maxWidth && terminalHeight == maxHeight) {
        printf("Terminal is in full-screen mode.\n");
    } else {
        printf("Terminal is not in full-screen mode.\n");
    }

    return 0;
}

