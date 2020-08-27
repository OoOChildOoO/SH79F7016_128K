/*
 * @Description: In User Settings Edit
 * @Author: your name
 * @Date: 2019-09-14 09:33:17
 * @LastEditTime: 2019-09-20 14:01:01
 * @LastEditors: Please set LastEditors
 */
#ifndef __FUN_DATAPROCESS_H
#define __FUN_DATAPROCESS_H
#include "reg_it.h"
#include "basic_api.h"

#define Interface0 0
#define Interface1_DisGeneral 1
#define Interface2_Index 2

#define JumpToMode_5_FastFunChange 5
#define JumpToMode_4_ClothSet 4
#define JumpToMode_3_IndexList 3

#define MotorAngleOneCircle 25

extern xdata uint wFastFunctionTemp[6];
extern xdata uint wSensorValueReceive[3];
extern bit bAdmin;

extern bit bAuto;
extern bit bSensorSW;
extern bit bSensorFSW;

extern uchar chMachine;
extern uchar chMachine1;
extern xdata uint wMaxSpeed;
extern xdata uchar chLanguage;
extern xdata uchar chLight;
extern xdata uint chSensorF;
extern xdata uint chSensorM;
extern xdata uint chSensorB;
extern bit bSubCount;
extern xdata uchar chCutCount;
extern bit bDisedSewCount;
extern xdata uint wAlarmCount;
extern xdata uchar chInfrared;
extern bit bCountOrder;
extern xdata uint wLimitV;
extern xdata uchar bCntValueStatus;

//extern uint xdata wSetIndexTemp[128];//�û�Ĭ�ϲ�������
typedef struct
{
	uint wSensorFIntensity;
	uint wSensorMIntensity;
	uint wSensorBIntensity;
	uint wSensorFValue;
	uint wSensorMValue;
	uint wSensorBValue;
	uchar chProgress;
	uchar bComplete;
} sClothPara;

extern xdata sClothPara chClothSet;
extern uint xdata chSensorTempOldClothSet[6];
//���̲���
extern uchar chSetMode;			// һ��ģʽ���ǲ�������ģʽ
extern bit bIndexTempBitChange; //λѡ����ʹ�ܱ�־λ
extern uchar chIndexTempBit;	//λѡλ�Ų���
extern uchar chIndex;			// �������õĵڼ���
extern uchar chIndexB;			//��������� �ȼ�B
extern uchar chIndexC;			//��������� �ȼ�C
extern xdata uchar chInfoIndex;
extern uchar chSetLength;  // ��������
extern uint wIndexTemp;	// ��������
extern xdata uchar chHole; //�ָ��������ûָ��ȼ�����
extern bit bPowerOn;
extern xdata uchar chSensor;
extern xdata uint wTimeBack;  //ҳ����ת��ʣ��ʱ�����
extern xdata uint wTimeBack1; //��ʾ����ʾ��ʣ��ʱ�����
extern xdata uchar chPowerOn;
#define PowerOn()  \
	if (chPowerOn) \
	chPowerOn--
extern xdata uchar chResetCount;
extern bit bPassIdenti;
extern xdata uint wCanSave;

extern xdata long nTestTime;
extern xdata uchar chPoweronVoice;


//���ò���ʱ��
#define SetTestTime() nTestTime = 340800
//�������ʱ��
#define ClearTestTime() nTestTime = 0

void GoToHome(void);
uint IncPara(uint wData, uint wMax, uint wMin, uint chStep);
uint DecPara(uint wData, uint wMax, uint wMin, uint chStep);
void SaveAndSendData(uchar chIndex, uint wData);
void SystemReset(void);
void ReadSewData(void);
void ReadSetIndexTemp(void);
void auto_clearEEprom(void);
void JumpToPageData(uchar chSetModeX, uchar chIndexBX, uchar chIndexCX);
uint ReadIndexTemp(uchar chIndexX);
#if (DefONEKEYTEST == 1)
void TestOneKeyTest(void);
#endif
void SaveIndexTemp(uchar chIndexX, uint wIndexTempX);
void ReadDisPara(void);
uint ChangeIndexRangeData(uchar chIndexX, uchar chindexRange);
uint ChangeIndexTemp(uchar chIndexX, uint wIndexTempX);
void TestTimeBack(void);
#endif