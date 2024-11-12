#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10.1B/Lab10.1B.cpp" // �������� ��� ��� ��� ������� �� ������� Create

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101B
{
    TEST_CLASS(UnitTest101B)
    {
    public:
        TEST_METHOD(TestCreate)
        {
			const int N = 3;
			Students S[N] = {
				{ "�������1", 1, ITIS, 4, 5, 4 },
				{ "�������2", 2, KN, 3, 4, 5 }, 
				{ "�������3", 3, ME, 5, 4, 4 }
			};

			int count_math = 0, count_physics = 0, count_program = 0, count_nm = 0, count_ped = 0, count_physics_5 = 0;

			// ������ �������
			count_good_grades(S, N, count_math, count_physics, count_program, count_nm, count_ped, count_physics_5);

			// �������� ����������
			Assert::AreEqual(count_math, 2);
        }
    };
}
