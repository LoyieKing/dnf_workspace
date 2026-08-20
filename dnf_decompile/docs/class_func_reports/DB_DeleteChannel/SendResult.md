# SendResult

`_ZN16DB_DeleteChannel10SendResultEiiP18SIG_DELETE_CHANNEL`

`DB_DeleteChannel::SendResult(int, int, SIG_DELETE_CHANNEL*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteChannel` | `0x08402aec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08402aec  _ZN16DB_DeleteChannel10SendResultEiiP18SIG_DELETE_CHANNEL
#           DB_DeleteChannel::SendResult(int, int, SIG_DELETE_CHANNEL*)
# range [0x08402aec, 0x08402bc9]
08402aec +0x00:  push   %ebp
08402aed +0x01:  mov    %esp,%ebp
08402aef +0x03:  push   %esi
08402af0 +0x04:  push   %ebx
08402af1 +0x05:  sub    $0x20,%esp
08402af4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08402af9 +0x0d:  movl   $0x1271,0x8(%esp)
08402b01 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08402b09 +0x1d:  mov    %eax,(%esp)
08402b0c +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08402b11 +0x25:  movl   $0x1,0x8(%esp)
08402b19 +0x2d:  mov    %eax,0x4(%esp)
08402b1d +0x31:  lea    -0x10(%ebp),%eax
08402b20 +0x34:  mov    %eax,(%esp)
08402b23 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08402b28 +0x3c:  lea    -0x10(%ebp),%eax
08402b2b +0x3f:  mov    %eax,(%esp)
08402b2e +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08402b33 +0x47:  mov    0xc(%ebp),%edx
08402b36 +0x4a:  mov    %edx,0x4(%esp)
08402b3a +0x4e:  mov    %eax,(%esp)
08402b3d +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08402b42 +0x56:  lea    -0x10(%ebp),%eax
08402b45 +0x59:  mov    %eax,(%esp)
08402b48 +0x5c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08402b4d +0x61:  mov    0x10(%ebp),%edx
08402b50 +0x64:  mov    %edx,0x4(%esp)
08402b54 +0x68:  mov    %eax,(%esp)
08402b57 +0x6b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08402b5c +0x70:  lea    -0x10(%ebp),%eax
08402b5f +0x73:  mov    %eax,(%esp)
08402b62 +0x76:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08402b67 +0x7b:  movl   $0xc,0x8(%esp)
08402b6f +0x83:  mov    0x14(%ebp),%edx
08402b72 +0x86:  mov    %edx,0x4(%esp)
08402b76 +0x8a:  mov    %eax,(%esp)
08402b79 +0x8d:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08402b7e +0x92:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08402b83 +0x97:  lea    -0x10(%ebp),%edx
08402b86 +0x9a:  mov    %edx,0x8(%esp)
08402b8a +0x9e:  movl   $0x1,0x4(%esp)
08402b92 +0xa6:  mov    %eax,(%esp)
08402b95 +0xa9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08402b9a +0xae:  mov    $0x1,%ebx
08402b9f +0xb3:  lea    -0x10(%ebp),%eax
08402ba2 +0xb6:  mov    %eax,(%esp)
08402ba5 +0xb9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08402baa +0xbe:  mov    %ebx,%eax
08402bac +0xc0:  add    $0x20,%esp
08402baf +0xc3:  pop    %ebx
08402bb0 +0xc4:  pop    %esi
08402bb1 +0xc5:  pop    %ebp
08402bb2 +0xc6:  ret
08402bb3 +0xc7:  mov    %edx,%ebx
08402bb5 +0xc9:  mov    %eax,%esi
08402bb7 +0xcb:  lea    -0x10(%ebp),%eax
08402bba +0xce:  mov    %eax,(%esp)
08402bbd +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08402bc2 +0xd6:  mov    %esi,%eax
08402bc4 +0xd8:  mov    %ebx,%edx
08402bc6 +0xda:  mov    %eax,(%esp)
08402bc9 +0xdd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_DeleteChannel::SendResult @ 0x8402aec

/* DB_DeleteChannel::SendResult(int, int, SIG_DELETE_CHANNEL*) */

undefined4 __thiscall
DB_DeleteChannel::SendResult
          (DB_DeleteChannel *this,int param_1,int param_2,SIG_DELETE_CHANNEL *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x1271);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08402b3d to 08402b99 has its CatchHandler @ 08402bb3 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0xc);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}
```
