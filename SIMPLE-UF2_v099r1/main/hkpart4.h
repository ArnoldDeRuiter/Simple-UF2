#include <Arduino.h>

#define MODESECTION_SIZE 1
#define INBETWEEN_SIZE 13
#define PAYLOADSECTION_SIZE 1

const PROGMEM byte MODESECTION1 [MODESECTION_SIZE] = {0x31};
const PROGMEM byte MODESECTION2 [MODESECTION_SIZE] = {0x32};
const PROGMEM byte MODESECTION3 [MODESECTION_SIZE] = {0x33};
const PROGMEM byte MODESECTION4 [MODESECTION_SIZE] = {0x34};
const PROGMEM byte MODESECTION5 [MODESECTION_SIZE] = {0x35};
const PROGMEM byte MODESECTION6 [MODESECTION_SIZE] = {0x36};
const PROGMEM byte MODESECTION7 [MODESECTION_SIZE] = {0x37};
const PROGMEM byte MODESECTION8 [MODESECTION_SIZE] = {0x38};

const PROGMEM byte INBETWEEN[INBETWEEN_SIZE] = {0x20, 0x20, 0x20, 0x20, 0x50, 0x41, 0x59, 0x4C, 0x4F, 0x41, 0x44, 0x3A,0x20};

const PROGMEM byte PAYLOADSECTION1 [PAYLOADSECTION_SIZE] = {0x31};
const PROGMEM byte PAYLOADSECTION2 [PAYLOADSECTION_SIZE] = {0x32};
const PROGMEM byte PAYLOADSECTION3 [PAYLOADSECTION_SIZE] = {0x33};
const PROGMEM byte PAYLOADSECTION4 [PAYLOADSECTION_SIZE] = {0x34};
const PROGMEM byte PAYLOADSECTION5 [PAYLOADSECTION_SIZE] = {0x35};
const PROGMEM byte PAYLOADSECTION6 [PAYLOADSECTION_SIZE] = {0x36};
const PROGMEM byte PAYLOADSECTION7 [PAYLOADSECTION_SIZE] = {0x37};
const PROGMEM byte PAYLOADSECTION8 [PAYLOADSECTION_SIZE] = {0x38};
