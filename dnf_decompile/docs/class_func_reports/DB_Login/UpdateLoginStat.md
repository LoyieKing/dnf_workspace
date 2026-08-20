# UpdateLoginStat

`_ZN8DB_Login15UpdateLoginStatEiP14SIG_LOGIN_DATA`

`DB_Login::UpdateLoginStat(int, SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08414d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08414d50  _ZN8DB_Login15UpdateLoginStatEiP14SIG_LOGIN_DATA
#           DB_Login::UpdateLoginStat(int, SIG_LOGIN_DATA*)
# range [0x08414d50, 0x08414e75]
08414d50 +0x000:  push   %ebp
08414d51 +0x001:  mov    %esp,%ebp
08414d53 +0x003:  push   %esi
08414d54 +0x004:  push   %ebx
08414d55 +0x005:  sub    $0x20,%esp
08414d58 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08414d5d +0x00d:  movl   $0x3c5d,0x8(%esp)
08414d65 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08414d6d +0x01d:  mov    %eax,(%esp)
08414d70 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08414d75 +0x025:  movl   $0x1,0x8(%esp)
08414d7d +0x02d:  mov    %eax,0x4(%esp)
08414d81 +0x031:  lea    -0x14(%ebp),%eax
08414d84 +0x034:  mov    %eax,(%esp)
08414d87 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08414d8c +0x03c:  lea    -0x14(%ebp),%eax
08414d8f +0x03f:  mov    %eax,(%esp)
08414d92 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08414d97 +0x047:  movl   $0x2b,0x4(%esp)
08414d9f +0x04f:  mov    %eax,(%esp)
08414da2 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08414da7 +0x057:  lea    -0x14(%ebp),%eax
08414daa +0x05a:  mov    %eax,(%esp)
08414dad +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08414db2 +0x062:  mov    0xc(%ebp),%edx
08414db5 +0x065:  mov    %edx,0x4(%esp)
08414db9 +0x069:  mov    %eax,(%esp)
08414dbc +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08414dc1 +0x071:  lea    -0x14(%ebp),%eax
08414dc4 +0x074:  mov    %eax,(%esp)
08414dc7 +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08414dcc +0x07c:  mov    %eax,(%esp)
08414dcf +0x07f:  call   08450a1e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3634>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3634
08414dd4 +0x084:  mov    %eax,-0xc(%ebp)
08414dd7 +0x087:  mov    0x10(%ebp),%eax
08414dda +0x08a:  mov    0xc0(%eax),%edx
08414de0 +0x090:  mov    -0xc(%ebp),%eax
08414de3 +0x093:  mov    %edx,(%eax)
08414de5 +0x095:  mov    0x10(%ebp),%eax
08414de8 +0x098:  movzwl 0x3a38(%eax),%eax
08414def +0x09f:  movswl %ax,%edx
08414df2 +0x0a2:  mov    -0xc(%ebp),%eax
08414df5 +0x0a5:  mov    %edx,0x8(%eax)
08414df8 +0x0a8:  mov    0x10(%ebp),%eax
08414dfb +0x0ab:  mov    0x9c(%eax),%edx
08414e01 +0x0b1:  mov    -0xc(%ebp),%eax
08414e04 +0x0b4:  mov    %edx,0x4(%eax)
08414e07 +0x0b7:  mov    0x10(%ebp),%eax
08414e0a +0x0ba:  lea    0xa1(%eax),%edx
08414e10 +0x0c0:  mov    -0xc(%ebp),%eax
08414e13 +0x0c3:  add    $0xc,%eax
08414e16 +0x0c6:  movl   $0x14,0x8(%esp)
08414e1e +0x0ce:  mov    %edx,0x4(%esp)
08414e22 +0x0d2:  mov    %eax,(%esp)
08414e25 +0x0d5:  call   0807d8d0 <_init+0x1c8>
08414e2a +0x0da:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08414e2f +0x0df:  lea    -0x14(%ebp),%edx
08414e32 +0x0e2:  mov    %edx,0x8(%esp)
08414e36 +0x0e6:  movl   $0x2,0x4(%esp)
08414e3e +0x0ee:  mov    %eax,(%esp)
08414e41 +0x0f1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08414e46 +0x0f6:  mov    $0x1,%ebx
08414e4b +0x0fb:  lea    -0x14(%ebp),%eax
08414e4e +0x0fe:  mov    %eax,(%esp)
08414e51 +0x101:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08414e56 +0x106:  mov    %ebx,%eax
08414e58 +0x108:  add    $0x20,%esp
08414e5b +0x10b:  pop    %ebx
08414e5c +0x10c:  pop    %esi
08414e5d +0x10d:  pop    %ebp
08414e5e +0x10e:  ret
08414e5f +0x10f:  mov    %edx,%ebx
08414e61 +0x111:  mov    %eax,%esi
08414e63 +0x113:  lea    -0x14(%ebp),%eax
08414e66 +0x116:  mov    %eax,(%esp)
08414e69 +0x119:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08414e6e +0x11e:  mov    %esi,%eax
08414e70 +0x120:  mov    %ebx,%edx
08414e72 +0x122:  mov    %eax,(%esp)
08414e75 +0x125:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_Login::UpdateLoginStat @ 0x8414d50

/* DB_Login::UpdateLoginStat(int, SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::UpdateLoginStat(DB_Login *this,int param_1,SIG_LOGIN_DATA *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_UPDATE_LOGIN *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x3c5d);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08414da2 to 08414e45 has its CatchHandler @ 08414e5f */
  CStreamGuard::operator<<(pCVar2,0x2b);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_LOGIN>(pCVar2);
  *(undefined4 *)local_10 = *(undefined4 *)(param_2 + 0xc0);
  *(int *)(local_10 + 8) = (int)*(short *)(param_2 + 0x3a38);
  *(undefined4 *)(local_10 + 4) = *(undefined4 *)(param_2 + 0x9c);
  strncpy((char *)(local_10 + 0xc),(char *)(param_2 + 0xa1),0x14);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
