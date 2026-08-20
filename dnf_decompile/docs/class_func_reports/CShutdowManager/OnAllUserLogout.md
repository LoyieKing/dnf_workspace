# OnAllUserLogout

`_ZN15CShutdowManager15OnAllUserLogoutEv`

`CShutdowManager::OnAllUserLogout()`

| 类 | 地址 |
|---|---|
| `CShutdowManager` | `0x082a36bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a36bc  _ZN15CShutdowManager15OnAllUserLogoutEv
#           CShutdowManager::OnAllUserLogout()
# range [0x082a36bc, 0x082a37c7]
082a36bc +0x000:  push   %ebp
082a36bd +0x001:  mov    %esp,%ebp
082a36bf +0x003:  push   %esi
082a36c0 +0x004:  push   %ebx
082a36c1 +0x005:  sub    $0x30,%esp
082a36c4 +0x008:  mov    0x8(%ebp),%eax
082a36c7 +0x00b:  movzbl (%eax),%eax
082a36ca +0x00e:  xor    $0x1,%eax
082a36cd +0x011:  test   %al,%al
082a36cf +0x013:  jne    082a37c0 <+0x104>
082a36d5 +0x019:  movl   $0x0,0xc(%esp)
082a36dd +0x021:  movl   $0x323b,0x8(%esp)
082a36e5 +0x029:  movl   $&_ZZN15CShutdowManager15OnAllUserLogoutEvE19__PRETTY_FUNCTION__,0x4(%esp)
082a36ed +0x031:  lea    -0x18(%ebp),%eax
082a36f0 +0x034:  mov    %eax,(%esp)
082a36f3 +0x037:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082a36f8 +0x03c:  movl   $"ALL USER LOGOUT COMPLETE\n",0x4(%esp)
082a3700 +0x044:  lea    -0x18(%ebp),%eax
082a3703 +0x047:  mov    %eax,(%esp)
082a3706 +0x04a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082a370b +0x04f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
082a3710 +0x054:  movl   $0x323d,0x8(%esp)
082a3718 +0x05c:  movl   $"App.cpp",0x4(%esp)
082a3720 +0x064:  mov    %eax,(%esp)
082a3723 +0x067:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
082a3728 +0x06c:  movl   $0x1,0x8(%esp)
082a3730 +0x074:  mov    %eax,0x4(%esp)
082a3734 +0x078:  lea    -0x20(%ebp),%eax
082a3737 +0x07b:  mov    %eax,(%esp)
082a373a +0x07e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
082a373f +0x083:  lea    -0x20(%ebp),%eax
082a3742 +0x086:  mov    %eax,(%esp)
082a3745 +0x089:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082a374a +0x08e:  movl   $0x3f,0x4(%esp)
082a3752 +0x096:  mov    %eax,(%esp)
082a3755 +0x099:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082a375a +0x09e:  lea    -0x20(%ebp),%eax
082a375d +0x0a1:  mov    %eax,(%esp)
082a3760 +0x0a4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
082a3765 +0x0a9:  movl   $0xffffffff,0x4(%esp)
082a376d +0x0b1:  mov    %eax,(%esp)
082a3770 +0x0b4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
082a3775 +0x0b9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
082a377a +0x0be:  lea    -0x20(%ebp),%edx
082a377d +0x0c1:  mov    %edx,0x8(%esp)
082a3781 +0x0c5:  movl   $0x2,0x4(%esp)
082a3789 +0x0cd:  mov    %eax,(%esp)
082a378c +0x0d0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
082a3791 +0x0d5:  movb   $0x1,&_ZN10GlobalData13s_server_stopE
082a3798 +0x0dc:  lea    -0x20(%ebp),%eax
082a379b +0x0df:  mov    %eax,(%esp)
082a379e +0x0e2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082a37a3 +0x0e7:  jmp    082a37c1 <+0x105>
082a37a5 +0x0e9:  mov    %edx,%ebx
082a37a7 +0x0eb:  mov    %eax,%esi
082a37a9 +0x0ed:  lea    -0x20(%ebp),%eax
082a37ac +0x0f0:  mov    %eax,(%esp)
082a37af +0x0f3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
082a37b4 +0x0f8:  mov    %esi,%eax
082a37b6 +0x0fa:  mov    %ebx,%edx
082a37b8 +0x0fc:  mov    %eax,(%esp)
082a37bb +0x0ff:  call   08ae3750 <_Unwind_Resume>
082a37c0 +0x104:  nop
082a37c1 +0x105:  add    $0x30,%esp
082a37c4 +0x108:  pop    %ebx
082a37c5 +0x109:  pop    %esi
082a37c6 +0x10a:  pop    %ebp
082a37c7 +0x10b:  ret
```

## 反编译 C

```c
// CShutdowManager::OnAllUserLogout @ 0x82a36bc

/* CShutdowManager::OnAllUserLogout() */

void __thiscall CShutdowManager::OnAllUserLogout(CShutdowManager *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_24 [8];
  cMyTrace local_1c [16];
  
  if (*this == (CShutdowManager)0x1) {
    cMyTrace::cMyTrace(local_1c,"void CShutdowManager::OnAllUserLogout()",0x323b,0);
    cMyTrace::operator()(local_1c,"ALL USER LOGOUT COMPLETE\n");
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"App.cpp",0x323d);
    CStreamGuard::CStreamGuard(local_24,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 082a3755 to 082a3790 has its CatchHandler @ 082a37a5 */
    CStreamGuard::operator<<(pCVar2,0x3f);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar2,-1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
    GlobalData::s_server_stop = 1;
    CStreamGuard::~CStreamGuard(local_24);
  }
  return;
}
```
