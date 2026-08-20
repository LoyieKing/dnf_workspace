# EndEvent

`_ZN21CMemberExpRewardEvent8EndEventEv`

`CMemberExpRewardEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CMemberExpRewardEvent` | `0x081b2a5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2a5a  _ZN21CMemberExpRewardEvent8EndEventEv
#           CMemberExpRewardEvent::EndEvent()
# range [0x081b2a5a, 0x081b2ab5]
081b2a5a +0x00:  push   %ebp
081b2a5b +0x01:  mov    %esp,%ebp
081b2a5d +0x03:  sub    $0x28,%esp
081b2a60 +0x06:  mov    0x8(%ebp),%eax
081b2a63 +0x09:  movl   $0x0,0x4(%esp)
081b2a6b +0x11:  mov    %eax,(%esp)
081b2a6e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b2a73 +0x19:  mov    0x8(%ebp),%eax
081b2a76 +0x1c:  movl   $0xa,0xc(%eax)
081b2a7d +0x23:  movl   $0x0,0xc(%esp)
081b2a85 +0x2b:  movl   $0x24,0x8(%esp)
081b2a8d +0x33:  movl   $&_ZZN21CMemberExpRewardEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
081b2a95 +0x3b:  lea    -0x18(%ebp),%eax
081b2a98 +0x3e:  mov    %eax,(%esp)
081b2a9b +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b2aa0 +0x46:  movl   $"Member Exp Reward Event",0x4(%esp)
081b2aa8 +0x4e:  lea    -0x18(%ebp),%eax
081b2aab +0x51:  mov    %eax,(%esp)
081b2aae +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b2ab3 +0x59:  leave
081b2ab4 +0x5a:  ret
081b2ab5 +0x5b:  nop
```

## 反编译 C

```c
// CMemberExpRewardEvent::EndEvent @ 0x81b2a5a

/* CMemberExpRewardEvent::EndEvent() */

void __thiscall CMemberExpRewardEvent::EndEvent(CMemberExpRewardEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 10;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x24,0);
  cMyTrace::operator()(local_1c,"Member Exp Reward Event");
  return;
}
```
