# makeRequest

`_ZN29DB_InsertAutoPunishSecondUser11makeRequestEjjyb`

`DB_InsertAutoPunishSecondUser::makeRequest(unsigned int, unsigned int, unsigned long long, bool)`

| 类 | 地址 |
|---|---|
| `DB_InsertAutoPunishSecondUser` | `0x0842e34e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842e34e  _ZN29DB_InsertAutoPunishSecondUser11makeRequestEjjyb
#           DB_InsertAutoPunishSecondUser::makeRequest(unsigned int, unsigned int, unsigned long long, bool)
# range [0x0842e34e, 0x0842e45d]
0842e34e +0x000:  push   %ebp
0842e34f +0x001:  mov    %esp,%ebp
0842e351 +0x003:  push   %esi
0842e352 +0x004:  push   %ebx
0842e353 +0x005:  sub    $0x30,%esp
0842e356 +0x008:  mov    0x18(%ebp),%eax
0842e359 +0x00b:  mov    0x10(%ebp),%edx
0842e35c +0x00e:  mov    %edx,-0x20(%ebp)
0842e35f +0x011:  mov    0x14(%ebp),%edx
0842e362 +0x014:  mov    %edx,-0x1c(%ebp)
0842e365 +0x017:  mov    %al,-0x24(%ebp)
0842e368 +0x01a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842e36d +0x01f:  movl   $0x72f4,0x8(%esp)
0842e375 +0x027:  movl   $"DBThread.cpp",0x4(%esp)
0842e37d +0x02f:  mov    %eax,(%esp)
0842e380 +0x032:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842e385 +0x037:  movl   $0x1,0x8(%esp)
0842e38d +0x03f:  mov    %eax,0x4(%esp)
0842e391 +0x043:  lea    -0x14(%ebp),%eax
0842e394 +0x046:  mov    %eax,(%esp)
0842e397 +0x049:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842e39c +0x04e:  lea    -0x14(%ebp),%eax
0842e39f +0x051:  mov    %eax,(%esp)
0842e3a2 +0x054:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842e3a7 +0x059:  movl   $0x10b,0x4(%esp)
0842e3af +0x061:  mov    %eax,(%esp)
0842e3b2 +0x064:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842e3b7 +0x069:  lea    -0x14(%ebp),%eax
0842e3ba +0x06c:  mov    %eax,(%esp)
0842e3bd +0x06f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842e3c2 +0x074:  movl   $0xffffffff,0x4(%esp)
0842e3ca +0x07c:  mov    %eax,(%esp)
0842e3cd +0x07f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842e3d2 +0x084:  lea    -0x14(%ebp),%eax
0842e3d5 +0x087:  mov    %eax,(%esp)
0842e3d8 +0x08a:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842e3dd +0x08f:  mov    %eax,(%esp)
0842e3e0 +0x092:  call   084528b0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x54c6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x54c6
0842e3e5 +0x097:  mov    %eax,-0xc(%ebp)
0842e3e8 +0x09a:  mov    -0xc(%ebp),%eax
0842e3eb +0x09d:  mov    0x8(%ebp),%edx
0842e3ee +0x0a0:  mov    %edx,(%eax)
0842e3f0 +0x0a2:  mov    -0xc(%ebp),%eax
0842e3f3 +0x0a5:  mov    0xc(%ebp),%edx
0842e3f6 +0x0a8:  mov    %edx,0x4(%eax)
0842e3f9 +0x0ab:  mov    -0xc(%ebp),%ecx
0842e3fc +0x0ae:  mov    -0x20(%ebp),%eax
0842e3ff +0x0b1:  mov    -0x1c(%ebp),%edx
0842e402 +0x0b4:  mov    %eax,0x8(%ecx)
0842e405 +0x0b7:  mov    %edx,0xc(%ecx)
0842e408 +0x0ba:  mov    -0xc(%ebp),%eax
0842e40b +0x0bd:  movzbl -0x24(%ebp),%edx
0842e40f +0x0c1:  mov    %dl,0x10(%eax)
0842e412 +0x0c4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842e417 +0x0c9:  lea    -0x14(%ebp),%edx
0842e41a +0x0cc:  mov    %edx,0x8(%esp)
0842e41e +0x0d0:  movl   $0x2,0x4(%esp)
0842e426 +0x0d8:  mov    %eax,(%esp)
0842e429 +0x0db:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842e42e +0x0e0:  jmp    0842e44b <+0xfd>
0842e430 +0x0e2:  mov    %edx,%ebx
0842e432 +0x0e4:  mov    %eax,%esi
0842e434 +0x0e6:  lea    -0x14(%ebp),%eax
0842e437 +0x0e9:  mov    %eax,(%esp)
0842e43a +0x0ec:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842e43f +0x0f1:  mov    %esi,%eax
0842e441 +0x0f3:  mov    %ebx,%edx
0842e443 +0x0f5:  mov    %eax,(%esp)
0842e446 +0x0f8:  call   08ae3750 <_Unwind_Resume>
0842e44b +0x0fd:  lea    -0x14(%ebp),%eax
0842e44e +0x100:  mov    %eax,(%esp)
0842e451 +0x103:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842e456 +0x108:  add    $0x30,%esp
0842e459 +0x10b:  pop    %ebx
0842e45a +0x10c:  pop    %esi
0842e45b +0x10d:  pop    %ebp
0842e45c +0x10e:  ret
0842e45d +0x10f:  nop
```

## 反编译 C

```c
// DB_InsertAutoPunishSecondUser::makeRequest @ 0x842e34e

/* DB_InsertAutoPunishSecondUser::makeRequest(unsigned int, unsigned int, unsigned long long, bool)
    */

void __thiscall
DB_InsertAutoPunishSecondUser::makeRequest
          (DB_InsertAutoPunishSecondUser *this,uint param_1,uint param_2,ulonglong param_3,
          bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_INSERT_AUTO_PUNISH_SECOND_USER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x72f4);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842e3b2 to 0842e42d has its CatchHandler @ 0842e430 */
  CStreamGuard::operator<<(pCVar2,0x10b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_AUTO_PUNISH_SECOND_USER>(pCVar2);
  *(DB_InsertAutoPunishSecondUser **)local_10 = this;
  *(uint *)(local_10 + 4) = param_1;
  *(uint *)(local_10 + 8) = param_2;
  *(undefined4 *)(local_10 + 0xc) = (undefined4)param_3;
  local_10[0x10] = SUB81(param_3 >> 0x20,0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
