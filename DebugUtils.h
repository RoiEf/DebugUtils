// Debug utilities

// 0: Print nothing
// 3: Print all

// DEBUGPRINT0: Very important
// DEBUGPRINT3: Not important

#ifndef __Debug1212123___
#define __Debug1212123___

#if DEBUGLEVEL >= 0
#define DEBUGPRINT0(x) Serial.print(x)
#define DEBUGPRINTLN0(x) Serial.println(x)
#define DEBUGSERIALBEGIN(x) Serial.begin(x)
#define DEBUGWHILENOTSERIAL while (!Serial)
#define DEBUGSERIALFLUSH Serial.flush()
#else
#define DEBUGPRINT0(x)
#define DEBUGPRINTLN0(x)
#define DEBUGSERIALBEGIN(x)
#define DEBUGWHILENOTSERIAL
#define DEBUGSERIALFLUSH
#endif

#if DEBUG >= 1
#define DEBUGPRINT1(x) Serial.print(x)
#define DEBUGPRINTLN1(x) Serial.println(x)
#else
#define DEBUGPRINT1(x)
#define DEBUGPRINTLN1(x)
#endif

#if DEBUG >= 2
#define DEBUGPRINT2(x) Serial.print(x)
#define DEBUGPRINTLN2(x) Serial.println(x)
#else
#define DEBUGPRINT2(x)
#define DEBUGPRINTLN2(x)
#endif

#if DEBUG >= 3
#define DEBUGPRINT3(x) Serial.print(x)
#define DEBUGPRINTLN3(x) Serial.println(x)
#else
#define DEBUGPRINT3(x)
#define DEBUGPRINTLN3(x)
#endif

// fast port handling

#endif