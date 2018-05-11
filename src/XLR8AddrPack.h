#ifndef XLR8_ADDR_PACK
#define XLR8_ADDR_PACK

 #define PINB_Address       0x23  // Input Pins           Port B
 #define DDRB_Address       0x24  // Data Direction Regis Port B
 #define PORTB_Address      0x25  // Data Register        Port B
 #define PINC_Address       0x26  // Input Pins           Port C
 #define DDRC_Address       0x27  // Data Direction Regis Port C
 #define PORTC_Address      0x28  // Data Register        Port C
 #define PIND_Address       0x29  // Input Pins           Port D
 #define DDRD_Address       0x2A  // Data Direction Regis Port D
 #define PORTD_Address      0x2B  // Data Register        Port D
 #define STGI_XF_CTRL_ADR   0x30  // XLR8 FLoating Point XB Control ---------------------------XLR8
 #define STGI_XF_STATUS_ADR 0x31  // XLR8 Floating Point XB Status ----------------------------XLR8
 #define TIFR0_Address      0x35  // Timer/Counter Interrupt Flag Register
 #define TIFR1_Address      0x36  // Timer/Counter Interrupt Flag Register
 #define TIFR2_Address      0x37  // Timer/Counter Interrupt Flag Register
 #define PCIFR_Address      0x3B  // Pin Change Interrupt Flag Register
 #define EIFR_Address       0x3C  // External Interrupt Flag Register
 #define EIMSK_Address      0x3D  // External Interrupt Mask Register
 #define GPIOR0_Address     0x3E  // General Purpose I/O Register
 #define EECR_Address       0x3F  // EEPROM Control Register
 #define EEDR_Address       0x40  // EEPROM Data Register
 #define EEARL_Address      0x41  // EEPROM Address Register(Low)
 #define EEARH_Address      0x42  // EEPROM Address Register(High)
 #define GTCCR_Address      0x43  // GTCCR
 #define TCCR0A_Address     0x44  // Timer/Counter 0 Control Register
 #define TCCR0B_Address     0x45  // Timer/Counter 0 Control Register
 #define TCNT0_Address      0x46  // Timer/Counter 0
 #define OCR0A_Address      0x47  // Timer/Counter 0 Output Compare Register
 #define OCR0B_Address      0x48  // Timer/Counter 0 Output Compare Register
 #define CLKSPD_ADDR        0x49  // XLR8 desired speed select for UART
 #define GPIOR1_Address     0x4A  // General Purpose I/O Register
 #define GPIOR2_Address     0x4B  // General Purpose I/O Register
 #define SPCR_Address       0x4C  // SPI Control Register
 #define SPSR_Address       0x4D  // SPI Status Register
 #define SPDR_Address       0x4E  // SPI I/O Data Register
 #define ACSR_Address       0x50  // Analog Comparator Control and Status Register
 #define MCUSR_Address      0x54  // MCU general Control and Status Register
 #define MCUCR_Address      0x55  // MCU general Control Register
 #define SPMCSR_Address     0x57  // Store Program Memory Control and Status Register
 #define STGI_XF_R0_ADR     0x58  // XLR8 Floating Point XB Result, Byte 0 (low order) --------XLR8
 #define STGI_XF_R1_ADR     0x59  // XLR8 Floating Point XB Result, Byte 1 --------------------XLR8
 #define STGI_XF_R2_ADR     0x5A  // XLR8 Floating Point XB Result, Byte 2 --------------------XLR8
 #define STGI_XF_R3_ADR     0x5B  // XLR8 Floating Point XB Result, Byte 3 (hi order)----------XLR8
 #define SPL_Address        0x5D  // Stack Pointer(Low)
 #define SPH_Address        0x5E  // Stack Pointer(High)
 #define SREG_Address       0x5F  // Status Register
 #define WDTCSR_Address     0x60  // Watchdog Timer Control Register
 #define XICR_Address       0x61  // XLR8 IRQ Control reg -------------------------------------XLR8
 #define XIFR_Address       0x62  // XLR8 IRQ Flag reg ----------------------------------------XLR8
 #define XMSK_Address       0x63  // XLR8 IRQ Mask reg ----------------------------------------XLR8
 #define PRR_ADDR           0x64 
 #define XACK_Address       0x65  // XLR8 ACK Holding reg -------------------------------------XLR8
 #define OX8ICR_Address     0x66  // OpenXLR8 Pin Control Interrupt Control Reg ---------------XLR8
 #define OX8IFR_Address     0x67  // OpenXLR8 Pin Control Interrupt Flag Reg ------------------XLR8
 #define PCICR_Address      0x68  //Pin Change Interrupt Control Register
 #define EICRA_Address      0x69  // External Interrupt Control Register A
 #define OX8MSK_Address     0x6A  // OpenXLR8 Pin Control Interrupt Mask Reg ------------------XLR8
 #define PCMSK0_Address     0x6B  // Pin Change Mask Register 0
 #define PCMSK1_Address     0x6C  // Pin Change Mask Register 1
 #define PCMSK2_Address     0x6D  // Pin Change Mask Register 2
 #define TIMSK0_Address     0x6E  // Timer/Counter Interrupt Mask Register
 #define TIMSK1_Address     0x6F  // Timer/Counter Interrupt Mask Register
 #define TIMSK2_Address     0x70  // Timer/Counter Interrupt Mask Register
 #define ADCL_ADDR          0x78  // ADC Data register(Low)
 #define ADCH_ADDR          0x79  // ADC Data register(High)
 #define ADCSRA_ADDR        0x7A  // ADC Control and Status Register
 #define ADCSRB_ADDR        0x7B 
 #define ADMUX_ADDR         0x7C  // ADC Multiplexer Selection Register
 #define DIDR0_ADDR         0x7E 
 #define DIDR1_ADDR         0x7F 
 #define TCCR1A_Address     0x80  // Timer/Counter 1 Control Register A
 #define TCCR1B_Address     0x81  // Timer/Counter 1 Control Register B
 #define TCCR1C_Address     0x82  // Timer/Counter 1 Control Register C
 #define TCNT1L_Address     0x84  // Timer/Counter 1 Register(Low)
 #define TCNT1H_Address     0x85  // Timer/Counter 1 Register(High)
 #define ICR1L_Address      0x86  // Timer/Counter 1 Input Capture Register(Low)
 #define ICR1H_Address      0x87  // Timer/Counter 1 Input Capture Register(High)
 #define OCR1AL_Address     0x88  // Timer/Counter 1 Output Compare Register A(Low)
 #define OCR1AH_Address     0x89  // Timer/Counter 1 Output Compare Register A(High)
 #define OCR1BL_Address     0x8A  // Timer/Counter 1 Output Compare Register B(Low)
 #define OCR1BH_Address     0x8B  // Timer/Counter 1 Output Compare Register B(High)
 #define TCCR2A_Address     0xB0  // Timer/Counter 2 Control Register
 #define TCCR2B_Address     0xB1  // Timer/Counter 2 Control Register
 #define TCNT2_Address      0xB2  // Timer/Counter 2
 #define OCR2A_Address      0xB3  // Timer/Counter 2 Output Compare Register
 #define OCR2B_Address      0xB4  // Timer/Counter 2 Output Compare Register
 #define ASSR_Address       0xB6  // Asynchronous mode Status Register
 #define TWBR_ADDR          0xB8  // TWI Bit Rate Register
 #define TWSR_ADDR          0xB9  // TWI Status Register
 #define TWAR_ADDR          0xBA  // TWI Address Register
 #define TWDR_ADDR          0xBB  // TWI Data Register
 #define TWCR_ADDR          0xBC  // TWI Control Register
 #define TWAMR_ADDR         0xBD 
 #define UCSR0A_Address     0xC0  // USART0 Control and Status Register A
 #define UCSR0B_Address     0xC1  // USART0 Control and Status Register B
 #define UCSR0C_Address     0xC2  // USART0 Control and Status Register C
 #define UBRR0L_Address     0xC4  // USART0 Baud Rate Register Low
 #define UBRR0H_Address     0xC5  // USART0 Baud Rate Register HIGH
 #define UDR0_Address       0xC6  // USART0 I/O Data Register
 #define FCFG_CID_ADDR      0xCF  // XLR8 flash config: chip id (64b FIFO) --------------------XLR8
 #define FCFG_CTL_ADDR      0xD0  // XLR8 flash config: flash programming ---------------------XLR8
 #define FCFG_STS_ADDR      0xD1  // XLR8 flash config: status --------------------------------XLR8
 #define FCFG_DAT_ADDR      0xD2  // XLR8 flash config: flash programming  data.  Write only --XLR8
 #define XLR8VERL_ADDR      0xD4  // XLR8 hardware version (Low) ------------------------------XLR8
 #define XLR8VERH_ADDR      0xD5  // XLR8 hardware version (High) -----------------------------XLR8
 #define XLR8VERT_ADDR      0xD6  // XLR8 hardware version (Type) -----------------------------XLR8
 #define NEOCR_ADDR      0xF4  // XLR8 NeoPixel XB Control Reg --------------------------------XLR8
 #define NEOD0_ADDR      0xF5  // XLR8 NeoPixel XB Data 0 Reg ---------------------------------XLR8
 #define NEOD1_ADDR      0xF6  // XLR8 NeoPixel XB Data 1 Reg ---------------------------------XLR8
 #define NEOD2_ADDR      0xF7  // XLR8 NeoPixel XB Data 2 Reg ---------------------------------XLR8
 #define SVCR_ADDR       0xFA  // XLR8 Servo XB Control Reg -----------------------------------XLR8
 #define SVPWL_ADDR      0xFC  // XLR8 Servo XB Pulse Width Low  Reg - ------------------------XLR8
 #define SVPWH_ADDR      0xFD  // XLR8 Servo XB Pulse Width High Reg --------------------------XLR8

#endif

