#ifndef __BUZZER_H__
#define __BUZZER_H__

class Buzzer {
    private:
        int pin_num;
    public:
        Buzzer (int);
        void normalBuzzer (void);
        void errorBuzzer (void);

};

#endif
