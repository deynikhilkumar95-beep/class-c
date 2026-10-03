#include <stdio.h>
#include <windows.h>
void lyric(char text[], int delay)
{
    printf("\033[96m? %s\033[0m\n", text);
    Sleep(delay);
}
int main()
{
    printf("\033[93m");
    printf("====================================\n");
    printf("        KHUDA BHI - KARAOKE\n");
    printf("====================================\n");
    printf("\033[0m\n");
    lyric("[Paste lyric line 1 here]", 2000);
    lyric("[Paste lyric line 2 here]", 2000);
    lyric("[Paste lyric line 3 here]", 2500);
    lyric("[Paste lyric line 4 here]", 2000);
    lyric("[Paste lyric line 5 here]", 2500);
    lyric("[Paste lyric line 6 here]", 2000);
    lyric("[Paste lyric line 7 here]", 2500);
    lyric("[Paste lyric line 8 here]", 2000);
    printf("\n\033[92m");
    printf("====================================\n");
    printf("          ? SONG FINISHED ?\n");
    printf("====================================\n");
    printf("\033[0m");
    return 0;
}
