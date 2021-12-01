#ifndef		PIN_ADCONFIG_H_
#define		PIN_CONFIG_H_

#include <avr/io.h>

#define		ROW0			0
#define		ROW0_DDR		DDRD
#define		ROW0_PORT		PORTD

#define		ROW1			1	
#define		ROW1_DDR		DDRD
#define		ROW1_PORT		PORTD

#define		ROW2			2
#define		ROW2_DDR		DDRC
#define		ROW2_PORT		PORTD

#define		ROW3			3
#define		ROW3_DDR		DDRD
#define		ROW3_PORT		PORTD

#define		LINE0			4
#define		LINE0_DDR		DDRD
#define		LINE0_PIN		PIND
#define		LINE0_PULLUP	PORTD


#define		LINE1			5
#define		LINE1_DDR		 DDRD
#define		LINE1_PIN		 PIND
#define		LINE1_PULLUP	PORTD

#define		LINE2			6
#define		LINE2_DDR		DDRD
#define		LINE2_PIN		PIND
#define		LINE2_PULLUP	PORTD

#define		LINE3			7
#define		LINE3_DDR		DDRD
#define		LINE3_PIN		PIND
#define		LINE3_PULLUP	PORTD




#endif		//PIN_CONFIG_H_