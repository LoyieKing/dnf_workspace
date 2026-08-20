# SendResult

`_ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA`

`DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08414c6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08414c6e  _ZN8DB_Login10SendResultEiiP14SIG_LOGIN_DATA
#           DB_Login::SendResult(int, int, SIG_LOGIN_DATA*)
# range [0x08414c6e, 0x08414d4b]
08414c6e +0x00:  push   %ebp
08414c6f +0x01:  mov    %esp,%ebp
08414c71 +0x03:  push   %esi
08414c72 +0x04:  push   %ebx
08414c73 +0x05:  sub    $0x20,%esp
08414c76 +0x08:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
08414c7b +0x0d:  movl   $0x3c49,0x8(%esp)
08414c83 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08414c8b +0x1d:  mov    %eax,(%esp)
08414c8e +0x20:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
08414c93 +0x25:  movl   $0x1,0x8(%esp)
08414c9b +0x2d:  mov    %eax,0x4(%esp)
08414c9f +0x31:  lea    -0x10(%ebp),%eax
08414ca2 +0x34:  mov    %eax,(%esp)
08414ca5 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08414caa +0x3c:  lea    -0x10(%ebp),%eax
08414cad +0x3f:  mov    %eax,(%esp)
08414cb0 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08414cb5 +0x47:  mov    0xc(%ebp),%edx
08414cb8 +0x4a:  mov    %edx,0x4(%esp)
08414cbc +0x4e:  mov    %eax,(%esp)
08414cbf +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08414cc4 +0x56:  lea    -0x10(%ebp),%eax
08414cc7 +0x59:  mov    %eax,(%esp)
08414cca +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08414ccf +0x61:  mov    0x10(%ebp),%edx
08414cd2 +0x64:  mov    %edx,0x4(%esp)
08414cd6 +0x68:  mov    %eax,(%esp)
08414cd9 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08414cde +0x70:  lea    -0x10(%ebp),%eax
08414ce1 +0x73:  mov    %eax,(%esp)
08414ce4 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08414ce9 +0x7b:  movl   $0x4358,0x8(%esp)
08414cf1 +0x83:  mov    0x14(%ebp),%edx
08414cf4 +0x86:  mov    %edx,0x4(%esp)
08414cf8 +0x8a:  mov    %eax,(%esp)
08414cfb +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08414d00 +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08414d05 +0x97:  lea    -0x10(%ebp),%edx
08414d08 +0x9a:  mov    %edx,0x8(%esp)
08414d0c +0x9e:  movl   $0x1,0x4(%esp)
08414d14 +0xa6:  mov    %eax,(%esp)
08414d17 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08414d1c +0xae:  mov    $0x1,%ebx
08414d21 +0xb3:  lea    -0x10(%ebp),%eax
08414d24 +0xb6:  mov    %eax,(%esp)
08414d27 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08414d2c +0xbe:  mov    %ebx,%eax
08414d2e +0xc0:  add    $0x20,%esp
08414d31 +0xc3:  pop    %ebx
08414d32 +0xc4:  pop    %esi
08414d33 +0xc5:  pop    %ebp
08414d34 +0xc6:  ret
08414d35 +0xc7:  mov    %edx,%ebx
08414d37 +0xc9:  mov    %eax,%esi
08414d39 +0xcb:  lea    -0x10(%ebp),%eax
08414d3c +0xce:  mov    %eax,(%esp)
08414d3f +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08414d44 +0xd6:  mov    %esi,%eax
08414d46 +0xd8:  mov    %ebx,%edx
08414d48 +0xda:  mov    %eax,(%esp)
08414d4b +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_Login::SendResult @ 0x8414c6e

/* DB_Login::SendResult(int, int, SIG_LOGIN_DATA*) */

undefined4 __thiscall
DB_Login::SendResult(DB_Login *this,int param_1,int param_2,SIG_LOGIN_DATA *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x3c49);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08414cbf to 08414d1b has its CatchHandler @ 08414d35 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x4358);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
