# _saveData

`_ZN17CPvPLiveEventData9_saveDataEP5CUser`

`CPvPLiveEventData::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x082690d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082690d4  _ZN17CPvPLiveEventData9_saveDataEP5CUser
#           CPvPLiveEventData::_saveData(CUser*)
# range [0x082690d4, 0x08269205]
082690d4 +0x000:  push   %ebp
082690d5 +0x001:  mov    %esp,%ebp
082690d7 +0x003:  push   %esi
082690d8 +0x004:  push   %ebx
082690d9 +0x005:  sub    $0x20,%esp
082690dc +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
082690e1 +0x00d:  movl   $0x1e,0x8(%esp)
082690e9 +0x015:  movl   $"PvPLiveEventData.cpp",0x4(%esp)
082690f1 +0x01d:  mov    %eax,(%esp)
082690f4 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
082690f9 +0x025:  movl   $0x1,0x8(%esp)
08269101 +0x02d:  mov    %eax,0x4(%esp)
08269105 +0x031:  lea    -0x10(%ebp),%eax
08269108 +0x034:  mov    %eax,(%esp)
0826910b +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08269110 +0x03c:  lea    -0x10(%ebp),%eax
08269113 +0x03f:  mov    %eax,(%esp)
08269116 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0826911b +0x047:  movl   $0x1e1,0x4(%esp)
08269123 +0x04f:  mov    %eax,(%esp)
08269126 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0826912b +0x057:  mov    0xc(%ebp),%eax
0826912e +0x05a:  mov    %eax,(%esp)
08269131 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08269136 +0x062:  mov    %eax,%ebx
08269138 +0x064:  lea    -0x10(%ebp),%eax
0826913b +0x067:  mov    %eax,(%esp)
0826913e +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08269143 +0x06f:  mov    %ebx,0x4(%esp)
08269147 +0x073:  mov    %eax,(%esp)
0826914a +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0826914f +0x07b:  mov    0xc(%ebp),%eax
08269152 +0x07e:  mov    %eax,(%esp)
08269155 +0x081:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0826915a +0x086:  movsbl %al,%ebx
0826915d +0x089:  lea    -0x10(%ebp),%eax
08269160 +0x08c:  mov    %eax,(%esp)
08269163 +0x08f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08269168 +0x094:  mov    %ebx,0x4(%esp)
0826916c +0x098:  mov    %eax,(%esp)
0826916f +0x09b:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
08269174 +0x0a0:  mov    0xc(%ebp),%eax
08269177 +0x0a3:  mov    %eax,(%esp)
0826917a +0x0a6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0826917f +0x0ab:  mov    %eax,%ebx
08269181 +0x0ad:  lea    -0x10(%ebp),%eax
08269184 +0x0b0:  mov    %eax,(%esp)
08269187 +0x0b3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0826918c +0x0b8:  mov    %ebx,0x4(%esp)
08269190 +0x0bc:  mov    %eax,(%esp)
08269193 +0x0bf:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08269198 +0x0c4:  mov    0x8(%ebp),%eax
0826919b +0x0c7:  mov    0x8(%eax),%ebx
0826919e +0x0ca:  lea    -0x10(%ebp),%eax
082691a1 +0x0cd:  mov    %eax,(%esp)
082691a4 +0x0d0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082691a9 +0x0d5:  mov    %ebx,0x4(%esp)
082691ad +0x0d9:  mov    %eax,(%esp)
082691b0 +0x0dc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082691b5 +0x0e1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
082691ba +0x0e6:  lea    -0x10(%ebp),%edx
082691bd +0x0e9:  mov    %edx,0x8(%esp)
082691c1 +0x0ed:  movl   $0x2,0x4(%esp)
082691c9 +0x0f5:  mov    %eax,(%esp)
082691cc +0x0f8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
082691d1 +0x0fd:  mov    $0x1,%ebx
082691d6 +0x102:  lea    -0x10(%ebp),%eax
082691d9 +0x105:  mov    %eax,(%esp)
082691dc +0x108:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082691e1 +0x10d:  mov    %ebx,%eax
082691e3 +0x10f:  add    $0x20,%esp
082691e6 +0x112:  pop    %ebx
082691e7 +0x113:  pop    %esi
082691e8 +0x114:  pop    %ebp
082691e9 +0x115:  ret
082691ea +0x116:  mov    %edx,%ebx
082691ec +0x118:  mov    %eax,%esi
082691ee +0x11a:  lea    -0x10(%ebp),%eax
082691f1 +0x11d:  mov    %eax,(%esp)
082691f4 +0x120:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082691f9 +0x125:  mov    %esi,%eax
082691fb +0x127:  mov    %ebx,%edx
082691fd +0x129:  mov    %eax,(%esp)
08269200 +0x12c:  call   08ae3750 <_Unwind_Resume>
08269205 +0x131:  nop
```

## 反编译 C

```c
// CPvPLiveEventData::_saveData @ 0x82690d4

/* CPvPLiveEventData::_saveData(CUser*) */

undefined4 __thiscall CPvPLiveEventData::_saveData(CPvPLiveEventData *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  uint uVar5;
  CStreamGuard local_14 [8];
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PvPLiveEventData.cpp",0x1e);
  CStreamGuard::CStreamGuard(local_14,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08269126 to 082691d0 has its CatchHandler @ 082691ea */
  CStreamGuard::operator<<(pCVar3,0x1e1);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,iVar4);
  cVar1 = CUser::GetServerGroup(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,cVar1);
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,uVar5);
  iVar4 = *(int *)(this + 8);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,iVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
