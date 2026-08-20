# Init

`_ZN4ARAD13ScriptManager4InitEv`

`ARAD::ScriptManager::Init()`

| 类 | 地址 |
|---|---|
| `ARAD::ScriptManager` | `0x081a13f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a13f6  _ZN4ARAD13ScriptManager4InitEv
#           ARAD::ScriptManager::Init()
# range [0x081a13f6, 0x081a14f9]
081a13f6 +0x000:  push   %ebp
081a13f7 +0x001:  mov    %esp,%ebp
081a13f9 +0x003:  sub    $0x18,%esp
081a13fc +0x006:  call   0817f0a4 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x2d5>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x2d5
081a1401 +0x00b:  movl   $0x13,0x8(%esp)
081a1409 +0x013:  mov    %eax,0x4(%esp)
081a140d +0x017:  mov    0x8(%ebp),%eax
081a1410 +0x01a:  mov    %eax,(%esp)
081a1413 +0x01d:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a1418 +0x022:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
081a141d +0x027:  movl   $0x13,0x8(%esp)
081a1425 +0x02f:  mov    %eax,0x4(%esp)
081a1429 +0x033:  mov    0x8(%ebp),%eax
081a142c +0x036:  mov    %eax,(%esp)
081a142f +0x039:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a1434 +0x03e:  call   08193776 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x3de>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x3de
081a1439 +0x043:  movl   $0x13,0x8(%esp)
081a1441 +0x04b:  mov    %eax,0x4(%esp)
081a1445 +0x04f:  mov    0x8(%ebp),%eax
081a1448 +0x052:  mov    %eax,(%esp)
081a144b +0x055:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a1450 +0x05a:  call   0819afef <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0xcd5>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0xcd5
081a1455 +0x05f:  movl   $0x13,0x8(%esp)
081a145d +0x067:  mov    %eax,0x4(%esp)
081a1461 +0x06b:  mov    0x8(%ebp),%eax
081a1464 +0x06e:  mov    %eax,(%esp)
081a1467 +0x071:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a146c +0x076:  call   080e274d <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4f3>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4f3
081a1471 +0x07b:  movl   $0x13,0x8(%esp)
081a1479 +0x083:  mov    %eax,0x4(%esp)
081a147d +0x087:  mov    0x8(%ebp),%eax
081a1480 +0x08a:  mov    %eax,(%esp)
081a1483 +0x08d:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a1488 +0x092:  call   08147d68 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x25b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x25b
081a148d +0x097:  movl   $0x13,0x8(%esp)
081a1495 +0x09f:  mov    %eax,0x4(%esp)
081a1499 +0x0a3:  mov    0x8(%ebp),%eax
081a149c +0x0a6:  mov    %eax,(%esp)
081a149f +0x0a9:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a14a4 +0x0ae:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
081a14a9 +0x0b3:  movl   $0x13,0x8(%esp)
081a14b1 +0x0bb:  mov    %eax,0x4(%esp)
081a14b5 +0x0bf:  mov    0x8(%ebp),%eax
081a14b8 +0x0c2:  mov    %eax,(%esp)
081a14bb +0x0c5:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a14c0 +0x0ca:  call   08164907 <_GLOBAL__I__ZN15CEventCreateDnfC2Ev+0x77>  ; global constructors keyed to CEventCreateDnf::CEventCreateDnf()+0x77
081a14c5 +0x0cf:  movl   $0x13,0x8(%esp)
081a14cd +0x0d7:  mov    %eax,0x4(%esp)
081a14d1 +0x0db:  mov    0x8(%ebp),%eax
081a14d4 +0x0de:  mov    %eax,(%esp)
081a14d7 +0x0e1:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a14dc +0x0e6:  call   081a167c <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x142>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x142
081a14e1 +0x0eb:  movl   $0x13,0x8(%esp)
081a14e9 +0x0f3:  mov    %eax,0x4(%esp)
081a14ed +0x0f7:  mov    0x8(%ebp),%eax
081a14f0 +0x0fa:  mov    %eax,(%esp)
081a14f3 +0x0fd:  call   081a136c <_ZN4ARAD13ScriptManager12RegistScriptEPNS_15ScriptInterfaceEi>  ; ARAD::ScriptManager::RegistScript(ARAD::ScriptInterface*, int)
081a14f8 +0x102:  leave
081a14f9 +0x103:  ret
```

## 反编译 C

```c
// ARAD::ScriptManager::Init @ 0x81a13f6

/* ARAD::ScriptManager::Init() */

void __thiscall ARAD::ScriptManager::Init(ScriptManager *this)

{
  ScriptInterface *pSVar1;
  
  pSVar1 = (ScriptInterface *)Singleton<AvatarFixedHiddenOptionServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<AvatarRechargeServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<EmblemCompoundServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<AvatarConvertServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<CerashopAddRestrict::Manager>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<LevelupSupportEventManger>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<ARAD::Arad_DataManager>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<CreateDnfEventSciprtServer>::Get();
  RegistScript(this,pSVar1,0x13);
  pSVar1 = (ScriptInterface *)Singleton<LevelupSupport2ndEventManger>::Get();
  RegistScript(this,pSVar1,0x13);
  return;
}
```
