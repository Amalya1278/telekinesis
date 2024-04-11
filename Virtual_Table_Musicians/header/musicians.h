#include<iostream>
struct Pti;
struct Sti;
struct Dti;
struct Gti;
struct Vti;

class musicians{
	public:
	static void play(){
		std::cout<<"music";
	}
};
class piano:public musicians{
	public:
	static void play(){
		std::cout<<"piano";
	}
};
struct pvtbl{
	Pti* pti=pti;
	void (*play)()=piano::play;
};
struct Pti{
	const char* name="P";
	const char* bases="musicians";
}pti;
class singer:public musicians{
	public:
static	void play(){
		std::cout<<"singer";
	}
};
struct svtbl{
	Sti* sti=sti;
	void (*play)()=singer::play;
};
struct Sti{
	const char* name="S";
	const char* bases="musicians";
}sti;
class dhol:public musicians{
	public:
static	void play(){
		std::cout<<"dhol";
	}
};
struct dvtbl{
	Dti* dti=dti;
	void (*play)()=dhol::play;
};
struct Dti{
	const char* name="D";
	const char* bases="musicians";
}dti;
class guitar:public musicians{
	public:
	static void play(){
		std::cout<<"guitar";
	}
};
struct gvtbl{
	Gti* gti=gti;
	void (*play)()=guitar::play;
};
struct Gti{
	const char* name="G";
	const char* bases="musicians";
}gti;
class violin:public musicians{
	public:
static	void play(){
		std::cout<<"violin";
	}
};
struct vvtbl{
	Vti* vti=vti;
	void (*play)()=violin::play;
};
struct Vti{
	const char* name="v";
	const char* bases="musicians";
}vti;
