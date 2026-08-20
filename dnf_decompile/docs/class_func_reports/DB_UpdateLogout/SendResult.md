# SendResult

`_ZN15DB_UpdateLogout10SendResultEiiP17SIG_UPDATE_LOGOUT`

`DB_UpdateLogout::SendResult(int, int, SIG_UPDATE_LOGOUT*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateLogout` | `0x0841852e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841852e  _ZN15DB_UpdateLogout10SendResultEiiP17SIG_UPDATE_LOGOUT
#           DB_UpdateLogout::SendResult(int, int, SIG_UPDATE_LOGOUT*)
# range [0x0841852e, 0x08418611]
0841852e +0x00:  push   %ebp
0841852f +0x01:  mov    %esp,%ebp
08418531 +0x03:  push   %esi
08418532 +0x04:  push   %ebx
08418533 +0x05:  sub    $0x20,%esp
08418536 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0841853b +0x0d:  movl   $0x48e2,0x8(%esp)
08418543 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0841854b +0x1d:  mov    %eax,(%esp)
0841854e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08418553 +0x25:  movl   $0x1,0x8(%esp)
0841855b +0x2d:  mov    %eax,0x4(%esp)
0841855f +0x31:  lea    -0x10(%ebp),%eax
08418562 +0x34:  mov    %eax,(%esp)
08418565 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0841856a +0x3c:  lea    -0x10(%ebp),%eax
0841856d +0x3f:  mov    %eax,(%esp)
08418570 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08418575 +0x47:  mov    0xc(%ebp),%edx
08418578 +0x4a:  mov    %edx,0x4(%esp)
0841857c +0x4e:  mov    %eax,(%esp)
0841857f +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08418584 +0x56:  lea    -0x10(%ebp),%eax
08418587 +0x59:  mov    %eax,(%esp)
0841858a +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0841858f +0x61:  movl   $0xffffffff,0x4(%esp)
08418597 +0x69:  mov    %eax,(%esp)
0841859a +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0841859f +0x71:  lea    -0x10(%ebp),%eax
084185a2 +0x74:  mov    %eax,(%esp)
084185a5 +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084185aa +0x7c:  movl   $0x8b,0x8(%esp)
084185b2 +0x84:  mov    0x14(%ebp),%edx
084185b5 +0x87:  mov    %edx,0x4(%esp)
084185b9 +0x8b:  mov    %eax,(%esp)
084185bc +0x8e:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084185c1 +0x93:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084185c6 +0x98:  lea    -0x10(%ebp),%edx
084185c9 +0x9b:  mov    %edx,0x8(%esp)
084185cd +0x9f:  movl   $0x1,0x4(%esp)
084185d5 +0xa7:  mov    %eax,(%esp)
084185d8 +0xaa:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084185dd +0xaf:  mov    $0x1,%ebx
084185e2 +0xb4:  lea    -0x10(%ebp),%eax
084185e5 +0xb7:  mov    %eax,(%esp)
084185e8 +0xba:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084185ed +0xbf:  mov    %ebx,%eax
084185ef +0xc1:  add    $0x20,%esp
084185f2 +0xc4:  pop    %ebx
084185f3 +0xc5:  pop    %esi
084185f4 +0xc6:  pop    %ebp
084185f5 +0xc7:  ret
084185f6 +0xc8:  mov    %edx,%ebx
084185f8 +0xca:  mov    %eax,%esi
084185fa +0xcc:  lea    -0x10(%ebp),%eax
084185fd +0xcf:  mov    %eax,(%esp)
08418600 +0xd2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08418605 +0xd7:  mov    %esi,%eax
08418607 +0xd9:  mov    %ebx,%edx
08418609 +0xdb:  mov    %eax,(%esp)
0841860c +0xde:  call   08ae3750 <_Unwind_Resume>
08418611 +0xe3:  nop
```

## 反编译 C

```c
// DB_UpdateLogout::SendResult @ 0x841852e

/* DB_UpdateLogout::SendResult(int, int, SIG_UPDATE_LOGOUT*) */

undefined4 __thiscall
DB_UpdateLogout::SendResult
          (DB_UpdateLogout *this,int param_1,int param_2,SIG_UPDATE_LOGOUT *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x48e2);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0841857f to 084185dc has its CatchHandler @ 084185f6 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x8b);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
