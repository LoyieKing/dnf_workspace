# EndEvent

`_ZN25CEventCeraShopRewardPoint8EndEventEv`

`CEventCeraShopRewardPoint::EndEvent()`

| 类 | 地址 |
|---|---|
| `CEventCeraShopRewardPoint` | `0x081646b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081646b8  _ZN25CEventCeraShopRewardPoint8EndEventEv
#           CEventCeraShopRewardPoint::EndEvent()
# range [0x081646b8, 0x0816471d]
081646b8 +0x00:  push   %ebp
081646b9 +0x01:  mov    %esp,%ebp
081646bb +0x03:  sub    $0x28,%esp
081646be +0x06:  movl   $0x0,0xc(%esp)
081646c6 +0x0e:  movl   $0x147,0x8(%esp)
081646ce +0x16:  movl   $&_ZZN25CEventCeraShopRewardPoint8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081646d6 +0x1e:  lea    -0x18(%ebp),%eax
081646d9 +0x21:  mov    %eax,(%esp)
081646dc +0x24:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081646e1 +0x29:  movl   $"[Taiwan, CeraShopRewardPoint] End event.",0x4(%esp)
081646e9 +0x31:  lea    -0x18(%ebp),%eax
081646ec +0x34:  mov    %eax,(%esp)
081646ef +0x37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081646f4 +0x3c:  mov    0x8(%ebp),%eax
081646f7 +0x3f:  movl   $0x0,0x10(%eax)
081646fe +0x46:  mov    0x8(%ebp),%eax
08164701 +0x49:  movl   $0x0,0xc(%eax)
08164708 +0x50:  mov    0x8(%ebp),%eax
0816470b +0x53:  movl   $0x0,0x4(%esp)
08164713 +0x5b:  mov    %eax,(%esp)
08164716 +0x5e:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0816471b +0x63:  leave
0816471c +0x64:  ret
0816471d +0x65:  nop
```

## 反编译 C

```c
// CEventCeraShopRewardPoint::EndEvent @ 0x81646b8

/* CEventCeraShopRewardPoint::EndEvent() */

void __thiscall CEventCeraShopRewardPoint::EndEvent(CEventCeraShopRewardPoint *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void CEventCeraShopRewardPoint::EndEvent()",0x147,0);
  cMyTrace::operator()(local_1c,"[Taiwan, CeraShopRewardPoint] End event.");
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
