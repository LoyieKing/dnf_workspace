# PunishClient

`_ZN13CBusinessImpl12PunishClientEiij11EPUNISHMODEP20tagAntibotPunishInfoPc`

`CBusinessImpl::PunishClient(int, int, unsigned int, EPUNISHMODE, tagAntibotPunishInfo*, char*)`

| 类 | 地址 |
|---|---|
| `CBusinessImpl` | `0x080de3ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080de3ee  _ZN13CBusinessImpl12PunishClientEiij11EPUNISHMODEP20tagAntibotPunishInfoPc
#           CBusinessImpl::PunishClient(int, int, unsigned int, EPUNISHMODE, tagAntibotPunishInfo*, char*)
# range [0x080de3ee, 0x080de4e7]
080de3ee +0x00:  push   %ebp
080de3ef +0x01:  mov    %esp,%ebp
080de3f1 +0x03:  push   %esi
080de3f2 +0x04:  push   %ebx
080de3f3 +0x05:  sub    $0x30,%esp
080de3f6 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080de3fb +0x0d:  movl   $0x59,0x8(%esp)
080de403 +0x15:  movl   $"BusinessImpl.cpp",0x4(%esp)
080de40b +0x1d:  mov    %eax,(%esp)
080de40e +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080de413 +0x25:  movl   $0x1,0x8(%esp)
080de41b +0x2d:  mov    %eax,0x4(%esp)
080de41f +0x31:  lea    -0x10(%ebp),%eax
080de422 +0x34:  mov    %eax,(%esp)
080de425 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080de42a +0x3c:  lea    -0x10(%ebp),%eax
080de42d +0x3f:  mov    %eax,(%esp)
080de430 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080de435 +0x47:  movl   $0x253,0x4(%esp)
080de43d +0x4f:  mov    %eax,(%esp)
080de440 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080de445 +0x57:  lea    -0x10(%ebp),%eax
080de448 +0x5a:  mov    %eax,(%esp)
080de44b +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080de450 +0x62:  movl   $0xffffffff,0x4(%esp)
080de458 +0x6a:  mov    %eax,(%esp)
080de45b +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080de460 +0x72:  mov    0x14(%ebp),%eax
080de463 +0x75:  mov    %eax,-0x20(%ebp)
080de466 +0x78:  mov    0x18(%ebp),%eax
080de469 +0x7b:  mov    %al,-0x1c(%ebp)
080de46c +0x7e:  mov    0x1c(%ebp),%eax
080de46f +0x81:  mov    0x4(%eax),%edx
080de472 +0x84:  mov    (%eax),%eax
080de474 +0x86:  mov    %eax,-0x18(%ebp)
080de477 +0x89:  mov    %edx,-0x14(%ebp)
080de47a +0x8c:  lea    -0x10(%ebp),%eax
080de47d +0x8f:  mov    %eax,(%esp)
080de480 +0x92:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080de485 +0x97:  movl   $0x10,0x8(%esp)
080de48d +0x9f:  lea    -0x20(%ebp),%edx
080de490 +0xa2:  mov    %edx,0x4(%esp)
080de494 +0xa6:  mov    %eax,(%esp)
080de497 +0xa9:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
080de49c +0xae:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080de4a1 +0xb3:  lea    -0x10(%ebp),%edx
080de4a4 +0xb6:  mov    %edx,0x8(%esp)
080de4a8 +0xba:  movl   $0x1,0x4(%esp)
080de4b0 +0xc2:  mov    %eax,(%esp)
080de4b3 +0xc5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080de4b8 +0xca:  mov    $0x0,%ebx
080de4bd +0xcf:  lea    -0x10(%ebp),%eax
080de4c0 +0xd2:  mov    %eax,(%esp)
080de4c3 +0xd5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080de4c8 +0xda:  mov    %ebx,%eax
080de4ca +0xdc:  add    $0x30,%esp
080de4cd +0xdf:  pop    %ebx
080de4ce +0xe0:  pop    %esi
080de4cf +0xe1:  pop    %ebp
080de4d0 +0xe2:  ret
080de4d1 +0xe3:  mov    %edx,%ebx
080de4d3 +0xe5:  mov    %eax,%esi
080de4d5 +0xe7:  lea    -0x10(%ebp),%eax
080de4d8 +0xea:  mov    %eax,(%esp)
080de4db +0xed:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080de4e0 +0xf2:  mov    %esi,%eax
080de4e2 +0xf4:  mov    %ebx,%edx
080de4e4 +0xf6:  mov    %eax,(%esp)
080de4e7 +0xf9:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CBusinessImpl::PunishClient @ 0x80de3ee

/* CBusinessImpl::PunishClient(int, int, unsigned int, EPUNISHMODE, tagAntibotPunishInfo*, char*) */

undefined4 CBusinessImpl::PunishClient(void)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 in_stack_00000010;
  undefined1 in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"BusinessImpl.cpp",0x59);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 080de440 to 080de4b7 has its CatchHandler @ 080de4d1 */
  CStreamGuard::operator<<(pCVar2,0x253);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  local_24 = in_stack_00000010;
  local_20 = in_stack_00000014;
  local_18 = in_stack_00000018[1];
  local_1c = *in_stack_00000018;
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,&local_24,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 0;
}
```
