/*
 * display.c
 *
 *  Created on: Aug 9, 2022
 *      Author: Yannick
 */


#include "display.h"

static ticks = 0;

void display_d1(bool on)
{
	HAL_GPIO_WritePin(GPIOB, DP_D1_Pin, on);
}

void display_d2(bool on)
{
	HAL_GPIO_WritePin(GPIOB, DP_D2_Pin, on);
}

void display_d3(bool on)
{
	HAL_GPIO_WritePin(GPIOB, DP_D3_Pin, on);
}

void display_d4(bool on)
{
	HAL_GPIO_WritePin(GPIOB, DP_D4_Pin, on);
}

void display_d5(bool on)
{
	HAL_GPIO_WritePin(GPIOB, DP_D5_Pin, on);
}

void display_a(bool on)
{
	HAL_GPIO_WritePin(GPIOB, DP_A_Pin, on);
}

void display_b(bool on)
{
	HAL_GPIO_WritePin(GPIOA, DP_B_Pin, on);
}

void display_c(bool on)
{
	HAL_GPIO_WritePin(GPIOA, DP_C_Pin, on);
}

void display_d(bool on)
{
	HAL_GPIO_WritePin(GPIOA, DP_D_Pin, on);
}

void display_e(bool on)
{
	HAL_GPIO_WritePin(GPIOA, DP_E_Pin, on);
}

void display_f(bool on)
{
	HAL_GPIO_WritePin(GPIOA, DP_F_Pin, on);
}

void display_g(bool on)
{
	HAL_GPIO_WritePin(GPIOA, DP_G_Pin, on);
}

void display_dp(bool on)
{
	HAL_GPIO_WritePin(GPIOA, DP_DOT_Pin, on);
}

void display_number(uint8_t number, bool dot)
{
	switch (number)
	{
		case 0:
			display_a(true);
			display_b(true);
			display_c(true);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(false);
			break;
		case 1:
			display_a(false);
			display_b(true);
			display_c(true);
			display_d(false);
			display_e(false);
			display_f(false);
			display_g(false);
			break;
		case 2:
			display_a(true);
			display_b(true);
			display_c(false);
			display_d(true);
			display_e(true);
			display_f(false);
			display_g(true);
			break;
		case 3:
			display_a(true);
			display_b(true);
			display_c(true);
			display_d(true);
			display_e(false);
			display_f(false);
			display_g(true);
			break;
		case 4:
			display_a(false);
			display_b(true);
			display_c(true);
			display_d(false);
			display_e(false);
			display_f(true);
			display_g(true);
			break;
		case 5:
			display_a(true);
			display_b(false);
			display_c(true);
			display_d(true);
			display_e(false);
			display_f(true);
			display_g(true);
			break;
		case 6:
			display_a(true);
			display_b(false);
			display_c(true);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(true);
			break;
		case 7:
			display_a(true);
			display_b(true);
			display_c(true);
			display_d(false);
			display_e(false);
			display_f(false);
			display_g(false);
			break;
		case 8:
			display_a(true);
			display_b(true);
			display_c(true);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(true);
			break;
		case 9:
			display_a(true);
			display_b(true);
			display_c(true);
			display_d(true);
			display_e(false);
			display_f(true);
			display_g(true);
			break;
		case 10: // A
			display_a(true);
			display_b(true);
			display_c(true);
			display_d(true);
			display_e(false);
			display_f(true);
			display_g(true);
			break;
		case 11: // B
			display_a(true);
			display_b(true);
			display_c(true);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(true);
			break;
		case 12: // C
			display_a(true);
			display_b(false);
			display_c(false);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(true);
			break;
		case 13: // D
			display_a(true);
			display_b(true);
			display_c(true);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(false);
			break;
		case 14: // E
			display_a(true);
			display_b(false);
			display_c(false);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(true);
			break;
		case 15: // F
			display_a(true);
			display_b(false);
			display_c(false);
			display_d(false);
			display_e(true);
			display_f(true);
			display_g(true);
			break;
		case 16: // T
			display_a(true);
			display_b(false);
			display_c(false);
			display_d(false);
			display_e(false);
			display_f(false);
			display_g(false);
			break;
		case 17: // L
			display_a(false);
			display_b(false);
			display_c(false);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(false);
			break;
		case 18: // U
			display_a(false);
			display_b(true);
			display_c(true);
			display_d(true);
			display_e(true);
			display_f(true);
			display_g(false);
			break;
		case 19: // -
			display_a(false);
			display_b(false);
			display_c(false);
			display_d(false);
			display_e(false);
			display_f(false);
			display_g(true);
			break;
		case 20: // +
			display_a(false);
			display_b(false);
			display_c(false);
			display_d(false);
			display_e(false);
			display_f(true);
			display_g(true);
			break;
		default:
			display_a(false);
			display_b(false);
			display_c(false);
			display_d(false);
			display_e(false);
			display_f(false);
			display_g(false);
			break;
	}

	display_dp(dot);
}

void display_channel(double value)
{
	int temp = (int)(round(value * 100.0)) % 100;// / 100.0;
	bool plus = ((temp > 30) && (temp < 50));
	bool minus = ((temp > 62) && (temp < 85));

	//bool plus = temp

	int v = round(value) * 100;

	//value = value * 100;
	uint8_t n1 = -1;
	uint8_t n2 = (v % 10000 - v % v % 1000) / 1000;
	uint8_t n3 = (v % 1000 - v % v % 100) / 100;
	//uint8_t n4 = (value % 100 - value % value % 10) / 10;
	//uint8_t n5 = (value % 10 - value % value % 1) / 1;


	if (plus)
	{
		n1 = 20;
	}
	else if (minus)
	{
		n1 = 19;
	}

	if (ticks == 1)
	{
		display_d1(plus || minus);
		display_d2(false);
		display_d3(false);
		display_d4(false);
		display_d5(false);
		display_number(n1, false);
	}
	if (ticks == 2)
	{
		display_d1(false);
		display_d2(!((n1 == 0) && (n2 == 0)));
		display_d3(false);
		display_d4(false);
		display_d5(false);
		display_number(n2, false);
	}
	if (ticks == 3)
	{
		display_d1(false);
		display_d2(false);
		display_d3( !((n1 == 0) && (n2 == 0) && (n3 == 0))  );
		display_d4(false);
		display_d5(false);
		display_number(n3, false);
	}
	if (ticks == 4)
	{
		display_d1(false);
		display_d2(false);
		display_d3(false);
		display_d4(false);
		display_d5(false);
		//display_number(n4, false);
	}
	if (ticks == 5)
	{
		display_d1(false);
		display_d2(false);
		display_d3(false);
		display_d4(false);
		display_d5(false);
		//display_number(n5, false);
	}

	if (ticks == 5)
	{
		ticks = 0;
	}
	ticks++;
}

void display(int value, bool dot)
{
	uint8_t n1 = (value % 100000 - value % value % 10000) / 10000;
	uint8_t n2 = (value % 10000 - value % value % 1000) / 1000;
	uint8_t n3 = (value % 1000 - value % value % 100) / 100;
	uint8_t n4 = (value % 100 - value % value % 10) / 10;
	uint8_t n5 = (value % 10 - value % value % 1) / 1;

	if (ticks == 1)
	{
		display_d1(n1 != 0);
		display_d2(false);
		display_d3(false);
		display_d4(false);
		display_d5(false);
		display_number(n1, false);
	}
	if (ticks == 2)
	{
		display_d1(false);
		display_d2(!((n1 == 0) && (n2 == 0)));
		display_d3(false);
		display_d4(false);
		display_d5(false);
		display_number(n2, false);
	}
	if (ticks == 3)
	{
		display_d1(false);
		display_d2(false);
		display_d3( !((n1 == 0) && (n2 == 0) && (n3 == 0))  );
		display_d4(false);
		display_d5(false);
		display_number(n3, dot);
	}
	if (ticks == 4)
	{
		display_d1(false);
		display_d2(false);
		display_d3(false);
		display_d4( !((n1 == 0) && (n2 == 0) && (n3 == 0) && (n4 == 0))   );
		display_d5(false);
		display_number(n4, false);
	}
	if (ticks == 5)
	{
		display_d1(false);
		display_d2(false);
		display_d3(false);
		display_d4(false);
		display_d5(true);
		display_number(n5, false);
	}

	if (ticks == 5)
	{
		ticks = 0;
	}
	ticks++;
}
