/*
 * @Description: ����ͨ��API
 * @Author: XPH
 * @Date: 2019-09-14 08:14:32
 * @LastEditTime: 2020-08-22 15:25:32
 * @LastEditors: Please set LastEditors
 */
#ifndef __BASIC_API_H
#define __BASIC_API_H
#include "reg_it.h"
#include <intrins.h>

#define DefBeepPWM 0         //0��IO 1��PWM
#define DefSPISoftORHard 0   //0:���� 1��Ӳ��

/*���������б� 0������Ҫ 1����Ҫ*/
#define DefONEKEYTEST 0 //һ������ģʽ 0������Ҫ 1����Ҫ
#define DefKEYTYPE 1    //�������� 0��Ĥ����  1����������
#define DefKEYLED 1     //�����ƹ��� 0���ر�  1������
#define DefLOCKSCREEN 1 //����ͼ�� 0������Ҫ 1����Ҫ
#define DefBreathLED 0  //������ 0������Ҫ 1����Ҫ
#define DefSpeedLimitENABLE 0 //���� 0:����Ҫ  1����Ҫ
#define DefWorkStatus 1 //ʹ��״̬�� 0������Ҫ 1����Ҫ 

#define DefMachine 2    //����
#define DefMachineChild 0    //�ӻ���

#define SHUNFA 0	//˳��
#define YONGGONG 1	//����
#define ZOJE 2		//�н�
#define BAOYU 3		//���� ͨ�� ����
#define DOSO 4  	//��ɭ
#define PERCIOUS 5	//�㱦
#define HONREY 6 	//����
#define JIKET 7   	//�ѿ�
#define NORMAL 8 	//˳������
#define TYPICAL 9   //��׼

#define B9500 0   	//�н�
#define B999 1   	//����
#define ZOJE950E 7      //950E

//��������
#define VoiceZOJE 1   //�н�
#define VoiceJOYEE 2  	//����
#define VoiceHAOYI 3  //����
#define VoiceBSM 4   //��˹��
#define VoiceDUOLE 5  	//����
#define VoiceNORMAL 6  	//ͨ��

void Delay_Soft(uint16 i);
void Delay_Soft_NOP(uint16 i);
void Delay_200us(uint8 i);





#endif