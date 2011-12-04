#include "include\cinterface" // Include all our data structure typedefs, as well as other things.

void main (argc, argv) // Obviously the main function
TLint4	argc; // You can/have to define the argument data types outside the brackets? Odd.
TLaddressint	argv;
{

    extern void TL (); // extern: Lifetime=Program, Scope=Block or compilation unit, Default Initializer=Zero

    extern void TProg ();

    extern void TL_TLK_TLKINI ();

    extern void TL_TLK_TLKFINI ();
    extern TLint4	TL_TLI_TLIARC; // Num Turing Program Arguments stored as a int4 (4 Byte Integer)
    extern TLaddressint	TL_TLI_TLIARV; // Program Arguments (includes filename) stored as ___?

    extern void close ();
    TL_TLI_TLIARC = argc - 1; // argv[0] is the filename. So subtract by 1 for the sum of program arguments.
    TL_TLI_TLIARV = (TLaddressint) argv; // Does C require you to cast everywhere? Or is this decompiled leftovers? 
    { // Behold - A for loop in C
	register TLint4	fd; // register: Lifetime=Block (stack or CPU register), Scope=Block, Starts Out=Uninitialized
	for (fd = 3; fd <= 255; fd++) {
	    close((TLint4) fd); // Does this close another instance of the library?
	};
    };
    TL(); // Load Turing library?
    TL_TLK_TLKINI(); // Initialize Turing Library?
    TProg(); // Turing Program
    TL_TLK_TLKFINI(); // Finalize/Cleanup Turing Library?
}
