# makeRequest

`_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc`

`DB_ReqSaveHackUserPunish::makeRequest(unsigned int, unsigned int, char const*)`

| 类 | 地址 |
|---|---|
| `DB_ReqSaveHackUserPunish` | `0x08425494` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08425494  _ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc
#           DB_ReqSaveHackUserPunish::makeRequest(unsigned int, unsigned int, char const*)
# range [0x08425494, 0x084255ba]
08425494 +0x000:  push   %ebp
08425495 +0x001:  mov    %esp,%ebp
08425497 +0x003:  push   %esi
08425498 +0x004:  push   %ebx
08425499 +0x005:  sub    $0x20,%esp
0842549c +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084254a1 +0x00d:  movl   $0x6304,0x8(%esp)
084254a9 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
084254b1 +0x01d:  mov    %eax,(%esp)
084254b4 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084254b9 +0x025:  movl   $0x1,0x8(%esp)
084254c1 +0x02d:  mov    %eax,0x4(%esp)
084254c5 +0x031:  lea    -0x14(%ebp),%eax
084254c8 +0x034:  mov    %eax,(%esp)
084254cb +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084254d0 +0x03c:  lea    -0x14(%ebp),%eax
084254d3 +0x03f:  mov    %eax,(%esp)
084254d6 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084254db +0x047:  movl   $0xb5,0x4(%esp)
084254e3 +0x04f:  mov    %eax,(%esp)
084254e6 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084254eb +0x057:  lea    -0x14(%ebp),%eax
084254ee +0x05a:  mov    %eax,(%esp)
084254f1 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084254f6 +0x062:  movl   $0xffffffff,0x4(%esp)
084254fe +0x06a:  mov    %eax,(%esp)
08425501 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08425506 +0x072:  lea    -0x14(%ebp),%eax
08425509 +0x075:  mov    %eax,(%esp)
0842550c +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08425511 +0x07d:  mov    %eax,(%esp)
08425514 +0x080:  call   08451fea <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4c00>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4c00
08425519 +0x085:  mov    %eax,-0xc(%ebp)
0842551c +0x088:  mov    -0xc(%ebp),%eax
0842551f +0x08b:  mov    0x8(%ebp),%edx
08425522 +0x08e:  mov    %edx,(%eax)
08425524 +0x090:  mov    0xc(%ebp),%edx
08425527 +0x093:  mov    -0xc(%ebp),%eax
0842552a +0x096:  mov    %edx,0x4(%eax)
0842552d +0x099:  cmpl   $0x0,0x10(%ebp)
08425531 +0x09d:  jne    08425553 <+0xbf>
08425533 +0x09f:  mov    -0xc(%ebp),%eax
08425536 +0x0a2:  add    $0x8,%eax
08425539 +0x0a5:  movl   $0x10,0x8(%esp)
08425541 +0x0ad:  movl   $"000.000.000.000",0x4(%esp)
08425549 +0x0b5:  mov    %eax,(%esp)
0842554c +0x0b8:  call   0807d8a0 <_init+0x198>
08425551 +0x0bd:  jmp    08425570 <+0xdc>
08425553 +0x0bf:  mov    -0xc(%ebp),%eax
08425556 +0x0c2:  lea    0x8(%eax),%edx
08425559 +0x0c5:  movl   $0x10,0x8(%esp)
08425561 +0x0cd:  mov    0x10(%ebp),%eax
08425564 +0x0d0:  mov    %eax,0x4(%esp)
08425568 +0x0d4:  mov    %edx,(%esp)
0842556b +0x0d7:  call   0807d8d0 <_init+0x1c8>
08425570 +0x0dc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08425575 +0x0e1:  lea    -0x14(%ebp),%edx
08425578 +0x0e4:  mov    %edx,0x8(%esp)
0842557c +0x0e8:  movl   $0x2,0x4(%esp)
08425584 +0x0f0:  mov    %eax,(%esp)
08425587 +0x0f3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842558c +0x0f8:  jmp    084255a9 <+0x115>
0842558e +0x0fa:  mov    %edx,%ebx
08425590 +0x0fc:  mov    %eax,%esi
08425592 +0x0fe:  lea    -0x14(%ebp),%eax
08425595 +0x101:  mov    %eax,(%esp)
08425598 +0x104:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842559d +0x109:  mov    %esi,%eax
0842559f +0x10b:  mov    %ebx,%edx
084255a1 +0x10d:  mov    %eax,(%esp)
084255a4 +0x110:  call   08ae3750 <_Unwind_Resume>
084255a9 +0x115:  lea    -0x14(%ebp),%eax
084255ac +0x118:  mov    %eax,(%esp)
084255af +0x11b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084255b4 +0x120:  add    $0x20,%esp
084255b7 +0x123:  pop    %ebx
084255b8 +0x124:  pop    %esi
084255b9 +0x125:  pop    %ebp
084255ba +0x126:  ret
```

## 反编译 C

```c
// DB_ReqSaveHackUserPunish::makeRequest @ 0x8425494

/* DB_ReqSaveHackUserPunish::makeRequest(unsigned int, unsigned int, char const*) */

void DB_ReqSaveHackUserPunish::makeRequest(uint param_1,uint param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_HACK_USER_PUNISH *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6304);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084254e6 to 0842558b has its CatchHandler @ 0842558e */
  CStreamGuard::operator<<(pCVar2,0xb5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_HACK_USER_PUNISH>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  if (param_3 == (char *)0x0) {
    memcpy(local_10 + 8,"000.000.000.000",0x10);
  }
  else {
    strncpy((char *)(local_10 + 8),param_3,0x10);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
