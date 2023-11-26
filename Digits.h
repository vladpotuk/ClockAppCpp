#ifndef digits_h
#define digits_h

#include "lib.h"

struct Digits
{
	static void one(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
        std::cout << " d888   ";
		y_cur += 1;
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
        std::cout << "d8888   ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
        std::cout << "  888   ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
        std::cout << "  888   ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
        std::cout << "  888   ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
        std::cout << "  888   ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
        std::cout << "  888   ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
        std::cout << "8888888 ";
	}
	static void two(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		std::cout << " .d8888b.  ";
		y_cur += 1;
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "d88P  Y88b ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "     888   ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "   .d88P   ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << " .od888P\"  ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "d88P\"      ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "888\"       ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "888888888  ";
	}

	static void three(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		std::cout << " .d8888b.  ";
		y_cur += 1;
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "d88P  Y88b ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "     .d88P ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "    8888\"  ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "     \"Y8b. ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "888    888 ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << "Y88b  d88P ";
		pos = { x_cur, y_cur };
		SetConsoleCursorPosition(output, pos);
		y_cur += 1;
		std::cout << " \"Y8888P\"  ";
	}
	static void four()
	{
		std::cout << "    d8888  " << std::endl;
		std::cout << "   d8P888  " << std::endl;
		std::cout << "  d8P 888  " << std::endl;
		std::cout << " d8P  888  " << std::endl;
		std::cout << "d88   888  " << std::endl;
		std::cout << "8888888888 " << std::endl;
		std::cout << "      888  " << std::endl;
		std::cout << "      888  " << std::endl;
	}
    static void four(short x, short y)
    {
        short x_cur = x;
        short y_cur = y;
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        std::cout << "    d8888  ";
        y_cur += 1;
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "   d8P888  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "  d8P 888  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " d8P  888  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "d88   888  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "8888888888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "      888  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "      888  ";
    }

    static void five(short x, short y)
    {
        short x_cur = x;
        short y_cur = y;
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        std::cout << "888888888  ";
        y_cur += 1;
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "888        ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "888        ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "8888888b.  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "     \"Y88b ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "       888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "Y88b  d88P ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " \"Y8888P\"  ";
    }

    static void six(short x, short y)
    {
        short x_cur = x;
        short y_cur = y;
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        std::cout << " .d8888b.  ";
        y_cur += 1;
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "d88P  Y88b ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "888        ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "888d888b.  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "888P \"Y88b ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "888    888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "Y88b  d88P ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " \"Y8888P\"  ";
    }

    static void seven(short x, short y)
    {
        short x_cur = x;
        short y_cur = y;
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        std::cout << "8888888888";
        y_cur += 1;
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "      d88P";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "     d88P ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "    d88P  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " 88888888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "  d88P    ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " d88P     ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "d88P      ";
    }

    static void eight(short x, short y)
    {
        short x_cur = x;
        short y_cur = y;
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        std::cout << " .d8888b.  ";
        y_cur += 1;
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "d88P  Y88b ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "Y88b. d88P ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " \"Y88888\"  ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << ".d8P\"\"Y8b. ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "888    888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "Y88b  d88P ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " \"Y8888P\"  ";
    }

    static void nine(short x, short y)
    {
        short x_cur = x;
        short y_cur = y;
        HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        std::cout << " .d8888b.  ";
        y_cur += 1;
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "d88P  Y88b ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "888    888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "Y88b. d888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " \"Y888P888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "       888 ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << "Y88b  d88P ";
        pos = { x_cur, y_cur };
        SetConsoleCursorPosition(output, pos);
        y_cur += 1;
        std::cout << " \"Y8888P\"  ";
    }

};


#endif // !digits_h

