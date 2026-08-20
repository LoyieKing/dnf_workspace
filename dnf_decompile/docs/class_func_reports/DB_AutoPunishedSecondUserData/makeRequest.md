# makeRequest

`_ZN29DB_AutoPunishedSecondUserData11makeRequestEjyjj`

`DB_AutoPunishedSecondUserData::makeRequest(unsigned int, unsigned long long, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_AutoPunishedSecondUserData` | `0x0843a790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a790  _ZN29DB_AutoPunishedSecondUserData11makeRequestEjyjj
#           DB_AutoPunishedSecondUserData::makeRequest(unsigned int, unsigned long long, unsigned int, unsigned int)
# range [0x0843a790, 0x0843a8b1]
0843a790 +0x000:  push   %ebp
0843a791 +0x001:  mov    %esp,%ebp
0843a793 +0x003:  push   %esi
0843a794 +0x004:  push   %ebx
0843a795 +0x005:  sub    $0x30,%esp
0843a798 +0x008:  mov    0xc(%ebp),%eax
0843a79b +0x00b:  mov    %eax,-0x20(%ebp)
0843a79e +0x00e:  mov    0x10(%ebp),%eax
0843a7a1 +0x011:  mov    %eax,-0x1c(%ebp)
0843a7a4 +0x014:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843a7a9 +0x019:  movl   $0x8912,0x8(%esp)
0843a7b1 +0x021:  movl   $"DBThread.cpp",0x4(%esp)
0843a7b9 +0x029:  mov    %eax,(%esp)
0843a7bc +0x02c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843a7c1 +0x031:  movl   $0x1,0x8(%esp)
0843a7c9 +0x039:  mov    %eax,0x4(%esp)
0843a7cd +0x03d:  lea    -0x14(%ebp),%eax
0843a7d0 +0x040:  mov    %eax,(%esp)
0843a7d3 +0x043:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843a7d8 +0x048:  lea    -0x14(%ebp),%eax
0843a7db +0x04b:  mov    %eax,(%esp)
0843a7de +0x04e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a7e3 +0x053:  movl   $0x1ca,0x4(%esp)
0843a7eb +0x05b:  mov    %eax,(%esp)
0843a7ee +0x05e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a7f3 +0x063:  mov    0x14(%ebp),%ebx
0843a7f6 +0x066:  lea    -0x14(%ebp),%eax
0843a7f9 +0x069:  mov    %eax,(%esp)
0843a7fc +0x06c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a801 +0x071:  mov    %ebx,0x4(%esp)
0843a805 +0x075:  mov    %eax,(%esp)
0843a808 +0x078:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a80d +0x07d:  lea    -0x14(%ebp),%eax
0843a810 +0x080:  mov    %eax,(%esp)
0843a813 +0x083:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843a818 +0x088:  mov    %eax,(%esp)
0843a81b +0x08b:  call   0845397a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6590>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6590
0843a820 +0x090:  mov    %eax,-0xc(%ebp)
0843a823 +0x093:  movl   $0x14,0x8(%esp)
0843a82b +0x09b:  movl   $0x0,0x4(%esp)
0843a833 +0x0a3:  mov    -0xc(%ebp),%eax
0843a836 +0x0a6:  mov    %eax,(%esp)
0843a839 +0x0a9:  call   0807dcc0 <_init+0x5b8>
0843a83e +0x0ae:  mov    -0xc(%ebp),%eax
0843a841 +0x0b1:  mov    0x8(%ebp),%edx
0843a844 +0x0b4:  mov    %edx,(%eax)
0843a846 +0x0b6:  mov    -0xc(%ebp),%ecx
0843a849 +0x0b9:  mov    -0x20(%ebp),%eax
0843a84c +0x0bc:  mov    -0x1c(%ebp),%edx
0843a84f +0x0bf:  mov    %eax,0x4(%ecx)
0843a852 +0x0c2:  mov    %edx,0x8(%ecx)
0843a855 +0x0c5:  mov    -0xc(%ebp),%eax
0843a858 +0x0c8:  mov    0x14(%ebp),%edx
0843a85b +0x0cb:  mov    %edx,0xc(%eax)
0843a85e +0x0ce:  mov    -0xc(%ebp),%eax
0843a861 +0x0d1:  mov    0x18(%ebp),%edx
0843a864 +0x0d4:  mov    %edx,0x10(%eax)
0843a867 +0x0d7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843a86c +0x0dc:  lea    -0x14(%ebp),%edx
0843a86f +0x0df:  mov    %edx,0x8(%esp)
0843a873 +0x0e3:  movl   $0x2,0x4(%esp)
0843a87b +0x0eb:  mov    %eax,(%esp)
0843a87e +0x0ee:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843a883 +0x0f3:  jmp    0843a8a0 <+0x110>
0843a885 +0x0f5:  mov    %edx,%ebx
0843a887 +0x0f7:  mov    %eax,%esi
0843a889 +0x0f9:  lea    -0x14(%ebp),%eax
0843a88c +0x0fc:  mov    %eax,(%esp)
0843a88f +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a894 +0x104:  mov    %esi,%eax
0843a896 +0x106:  mov    %ebx,%edx
0843a898 +0x108:  mov    %eax,(%esp)
0843a89b +0x10b:  call   08ae3750 <_Unwind_Resume>
0843a8a0 +0x110:  lea    -0x14(%ebp),%eax
0843a8a3 +0x113:  mov    %eax,(%esp)
0843a8a6 +0x116:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a8ab +0x11b:  add    $0x30,%esp
0843a8ae +0x11e:  pop    %ebx
0843a8af +0x11f:  pop    %esi
0843a8b0 +0x120:  pop    %ebp
0843a8b1 +0x121:  ret
```

## 反编译 C

```c
// DB_AutoPunishedSecondUserData::makeRequest @ 0x843a790

/* DB_AutoPunishedSecondUserData::makeRequest(unsigned int, unsigned long long, unsigned int,
   unsigned int) */

void __thiscall
DB_AutoPunishedSecondUserData::makeRequest
          (DB_AutoPunishedSecondUserData *this,uint param_1,ulonglong param_2,uint param_3,
          uint param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECOND_USER_DATA *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8912);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843a7ee to 0843a882 has its CatchHandler @ 0843a885 */
  CStreamGuard::operator<<(pCVar2,0x1ca);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2._4_4_);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECOND_USER_DATA>(pCVar2);
  memset(local_10,0,0x14);
  *(DB_AutoPunishedSecondUserData **)local_10 = this;
  *(uint *)(local_10 + 4) = param_1;
  *(ulonglong *)(local_10 + 8) = param_2;
  *(uint *)(local_10 + 0x10) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
