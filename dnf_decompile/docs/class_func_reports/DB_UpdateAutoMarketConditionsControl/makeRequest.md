# makeRequest

`_ZN36DB_UpdateAutoMarketConditionsControl11makeRequestEyyyyiii`

`DB_UpdateAutoMarketConditionsControl::makeRequest(unsigned long long, unsigned long long, unsigned long long, unsigned long long, int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAutoMarketConditionsControl` | `0x08433d70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08433d70  _ZN36DB_UpdateAutoMarketConditionsControl11makeRequestEyyyyiii
#           DB_UpdateAutoMarketConditionsControl::makeRequest(unsigned long long, unsigned long long, unsigned long long, unsigned long long, int, int, int)
# range [0x08433d70, 0x08433ec9]
08433d70 +0x000:  push   %ebp
08433d71 +0x001:  mov    %esp,%ebp
08433d73 +0x003:  push   %esi
08433d74 +0x004:  push   %ebx
08433d75 +0x005:  sub    $0x40,%esp
08433d78 +0x008:  mov    0x8(%ebp),%eax
08433d7b +0x00b:  mov    %eax,-0x20(%ebp)
08433d7e +0x00e:  mov    0xc(%ebp),%eax
08433d81 +0x011:  mov    %eax,-0x1c(%ebp)
08433d84 +0x014:  mov    0x10(%ebp),%eax
08433d87 +0x017:  mov    %eax,-0x28(%ebp)
08433d8a +0x01a:  mov    0x14(%ebp),%eax
08433d8d +0x01d:  mov    %eax,-0x24(%ebp)
08433d90 +0x020:  mov    0x18(%ebp),%eax
08433d93 +0x023:  mov    %eax,-0x30(%ebp)
08433d96 +0x026:  mov    0x1c(%ebp),%eax
08433d99 +0x029:  mov    %eax,-0x2c(%ebp)
08433d9c +0x02c:  mov    0x20(%ebp),%eax
08433d9f +0x02f:  mov    %eax,-0x38(%ebp)
08433da2 +0x032:  mov    0x24(%ebp),%eax
08433da5 +0x035:  mov    %eax,-0x34(%ebp)
08433da8 +0x038:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08433dad +0x03d:  movl   $0x7c79,0x8(%esp)
08433db5 +0x045:  movl   $"DBThread.cpp",0x4(%esp)
08433dbd +0x04d:  mov    %eax,(%esp)
08433dc0 +0x050:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08433dc5 +0x055:  movl   $0x1,0x8(%esp)
08433dcd +0x05d:  mov    %eax,0x4(%esp)
08433dd1 +0x061:  lea    -0x14(%ebp),%eax
08433dd4 +0x064:  mov    %eax,(%esp)
08433dd7 +0x067:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08433ddc +0x06c:  lea    -0x14(%ebp),%eax
08433ddf +0x06f:  mov    %eax,(%esp)
08433de2 +0x072:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433de7 +0x077:  movl   $0x15b,0x4(%esp)
08433def +0x07f:  mov    %eax,(%esp)
08433df2 +0x082:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433df7 +0x087:  lea    -0x14(%ebp),%eax
08433dfa +0x08a:  mov    %eax,(%esp)
08433dfd +0x08d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08433e02 +0x092:  movl   $0xffffffff,0x4(%esp)
08433e0a +0x09a:  mov    %eax,(%esp)
08433e0d +0x09d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08433e12 +0x0a2:  lea    -0x14(%ebp),%eax
08433e15 +0x0a5:  mov    %eax,(%esp)
08433e18 +0x0a8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08433e1d +0x0ad:  mov    %eax,(%esp)
08433e20 +0x0b0:  call   084530c8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5cde>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5cde
08433e25 +0x0b5:  mov    %eax,-0xc(%ebp)
08433e28 +0x0b8:  mov    -0xc(%ebp),%ecx
08433e2b +0x0bb:  mov    -0x20(%ebp),%eax
08433e2e +0x0be:  mov    -0x1c(%ebp),%edx
08433e31 +0x0c1:  mov    %eax,(%ecx)
08433e33 +0x0c3:  mov    %edx,0x4(%ecx)
08433e36 +0x0c6:  mov    -0xc(%ebp),%ecx
08433e39 +0x0c9:  mov    -0x28(%ebp),%eax
08433e3c +0x0cc:  mov    -0x24(%ebp),%edx
08433e3f +0x0cf:  mov    %eax,0x8(%ecx)
08433e42 +0x0d2:  mov    %edx,0xc(%ecx)
08433e45 +0x0d5:  mov    -0xc(%ebp),%ecx
08433e48 +0x0d8:  mov    -0x30(%ebp),%eax
08433e4b +0x0db:  mov    -0x2c(%ebp),%edx
08433e4e +0x0de:  mov    %eax,0x10(%ecx)
08433e51 +0x0e1:  mov    %edx,0x14(%ecx)
08433e54 +0x0e4:  mov    -0xc(%ebp),%ecx
08433e57 +0x0e7:  mov    -0x38(%ebp),%eax
08433e5a +0x0ea:  mov    -0x34(%ebp),%edx
08433e5d +0x0ed:  mov    %eax,0x18(%ecx)
08433e60 +0x0f0:  mov    %edx,0x1c(%ecx)
08433e63 +0x0f3:  mov    -0xc(%ebp),%eax
08433e66 +0x0f6:  mov    0x28(%ebp),%edx
08433e69 +0x0f9:  mov    %edx,0x20(%eax)
08433e6c +0x0fc:  mov    -0xc(%ebp),%eax
08433e6f +0x0ff:  mov    0x2c(%ebp),%edx
08433e72 +0x102:  mov    %edx,0x24(%eax)
08433e75 +0x105:  mov    -0xc(%ebp),%eax
08433e78 +0x108:  mov    0x30(%ebp),%edx
08433e7b +0x10b:  mov    %edx,0x28(%eax)
08433e7e +0x10e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08433e83 +0x113:  lea    -0x14(%ebp),%edx
08433e86 +0x116:  mov    %edx,0x8(%esp)
08433e8a +0x11a:  movl   $0x2,0x4(%esp)
08433e92 +0x122:  mov    %eax,(%esp)
08433e95 +0x125:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08433e9a +0x12a:  jmp    08433eb7 <+0x147>
08433e9c +0x12c:  mov    %edx,%ebx
08433e9e +0x12e:  mov    %eax,%esi
08433ea0 +0x130:  lea    -0x14(%ebp),%eax
08433ea3 +0x133:  mov    %eax,(%esp)
08433ea6 +0x136:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08433eab +0x13b:  mov    %esi,%eax
08433ead +0x13d:  mov    %ebx,%edx
08433eaf +0x13f:  mov    %eax,(%esp)
08433eb2 +0x142:  call   08ae3750 <_Unwind_Resume>
08433eb7 +0x147:  lea    -0x14(%ebp),%eax
08433eba +0x14a:  mov    %eax,(%esp)
08433ebd +0x14d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08433ec2 +0x152:  add    $0x40,%esp
08433ec5 +0x155:  pop    %ebx
08433ec6 +0x156:  pop    %esi
08433ec7 +0x157:  pop    %ebp
08433ec8 +0x158:  ret
08433ec9 +0x159:  nop
```

## 反编译 C

```c
// DB_UpdateAutoMarketConditionsControl::makeRequest @ 0x8433d70

/* DB_UpdateAutoMarketConditionsControl::makeRequest(unsigned long long, unsigned long long,
   unsigned long long, unsigned long long, int, int, int) */

void DB_UpdateAutoMarketConditionsControl::makeRequest
               (ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,int param_5,
               int param_6,int param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7c79);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08433df2 to 08433e99 has its CatchHandler @ 08433e9c */
  CStreamGuard::operator<<(pCVar2,0x15b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROL>(pCVar2);
  *(ulonglong *)local_10 = param_1;
  *(ulonglong *)(local_10 + 8) = param_2;
  *(ulonglong *)(local_10 + 0x10) = param_3;
  *(ulonglong *)(local_10 + 0x18) = param_4;
  *(int *)(local_10 + 0x20) = param_5;
  *(int *)(local_10 + 0x24) = param_6;
  *(int *)(local_10 + 0x28) = param_7;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
