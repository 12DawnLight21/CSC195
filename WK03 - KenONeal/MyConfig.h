#pragma once

struct _BufByte {
	char myByte;
};

struct _Wifi {
	char SSID[51];
	_BufByte Buffw1;
	char Pswd[51];
	_BufByte Bffw2;
};

struct _Version {
	short major;
	short minor;
	short revision;
};

struct Config {
	_Version Version;
	_Wifi wifi;
	_BufByte Buff1;
};