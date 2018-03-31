// TM74HC595Multi.h

#ifndef _TM74HC595MULTI_h
#define _TM74HC595MULTI_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class TM74HC595Multi
{
public:
	TM74HC595Multi(int SCLK, int RCLK, int DIO);
	void send(unsigned char X);
	void send(unsigned char X, unsigned char port);
	void digit4(int n, int replay, bool showZero);
	void digit4(int n, int replay);
	void digit4(int n);
	void digit4showZero(int n, int replay);
	void digit4showZero(int n);
	void digit2(int n, int port);
	void digit2(int n, int port, int replay);

private:
	int _SCLK;
	int _RCLK;
	int _DIO;
};

#endif

