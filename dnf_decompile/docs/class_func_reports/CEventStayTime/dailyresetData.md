# dailyresetData

`_ZN14CEventStayTime14dailyresetDataEv`

`CEventStayTime::dailyresetData()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816bf6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bf6a  _ZN14CEventStayTime14dailyresetDataEv
#           CEventStayTime::dailyresetData()
# range [0x0816bf6a, 0x0816c065]
0816bf6a +0x00:  push   %ebp
0816bf6b +0x01:  mov    %esp,%ebp
0816bf6d +0x03:  push   %esi
0816bf6e +0x04:  push   %ebx
0816bf6f +0x05:  sub    $0x20,%esp
0816bf72 +0x08:  mov    0x8(%ebp),%eax
0816bf75 +0x0b:  mov    (%eax),%eax
0816bf77 +0x0d:  add    $0x34,%eax
0816bf7a +0x10:  mov    (%eax),%edx
0816bf7c +0x12:  mov    0x8(%ebp),%eax
0816bf7f +0x15:  movl   $0x0,0x4(%esp)
0816bf87 +0x1d:  mov    %eax,(%esp)
0816bf8a +0x20:  call   *%edx
0816bf8c +0x22:  xor    $0x1,%eax
0816bf8f +0x25:  test   %al,%al
0816bf91 +0x27:  jne    0816c05b <+0xf1>
0816bf97 +0x2d:  mov    0x8(%ebp),%eax
0816bf9a +0x30:  mov    %eax,(%esp)
0816bf9d +0x33:  call   0816bed4 <_ZN14CEventStayTime12IsFirstResetEv>  ; CEventStayTime::IsFirstReset()
0816bfa2 +0x38:  test   %al,%al
0816bfa4 +0x3a:  jne    0816c05e <+0xf4>
0816bfaa +0x40:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0816bfaf +0x45:  movl   $0x4a,0x8(%esp)
0816bfb7 +0x4d:  movl   $"localtaiwan/Event/EventStayTimeCharacter.cpp",0x4(%esp)
0816bfbf +0x55:  mov    %eax,(%esp)
0816bfc2 +0x58:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0816bfc7 +0x5d:  movl   $0x1,0x8(%esp)
0816bfcf +0x65:  mov    %eax,0x4(%esp)
0816bfd3 +0x69:  lea    -0x14(%ebp),%eax
0816bfd6 +0x6c:  mov    %eax,(%esp)
0816bfd9 +0x6f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0816bfde +0x74:  movl   $0xffffffff,0x8(%esp)
0816bfe6 +0x7c:  movl   $0x7,0x4(%esp)
0816bfee +0x84:  lea    -0x14(%ebp),%eax
0816bff1 +0x87:  mov    %eax,(%esp)
0816bff4 +0x8a:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0816bff9 +0x8f:  lea    -0x14(%ebp),%eax
0816bffc +0x92:  mov    %eax,(%esp)
0816bfff +0x95:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0816c004 +0x9a:  mov    %eax,(%esp)
0816c007 +0x9d:  call   0816c134 <_GLOBAL__I__ZN14CEventStayTime12kRewardItem_E+0x1c>  ; global constructors keyed to CEventStayTime::kRewardItem_+0x1c
0816c00c +0xa2:  mov    %eax,-0xc(%ebp)
0816c00f +0xa5:  cmpl   $0x0,-0xc(%ebp)
0816c013 +0xa9:  je     0816c04e <+0xe4>
0816c015 +0xab:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0816c01a +0xb0:  lea    -0x14(%ebp),%edx
0816c01d +0xb3:  mov    %edx,0x8(%esp)
0816c021 +0xb7:  movl   $0x2,0x4(%esp)
0816c029 +0xbf:  mov    %eax,(%esp)
0816c02c +0xc2:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0816c031 +0xc7:  jmp    0816c04e <+0xe4>
0816c033 +0xc9:  mov    %edx,%ebx
0816c035 +0xcb:  mov    %eax,%esi
0816c037 +0xcd:  lea    -0x14(%ebp),%eax
0816c03a +0xd0:  mov    %eax,(%esp)
0816c03d +0xd3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816c042 +0xd8:  mov    %esi,%eax
0816c044 +0xda:  mov    %ebx,%edx
0816c046 +0xdc:  mov    %eax,(%esp)
0816c049 +0xdf:  call   08ae3750 <_Unwind_Resume>
0816c04e +0xe4:  lea    -0x14(%ebp),%eax
0816c051 +0xe7:  mov    %eax,(%esp)
0816c054 +0xea:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816c059 +0xef:  jmp    0816c05f <+0xf5>
0816c05b +0xf1:  nop
0816c05c +0xf2:  jmp    0816c05f <+0xf5>
0816c05e +0xf4:  nop
0816c05f +0xf5:  add    $0x20,%esp
0816c062 +0xf8:  pop    %ebx
0816c063 +0xf9:  pop    %esi
0816c064 +0xfa:  pop    %ebp
0816c065 +0xfb:  ret
```

## 反编译 C

```c
// CEventStayTime::dailyresetData @ 0x816bf6a

/* CEventStayTime::dailyresetData() */

void __thiscall CEventStayTime::dailyresetData(CEventStayTime *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *this_00;
  CStreamGuard local_18 [8];
  SigResetStayTimeEvent *local_10;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if ((cVar1 == '\x01') && (cVar1 = IsFirstReset(this), cVar1 == '\0')) {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Event/EventStayTimeCharacter.cpp",0x4a);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
                    /* try { // try from 0816bff4 to 0816c030 has its CatchHandler @ 0816c033 */
    Taiwan::internal_stream(local_18,7,0xffffffff);
    this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<Taiwan::SigResetStayTimeEvent>(this_00);
    if (local_10 != (SigResetStayTimeEvent *)0x0) {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    }
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```
