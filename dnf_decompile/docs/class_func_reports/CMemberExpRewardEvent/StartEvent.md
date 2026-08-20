# StartEvent

`_ZN21CMemberExpRewardEvent10StartEventEv`

`CMemberExpRewardEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CMemberExpRewardEvent` | `0x081b2990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2990  _ZN21CMemberExpRewardEvent10StartEventEv
#           CMemberExpRewardEvent::StartEvent()
# range [0x081b2990, 0x081b29eb]
081b2990 +0x00:  push   %ebp
081b2991 +0x01:  mov    %esp,%ebp
081b2993 +0x03:  sub    $0x28,%esp
081b2996 +0x06:  mov    0x8(%ebp),%eax
081b2999 +0x09:  movl   $0x1,0x4(%esp)
081b29a1 +0x11:  mov    %eax,(%esp)
081b29a4 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b29a9 +0x19:  mov    0x8(%ebp),%eax
081b29ac +0x1c:  movl   $0xa,0xc(%eax)
081b29b3 +0x23:  movl   $0x0,0xc(%esp)
081b29bb +0x2b:  movl   $0x16,0x8(%esp)
081b29c3 +0x33:  movl   $&_ZZN21CMemberExpRewardEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
081b29cb +0x3b:  lea    -0x18(%ebp),%eax
081b29ce +0x3e:  mov    %eax,(%esp)
081b29d1 +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b29d6 +0x46:  movl   $"Member Exp Reward Event Start!",0x4(%esp)
081b29de +0x4e:  lea    -0x18(%ebp),%eax
081b29e1 +0x51:  mov    %eax,(%esp)
081b29e4 +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b29e9 +0x59:  leave
081b29ea +0x5a:  ret
081b29eb +0x5b:  nop
```

## 反编译 C

```c
// CMemberExpRewardEvent::StartEvent @ 0x81b2990

/* CMemberExpRewardEvent::StartEvent() */

void __thiscall CMemberExpRewardEvent::StartEvent(CMemberExpRewardEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 10;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x16,0);
  cMyTrace::operator()(local_1c,"Member Exp Reward Event Start!");
  return;
}
```
