// -------------------------------------------------------------------------
//    @FileName         :    NFCTaskModule.h
//    @Author           :    eliteYang
//    @Date             :    2015/06/17
//    @Module           :    NFCTaskModule
//
// -------------------------------------------------------------------------
#ifndef __NFC_TASK_MODULE_H_
#define __NFC_TASK_MODULE_H_

#include "NFComm/NFPluginModule/NFITaskModule.h"

class NFCTaskModule : public NFITaskModule
{
public:
    NFCTaskModule(NFIPluginManager* p)
    {
        pPluginManager = p;
    }

    virtual ~NFCTaskModule() {};

    virtual bool Init();
    virtual bool Shut();
    virtual bool Execute(const float fLasFrametime, const float fStartedTime);
    virtual bool AfterInit();

    virtual int AddTask(const NFGUID& self, const std::string& strTask);
    virtual int RemoveTask(const NFGUID& self, const std::string& strTask);

protected:
private:
};

#endif // !__NFC_TASK_MODULE_H_