#include "Clock.h"

void gotoxy(int x, int y) {
	COORD pos = { x, y };
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, pos);
}

Clock::Clock(){
	auto now = std::chrono::system_clock::now();
	std::time_t end_time = std::chrono::system_clock::to_time_t(now);
	unsigned short hours = std::localtime(&end_time)->tm_hour;
	unsigned short minutes = std::localtime(&end_time)->tm_min;
	unsigned short seconds = std::localtime(&end_time)->tm_sec;

	is_hours_changed= false;
	is_minutes_changed = false;
	is_seconds_changed = false;
	
	this->config = Config();
	this->time = new Time(hours, minutes, seconds);
}
Clock::Clock(Config config, Time time) 
{
	this->config = config;
	this->time = &time;
}

//Getters
Config Clock::get_config() {
	return this->config;
}
Time Clock::get_time() {
	return *time;
}

//Setters
void Clock::set_config(Config config) {
	this->config = config;
}
void Clock::set_time(Time time) {
	this->time = &time;
}


//Methods 
void Clock::update() 
{
	auto now = std::chrono::system_clock::now();
	std::time_t end_time = std::chrono::system_clock::to_time_t(now);

	unsigned short h = std::localtime(&end_time)->tm_hour;
	unsigned short m = std::localtime(&end_time)->tm_min;
	unsigned short s = std::localtime(&end_time)->tm_sec;
	delete this->time;
	this->time = new Time(h,m,s);
}

void Clock::reset() {
	this->is_hours_changed = false;
	this->is_minutes_changed = false;
	this->is_seconds_changed = false;
}

inline void Clock::show_h() {
	gotoxy(0, 0);
	if (this->time->get_hours() < 10)
	{
		cout << "0" << this->time->get_hours();
	}
	else {
		cout << this->time->get_hours();
	}
}
inline void Clock::show_m() {
	gotoxy(5, 0);
	if (this->time->get_minutes() < 10)
	{
		cout << "0" << this->time->get_minutes();
	}
	else {
		cout << this->time->get_minutes();
	}
}
inline void Clock::show_s() {
	gotoxy(10, 0);
	if (this->time->get_seconds() < 10)
	{
		cout << "0" << this->time->get_seconds();
	}
	else {
		cout << this->time->get_seconds();
	}
}

void Clock::show() {
	//show time
	do
	{
		update();
		show_h(); cout << " : "; show_m(); cout << " : "; show_s();
		gotoxy(0, 0);
	} while (true);
	
}