# makeRequest

`_ZN19DB_UpdateBingoEvent11makeRequestEijib`

`DB_UpdateBingoEvent::makeRequest(int, unsigned int, int, bool)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBingoEvent` | `0x08449032` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449032  _ZN19DB_UpdateBingoEvent11makeRequestEijib
#           DB_UpdateBingoEvent::makeRequest(int, unsigned int, int, bool)
# range [0x08449032, 0x08449143]
08449032 +0x000:  push   %ebp
08449033 +0x001:  mov    %esp,%ebp
08449035 +0x003:  push   %esi
08449036 +0x004:  push   %ebx
08449037 +0x005:  sub    $0x30,%esp
0844903a +0x008:  mov    0x14(%ebp),%eax
0844903d +0x00b:  mov    %al,-0x1c(%ebp)
08449040 +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08449045 +0x013:  movl   $0xb75e,0x8(%esp)
0844904d +0x01b:  movl   $"DBThread.cpp",0x4(%esp)
08449055 +0x023:  mov    %eax,(%esp)
08449058 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0844905d +0x02b:  movl   $0x1,0x8(%esp)
08449065 +0x033:  mov    %eax,0x4(%esp)
08449069 +0x037:  lea    -0x10(%ebp),%eax
0844906c +0x03a:  mov    %eax,(%esp)
0844906f +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08449074 +0x042:  lea    -0x10(%ebp),%eax
08449077 +0x045:  mov    %eax,(%esp)
0844907a +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844907f +0x04d:  movl   $0x31f,0x4(%esp)
08449087 +0x055:  mov    %eax,(%esp)
0844908a +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0844908f +0x05d:  lea    -0x10(%ebp),%eax
08449092 +0x060:  mov    %eax,(%esp)
08449095 +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844909a +0x068:  mov    0x8(%ebp),%edx
0844909d +0x06b:  mov    %edx,0x4(%esp)
084490a1 +0x06f:  mov    %eax,(%esp)
084490a4 +0x072:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084490a9 +0x077:  lea    -0x10(%ebp),%eax
084490ac +0x07a:  mov    %eax,(%esp)
084490af +0x07d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084490b4 +0x082:  mov    0xc(%ebp),%edx
084490b7 +0x085:  mov    %edx,0x4(%esp)
084490bb +0x089:  mov    %eax,(%esp)
084490be +0x08c:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084490c3 +0x091:  lea    -0x10(%ebp),%eax
084490c6 +0x094:  mov    %eax,(%esp)
084490c9 +0x097:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084490ce +0x09c:  mov    0x10(%ebp),%edx
084490d1 +0x09f:  mov    %edx,0x4(%esp)
084490d5 +0x0a3:  mov    %eax,(%esp)
084490d8 +0x0a6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084490dd +0x0ab:  movzbl -0x1c(%ebp),%ebx
084490e1 +0x0af:  lea    -0x10(%ebp),%eax
084490e4 +0x0b2:  mov    %eax,(%esp)
084490e7 +0x0b5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084490ec +0x0ba:  mov    %ebx,0x4(%esp)
084490f0 +0x0be:  mov    %eax,(%esp)
084490f3 +0x0c1:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
084490f8 +0x0c6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084490fd +0x0cb:  lea    -0x10(%ebp),%edx
08449100 +0x0ce:  mov    %edx,0x8(%esp)
08449104 +0x0d2:  movl   $0x2,0x4(%esp)
0844910c +0x0da:  mov    %eax,(%esp)
0844910f +0x0dd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08449114 +0x0e2:  jmp    08449131 <+0xff>
08449116 +0x0e4:  mov    %edx,%ebx
08449118 +0x0e6:  mov    %eax,%esi
0844911a +0x0e8:  lea    -0x10(%ebp),%eax
0844911d +0x0eb:  mov    %eax,(%esp)
08449120 +0x0ee:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08449125 +0x0f3:  mov    %esi,%eax
08449127 +0x0f5:  mov    %ebx,%edx
08449129 +0x0f7:  mov    %eax,(%esp)
0844912c +0x0fa:  call   08ae3750 <_Unwind_Resume>
08449131 +0x0ff:  lea    -0x10(%ebp),%eax
08449134 +0x102:  mov    %eax,(%esp)
08449137 +0x105:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844913c +0x10a:  add    $0x30,%esp
0844913f +0x10d:  pop    %ebx
08449140 +0x10e:  pop    %esi
08449141 +0x10f:  pop    %ebp
08449142 +0x110:  ret
08449143 +0x111:  nop
```

## 反编译 C

```c
// DB_UpdateBingoEvent::makeRequest @ 0x8449032

/* DB_UpdateBingoEvent::makeRequest(int, unsigned int, int, bool) */

void DB_UpdateBingoEvent::makeRequest(int param_1,uint param_2,int param_3,bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb75e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844908a to 08449113 has its CatchHandler @ 08449116 */
  CStreamGuard::operator<<(pCVar2,799);
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
