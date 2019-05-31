#include <iostream>

enum COLOR {R,G,B};
enum PAIRITY {P,N};
enum GEN {U,C,T};

class quark {
	//	3 bits total
	uint8_t color; //	Make 2 bits
	uint8_t pairity; //	Make 1 bit
	uint8_t gen; //	Make 2 bits
	// Parity + Gen = up,down,charm,strange,top,bottom

	//	RGB and anti
	//	aR,aG,aB,R,G,B;

};

int main(int argc, char* argv[]) {

	//	This is a Proton
	quark proton_quark[3];

	//	Color = white
	//	CONSTANT
	proton_quark[0].color=R;
	proton_quark[1].color=G;
	proton_quark[2].color=B;
	//	Charge = +1
	//	CONSTANT
	proton_quark[0].polarity=P;
	proton_quark[1].polarity=P;
	proton_quark[2].polarity=N;
	//	Up, Up, Down
	//	CONSTANT
	proton_quark[0].gen=U;
	proton_quark[1].gen=U;
	proton_quark[2].gen=U;

	//	This is a Neutron
	quark neutron_quark[3];

	//	Color = white
	//	CONSTANT
	neutron_quark[0].color=R;
	neutron_quark[1].color=G;
	neutron_quark[2].color=B;
	//	Charge = 0
	//	CONSTANT
	neutron_quark[0].polarity=P;
	neutron_quark[1].polarity=N;
	neutron_quark[2].polarity=N;
	//	Up, Down, Down
	//	CONSTANT
	neutron_quark[0].gen=U;
	neutron_quark[1].gen=U;
	neutron_quark[2].gen=U;

	//	Check all possible changes
	//	A change consists of a color exchange.
	//	Gain one. Lose another.
	//
	//	Change within a proton
	//	change within a neutron
	//	change between a P and N
	//	change between a P and P
	//	change between a N and N


	return 0;
}
