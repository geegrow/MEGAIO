#ifndef MEGAIO_H
#define MEGAIO_H

#include <Arduino.h>

typedef struct {
    uint8_t id;
    volatile uint8_t *DDR;
    volatile uint8_t *PIN;
    volatile uint8_t *PORT;
} pin_t;

class MEGAIO
{
    public:
        MEGAIO() {}

        static void pinMode(pin_t p, uint8_t mode)
        {
            if (mode == INPUT) {
                *(p.DDR) &= ~(0 << p.id);
                *(p.PORT) |= (1 << p.id); // pull-up
            } else if (mode == OUTPUT) {
                *(p.DDR) |= (1 << p.id);
            }
        }

        static uint8_t digitalRead(pin_t p)
        {
            return (*(p.PIN) & (1 << p.id)) >> p.id;
        }

        static void digitalWrite(pin_t p, uint8_t value)
        {
            if (value) {
                *(p.PORT) |= (1 << p.id);
            } else {
                *(p.PORT) &= ~(0 << p.id);
            }
        }

        static pin_t PA_0, PA_1, PA_2, PA_3, PA_4, PA_5, PA_6, PA_7;
        static pin_t PB_0, PB_1, PB_2, PB_3, PB_4, PB_5, PB_6, PB_7;
        static pin_t PC_0, PC_1, PC_2, PC_3, PC_4, PC_5, PC_6, PC_7;
        static pin_t PD_0, PD_1, PD_2, PD_3, PD_4, PD_5, PD_6, PD_7;
        static pin_t PE_0, PE_1, PE_2, PE_3, PE_4, PE_5, PE_6, PE_7;
        static pin_t PF_0, PF_1, PF_2, PF_3, PF_4, PF_5, PF_6, PF_7;
        static pin_t PG_0, PG_1, PG_2, PG_3, PG_4, PG_5, PG_6, PG_7;
        static pin_t PH_0, PH_1, PH_2, PH_3, PH_4, PH_5, PH_6, PH_7;
        static pin_t PJ_0, PJ_1, PJ_2, PJ_3, PJ_4, PJ_5, PJ_6, PJ_7;
        static pin_t PK_0, PK_1, PK_2, PK_3, PK_4, PK_5, PK_6, PK_7;
        static pin_t PL_0, PL_1, PL_2, PL_3, PL_4, PL_5, PL_6, PL_7;
};





#endif /* MEGAIO_H */