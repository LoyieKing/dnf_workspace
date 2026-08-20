# process

`_ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_P2PHolePunchingSuccessRateStatistics::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_P2PHolePunchingSuccessRateStatistics` | `0x0825ffb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825ffb6  _ZN47Dispatcher_P2PHolePunchingSuccessRateStatistics7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_P2PHolePunchingSuccessRateStatistics::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825ffb6, 0x0826008f]
0825ffb6 +0x00:  push   %ebp
0825ffb7 +0x01:  mov    %esp,%ebp
0825ffb9 +0x03:  push   %esi
0825ffba +0x04:  push   %ebx
0825ffbb +0x05:  sub    $0x20,%esp
0825ffbe +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0825ffc3 +0x0d:  movl   $0xb4c,0x8(%esp)
0825ffcb +0x15:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825ffd3 +0x1d:  mov    %eax,(%esp)
0825ffd6 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0825ffdb +0x25:  movl   $0x1,0x8(%esp)
0825ffe3 +0x2d:  mov    %eax,0x4(%esp)
0825ffe7 +0x31:  lea    -0x14(%ebp),%eax
0825ffea +0x34:  mov    %eax,(%esp)
0825ffed +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0825fff2 +0x3c:  mov    0xc(%ebp),%eax
0825fff5 +0x3f:  mov    %eax,(%esp)
0825fff8 +0x42:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0825fffd +0x47:  mov    %eax,0x8(%esp)
08260001 +0x4b:  movl   $0xf,0x4(%esp)
08260009 +0x53:  lea    -0x14(%ebp),%eax
0826000c +0x56:  mov    %eax,(%esp)
0826000f +0x59:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
08260014 +0x5e:  lea    -0x14(%ebp),%eax
08260017 +0x61:  mov    %eax,(%esp)
0826001a +0x64:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0826001f +0x69:  mov    %eax,(%esp)
08260022 +0x6c:  call   0826077e <_GLOBAL__I__ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x4ae>  ; global constructors keyed to Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)+0x4ae
08260027 +0x71:  mov    %eax,-0xc(%ebp)
0826002a +0x74:  movl   $0x16,0x8(%esp)
08260032 +0x7c:  mov    0x10(%ebp),%eax
08260035 +0x7f:  mov    %eax,0x4(%esp)
08260039 +0x83:  mov    -0xc(%ebp),%eax
0826003c +0x86:  mov    %eax,(%esp)
0826003f +0x89:  call   0807d8a0 <_init+0x198>
08260044 +0x8e:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08260049 +0x93:  lea    -0x14(%ebp),%edx
0826004c +0x96:  mov    %edx,0x8(%esp)
08260050 +0x9a:  movl   $0x1,0x4(%esp)
08260058 +0xa2:  mov    %eax,(%esp)
0826005b +0xa5:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08260060 +0xaa:  mov    $0x0,%ebx
08260065 +0xaf:  lea    -0x14(%ebp),%eax
08260068 +0xb2:  mov    %eax,(%esp)
0826006b +0xb5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08260070 +0xba:  mov    %ebx,%eax
08260072 +0xbc:  add    $0x20,%esp
08260075 +0xbf:  pop    %ebx
08260076 +0xc0:  pop    %esi
08260077 +0xc1:  pop    %ebp
08260078 +0xc2:  ret
08260079 +0xc3:  mov    %edx,%ebx
0826007b +0xc5:  mov    %eax,%esi
0826007d +0xc7:  lea    -0x14(%ebp),%eax
08260080 +0xca:  mov    %eax,(%esp)
08260083 +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08260088 +0xd2:  mov    %esi,%eax
0826008a +0xd4:  mov    %ebx,%edx
0826008c +0xd6:  mov    %eax,(%esp)
0826008f +0xd9:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Dispatcher_P2PHolePunchingSuccessRateStatistics::process @ 0x825ffb6

/* Dispatcher_P2PHolePunchingSuccessRateStatistics::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_P2PHolePunchingSuccessRateStatistics::process
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  MSG_P2P_HOLE_PUNCHING_SUCCESS_RATE *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_2.cpp",0xb4c);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  uVar2 = CUser::GetUID((CUser *)param_2);
                    /* try { // try from 0826000f to 0826005f has its CatchHandler @ 08260079 */
  Taiwan::internal_stream(local_18,0xf,uVar2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<MSG_P2P_HOLE_PUNCHING_SUCCESS_RATE>(this);
  memcpy(local_10,param_3,0x16);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 0;
}
```
