#ifndef _ZRULE_H
#define _ZRULE_H


class ZMatch;

class ZRule
{
private:
	ZRule()			{ _ASSERT(0); } // 이건 사용하면 안됨 

protected:
	ZMatch*		m_pMatch;
	virtual void OnUpdate(float fDelta) {}
public:
	ZRule(ZMatch* pMatch);
	virtual ~ZRule();
	virtual bool Init() { return true; }
	void Update(float fDelta);
	virtual bool OnCommand(MCommand* pCommand);
	virtual void AfterCommandProcessed(MCommand* pCommand);
	virtual void OnResponseRuleInfo(MTD_RuleInfo* pInfo);
	virtual void OnSetRoundState(MMATCH_ROUNDSTATE roundState) {}
	virtual int GetRoundMax() { return 0; }						// 룰에서 총라운드 수를 자동 지정하고 싶은 경우 외에는 0을 반환
	static ZRule* CreateRule(ZMatch* pMatch, MMATCH_GAMETYPE nGameType);


	// 해당 Rule에서 상속 받아서 사용해야 할 것

	
};




#endif