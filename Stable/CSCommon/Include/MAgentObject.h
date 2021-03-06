#pragma once

#include "MObject.h"
#include <windows.h>


class MAgentObject : public MObject {
protected:
	char 			m_szIP[64];
	unsigned int	m_nTCPPort;
	unsigned int	m_nUDPPort;

public:
	MAgentObject() {}
	MAgentObject(const MUID& uid) : MObject(uid) { 
		ZeroMemory(m_szIP, sizeof(char)*64);	
		m_nTCPPort=0;
		m_nUDPPort=0;
	}
	virtual ~MAgentObject() {};

	void SetAddr(char* szIP, unsigned short nTCPPort, unsigned short nUDPPort)	{ 
		strcpy_s(m_szIP, szIP); m_nTCPPort = nTCPPort; m_nUDPPort = nUDPPort;
	}
	char* GetIP()					{ return m_szIP; }
	unsigned short GetTCPPort()		{ return m_nTCPPort; }
	unsigned short GetUDPPort()		{ return m_nUDPPort; }

	int GetStageCount()			{ return 0; }
	int GetAssignCount()		{ return 0; }
};


class MAgentObjectMap : public map<MUID, MAgentObject*>{};
