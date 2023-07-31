#define _CRT_SECURE_NO_WARNINGS

#define SAF_PROGRAM_NAME "game"
#define SAF_PLATFORM_SDL2
#if defined(_MSC_VER)
#	pragma warning(push, 0)
#	pragma warning(disable : 4668)
#	pragma warning(disable : 5039)
#	pragma warning(disable : 5045)
#endif
#include "saf.h"
#if defined(_MSC_VER)
#	pragma warning(pop)
#endif

void SAF_init(void)
{
}

uint8_t SAF_loop(void)
{
    SAF_clearScreen(SAF_COLOR_WHITE);

    SAF_drawText("HELLO!", 4, 15, SAF_frame() & 0x04 ? SAF_COLOR_RED : SAF_COLOR_BLACK, 2);

    return 1;
}


//int main()
//{
//}