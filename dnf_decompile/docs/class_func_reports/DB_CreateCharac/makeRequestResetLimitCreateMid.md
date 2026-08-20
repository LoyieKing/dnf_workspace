# makeRequestResetLimitCreateMid

`_ZN15DB_CreateCharac30makeRequestResetLimitCreateMidEv`

`DB_CreateCharac::makeRequestResetLimitCreateMid()`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08401864` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08401864  _ZN15DB_CreateCharac30makeRequestResetLimitCreateMidEv
#           DB_CreateCharac::makeRequestResetLimitCreateMid()
# range [0x08401864, 0x08401921]
08401864 +0x00:  push   %ebp
08401865 +0x01:  mov    %esp,%ebp
08401867 +0x03:  push   %esi
08401868 +0x04:  push   %ebx
08401869 +0x05:  sub    $0x20,%esp
0840186c +0x08:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08401871 +0x0d:  mov    %eax,(%esp)
08401874 +0x10:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08401879 +0x15:  cmp    $0x1,%eax
0840187c +0x18:  sete   %al
0840187f +0x1b:  test   %al,%al
08401881 +0x1d:  je     0840191a <+0xb6>
08401887 +0x23:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0840188c +0x28:  movl   $0xee3,0x8(%esp)
08401894 +0x30:  movl   $"DBThread.cpp",0x4(%esp)
0840189c +0x38:  mov    %eax,(%esp)
0840189f +0x3b:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084018a4 +0x40:  movl   $0x1,0x8(%esp)
084018ac +0x48:  mov    %eax,0x4(%esp)
084018b0 +0x4c:  lea    -0x10(%ebp),%eax
084018b3 +0x4f:  mov    %eax,(%esp)
084018b6 +0x52:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084018bb +0x57:  movl   $0xffffffff,0x8(%esp)
084018c3 +0x5f:  movl   $0x37,0x4(%esp)
084018cb +0x67:  lea    -0x10(%ebp),%eax
084018ce +0x6a:  mov    %eax,(%esp)
084018d1 +0x6d:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
084018d6 +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084018db +0x77:  lea    -0x10(%ebp),%edx
084018de +0x7a:  mov    %edx,0x8(%esp)
084018e2 +0x7e:  movl   $0x2,0x4(%esp)
084018ea +0x86:  mov    %eax,(%esp)
084018ed +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084018f2 +0x8e:  jmp    0840190f <+0xab>
084018f4 +0x90:  mov    %edx,%ebx
084018f6 +0x92:  mov    %eax,%esi
084018f8 +0x94:  lea    -0x10(%ebp),%eax
084018fb +0x97:  mov    %eax,(%esp)
084018fe +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08401903 +0x9f:  mov    %esi,%eax
08401905 +0xa1:  mov    %ebx,%edx
08401907 +0xa3:  mov    %eax,(%esp)
0840190a +0xa6:  call   08ae3750 <_Unwind_Resume>
0840190f +0xab:  lea    -0x10(%ebp),%eax
08401912 +0xae:  mov    %eax,(%esp)
08401915 +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840191a +0xb6:  add    $0x20,%esp
0840191d +0xb9:  pop    %ebx
0840191e +0xba:  pop    %esi
0840191f +0xbb:  pop    %ebp
08401920 +0xbc:  ret
08401921 +0xbd:  nop
```

## 反编译 C

```c
// DB_CreateCharac::makeRequestResetLimitCreateMid @ 0x8401864

/* DB_CreateCharac::makeRequestResetLimitCreateMid() */

void DB_CreateCharac::makeRequestResetLimitCreateMid(void)

{
  CEnvironment *this;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard local_14 [8];
  
  this = (CEnvironment *)G_CEnvironment();
  iVar1 = CEnvironment::get_channel_no(this);
  if (iVar1 == 1) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xee3);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
                    /* try { // try from 084018d1 to 084018f1 has its CatchHandler @ 084018f4 */
    ARAD::DISPATCHER::make_internal_stream_jpn(local_14,0x37,0xffffffff);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}
```
