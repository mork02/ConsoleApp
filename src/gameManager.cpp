#include "gameManager.h"
#include <iostream>
#include <conio.h>

void CGame_Manager::Run()
{
	Gameloop();
}

void CGame_Manager::Gameloop()
{
	while (mGameLoop)
	{
		PollEvent();
		Update();
		Render();
	}
}

void CGame_Manager::PollEvent()
{
	char ch = _getch();
	if (ch == 'q')
	{
		mGameLoop = false;
	}
}

void CGame_Manager::ClearScreen()
{
	#if defined(_WIN32) || defined(_WIN64)
		system("cls");
	#else
		system("clear");
	#endif	
}

void CGame_Manager::Render()
{
	ClearScreen();

}

void CGame_Manager::Update()
{
}


