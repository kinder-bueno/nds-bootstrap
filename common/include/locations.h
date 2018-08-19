#ifndef LOCATIONS_H
#define LOCATIONS_H

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Important things
//#define TEMP_MEM 0x02FFE000 // __DSiHeader

#define NDS_HEADER      0x027FFE00
#define NDS_HEADER_SDK5 0x02FFFE00 // __NDSHeader

#define ARM9_START_ADDRESS_LOCATION      (NDS_HEADER + 0x1F4) //0x027FFFF4
#define ARM9_START_ADDRESS_SDK5_LOCATION (NDS_HEADER_SDK5 + 0x1F4) //0x02FFFFF4

#define LOAD_CRT0_LOCATION 0x06840000 // LCDC_BANK_C

#define CARDENGINE_ARM7_LOCATION 0x037C0000
#define CARDENGINE_ARM9_LOCATION 0x02700000
//#define CARDENGINE_ARM9_LOCATION      0x02400000
//#define CARDENGINE_ARM9_SDK5_LOCATION 0x0C800000

#define CARDENGINE_SHARED_ADDRESS 0x027FFB08

#define DEBUG_FIND_LOCATION  0x037D0000
#define DEBUG_PATCH_LOCATION 0x037C6000

#define ROM_LOCATION      0x0C804000
#define ROM_SDK5_LOCATION 0x0D000000

#define SAVE_LOCATION      0x0C820000
#define SAVE_SDK5_LOCATION 0x0CE00000

#define CACHE_ADRESS_START             0x0C920000
#define retail_CACHE_ADRESS_START_SDK5 0x0C480000

//#define retail_CACHE_ADRESS_SIZE      0x6E0000
//#define retail_CACHE_ADRESS_SIZE_SDK5 0x280000

#define retail_CACHE_SLOTS      0x37
#define retail_CACHE_SLOTS_SDK5 0x14

#define dev_CACHE_ADRESS_START_SDK5 0x0D000000

//#define dev_CACHE_ADRESS_SIZE      0x16E0000
//#define dev_CACHE_ADRESS_SIZE_SDK5 0x1000000

#define dev_CACHE_SLOTS      0xB7
#define dev_CACHE_SLOTS_SDK5 0x80

//#define HGSS_CACHE_ADRESS_SIZE 0x1E0000

#define HGSS_CACHE_SLOTS 0xF

#endif // LOCATIONS_H
