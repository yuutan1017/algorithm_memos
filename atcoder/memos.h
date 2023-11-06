#pragma once

#include "bits.h"
using namespace std;


/// <summary>
/// �n�m�C�̓� -> (int ���̐�, int ���̏����l, int ���̐�)
/// </summary>
/// <param name="number"></param>
/// <param name="x"></param>
/// <param name="y"></param>
void Hanoi(int number, int x, int y)
{
	if (number > 1)
	{
		Hanoi(number - 1, x, 6 - x - y);
	}

	cout << "�~��[" << number << "]��" << x << "������" << y << "���ֈړ�" << endl;

	if (number > 1)
	{
		Hanoi(number - 1, 6 - x - y, y);
	}
}


/// <summary>
/// �G���g�X�e�l�X���
/// </summary>
void Sieve_Of_Eratosthenes(int max)
{
	vector<bool> IsPrime;

	if (max + 1 > IsPrime.size())
	{
		IsPrime.resize(max + 1, true);
	}

	IsPrime[0] = false;
	IsPrime[1] = false;

	for (int i = 2; i * i <= max; i++)
	{
		if (IsPrime[i])
		{
			for (int j = 2; i * j <= max; j++)
			{
				IsPrime[i * j] = false;
			}
		}
	}

	// �o��
	for (int i = 0; i < IsPrime.size(); i++)
	{
		if (IsPrime[i] == true)
		{
			cout << i << ' ';
		}
	}
}


/// <summary>
/// �񕶔���
/// </summary>
/// <param name="str"></param>
/// <returns></returns>
bool isPalindrome(string str)
{
	int low = 0;
	int high = str.length() - 1;

	while (low < high)
	{
		if (str[low] != str[high]) return false;

		low++;
		high--;
	}

	return true;
}


/// <summary>
/// �񕪒T��
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="target">�T������l</param>
/// <param name="list">�\�[�g���ꂽ�z��</param>
/// <returns>�l������������A����index��Ԃ�</returns>
template<typename T> T Binary_Search(T target, vector<T> list)
{
	T left = -1;
	T right = list.size() - 1;

	while (left <= right)
	{
		T mid = left + ((right - left) * 0.5);

		if (list[mid] > target)
		{
			right = mid - 1;
		}
		else if (list[mid] == target)
		{
			return mid;
		}
		else (list[mid] < target)
		{
			left = mid + 1;
		}
	}

	return -1;
}


