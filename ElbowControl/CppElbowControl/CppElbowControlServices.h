///////////////////////////////////////////////////////////////////////////////
// CppElbowControlServices.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_CppElbowControl = 0x3F000000;
#define SRVNAME_CPPELBOWCONTROL "CppElbowControl"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_CppElbowControlCModule1 = {0x1f5d3434,0x3f9e,0x49fc,{0xa2,0xff,0x11,0xc9,0xab,0x65,0x6b,0x16}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_Module1Parameter = 0x00000001;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _Module1Parameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} Module1Parameter, *PModule1Parameter;

typedef struct _Module1Inputs
{
	ULONG Value;
	ULONG Status;
	ULONG Data;
} Module1Inputs, *PModule1Inputs;

typedef struct _Module1Outputs
{
	ULONG Value;
	ULONG Control;
	ULONG Data;
} Module1Outputs, *PModule1Outputs;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_Module1Inputs 0
#define ADI_Module1Outputs 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>