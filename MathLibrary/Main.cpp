#include<iostream>
#include"VecMatrix.h"
#include<string>
#include<time.h>
#include<Windows.h>
#include<cassert>
#include<fstream>

const float pi = 3.141592653;
int main()
{

	Mat2 Matrices2D[4] = { Mat2(1,2,3,4),Mat2(5,6,7,8),Mat2(9,0,1,2),Mat2(3,4,5,6) };

	Mat3 Matrices3D[4] = { Mat3(1,2,3,4,5,6,7,8,9),Mat3(10,0,1,2,3,4,5,6,7),Mat3(8,9,10,0,1,2,3,4,5),Mat3(6,7,8,9,10,0,1,2,3) };

	Mat4 Matrices4D[4] =
	{ Mat4(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16),Mat4(17,18,19,20,0,1,2,3,4,5,6,7,8,9,10,11)
	,Mat4(12,13,14,15,16,17,18,19,20,0,1,2,3,4,5,6),Mat4(7,8,9,10,11,12,13,14,15,16,17,18,19,20,0,1) };

	Vector2 Vector2D[4] = { Vector2(1, 2),Vector2(3,4),Vector2(5,6),Vector2(7,8) };

	Vector3 Vector3D[4] = { Vector3(1,2,3),Vector3(4,5,6),Vector3(7,8,9),Vector3(10,0,1) };

	Vector4 Vector4D[4] = { Vector4(1,2,3,4),Vector4(5,6,7,8),Vector4(9,10,11,12),Vector4(12,13,14,15) };

	Mat2 Matrices2MultiplicationAnswers[10] =
	{ Mat2(7,10,15,22),Mat2(19,22,43,50),Mat2(11,4,31,8),Mat2(13,16,29,36),Mat2(23,34,31,46)
	,Mat2(67,78,91,106),Mat2(51,12,71,16),Mat2(45,56,61,76),Mat2(9,18,7,10),Mat2(45,54,19,22) };

	Vector2 Matrix2TimesVector2Answers[10] =
	{ Vector2(7,10),Vector2(15,22), Vector2(23,34), Vector2(31,46),Vector2(19,22)
	, Vector2(43,50),Vector2(67,78), Vector2(91,106), Vector2(11,4), Vector2(31,8) };

	Mat3 Matrix3MultiplicationAnswers[10] =
	{ Mat3(30,36,42,66,81,96,102,126,150),Mat3(29,24,30,80,51,66,131,78,102),Mat3(17,23,29,50,65,80,83,107,131)
	,Mat3(27,33,17,75,90,50,123,147,83) ,Mat3(17,28,39,42,51,60,78,96,114),Mat3(105,6,17,46,33,42,97,60,78)
	,Mat3(83,94,105,28,37,46,61,79,97) ,Mat3(61,72,83,43,52,28,91,109,61),Mat3(114,141,168,18,21,24,54,66,78)
	,Mat3(148,87,114,12,15,18,63,42,54) };

	Vector3 Matrix3TimesVector3Answers[10] =
	{ Vector3(30,36,42),Vector3(66,81,96), Vector3(102,126,150), Vector3(17,28,39),Vector3(29,24,30)
	 ,Vector3(80,51,66), Vector3(131,78,102), Vector3(105,6,17), Vector3(17,23,29), Vector3(50,65,80) };

	Mat4 Matrix4MultiplicationAnswers[10] =
	{ Mat4(90, 100, 110, 120, 202, 228, 254, 280, 314, 356, 398, 440, 426, 484, 542, 600)
	,Mat4(61, 71, 81, 91, 177, 203, 229, 255, 293, 335, 377, 419, 409, 467, 525, 583)
	,Mat4(116, 63, 73, 83, 320, 199, 225, 251, 524, 335, 377, 419, 728, 471, 529, 587)
	,Mat4(150, 160, 86, 96, 358, 384, 242, 268, 566, 608, 398, 440, 774, 832, 554, 612)
	,Mat4(538, 612, 686, 760, 62, 68, 74, 80, 174, 196, 218, 240, 286, 324, 362, 400)
	,Mat4(525, 599, 673, 747, 32, 38, 44, 50, 148, 170, 192, 214, 264, 302, 340, 378)
	,Mat4(932, 607, 681, 755, 65, 29, 35, 41, 269, 165, 187, 209, 473, 301, 339, 377)
	,Mat4(982, 1056, 710, 784, 98, 104, 47, 53, 306, 328, 203, 225, 514, 552, 359, 397)
	,Mat4(398, 452, 506, 560, 510, 580, 650, 720, 55, 78, 101, 124, 146, 164, 182, 200)
	,Mat4(380, 434, 488, 542, 496, 566, 636, 706, 360, 383, 406, 429, 119, 137, 155, 173) };

	Vector4 Matrix4TimesVector4Answers[10] =
	{ Vector4(90,100,110,120),Vector4(202,228,254,280), Vector4(314,356,398,440), Vector4(398,452,506,560)
	,Vector4(61,71,81,91), Vector4(177,203,229,255), Vector4(293,335,377,419)
	,Vector4(380,434,488,542), Vector4(116,63,73,83),Vector4(320,199,225,251) };


	std::fstream test;
	test.open("Test File.txt", std::ios_base::out);
	test << "Vector2 :\n\n";
	test << "Vector2+Vector2:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector2D[i / 4] + Vector2D[i % 4] << "\n";
		test << "Result:";
		test << Vector2D[i / 4] + Vector2D[i % 4] << "\n";
	}
	test << "Vector2-Vector2:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector2D[i / 4] - Vector2D[i % 4] << "\n";
		test << "Result:";
		test << Vector2D[i / 4] - Vector2D[i % 4] << "\n";
	}
	test << "Vector2*scalar:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector2D[i / 4] + Vector2D[i % 4] * 10 << "\n";
		test << "Result:";
		test << Vector2D[i / 4] + Vector2D[i % 4] * 10 << "\n";
	}
	test << "Vector2 Magnitude:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << (Vector2D[i / 4] + Vector2D[i % 4]).Magnitude() << "\n";
		test << "Result:";
		test << (Vector2D[i / 4] + Vector2D[i % 4]).Magnitude() << "\n";
	}
	test << "Vector2 Normalize: (All numbers should be 1 since I am displaying theird magnitudes after being normalized)";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << (Vector2D[i / 4] + Vector2D[i % 4]).Normalize().Magnitude() << "\n";
		test << "Result:";
		test << (Vector2D[i / 4] + Vector2D[i % 4]).Normalize().Magnitude() << "\n";
	}
	test << "Vector2 dot product:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector2D[i / 4].DotProduct(Vector2D[i % 4]) << "\n";
		test << "Result:";
		test << Vector2D[i / 4].DotProduct(Vector2D[i % 4]) << "\n";
	}

	test << "Vector3 :\n\n";
	test << "Vector3+Vector3:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector3D[i / 4] + Vector3D[i % 4] << "\n";
		test << "Result:";
		test << Vector3D[i / 4] + Vector3D[i % 4] << "\n";
	}
	test << "Vector3-Vector3:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector3D[i / 4] - Vector3D[i % 4] << "\n";
		test << "Result:";
		test << Vector3D[i / 4] - Vector3D[i % 4] << "\n";
	}
	test << "Vector3*scalar:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector3D[i / 4] + Vector3D[i % 4] * 10 << "\n";
		test << "Result:";
		test << Vector3D[i / 4] + Vector3D[i % 4] * 10 << "\n";
	}
	test << "Vector3 Magnitude:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << (Vector3D[i / 4] + Vector3D[i % 4]).Magnitude() << "\n";
		test << "Result:";
		test << (Vector3D[i / 4] + Vector3D[i % 4]).Magnitude() << "\n";
	}
	test << "Vector3 Normalize: (All numbers should be 1 since I am displaying theird magnitudes after being normalized)";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << (Vector3D[i / 4] + Vector3D[i % 4]).Normalize().Magnitude() << "\n";
		test << "Result:";
		test << (Vector3D[i / 4] + Vector3D[i % 4]).Normalize().Magnitude() << "\n";
	}
	test << "Vector3 dot product:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector3D[i / 4].DotProduct(Vector3D[i % 4]) << "\n";
		test << "Result:";
		test << Vector3D[i / 4].DotProduct(Vector3D[i % 4]) << "\n";
	}
	test << "Vector3 Cross Product:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << (Vector3D[i / 4] + Vector3D[i % 4]).CrossProduct(Vector3D[i % 4]) << "\n";
		test << "\nResult:";
		test << (Vector3D[i / 4] + Vector3D[i % 4]).CrossProduct(Vector3D[i % 4]) << "\n";
	}

	test << "Vector4 :\n\n";
	test << "Vector4+Vector4:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector4D[i / 4] + Vector4D[i % 4] << "\n";
		test << "Result:";
		test << Vector4D[i / 4] + Vector4D[i % 4] << "\n";
	}
	test << "Vector4-Vector4:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector4D[i / 4] - Vector4D[i % 4] << "\n";
		test << "Result:";
		test << Vector4D[i / 4] - Vector4D[i % 4] << "\n";
	}
	test << "Vector4*scalar:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector4D[i / 4] + Vector4D[i % 4] * 10 << "\n";
		test << "Result:";
		test << Vector4D[i / 4] + Vector4D[i % 4] * 10 << "\n";
	}
	test << "Vector4 Magnitude:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << (Vector4D[i / 4] + Vector4D[i % 4]).Magnitude() << "\n";
		test << "Result:";
		test << (Vector4D[i / 4] + Vector4D[i % 4]).Magnitude() << "\n";
	}
	test << "Vector4 Normalize: (All numbers should be 1 since I am displaying theird magnitudes after being normalized)";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << (Vector4D[i / 4] + Vector4D[i % 4]).Normalize().Magnitude() << "\n";
		test << "Result:";
		test << (Vector4D[i / 4] + Vector4D[i % 4]).Normalize().Magnitude() << "\n";
	}
	test << "Vector2 dot product:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:";
		test << Vector4D[i / 4].DotProduct(Vector4D[i % 4]) << "\n";
		test << "Result:";
		test << Vector4D[i / 4].DotProduct(Vector4D[i % 4]) << "\n";
	}
	test << "Matrix2 :\n\n";
	test << "Matrix2 * Matrix2:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:" << Matrices2MultiplicationAnswers[i] << "\n";
		test << "Result:";
		test << Matrices2D[i / 4] * Matrices2D[i % 4];
		test << "\n";
	}
	test << "\nMatrix2 * Vector2:\n";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:" << Matrix2TimesVector2Answers[i] << "\n";
		test << "Result:";
		test << Matrices2D[i / 4] * Vector2D[i % 4];
		test << "\n\n";
	}
	test << "\n\n\nMatrix3 :\n\n";
	test << "Matrix3 * Matrix3:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:" << Matrix3MultiplicationAnswers[i] << "\n\n";
		test << "Result:";
		test << Matrices3D[i / 4] * Matrices3D[i % 4];
		test << "\n";
	}
	test << "\nMatrix3 * Vector3:\n";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:" << Matrix3TimesVector3Answers[i] << "\n";
		test << "Result:";
		test << Matrices3D[i / 4] * Vector3D[i % 4];
		test << "\n\n";
	}
	test << "Matrix3 rotation: \n";
	test << "x axis:\n";
	test << Matrices3D[0] << "\n\n";
	test << "The matrices will be rotated a total of 360 degrees around the X axis making the end result the same as the original above ^^\n\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices3D[0].setRotateX((36 * pi) / 180);
		test << "\n\n";
	}
	test << "\n\nMatrix3 rotation:";
	test << "\ny axis:\n";
	test << Matrices3D[0] << "\n\n";
	test << "The matrices will be rotated a total of 360 degrees around the Y axis making the end result the same as the original above ^^\n\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices3D[0].setRotateY((36 * pi) / 180);
		test << "\n\n";
	}
	test << "\n\nMatrix3 rotation:";
	test << "\nz axis:\n";
	test << Matrices3D[0] << "\n\n";
	test << "The matrices will be rotated a total of 360 degrees around the Z axis making the end result the same as the original above ^^\n\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices3D[0].setRotateZ((36 * pi) / 180);
		test << "\n\n";
	}
	test << "\n\n\nMatrix4 : \n\n";
	test << "Matrix4 * Matrix4:";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:" << Matrix4MultiplicationAnswers[i] << "\n\n";
		test << "Result:";
		test << Matrices4D[i / 4] * Matrices4D[i % 4];
		test << "\n\n";
	}
	test << "\nMatrix4 * Vector4:\n";
	for (int i = 0; i < 10; i++)
	{
		test << "\nExpected:" << Matrix4TimesVector4Answers[i] << "\n";
		test << "Result:";
		test << Matrices4D[i / 4] * Vector4D[i % 4];
		test << "\n\n";
	}
	test << "Matrix4 rotation:";
	test << "\nx axis\n";
	test << Matrices4D[0] << "\n\n";
	test << "The matrices will be rotated a total of 360 degrees around the X axis making the end result the same as the original above ^^\n\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices4D[0].setRotateX((36 * pi) / 180);
		test << "\n\n";
	}
	test << "Matrix4 rotation:";
	test << "\ny axis\n";
	test << Matrices4D[0] << "\n\n";
	test << "The matrices will be rotated a total of 360 degrees around the Y axis making the end result the same as the original above ^^\n\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices4D[0].setRotateY((36 * pi) / 180);
		test << "\n\n";
	}test << "Matrix4 rotation:";
	test << "\nz axis\n";
	test << Matrices4D[0] << "\n\n";
	test << "The matrices will be rotated a total of 360 degrees around the Z axis making the end result the same as the original above ^^\n\n";
	for (int i = 0; i < 10; i++)
	{
		test << Matrices4D[0].setRotateZ((36 * pi) / 180);
		test << "\n\n";
	}
	test.close();
	system("pause");
	return 0;
}