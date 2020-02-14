#pragma once

#include <string>


class CPU {

private:

    //register
    int8_t A;
    int8_t B;
    int8_t C;
    int8_t D;
    int8_t E;
    int8_t F;
    int8_t H;
    int8_t L; 

    //placeholder memory
    int Memory[100];
    int Cycles[100]; //pre define


	int PC = 0x100;
	int Counter = 1; // wrong
    int OpCode;

public:

    void ld_nn_n(int reg, int val);

	CPU() 
    {

        for (;;)
        {
            break; // entfernen!!
            OpCode = Memory[0];//PC++
            Counter -= Cycles[OpCode];

            switch (OpCode)
            {
            case 0x06:
                ld_nn_n(0,0);
                break;
            case 0x0E:
                break;
            case 0x16:
                break;
            case 0x1E:
                break;
            case 0x26:
                break;
            case 0x2E:
                break;
            }

            if (Counter <= 0)
            {
                /* Check for interrupts and do other */
                /* cyclic tasks here                 */
                //    Counter += InterruptPeriod;
                //if (ExitRequired) break;
            }
        }

	}

	void test();

};