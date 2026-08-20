# StartEvent

`_ZN22CBreakAwayPreventEvent10StartEventEv`

`CBreakAwayPreventEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CBreakAwayPreventEvent` | `0x08109e26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109e26  _ZN22CBreakAwayPreventEvent10StartEventEv
#           CBreakAwayPreventEvent::StartEvent()
# range [0x08109e26, 0x08109e77]
08109e26 +0x00:  push   %ebp
08109e27 +0x01:  mov    %esp,%ebp
08109e29 +0x03:  sub    $0x28,%esp
08109e2c +0x06:  mov    0x8(%ebp),%eax
08109e2f +0x09:  movl   $0x1,0x4(%esp)
08109e37 +0x11:  mov    %eax,(%esp)
08109e3a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08109e3f +0x19:  movl   $0x0,0xc(%esp)
08109e47 +0x21:  movl   $0x14,0x8(%esp)
08109e4f +0x29:  movl   $&_ZZN22CBreakAwayPreventEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
08109e57 +0x31:  lea    -0x18(%ebp),%eax
08109e5a +0x34:  mov    %eax,(%esp)
08109e5d +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08109e62 +0x3c:  movl   $"CBreakAwayPreventEvent Start!",0x4(%esp)
08109e6a +0x44:  lea    -0x18(%ebp),%eax
08109e6d +0x47:  mov    %eax,(%esp)
08109e70 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08109e75 +0x4f:  leave
08109e76 +0x50:  ret
08109e77 +0x51:  nop
```

## 反编译 C

```c
// CBreakAwayPreventEvent::StartEvent @ 0x8109e26

/* CBreakAwayPreventEvent::StartEvent() */

void __thiscall CBreakAwayPreventEvent::StartEvent(CBreakAwayPreventEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x14,0);
  cMyTrace::operator()(local_1c,"CBreakAwayPreventEvent Start!");
  return;
}
```
