#pragma once
class CGame_Manager
{
public:
	~CGame_Manager() = default;
	CGame_Manager();

	static CGame_Manager GetInstance()
	{
		CGame_Manager Instance;
		return Instance;
	}
	void Run();
private:
	bool mGameLoop;
	void gameloop();

};

