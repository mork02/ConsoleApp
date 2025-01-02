#pragma once
#include "event.h"

class CGame_Manager
{
public:
	static CGame_Manager& GetInstance()
	{
		static CGame_Manager Instance;
		return Instance;
	}

	CGame_Manager(const CGame_Manager&) = delete;
	CGame_Manager& operator=(const CGame_Manager&) = delete;
	
	void Run();

private:
	~CGame_Manager() = default;
	CGame_Manager() = default;

	kdx::Event Event;
	bool mGameLoop = true;
	void Gameloop();
	void PollEvent();
	void ClearScreen();
	void Render();
	void Update();

};

