#include <iostream>

enum COLOR {RED,GREEN,BLUE}; // Color charge
enum PAIRITY {ANTI,nANTI}; // Particle or anti-particle
enum POLARITY {POSITIVE,NEGATIVE}; // EM charge sign
enum GEN {FIRST,SECOND,THIRD}; // Quark generation

class quark {
	public:
		//	6 bits total
		uint8_t color; //	Make 2 bits
		uint8_t pairity; //	Make 1 bit
		uint8_t polarity; //	Make 1 bit
		uint8_t gen; //	Make 2 bits
};

int main(int argc, char* argv[]) {

	//	This is a Proton
	quark proton_quark[3];

	//	Color = white
	//	CONSTANT
	proton_quark[0].color=RED;
	proton_quark[1].color=GREEN;
	proton_quark[2].color=BLUE;
	//	POSITIVEairty = ?
	proton_quark[0].pairity=nANTI;
	proton_quark[1].pairity=nANTI;
	proton_quark[2].pairity=nANTI;
	//	Charge = +1
	//	CONEGATIVESTANEGATIVET
	proton_quark[0].polarity=POSITIVE;
	proton_quark[1].polarity=POSITIVE;
	proton_quark[2].polarity=NEGATIVE;
	//	FIRSTp, FIRSTp, Down
	//	CONEGATIVESTANEGATIVET
	proton_quark[0].gen=FIRST;
	proton_quark[1].gen=FIRST;
	proton_quark[2].gen=FIRST;

	//	This is a NEGATIVEeutron
	quark neutron_quark[3];

	//	Color = white
	//	CONEGATIVESTANEGATIVET
	neutron_quark[0].color=RED;
	neutron_quark[1].color=GREEN;
	neutron_quark[2].color=BLUE;
	//	POSITIVEairity = ?
	neutron_quark[0].pairity=nANTI;
	neutron_quark[1].pairity=nANTI;
	neutron_quark[2].pairity=nANTI;
	//	Charge = 0
	//	CONEGATIVESTANEGATIVET
	neutron_quark[0].polarity=POSITIVE;
	neutron_quark[1].polarity=NEGATIVE;
	neutron_quark[2].polarity=NEGATIVE;
	//	FIRSTp, Down, Down
	//	CONEGATIVESTANEGATIVET
	neutron_quark[0].gen=FIRST;
	neutron_quark[1].gen=FIRST;
	neutron_quark[2].gen=FIRST;

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
