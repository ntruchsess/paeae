char s_charlist[] PROGMEM = {' ','!','\'','(',')','*','+','-','.','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char s_chardata[][5] PROGMEM = {
	{ 0x0,0x0,0x0,0x0,0x0 },		//' '
	{ 0x0,0x0,0x6f,0x0,0x0 },		//'!'
	{ 0x0,0x0,0x7,0x0,0x0 },		//'''
	{ 0x1c,0x22,0x41,0x41,0x0 },		//'('
	{ 0x0,0x41,0x41,0x22,0x1c },		//')'
	{ 0x2a,0x1c,0x8,0x1c,0x2a },		//'*'
	{ 0x8,0x8,0x3e,0x8,0x8 },		//'+'
	{ 0x8,0x8,0x8,0x8,0x8 },		//'-'
	{ 0x0,0x0,0x30,0x30,0x0 },		//'.'
	{ 0x3e,0x51,0x49,0x45,0x3e },		//'0'
	{ 0x42,0x43,0x7f,0x40,0x40 },		//'1'
	{ 0x42,0x61,0x51,0x49,0x46 },		//'2'
	{ 0x41,0x49,0x49,0x4d,0x33 },		//'3'
	{ 0x18,0x14,0x12,0x7f,0x10 },		//'4'
	{ 0x67,0x45,0x45,0x45,0x39 },		//'5'
	{ 0x3e,0x49,0x49,0x49,0x32 },		//'6'
	{ 0x1,0x61,0x11,0x9,0x7 },		//'7'
	{ 0x36,0x49,0x49,0x49,0x36 },		//'8'
	{ 0x6,0x49,0x49,0x49,0x3e },		//'9'
	{ 0x0,0x0,0x36,0x36,0x0 },		//':'
	{ 0x0,0x0,0x46,0x76,0x0 },		//';'
	{ 0x8,0x14,0x22,0x41,0x0 },		//'<'
	{ 0x14,0x14,0x14,0x14,0x14 },		//'='
	{ 0x0,0x41,0x22,0x14,0x8 },		//'>'
	{ 0x2,0x1,0x59,0x9,0x7 },		//'?'
	{ 0x1e,0x21,0x4d,0x4b,0x34 },		//'@'
	{ 0x7c,0x12,0x11,0x12,0x7c },		//'A'
	{ 0x7f,0x49,0x49,0x49,0x36 },		//'B'
	{ 0x3e,0x41,0x41,0x41,0x32 },		//'C'
	{ 0x7f,0x41,0x41,0x41,0x3e },		//'D'
	{ 0x7f,0x49,0x49,0x49,0x41 },		//'E'
	{ 0x7f,0x5,0x5,0x5,0x1 },		//'F'
	{ 0x3e,0x41,0x49,0x49,0x3a },		//'G'
	{ 0x7f,0x8,0x8,0x8,0x7f },		//'H'
	{ 0x41,0x41,0x7f,0x41,0x41 },		//'I'
	{ 0x21,0x41,0x41,0x3f,0x1 },		//'J'
	{ 0x7f,0x8,0x14,0x22,0x41 },		//'K'
	{ 0x7f,0x40,0x40,0x40,0x40 },		//'L'
	{ 0x7f,0x2,0xc,0x2,0x7f },		//'M'
	{ 0x7f,0x3,0xc,0x30,0x7f },		//'N'
	{ 0x3e,0x41,0x41,0x41,0x3e },		//'O'
	{ 0x7f,0x9,0x9,0x9,0x6 },		//'P'
	{ 0x1e,0x29,0x29,0x31,0x5e },		//'Q'
	{ 0x7f,0x9,0x9,0x9,0x76 },		//'R'
	{ 0x22,0x45,0x49,0x51,0x22 },		//'S'
	{ 0x1,0x1,0x7f,0x1,0x1 },		//'T'
	{ 0x3f,0x40,0x40,0x40,0x3f },		//'U'
	{ 0x1f,0x20,0x40,0x20,0x1f },		//'V'
	{ 0x7f,0x20,0x18,0x20,0x7f },		//'W'
	{ 0x61,0x12,0xc,0x12,0x61 },		//'X'
	{ 0x3,0x4,0x78,0x4,0x3 },		//'Y'
	{ 0x61,0x51,0x49,0x45,0x43 },		//'Z'
};
