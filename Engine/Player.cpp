#include "Player.h"

Player::~Player()
{
}



void Player::drawPlayer( Graphics &gfx) const 
{
	{
		gfx.PutPixel(7 + x, 0 + y, 0, 0, 0);
		gfx.PutPixel(8 + x, 0 + y, 0, 0, 0);
		gfx.PutPixel(9 + x, 0 + y, 0, 0, 0);
		gfx.PutPixel(10 + x, 0 + y, 0, 0, 0);
		gfx.PutPixel(11 + x, 0 + y, 0, 0, 0);
		gfx.PutPixel(12 + x, 0 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 1 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 1 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 1 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 1 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 1 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 1 + y, 254, 221, 88);
		gfx.PutPixel(11 + x, 1 + y, 254, 221, 88);
		gfx.PutPixel(12 + x, 1 + y, 254, 221, 88);
		gfx.PutPixel(13 + x, 1 + y, 0, 0, 0);
		gfx.PutPixel(14 + x, 1 + y, 0, 0, 0);
		gfx.PutPixel(3 + x, 2 + y, 0, 0, 0);
		gfx.PutPixel(4 + x, 2 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(6 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(11 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(12 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(13 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(14 + x, 2 + y, 254, 221, 88);
		gfx.PutPixel(15 + x, 2 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 2 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 3 + y, 0, 0, 0);
		gfx.PutPixel(3 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(5 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(6 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(11 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(12 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(13 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(14 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(15 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(16 + x, 3 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 3 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 4 + y, 0, 0, 0);
		gfx.PutPixel(3 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(5 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(6 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(11 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(12 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(13 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(14 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(15 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(16 + x, 4 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 4 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(3 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(4 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(6 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(11 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(12 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(13 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(14 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(15 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(16 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 5 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 5 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(3 + x, 6 + y, 255, 255, 255);
		gfx.PutPixel(4 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 6 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 6 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 6 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 6 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(11 + x, 6 + y, 255, 255, 255);
		gfx.PutPixel(12 + x, 6 + y, 255, 255, 255);
		gfx.PutPixel(13 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(14 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(15 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 6 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 6 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 6 + y, 0, 0, 0);
		gfx.PutPixel(0 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 7 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 7 + y, 255, 255, 255);
		gfx.PutPixel(4 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 7 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 7 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 7 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 7 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(11 + x, 7 + y, 255, 255, 255);
		gfx.PutPixel(12 + x, 7 + y, 255, 255, 255);
		gfx.PutPixel(13 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(14 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(15 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 7 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 7 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 7 + y, 254, 221, 88);
		gfx.PutPixel(19 + x, 7 + y, 0, 0, 0);
		gfx.PutPixel(0 + x, 8 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 8 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(3 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(4 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(5 + x, 8 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 8 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 8 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 8 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 8 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 8 + y, 0, 0, 0);
		gfx.PutPixel(11 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(12 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(13 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(14 + x, 8 + y, 255, 255, 255);
		gfx.PutPixel(15 + x, 8 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 8 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 8 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 8 + y, 254, 221, 88);
		gfx.PutPixel(19 + x, 8 + y, 0, 0, 0);
		gfx.PutPixel(0 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(2 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(3 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(4 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(11 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(12 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(13 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(14 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(15 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(16 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 9 + y, 254, 221, 88);
		gfx.PutPixel(19 + x, 9 + y, 0, 0, 0);
		gfx.PutPixel(0 + x, 10 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(2 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(3 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(5 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(6 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(11 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(12 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(13 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(14 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(15 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(16 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 10 + y, 254, 221, 88);
		gfx.PutPixel(19 + x, 10 + y, 0, 0, 0);
		gfx.PutPixel(0 + x, 11 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(2 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(3 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(5 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(6 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(7 + x, 11 + y, 20, 14, 18);
		gfx.PutPixel(8 + x, 11 + y, 18, 11, 14);
		gfx.PutPixel(9 + x, 11 + y, 18, 12, 14);
		gfx.PutPixel(10 + x, 11 + y, 18, 12, 14);
		gfx.PutPixel(11 + x, 11 + y, 21, 13, 16);
		gfx.PutPixel(12 + x, 11 + y, 24, 11, 15);
		gfx.PutPixel(13 + x, 11 + y, 0, 0, 0);
		gfx.PutPixel(14 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(15 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(16 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 11 + y, 254, 221, 88);
		gfx.PutPixel(19 + x, 11 + y, 0, 0, 0);
		gfx.PutPixel(0 + x, 12 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(2 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(3 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(5 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(6 + x, 12 + y, 23, 9, 23);
		gfx.PutPixel(7 + x, 12 + y, 135, 26, 68);
		gfx.PutPixel(8 + x, 12 + y, 135, 26, 68);
		gfx.PutPixel(9 + x, 12 + y, 135, 26, 68);
		gfx.PutPixel(10 + x, 12 + y, 135, 26, 68);
		gfx.PutPixel(11 + x, 12 + y, 135, 26, 68);
		gfx.PutPixel(12 + x, 12 + y, 135, 26, 68);
		gfx.PutPixel(13 + x, 12 + y, 135, 26, 68);
		gfx.PutPixel(14 + x, 12 + y, 0, 0, 0);
		gfx.PutPixel(15 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(16 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 12 + y, 254, 221, 88);
		gfx.PutPixel(19 + x, 12 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 13 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 13 + y, 254, 221, 88);
		gfx.PutPixel(3 + x, 13 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 13 + y, 254, 221, 88);
		gfx.PutPixel(5 + x, 13 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(7 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(8 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(9 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(10 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(11 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(12 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(13 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(14 + x, 13 + y, 135, 26, 68);
		gfx.PutPixel(15 + x, 13 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 13 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 13 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 13 + y, 0, 0, 0);
		gfx.PutPixel(1 + x, 14 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 14 + y, 254, 221, 88);
		gfx.PutPixel(3 + x, 14 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 14 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 14 + y, 135, 26, 68);
		gfx.PutPixel(6 + x, 14 + y, 135, 26, 68);
		gfx.PutPixel(7 + x, 14 + y, 135, 26, 68);
		gfx.PutPixel(8 + x, 14 + y, 135, 26, 68);
		gfx.PutPixel(9 + x, 14 + y, 251, 192, 224);
		gfx.PutPixel(10 + x, 14 + y, 251, 192, 224);
		gfx.PutPixel(11 + x, 14 + y, 251, 192, 224);
		gfx.PutPixel(12 + x, 14 + y, 251, 192, 224);
		gfx.PutPixel(13 + x, 14 + y, 135, 26, 68);
		gfx.PutPixel(14 + x, 14 + y, 135, 26, 68);
		gfx.PutPixel(15 + x, 14 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 14 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 14 + y, 254, 221, 88);
		gfx.PutPixel(18 + x, 14 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 15 + y, 0, 0, 0);
		gfx.PutPixel(3 + x, 15 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 15 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 15 + y, 135, 26, 68);
		gfx.PutPixel(6 + x, 15 + y, 135, 26, 68);
		gfx.PutPixel(7 + x, 15 + y, 135, 26, 68);
		gfx.PutPixel(8 + x, 15 + y, 251, 192, 224);
		gfx.PutPixel(9 + x, 15 + y, 251, 192, 224);
		gfx.PutPixel(10 + x, 15 + y, 251, 192, 224);
		gfx.PutPixel(11 + x, 15 + y, 251, 192, 224);
		gfx.PutPixel(12 + x, 15 + y, 251, 192, 224);
		gfx.PutPixel(13 + x, 15 + y, 251, 192, 224);
		gfx.PutPixel(14 + x, 15 + y, 135, 26, 68);
		gfx.PutPixel(15 + x, 15 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 15 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 15 + y, 0, 0, 0);
		gfx.PutPixel(2 + x, 16 + y, 0, 0, 0);
		gfx.PutPixel(3 + x, 16 + y, 254, 221, 88);
		gfx.PutPixel(4 + x, 16 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 16 + y, 135, 26, 68);
		gfx.PutPixel(6 + x, 16 + y, 135, 26, 68);
		gfx.PutPixel(7 + x, 16 + y, 135, 26, 68);
		gfx.PutPixel(8 + x, 16 + y, 251, 192, 224);
		gfx.PutPixel(9 + x, 16 + y, 251, 192, 224);
		gfx.PutPixel(10 + x, 16 + y, 251, 192, 224);
		gfx.PutPixel(11 + x, 16 + y, 251, 192, 224);
		gfx.PutPixel(12 + x, 16 + y, 251, 192, 224);
		gfx.PutPixel(13 + x, 16 + y, 251, 192, 224);
		gfx.PutPixel(14 + x, 16 + y, 135, 26, 68);
		gfx.PutPixel(15 + x, 16 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 16 + y, 254, 221, 88);
		gfx.PutPixel(17 + x, 16 + y, 0, 0, 0);
		gfx.PutPixel(3 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(4 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(8 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(9 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(10 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(11 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(12 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(13 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(14 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(15 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(16 + x, 17 + y, 0, 0, 0);
		gfx.PutPixel(5 + x, 18 + y, 0, 0, 0);
		gfx.PutPixel(6 + x, 18 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 18 + y, 254, 221, 88);
		gfx.PutPixel(8 + x, 18 + y, 254, 221, 88);
		gfx.PutPixel(9 + x, 18 + y, 254, 221, 88);
		gfx.PutPixel(10 + x, 18 + y, 254, 221, 88);
		gfx.PutPixel(11 + x, 18 + y, 254, 221, 88);
		gfx.PutPixel(12 + x, 18 + y, 254, 221, 88);
		gfx.PutPixel(13 + x, 18 + y, 0, 0, 0);
		gfx.PutPixel(14 + x, 18 + y, 0, 0, 0);
		gfx.PutPixel(7 + x, 19 + y, 0, 0, 0);
		gfx.PutPixel(8 + x, 19 + y, 0, 0, 0);
		gfx.PutPixel(9 + x, 19 + y, 0, 0, 0);
		gfx.PutPixel(10 + x, 19 + y, 0, 0, 0);
		gfx.PutPixel(11 + x, 19 + y, 0, 0, 0);
		gfx.PutPixel(12 + x, 19 + y, 0, 0, 0);
	}


	for (int n = 0; n < numberOfMissiles ; n++)
	{
		if (isMissileFired[n])
		{
			(*mis[n]).DrawMissile(gfx);
		}
	}

}

void Player::updateLoc(const Keyboard &kbd)
{
	

	// JUMPING CODE--------------------------------
	if (kbd.KeyIsPressed(VK_SPACE)&&jumpFlag==0)//---------
	{											//---------
		jumpFlag = 1;							//---------
		startingY = y;
	}											//---------
												//---------
	 if (jumpFlag == 1)							//---------
	{											//---------
		if (y >= (startingY - jumpLenght))			//---------
			y -=jumpSpeed;						//---------
		else									//---------
			jumpFlag = 2;						//---------
	}											//---------
												//---------
	 if (jumpFlag == 2)							//---------
	{											//---------
		if (y < baseY)							//---------
			y += jumpSpeed;						//---------
		if (y > baseY)
			y = baseY;
		else									//---------
			jumpFlag = 0;
									//---------
	}											//---------
												//---------
												//---------
												//---------
	 if (jumpFlag == 0 && baseY > y)			//---------
		 jumpFlag = 2;							//---------
	 //----------------------------------------
	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		x += speed;
		isLookingRight = true;
	}
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		x -= speed;
		isLookingRight = false;
	}
	
	if (x >= Graphics::ScreenWidth-19)
	{
		x = Graphics::ScreenWidth - 20;
	}
	else if (x < 0)
	{
		x = 0;
	}

	// ----------------------------Firing Missile------------------------------------
	if ( isFiringEnabled && (missileCounter<numberOfMissiles))
	{
		for(int n=0;n<numberOfMissiles;n++)
		if (isMissileFired[n]==false && kbd.KeyIsPressed(VK_CONTROL) && isFiringEnabled)
		{
			mis[n] = new Missile(x + Player::xDimension, y + Player::yDimension / 2,isLookingRight);
			
			isMissileFired[n] = true; 
			
			missileCounter += 1;
			
			if (kbd.KeyIsPressed(VK_CONTROL))
				isFiringEnabled = false;
			else
				isFiringEnabled = true;
			}
		}

	if (kbd.KeyIsPressed(VK_CONTROL))
		isFiringEnabled = false;
	else
		isFiringEnabled = true;
	

	for (int n = 0; n < numberOfMissiles ; n++)
	{
		if (isMissileFired[n])
		{
			(*mis[n]).UpdateMissile();
			if ((*mis[n]).xLoc >= Graphics::ScreenWidth - 5 || (*mis[n]).xLoc <= 2)
			{
				delete(mis[n]);
				isMissileFired[n] = false;
				missileCounter -= 1;
			}

		}
	}
	
}

int Player::getXloc()
{
	return x;
}

int Player::getYloc()
{
	return y;
}

void Player::setBaseY( int newBaseY)
{
	this->baseY = newBaseY;
}


