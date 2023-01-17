EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Regulator_Linear:L78L05_SOT89 U101
U 1 1 5F91DCB9
P 7700 1500
F 0 "U101" H 7700 1742 50  0000 C CNN
F 1 "L78L05_SOT89" H 7700 1651 50  0000 C CNN
F 2 "TO_SOT_Packages_SMD:SOT-89-3" H 7700 1700 50  0001 C CIN
F 3 "http://www.st.com/content/ccc/resource/technical/document/datasheet/15/55/e5/aa/23/5b/43/fd/CD00000446.pdf/files/CD00000446.pdf/jcr:content/translations/en.CD00000446.pdf" H 7700 1450 50  0001 C CNN
F 4 "C71136" H 7700 1500 50  0001 C CNN "LCSC"
	1    7700 1500
	1    0    0    -1  
$EndComp
$Comp
L Device:C C102
U 1 1 5F92F6A5
P 8250 1750
F 0 "C102" H 8365 1796 50  0000 L CNN
F 1 "4µ7" H 8365 1705 50  0000 L CNN
F 2 "Capacitors_SMD:C_0402" H 8288 1600 50  0001 C CNN
F 3 "~" H 8250 1750 50  0001 C CNN
F 4 "C23733" H 8250 1750 50  0001 C CNN "LCSC"
	1    8250 1750
	1    0    0    -1  
$EndComp
$Comp
L Device:C C103
U 1 1 5F93016B
P 8700 1750
F 0 "C103" H 8815 1796 50  0000 L CNN
F 1 "100nF" H 8815 1705 50  0000 L CNN
F 2 "Capacitors_SMD:C_0402" H 8738 1600 50  0001 C CNN
F 3 "~" H 8700 1750 50  0001 C CNN
F 4 "C1525" H 8700 1750 50  0001 C CNN "LCSC"
	1    8700 1750
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x03_Male J4
U 1 1 5F951CFE
P 11050 1200
F 0 "J4" H 11022 1178 50  0000 R CNN
F 1 "Conn_01x03_Male" H 11022 1223 50  0001 R CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x03_Pitch2.54mm" H 11050 1200 50  0001 C CNN
F 3 "~" H 11050 1200 50  0001 C CNN
	1    11050 1200
	-1   0    0    1   
$EndComp
Text GLabel 10350 3850 0    50   Input ~ 0
IC3101_P1
Text GLabel 10350 3750 0    50   Input ~ 0
IC3101_P2
Text GLabel 10350 3650 0    50   Input ~ 0
IC3101_P3
Text GLabel 10350 3550 0    50   Input ~ 0
IC3101_P4
Text GLabel 10350 3450 0    50   Input ~ 0
IC3101_P5
Text GLabel 10350 3350 0    50   Input ~ 0
IC3101_P6
Text GLabel 10350 2150 0    50   Input ~ 0
IC3101_P12
Text GLabel 10350 2250 0    50   Input ~ 0
IC3101_P13
Text GLabel 10350 2350 0    50   Input ~ 0
IC3101_P14
Text GLabel 10350 2450 0    50   Input ~ 0
IC3101_P15
Text GLabel 10350 2550 0    50   Input ~ 0
IC3101_P16
$Comp
L power:GND #PWR0107
U 1 1 5F972AD9
P 7700 2100
F 0 "#PWR0107" H 7700 1850 50  0001 C CNN
F 1 "GND" H 7700 1950 50  0000 C CNN
F 2 "" H 7700 2100 50  0001 C CNN
F 3 "" H 7700 2100 50  0001 C CNN
	1    7700 2100
	1    0    0    -1  
$EndComp
Connection ~ 8250 1500
Text GLabel 3150 4700 2    50   Input ~ 0
IC3101_P1
Text GLabel 3150 3900 2    50   Input ~ 0
IC3101_P2
Text GLabel 3150 4100 2    50   Input ~ 0
IC3101_P4
Text GLabel 3150 4800 2    50   Input ~ 0
IC3101_P5
Text GLabel 3150 4600 2    50   Input ~ 0
IC3101_P6
Text GLabel 3150 4500 2    50   Input ~ 0
IC3101_P7
Text GLabel 3150 4400 2    50   Input ~ 0
IC3101_P8
Text GLabel 3150 4300 2    50   Input ~ 0
IC3101_P12
Text GLabel 1950 4300 0    50   Input ~ 0
IC3101_P13
Text GLabel 1950 4500 0    50   Input ~ 0
IC3101_P14
Text GLabel 1950 4400 0    50   Input ~ 0
IC3101_P15
Wire Wire Line
	8700 1900 8700 2000
Wire Wire Line
	8250 2000 8250 1900
Wire Wire Line
	8250 1500 8250 1600
Wire Wire Line
	8700 1500 8700 1600
$Comp
L power:GND #PWR0117
U 1 1 5FB03E83
P 10850 1300
F 0 "#PWR0117" H 10850 1050 50  0001 C CNN
F 1 "GND" V 10855 1172 50  0000 R CNN
F 2 "" H 10850 1300 50  0001 C CNN
F 3 "" H 10850 1300 50  0001 C CNN
	1    10850 1300
	0    1    1    0   
$EndComp
$Comp
L power:+5V #PWR0118
U 1 1 5FB067BF
P 10850 1100
F 0 "#PWR0118" H 10850 950 50  0001 C CNN
F 1 "+5V" V 10850 1250 50  0000 L CNN
F 2 "" H 10850 1100 50  0001 C CNN
F 3 "" H 10850 1100 50  0001 C CNN
	1    10850 1100
	0    -1   -1   0   
$EndComp
$Comp
L Device:C C101
U 1 1 5FB67FA7
P 7150 1750
F 0 "C101" H 7265 1796 50  0000 L CNN
F 1 "100nF" H 7265 1705 50  0000 L CNN
F 2 "Capacitors_SMD:C_0402" H 7188 1600 50  0001 C CNN
F 3 "~" H 7150 1750 50  0001 C CNN
F 4 "C1525" H 7150 1750 50  0001 C CNN "LCSC"
	1    7150 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 1500 7150 1600
Wire Wire Line
	7150 1900 7150 2000
Wire Wire Line
	7700 1800 7700 2000
Wire Wire Line
	8700 2000 8250 2000
Wire Wire Line
	8250 1500 8700 1500
Wire Wire Line
	7150 1500 7400 1500
Wire Wire Line
	8250 1500 8000 1500
Wire Wire Line
	8250 2000 7700 2000
Connection ~ 8250 2000
Connection ~ 7700 2000
Wire Wire Line
	7700 2000 7700 2100
Wire Wire Line
	7700 2000 7150 2000
$Comp
L power:GND #PWR0120
U 1 1 5FC69DDE
P 10350 2750
F 0 "#PWR0120" H 10350 2500 50  0001 C CNN
F 1 "GND" V 10350 2650 50  0000 R CNN
F 2 "" H 10350 2750 50  0001 C CNN
F 3 "" H 10350 2750 50  0001 C CNN
	1    10350 2750
	0    1    1    0   
$EndComp
Text GLabel 3150 4000 2    50   Input ~ 0
IC3101_P3
Text GLabel 1950 4600 0    50   Input ~ 0
IC3101_P16
Text GLabel 10350 3250 0    50   Input ~ 0
IC3101_P7
Text GLabel 10350 3150 0    50   Input ~ 0
IC3101_P8
Text Notes 900  1500 0    50   ~ 0
IC3101 = M190B1 = Key-Decoder\nP1-P4 = Multiplex-Output | P5-P8 = MultiplexInput | P12 = Muting Output | P13-P16 = Output to 4-16 Decoder\n\nP1: & P5 = U1 | & P6 = U2 | & P7 = U3 | & P8 = U4\nP2: & P5 = U5 | & P6 = U6 | & P7 = U7 | & P8 = U8\nP3: & P5 = U9 | & P6 = U10 | & P7 = FM | & P8 = TAPE 1\nP4: & P5 = TAPE 2 | & P6 = PHONO | & P7 = AM | & P8 = AUX
$Comp
L MCU_Microchip_ATtiny:ATtiny1616-M U1
U 1 1 634C6E9B
P 2550 4100
F 0 "U1" H 2950 5100 50  0000 C CNN
F 1 "ATtiny1616-M" H 2950 5000 50  0000 C CNN
F 2 "Housings_DFN_QFN:UQFN-20-1EP_3x3mm_Pitch0.4mm" H 2550 4100 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/ATtiny3216_ATtiny1616-data-sheet-40001997B.pdf" H 2550 4100 50  0001 C CNN
F 4 "C507118" H 2550 4100 50  0001 C CNN "LCSC"
	1    2550 4100
	1    0    0    -1  
$EndComp
Text GLabel 3150 3400 2    50   Input ~ 0
UPDI
Text GLabel 2550 3200 1    50   Input ~ 0
+5V
$Comp
L power:GND #PWR0101
U 1 1 634D8864
P 2550 5000
F 0 "#PWR0101" H 2550 4750 50  0001 C CNN
F 1 "GND" H 2550 4850 50  0000 C CNN
F 2 "" H 2550 5000 50  0001 C CNN
F 3 "" H 2550 5000 50  0001 C CNN
	1    2550 5000
	1    0    0    -1  
$EndComp
Text GLabel 8850 1500 2    50   Output ~ 0
+5V
Wire Wire Line
	8850 1500 8700 1500
Connection ~ 8700 1500
Text GLabel 7000 1500 0    50   Input ~ 0
+12V
Wire Wire Line
	7000 1500 7150 1500
Connection ~ 7150 1500
Text GLabel 10350 2650 0    50   Output ~ 0
+12V
$Comp
L Connector_Generic:Conn_01x09 J3
U 1 1 634F9F9B
P 10550 2350
F 0 "J3" H 10468 1725 50  0000 C CNN
F 1 "Conn_01x09" H 10468 1816 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x09_Pitch2.54mm" H 10550 2350 50  0001 C CNN
F 3 "~" H 10550 2350 50  0001 C CNN
	1    10550 2350
	1    0    0    1   
$EndComp
$Comp
L Connector_Generic:Conn_01x09 J5
U 1 1 634FB338
P 10550 3450
F 0 "J5" H 10468 2825 50  0000 C CNN
F 1 "Conn_01x09" H 10468 2916 50  0000 C CNN
F 2 "Pin_Headers:Pin_Header_Straight_1x09_Pitch2.54mm" H 10550 3450 50  0001 C CNN
F 3 "~" H 10550 3450 50  0001 C CNN
	1    10550 3450
	1    0    0    1   
$EndComp
Text GLabel 10850 1200 0    50   Input ~ 0
UPDI
$EndSCHEMATC
