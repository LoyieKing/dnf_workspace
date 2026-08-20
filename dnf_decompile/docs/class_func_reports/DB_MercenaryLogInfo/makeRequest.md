# makeRequest

`_ZN19DB_MercenaryLogInfo11makeRequestEjjjjccciii`

`DB_MercenaryLogInfo::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char, char, char, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_MercenaryLogInfo` | `0x08446340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08446340  _ZN19DB_MercenaryLogInfo11makeRequestEjjjjccciii
#           DB_MercenaryLogInfo::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char, char, char, int, int, int)
# range [0x08446340, 0x08446515]
08446340 +0x000:  push   %ebp
08446341 +0x001:  mov    %esp,%ebp
08446343 +0x003:  push   %esi
08446344 +0x004:  push   %ebx
08446345 +0x005:  sub    $0x30,%esp
08446348 +0x008:  mov    0x18(%ebp),%ecx
0844634b +0x00b:  mov    0x1c(%ebp),%edx
0844634e +0x00e:  mov    0x20(%ebp),%eax
08446351 +0x011:  mov    %cl,-0x1c(%ebp)
08446354 +0x014:  mov    %dl,-0x20(%ebp)
08446357 +0x017:  mov    %al,-0x24(%ebp)
0844635a +0x01a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844635f +0x01f:  movl   $0xadd0,0x8(%esp)
08446367 +0x027:  movl   $"DBThread.cpp",0x4(%esp)
0844636f +0x02f:  mov    %eax,(%esp)
08446372 +0x032:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08446377 +0x037:  movl   $0x1,0x8(%esp)
0844637f +0x03f:  mov    %eax,0x4(%esp)
08446383 +0x043:  lea    -0x10(%ebp),%eax
08446386 +0x046:  mov    %eax,(%esp)
08446389 +0x049:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844638e +0x04e:  lea    -0x10(%ebp),%eax
08446391 +0x051:  mov    %eax,(%esp)
08446394 +0x054:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446399 +0x059:  movl   $0x2b8,0x4(%esp)
084463a1 +0x061:  mov    %eax,(%esp)
084463a4 +0x064:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084463a9 +0x069:  lea    -0x10(%ebp),%eax
084463ac +0x06c:  mov    %eax,(%esp)
084463af +0x06f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084463b4 +0x074:  movl   $0xffffffff,0x4(%esp)
084463bc +0x07c:  mov    %eax,(%esp)
084463bf +0x07f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084463c4 +0x084:  lea    -0x10(%ebp),%eax
084463c7 +0x087:  mov    %eax,(%esp)
084463ca +0x08a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084463cf +0x08f:  mov    0x8(%ebp),%edx
084463d2 +0x092:  mov    %edx,0x4(%esp)
084463d6 +0x096:  mov    %eax,(%esp)
084463d9 +0x099:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084463de +0x09e:  lea    -0x10(%ebp),%eax
084463e1 +0x0a1:  mov    %eax,(%esp)
084463e4 +0x0a4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084463e9 +0x0a9:  mov    0xc(%ebp),%edx
084463ec +0x0ac:  mov    %edx,0x4(%esp)
084463f0 +0x0b0:  mov    %eax,(%esp)
084463f3 +0x0b3:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084463f8 +0x0b8:  lea    -0x10(%ebp),%eax
084463fb +0x0bb:  mov    %eax,(%esp)
084463fe +0x0be:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446403 +0x0c3:  mov    0x10(%ebp),%edx
08446406 +0x0c6:  mov    %edx,0x4(%esp)
0844640a +0x0ca:  mov    %eax,(%esp)
0844640d +0x0cd:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08446412 +0x0d2:  lea    -0x10(%ebp),%eax
08446415 +0x0d5:  mov    %eax,(%esp)
08446418 +0x0d8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844641d +0x0dd:  mov    0x14(%ebp),%edx
08446420 +0x0e0:  mov    %edx,0x4(%esp)
08446424 +0x0e4:  mov    %eax,(%esp)
08446427 +0x0e7:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844642c +0x0ec:  movsbl -0x1c(%ebp),%ebx
08446430 +0x0f0:  lea    -0x10(%ebp),%eax
08446433 +0x0f3:  mov    %eax,(%esp)
08446436 +0x0f6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844643b +0x0fb:  mov    %ebx,0x4(%esp)
0844643f +0x0ff:  mov    %eax,(%esp)
08446442 +0x102:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
08446447 +0x107:  movsbl -0x20(%ebp),%ebx
0844644b +0x10b:  lea    -0x10(%ebp),%eax
0844644e +0x10e:  mov    %eax,(%esp)
08446451 +0x111:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446456 +0x116:  mov    %ebx,0x4(%esp)
0844645a +0x11a:  mov    %eax,(%esp)
0844645d +0x11d:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
08446462 +0x122:  movsbl -0x24(%ebp),%ebx
08446466 +0x126:  lea    -0x10(%ebp),%eax
08446469 +0x129:  mov    %eax,(%esp)
0844646c +0x12c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446471 +0x131:  mov    %ebx,0x4(%esp)
08446475 +0x135:  mov    %eax,(%esp)
08446478 +0x138:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
0844647d +0x13d:  lea    -0x10(%ebp),%eax
08446480 +0x140:  mov    %eax,(%esp)
08446483 +0x143:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08446488 +0x148:  mov    0x24(%ebp),%edx
0844648b +0x14b:  mov    %edx,0x4(%esp)
0844648f +0x14f:  mov    %eax,(%esp)
08446492 +0x152:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08446497 +0x157:  lea    -0x10(%ebp),%eax
0844649a +0x15a:  mov    %eax,(%esp)
0844649d +0x15d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084464a2 +0x162:  mov    0x28(%ebp),%edx
084464a5 +0x165:  mov    %edx,0x4(%esp)
084464a9 +0x169:  mov    %eax,(%esp)
084464ac +0x16c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084464b1 +0x171:  lea    -0x10(%ebp),%eax
084464b4 +0x174:  mov    %eax,(%esp)
084464b7 +0x177:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084464bc +0x17c:  mov    0x2c(%ebp),%edx
084464bf +0x17f:  mov    %edx,0x4(%esp)
084464c3 +0x183:  mov    %eax,(%esp)
084464c6 +0x186:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084464cb +0x18b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084464d0 +0x190:  lea    -0x10(%ebp),%edx
084464d3 +0x193:  mov    %edx,0x8(%esp)
084464d7 +0x197:  movl   $0x4,0x4(%esp)
084464df +0x19f:  mov    %eax,(%esp)
084464e2 +0x1a2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084464e7 +0x1a7:  jmp    08446504 <+0x1c4>
084464e9 +0x1a9:  mov    %edx,%ebx
084464eb +0x1ab:  mov    %eax,%esi
084464ed +0x1ad:  lea    -0x10(%ebp),%eax
084464f0 +0x1b0:  mov    %eax,(%esp)
084464f3 +0x1b3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084464f8 +0x1b8:  mov    %esi,%eax
084464fa +0x1ba:  mov    %ebx,%edx
084464fc +0x1bc:  mov    %eax,(%esp)
084464ff +0x1bf:  call   08ae3750 <_Unwind_Resume>
08446504 +0x1c4:  lea    -0x10(%ebp),%eax
08446507 +0x1c7:  mov    %eax,(%esp)
0844650a +0x1ca:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844650f +0x1cf:  add    $0x30,%esp
08446512 +0x1d2:  pop    %ebx
08446513 +0x1d3:  pop    %esi
08446514 +0x1d4:  pop    %ebp
08446515 +0x1d5:  ret
```

## 反编译 C

```c
// DB_MercenaryLogInfo::makeRequest @ 0x8446340

/* DB_MercenaryLogInfo::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, char,
   char, char, int, int, int) */

void DB_MercenaryLogInfo::makeRequest
               (uint param_1,uint param_2,uint param_3,uint param_4,char param_5,char param_6,
               char param_7,int param_8,int param_9,int param_10)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xadd0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084463a4 to 084464e6 has its CatchHandler @ 084464e9 */
  CStreamGuard::operator<<(pCVar2,0x2b8);
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
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_7);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_8);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_9);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
