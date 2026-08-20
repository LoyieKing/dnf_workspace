# loadServerState

`_ZN4ARAD23Arad_ServerStateManager15loadServerStateEv`

`ARAD::Arad_ServerStateManager::loadServerState()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a97f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a97f8  _ZN4ARAD23Arad_ServerStateManager15loadServerStateEv
#           ARAD::Arad_ServerStateManager::loadServerState()
# range [0x081a97f8, 0x081a98d3]
081a97f8 +0x00:  push   %ebp
081a97f9 +0x01:  mov    %esp,%ebp
081a97fb +0x03:  push   %esi
081a97fc +0x04:  push   %ebx
081a97fd +0x05:  sub    $0x1b0,%esp
081a9803 +0x0b:  lea    -0x1a5(%ebp),%eax
081a9809 +0x11:  mov    %eax,(%esp)
081a980c +0x14:  call   08186722 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0xec>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0xec
081a9811 +0x19:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081a9816 +0x1e:  movl   $0x6a,0x8(%esp)
081a981e +0x26:  movl   $"localjapan/Arad_ServerStateManager.cpp",0x4(%esp)
081a9826 +0x2e:  mov    %eax,(%esp)
081a9829 +0x31:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081a982e +0x36:  movl   $0x1,0x8(%esp)
081a9836 +0x3e:  mov    %eax,0x4(%esp)
081a983a +0x42:  lea    -0x10(%ebp),%eax
081a983d +0x45:  mov    %eax,(%esp)
081a9840 +0x48:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081a9845 +0x4d:  movl   $0xffffffff,0x8(%esp)
081a984d +0x55:  movl   $0x29,0x4(%esp)
081a9855 +0x5d:  lea    -0x10(%ebp),%eax
081a9858 +0x60:  mov    %eax,(%esp)
081a985b +0x63:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
081a9860 +0x68:  lea    -0x10(%ebp),%eax
081a9863 +0x6b:  mov    %eax,(%esp)
081a9866 +0x6e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081a986b +0x73:  movl   $0x195,0x8(%esp)
081a9873 +0x7b:  lea    -0x1a5(%ebp),%edx
081a9879 +0x81:  mov    %edx,0x4(%esp)
081a987d +0x85:  mov    %eax,(%esp)
081a9880 +0x88:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
081a9885 +0x8d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081a988a +0x92:  lea    -0x10(%ebp),%edx
081a988d +0x95:  mov    %edx,0x8(%esp)
081a9891 +0x99:  movl   $0x2,0x4(%esp)
081a9899 +0xa1:  mov    %eax,(%esp)
081a989c +0xa4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081a98a1 +0xa9:  jmp    081a98be <+0xc6>
081a98a3 +0xab:  mov    %edx,%ebx
081a98a5 +0xad:  mov    %eax,%esi
081a98a7 +0xaf:  lea    -0x10(%ebp),%eax
081a98aa +0xb2:  mov    %eax,(%esp)
081a98ad +0xb5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081a98b2 +0xba:  mov    %esi,%eax
081a98b4 +0xbc:  mov    %ebx,%edx
081a98b6 +0xbe:  mov    %eax,(%esp)
081a98b9 +0xc1:  call   08ae3750 <_Unwind_Resume>
081a98be +0xc6:  lea    -0x10(%ebp),%eax
081a98c1 +0xc9:  mov    %eax,(%esp)
081a98c4 +0xcc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081a98c9 +0xd1:  add    $0x1b0,%esp
081a98cf +0xd7:  pop    %ebx
081a98d0 +0xd8:  pop    %esi
081a98d1 +0xd9:  pop    %ebp
081a98d2 +0xda:  ret
081a98d3 +0xdb:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::loadServerState @ 0x81a97f8

/* ARAD::Arad_ServerStateManager::loadServerState() */

void ARAD::Arad_ServerStateManager::loadServerState(void)

{
  Stream *pSVar1;
  CStreamGuard *this;
  SigServerState local_1a9 [405];
  CStreamGuard local_14 [8];
  
  arad::SigServerState::SigServerState(local_1a9);
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_ServerStateManager.cpp",
                               0x6a);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
                    /* try { // try from 081a985b to 081a98a0 has its CatchHandler @ 081a98a3 */
  DISPATCHER::make_internal_stream_jpn(local_14,0x29,0xffffffff);
  this = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(this,local_1a9,0x195);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
