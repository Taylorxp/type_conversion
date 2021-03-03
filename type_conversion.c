/**
 * @file 
 * @brief
 * @details
 * @mainpage
 */

/**
 * @brief ���float���ݵ�����
 */
inline void set_float_to_array(uint8_t* arr, float pf)
{
	uint8_t* pTmp = (uint8_t*)&pf;
	for (int i = 0; i < 4; i++)	{
		arr[i] = pTmp[i];
	}
}

/**
 * @brief �������ȡfloat����
 */
inline float get_float_from_array(const uint8_t* arr)
{
	float f = 0.0f;
	uint8_t* pTmp = (uint8_t*)&f;
	for (int i = 0; i < 4; i++) {
		pTmp[i] = arr[i];
	}
	return f;
}

/**
 * @brief ������鵽float
 */
inline void set_array_to_float(uint8* arr, float* pf)
{
	void* pTmp = pf;
	
	for (int i = 0; i < 4; i++) {
		*((uint8_t*)pTmp + i) = *(arr + i); 
	}
}

/**
 * @brief ��float��ȡarray����
 */
inline void get_array_from_float(float pf, uint8_t* arr)
{
	for (int i = 0; i < 4; i++)	{
		arr[i] = *((uint8_t*)&pf + i);
	}
}
