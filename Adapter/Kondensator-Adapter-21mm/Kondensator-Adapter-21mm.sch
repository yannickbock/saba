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
L Connector_Generic:Conn_01x01 J1
U 1 1 6292A71E
P 5650 3100
F 0 "J1" H 5730 3096 50  0001 L CNN
F 1 "Conn_01x01" H 5730 3051 50  0001 L CNN
F 2 "Wire_Pads:SolderWirePad_single_1-2mmDrill" H 5650 3100 50  0001 C CNN
F 3 "~" H 5650 3100 50  0001 C CNN
	1    5650 3100
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J2
U 1 1 6292AB1C
P 5650 3300
F 0 "J2" H 5730 3342 50  0001 L CNN
F 1 "Conn_01x01" H 5730 3296 50  0001 L CNN
F 2 "Wire_Pads:SolderWirePad_single_1-2mmDrill" H 5650 3300 50  0001 C CNN
F 3 "~" H 5650 3300 50  0001 C CNN
	1    5650 3300
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J3
U 1 1 6292B030
P 5650 3500
F 0 "J3" H 5730 3542 50  0001 L CNN
F 1 "Conn_01x01" H 5730 3496 50  0001 L CNN
F 2 "Wire_Pads:SolderWirePad_single_1-2mmDrill" H 5650 3500 50  0001 C CNN
F 3 "~" H 5650 3500 50  0001 C CNN
	1    5650 3500
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J4
U 1 1 6292B3FA
P 5650 3700
F 0 "J4" H 5730 3742 50  0001 L CNN
F 1 "Conn_01x01" H 5730 3696 50  0001 L CNN
F 2 "Wire_Pads:SolderWirePad_single_1-2mmDrill" H 5650 3700 50  0001 C CNN
F 3 "~" H 5650 3700 50  0001 C CNN
	1    5650 3700
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J5
U 1 1 6292BAB5
P 6650 3100
F 0 "J5" H 6730 3142 50  0001 L CNN
F 1 "Conn_01x01" H 6730 3096 50  0001 L CNN
F 2 "Wire_Pads:SolderWirePad_single_1-2mmDrill" H 6650 3100 50  0001 C CNN
F 3 "~" H 6650 3100 50  0001 C CNN
	1    6650 3100
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x01 J6
U 1 1 6292F956
P 6650 3300
F 0 "J6" H 6730 3342 50  0001 L CNN
F 1 "Conn_01x01" H 6730 3296 50  0001 L CNN
F 2 "Wire_Pads:SolderWirePad_single_1-2mmDrill" H 6650 3300 50  0001 C CNN
F 3 "~" H 6650 3300 50  0001 C CNN
	1    6650 3300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 62932675
P 5450 3850
F 0 "#PWR?" H 5450 3600 50  0001 C CNN
F 1 "GND" H 5450 3700 50  0000 C CNN
F 2 "" H 5450 3850 50  0001 C CNN
F 3 "" H 5450 3850 50  0001 C CNN
	1    5450 3850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5450 3300 5450 3500
Connection ~ 5450 3500
Wire Wire Line
	5450 3500 5450 3700
Connection ~ 5450 3700
Wire Wire Line
	5450 3700 5450 3850
$Comp
L power:VCC #PWR?
U 1 1 62933B6A
P 5450 2950
F 0 "#PWR?" H 5450 2800 50  0001 C CNN
F 1 "VCC" H 5450 3100 50  0000 C CNN
F 2 "" H 5450 2950 50  0001 C CNN
F 3 "" H 5450 2950 50  0001 C CNN
	1    5450 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	5450 2950 5450 3100
$Comp
L power:GND #PWR?
U 1 1 629364D2
P 6450 3450
F 0 "#PWR?" H 6450 3200 50  0001 C CNN
F 1 "GND" H 6450 3300 50  0000 C CNN
F 2 "" H 6450 3450 50  0001 C CNN
F 3 "" H 6450 3450 50  0001 C CNN
	1    6450 3450
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR?
U 1 1 629368EC
P 6450 2950
F 0 "#PWR?" H 6450 2800 50  0001 C CNN
F 1 "VCC" H 6450 3100 50  0000 C CNN
F 2 "" H 6450 2950 50  0001 C CNN
F 3 "" H 6450 2950 50  0001 C CNN
	1    6450 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 2950 6450 3100
Wire Wire Line
	6450 3300 6450 3450
$EndSCHEMATC
