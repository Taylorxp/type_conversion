/**
 * @file 
 * @brief
 * @details
 * @mainpage
 */

/**
 * @brief 填充float数据到数组
 */
inline void set_float_to_array(uint8_t* arr, float pf)
{
	uint8_t* pTmp = (uint8_t*)&pf;
	for (int i = 0; i < 4; i++)	{
		arr[i] = pTmp[i];
	}
}

/**
 * @brief 从数组获取float数据
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
 * @brief 填充数组到float
 */
inline void set_array_to_float(uint8* arr, float* pf)
{
	void* pTmp = pf;
	
	for (int i = 0; i < 4; i++) {
		*((uint8_t*)pTmp + i) = *(arr + i); 
	}
}

/**
 * @brief 从float获取array数据
 */
inline void get_array_from_float(float pf, uint8_t* arr)
{
	for (int i = 0; i < 4; i++)	{
		arr[i] = *((uint8_t*)&pf + i);
	}
}
