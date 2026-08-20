# makeRequest

`_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj`

`DB_ArrangeUserLoginInfo::makeRequest(unsigned int, bool, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_ArrangeUserLoginInfo` | `0x0842ad30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842ad30  _ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj
#           DB_ArrangeUserLoginInfo::makeRequest(unsigned int, bool, unsigned int)
# range [0x0842ad30, 0x0842ae3e]
0842ad30 +0x000:  push   %ebp
0842ad31 +0x001:  mov    %esp,%ebp
0842ad33 +0x003:  push   %esi
0842ad34 +0x004:  push   %ebx
0842ad35 +0x005:  sub    $0x30,%esp
0842ad38 +0x008:  mov    0xc(%ebp),%eax
0842ad3b +0x00b:  mov    %al,-0x1c(%ebp)
0842ad3e +0x00e:  cmpl   $0x0,0x8(%ebp)
0842ad42 +0x012:  je     0842ae37 <+0x107>
0842ad48 +0x018:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842ad4d +0x01d:  movl   $0x6ce9,0x8(%esp)
0842ad55 +0x025:  movl   $"DBThread.cpp",0x4(%esp)
0842ad5d +0x02d:  mov    %eax,(%esp)
0842ad60 +0x030:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842ad65 +0x035:  movl   $0x1,0x8(%esp)
0842ad6d +0x03d:  mov    %eax,0x4(%esp)
0842ad71 +0x041:  lea    -0x14(%ebp),%eax
0842ad74 +0x044:  mov    %eax,(%esp)
0842ad77 +0x047:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842ad7c +0x04c:  lea    -0x14(%ebp),%eax
0842ad7f +0x04f:  mov    %eax,(%esp)
0842ad82 +0x052:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ad87 +0x057:  movl   $0xee,0x4(%esp)
0842ad8f +0x05f:  mov    %eax,(%esp)
0842ad92 +0x062:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ad97 +0x067:  lea    -0x14(%ebp),%eax
0842ad9a +0x06a:  mov    %eax,(%esp)
0842ad9d +0x06d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ada2 +0x072:  movl   $0xffffffff,0x4(%esp)
0842adaa +0x07a:  mov    %eax,(%esp)
0842adad +0x07d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842adb2 +0x082:  lea    -0x14(%ebp),%eax
0842adb5 +0x085:  mov    %eax,(%esp)
0842adb8 +0x088:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842adbd +0x08d:  mov    %eax,(%esp)
0842adc0 +0x090:  call   0845259e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x51b4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x51b4
0842adc5 +0x095:  mov    %eax,-0xc(%ebp)
0842adc8 +0x098:  mov    -0xc(%ebp),%eax
0842adcb +0x09b:  mov    0x8(%ebp),%edx
0842adce +0x09e:  mov    %edx,(%eax)
0842add0 +0x0a0:  cmpb   $0x0,-0x1c(%ebp)
0842add4 +0x0a4:  je     0842addd <+0xad>
0842add6 +0x0a6:  mov    $0x1,%eax
0842addb +0x0ab:  jmp    0842ade2 <+0xb2>
0842addd +0x0ad:  mov    $0x0,%eax
0842ade2 +0x0b2:  mov    -0xc(%ebp),%edx
0842ade5 +0x0b5:  mov    %al,0x4(%edx)
0842ade8 +0x0b8:  mov    -0xc(%ebp),%eax
0842adeb +0x0bb:  mov    0x10(%ebp),%edx
0842adee +0x0be:  mov    %edx,0x8(%eax)
0842adf1 +0x0c1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842adf6 +0x0c6:  lea    -0x14(%ebp),%edx
0842adf9 +0x0c9:  mov    %edx,0x8(%esp)
0842adfd +0x0cd:  movl   $0x2,0x4(%esp)
0842ae05 +0x0d5:  mov    %eax,(%esp)
0842ae08 +0x0d8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842ae0d +0x0dd:  jmp    0842ae2a <+0xfa>
0842ae0f +0x0df:  mov    %edx,%ebx
0842ae11 +0x0e1:  mov    %eax,%esi
0842ae13 +0x0e3:  lea    -0x14(%ebp),%eax
0842ae16 +0x0e6:  mov    %eax,(%esp)
0842ae19 +0x0e9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842ae1e +0x0ee:  mov    %esi,%eax
0842ae20 +0x0f0:  mov    %ebx,%edx
0842ae22 +0x0f2:  mov    %eax,(%esp)
0842ae25 +0x0f5:  call   08ae3750 <_Unwind_Resume>
0842ae2a +0x0fa:  lea    -0x14(%ebp),%eax
0842ae2d +0x0fd:  mov    %eax,(%esp)
0842ae30 +0x100:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842ae35 +0x105:  jmp    0842ae38 <+0x108>
0842ae37 +0x107:  nop
0842ae38 +0x108:  add    $0x30,%esp
0842ae3b +0x10b:  pop    %ebx
0842ae3c +0x10c:  pop    %esi
0842ae3d +0x10d:  pop    %ebp
0842ae3e +0x10e:  ret
```

## 反编译 C

```c
// DB_ArrangeUserLoginInfo::makeRequest @ 0x842ad30

/* DB_ArrangeUserLoginInfo::makeRequest(unsigned int, bool, unsigned int) */

void DB_ArrangeUserLoginInfo::makeRequest(uint param_1,bool param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_ARRANGE_USER_LOGIN_INFO *local_10;
  
  if (param_1 != 0) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6ce9);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842ad92 to 0842ae0c has its CatchHandler @ 0842ae0f */
    CStreamGuard::operator<<(pCVar2,0xee);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_ARRANGE_USER_LOGIN_INFO>(pCVar2);
    *(uint *)local_10 = param_1;
    local_10[4] = (SIG_ARRANGE_USER_LOGIN_INFO)param_2;
    *(uint *)(local_10 + 8) = param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```
