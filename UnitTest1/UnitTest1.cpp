#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 7.2 it/PR 7.2 it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace YourMatrixFunctionsTests
{
    TEST_CLASS(CreateFunctionTests)
    {
    public:

        TEST_METHOD(TestCreateFunction)
        {
            const int n = 5;  
            const int Low = 9;
            const int High = 61;

            int** matrix = new int* [n];
            for (int i = 0; i < n; i++)
                matrix[i] = new int[n];

            Create(matrix, n, Low, High);

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Assert::IsTrue(matrix[i][j] >= Low && matrix[i][j] <= High);
                }
            }

            for (int i = 0; i < n; i++)
                delete[] matrix[i];
            delete[] matrix;
        }
    };
}
