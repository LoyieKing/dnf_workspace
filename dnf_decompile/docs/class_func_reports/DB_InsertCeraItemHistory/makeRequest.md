# makeRequest

`_ZN24DB_InsertCeraItemHistory11makeRequestEijjc`

`DB_InsertCeraItemHistory::makeRequest(int, unsigned int, unsigned int, char)`

| 类 | 地址 |
|---|---|
| `DB_InsertCeraItemHistory` | `0x0844511a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844511a  _ZN24DB_InsertCeraItemHistory11makeRequestEijjc
#           DB_InsertCeraItemHistory::makeRequest(int, unsigned int, unsigned int, char)
# range [0x0844511a, 0x08445245]
0844511a +0x000:  push   %ebp
0844511b +0x001:  mov    %esp,%ebp
0844511d +0x003:  push   %esi
0844511e +0x004:  push   %ebx
0844511f +0x005:  sub    $0x30,%esp
08445122 +0x008:  mov    0x14(%ebp),%eax
08445125 +0x00b:  mov    %al,-0x1c(%ebp)
08445128 +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844512d +0x013:  movl   $0xac1b,0x8(%esp)
08445135 +0x01b:  movl   $"DBThread.cpp",0x4(%esp)
0844513d +0x023:  mov    %eax,(%esp)
08445140 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08445145 +0x02b:  movl   $0x1,0x8(%esp)
0844514d +0x033:  mov    %eax,0x4(%esp)
08445151 +0x037:  lea    -0x10(%ebp),%eax
08445154 +0x03a:  mov    %eax,(%esp)
08445157 +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844515c +0x042:  lea    -0x10(%ebp),%eax
0844515f +0x045:  mov    %eax,(%esp)
08445162 +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08445167 +0x04d:  movl   $0x2b1,0x4(%esp)
0844516f +0x055:  mov    %eax,(%esp)
08445172 +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08445177 +0x05d:  lea    -0x10(%ebp),%eax
0844517a +0x060:  mov    %eax,(%esp)
0844517d +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08445182 +0x068:  movl   $0xffffffff,0x4(%esp)
0844518a +0x070:  mov    %eax,(%esp)
0844518d +0x073:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08445192 +0x078:  lea    -0x10(%ebp),%eax
08445195 +0x07b:  mov    %eax,(%esp)
08445198 +0x07e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844519d +0x083:  mov    0x8(%ebp),%edx
084451a0 +0x086:  mov    %edx,0x4(%esp)
084451a4 +0x08a:  mov    %eax,(%esp)
084451a7 +0x08d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084451ac +0x092:  lea    -0x10(%ebp),%eax
084451af +0x095:  mov    %eax,(%esp)
084451b2 +0x098:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084451b7 +0x09d:  mov    0xc(%ebp),%edx
084451ba +0x0a0:  mov    %edx,0x4(%esp)
084451be +0x0a4:  mov    %eax,(%esp)
084451c1 +0x0a7:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084451c6 +0x0ac:  lea    -0x10(%ebp),%eax
084451c9 +0x0af:  mov    %eax,(%esp)
084451cc +0x0b2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084451d1 +0x0b7:  mov    0x10(%ebp),%edx
084451d4 +0x0ba:  mov    %edx,0x4(%esp)
084451d8 +0x0be:  mov    %eax,(%esp)
084451db +0x0c1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084451e0 +0x0c6:  movsbl -0x1c(%ebp),%ebx
084451e4 +0x0ca:  lea    -0x10(%ebp),%eax
084451e7 +0x0cd:  mov    %eax,(%esp)
084451ea +0x0d0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084451ef +0x0d5:  mov    %ebx,0x4(%esp)
084451f3 +0x0d9:  mov    %eax,(%esp)
084451f6 +0x0dc:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
084451fb +0x0e1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08445200 +0x0e6:  lea    -0x10(%ebp),%edx
08445203 +0x0e9:  mov    %edx,0x8(%esp)
08445207 +0x0ed:  movl   $0x2,0x4(%esp)
0844520f +0x0f5:  mov    %eax,(%esp)
08445212 +0x0f8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08445217 +0x0fd:  jmp    08445234 <+0x11a>
08445219 +0x0ff:  mov    %edx,%ebx
0844521b +0x101:  mov    %eax,%esi
0844521d +0x103:  lea    -0x10(%ebp),%eax
08445220 +0x106:  mov    %eax,(%esp)
08445223 +0x109:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08445228 +0x10e:  mov    %esi,%eax
0844522a +0x110:  mov    %ebx,%edx
0844522c +0x112:  mov    %eax,(%esp)
0844522f +0x115:  call   08ae3750 <_Unwind_Resume>
08445234 +0x11a:  lea    -0x10(%ebp),%eax
08445237 +0x11d:  mov    %eax,(%esp)
0844523a +0x120:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844523f +0x125:  add    $0x30,%esp
08445242 +0x128:  pop    %ebx
08445243 +0x129:  pop    %esi
08445244 +0x12a:  pop    %ebp
08445245 +0x12b:  ret
```

## 反编译 C

```c
// DB_InsertCeraItemHistory::makeRequest @ 0x844511a

/* DB_InsertCeraItemHistory::makeRequest(int, unsigned int, unsigned int, char) */

void DB_InsertCeraItemHistory::makeRequest(int param_1,uint param_2,uint param_3,char param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xac1b);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08445172 to 08445216 has its CatchHandler @ 08445219 */
  CStreamGuard::operator<<(pCVar2,0x2b1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
