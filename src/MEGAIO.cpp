#include "MEGAIO.h"

pin_t MEGAIO::PA_0 = {0, &DDRA, &PINA, &PORTA};
pin_t MEGAIO::PA_1 = {1, &DDRA, &PINA, &PORTA};
pin_t MEGAIO::PA_2 = {2, &DDRA, &PINA, &PORTA};
pin_t MEGAIO::PA_3 = {3, &DDRA, &PINA, &PORTA};
pin_t MEGAIO::PA_4 = {4, &DDRA, &PINA, &PORTA};
pin_t MEGAIO::PA_5 = {5, &DDRA, &PINA, &PORTA};
pin_t MEGAIO::PA_6 = {6, &DDRA, &PINA, &PORTA};
pin_t MEGAIO::PA_7 = {7, &DDRA, &PINA, &PORTA};

pin_t MEGAIO::PB_0 = {0, &DDRB, &PINB, &PORTB};
pin_t MEGAIO::PB_1 = {1, &DDRB, &PINB, &PORTB};
pin_t MEGAIO::PB_2 = {2, &DDRB, &PINB, &PORTB};
pin_t MEGAIO::PB_3 = {3, &DDRB, &PINB, &PORTB};
pin_t MEGAIO::PB_4 = {4, &DDRB, &PINB, &PORTB};
pin_t MEGAIO::PB_5 = {5, &DDRB, &PINB, &PORTB};
pin_t MEGAIO::PB_6 = {6, &DDRB, &PINB, &PORTB};
pin_t MEGAIO::PB_7 = {7, &DDRB, &PINB, &PORTB};

pin_t MEGAIO::PC_0 = {0, &DDRC, &PINC, &PORTC};
pin_t MEGAIO::PC_1 = {1, &DDRC, &PINC, &PORTC};
pin_t MEGAIO::PC_2 = {2, &DDRC, &PINC, &PORTC};
pin_t MEGAIO::PC_3 = {3, &DDRC, &PINC, &PORTC};
pin_t MEGAIO::PC_4 = {4, &DDRC, &PINC, &PORTC};
pin_t MEGAIO::PC_5 = {5, &DDRC, &PINC, &PORTC};
pin_t MEGAIO::PC_6 = {6, &DDRC, &PINC, &PORTC};
pin_t MEGAIO::PC_7 = {7, &DDRC, &PINC, &PORTC};

pin_t MEGAIO::PD_0 = {0, &DDRD, &PIND, &PORTD};
pin_t MEGAIO::PD_1 = {1, &DDRD, &PIND, &PORTD};
pin_t MEGAIO::PD_2 = {2, &DDRD, &PIND, &PORTD};
pin_t MEGAIO::PD_3 = {3, &DDRD, &PIND, &PORTD};
pin_t MEGAIO::PD_4 = {4, &DDRD, &PIND, &PORTD};
pin_t MEGAIO::PD_5 = {5, &DDRD, &PIND, &PORTD};
pin_t MEGAIO::PD_6 = {6, &DDRD, &PIND, &PORTD};
pin_t MEGAIO::PD_7 = {7, &DDRD, &PIND, &PORTD};

pin_t MEGAIO::PE_0 = {0, &DDRE, &PINE, &PORTE};
pin_t MEGAIO::PE_1 = {1, &DDRE, &PINE, &PORTE};
pin_t MEGAIO::PE_2 = {2, &DDRE, &PINE, &PORTE};
pin_t MEGAIO::PE_3 = {3, &DDRE, &PINE, &PORTE};
pin_t MEGAIO::PE_4 = {4, &DDRE, &PINE, &PORTE};
pin_t MEGAIO::PE_5 = {5, &DDRE, &PINE, &PORTE};
pin_t MEGAIO::PE_6 = {6, &DDRE, &PINE, &PORTE};
pin_t MEGAIO::PE_7 = {7, &DDRE, &PINE, &PORTE};

pin_t MEGAIO::PF_0 = {0, &DDRF, &PINF, &PORTF};
pin_t MEGAIO::PF_1 = {1, &DDRF, &PINF, &PORTF};
pin_t MEGAIO::PF_2 = {2, &DDRF, &PINF, &PORTF};
pin_t MEGAIO::PF_3 = {3, &DDRF, &PINF, &PORTF};
pin_t MEGAIO::PF_4 = {4, &DDRF, &PINF, &PORTF};
pin_t MEGAIO::PF_5 = {5, &DDRF, &PINF, &PORTF};
pin_t MEGAIO::PF_6 = {6, &DDRF, &PINF, &PORTF};
pin_t MEGAIO::PF_7 = {7, &DDRF, &PINF, &PORTF};

pin_t MEGAIO::PG_0 = {0, &DDRG, &PING, &PORTG};
pin_t MEGAIO::PG_1 = {1, &DDRG, &PING, &PORTG};
pin_t MEGAIO::PG_2 = {2, &DDRG, &PING, &PORTG};
pin_t MEGAIO::PG_3 = {3, &DDRG, &PING, &PORTG};
pin_t MEGAIO::PG_4 = {4, &DDRG, &PING, &PORTG};
pin_t MEGAIO::PG_5 = {5, &DDRG, &PING, &PORTG};
pin_t MEGAIO::PG_6 = {6, &DDRG, &PING, &PORTG};
pin_t MEGAIO::PG_7 = {7, &DDRG, &PING, &PORTG};

pin_t MEGAIO::PH_0 = {0, &DDRH, &PINH, &PORTH};
pin_t MEGAIO::PH_1 = {1, &DDRH, &PINH, &PORTH};
pin_t MEGAIO::PH_2 = {2, &DDRH, &PINH, &PORTH};
pin_t MEGAIO::PH_3 = {3, &DDRH, &PINH, &PORTH};
pin_t MEGAIO::PH_4 = {4, &DDRH, &PINH, &PORTH};
pin_t MEGAIO::PH_5 = {5, &DDRH, &PINH, &PORTH};
pin_t MEGAIO::PH_6 = {6, &DDRH, &PINH, &PORTH};
pin_t MEGAIO::PH_7 = {7, &DDRH, &PINH, &PORTH};

pin_t MEGAIO::PJ_0 = {0, &DDRJ, &PINJ, &PORTJ};
pin_t MEGAIO::PJ_1 = {1, &DDRJ, &PINJ, &PORTJ};
pin_t MEGAIO::PJ_2 = {2, &DDRJ, &PINJ, &PORTJ};
pin_t MEGAIO::PJ_3 = {3, &DDRJ, &PINJ, &PORTJ};
pin_t MEGAIO::PJ_4 = {4, &DDRJ, &PINJ, &PORTJ};
pin_t MEGAIO::PJ_5 = {5, &DDRJ, &PINJ, &PORTJ};
pin_t MEGAIO::PJ_6 = {6, &DDRJ, &PINJ, &PORTJ};
pin_t MEGAIO::PJ_7 = {7, &DDRJ, &PINJ, &PORTJ};

pin_t MEGAIO::PK_0 = {0, &DDRK, &PINK, &PORTK};
pin_t MEGAIO::PK_1 = {1, &DDRK, &PINK, &PORTK};
pin_t MEGAIO::PK_2 = {2, &DDRK, &PINK, &PORTK};
pin_t MEGAIO::PK_3 = {3, &DDRK, &PINK, &PORTK};
pin_t MEGAIO::PK_4 = {4, &DDRK, &PINK, &PORTK};
pin_t MEGAIO::PK_5 = {5, &DDRK, &PINK, &PORTK};
pin_t MEGAIO::PK_6 = {6, &DDRK, &PINK, &PORTK};
pin_t MEGAIO::PK_7 = {7, &DDRK, &PINK, &PORTK};

pin_t MEGAIO::PL_0 = {0, &DDRL, &PINL, &PORTL};
pin_t MEGAIO::PL_1 = {1, &DDRL, &PINL, &PORTL};
pin_t MEGAIO::PL_2 = {2, &DDRL, &PINL, &PORTL};
pin_t MEGAIO::PL_3 = {3, &DDRL, &PINL, &PORTL};
pin_t MEGAIO::PL_4 = {4, &DDRL, &PINL, &PORTL};
pin_t MEGAIO::PL_5 = {5, &DDRL, &PINL, &PORTL};
pin_t MEGAIO::PL_6 = {6, &DDRL, &PINL, &PORTL};
pin_t MEGAIO::PL_7 = {7, &DDRL, &PINL, &PORTL};