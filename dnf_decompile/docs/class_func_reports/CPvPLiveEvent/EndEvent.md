# EndEvent

`_ZN13CPvPLiveEvent8EndEventEv`

`CPvPLiveEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CPvPLiveEvent` | `0x08268fc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268fc6  _ZN13CPvPLiveEvent8EndEventEv
#           CPvPLiveEvent::EndEvent()
# range [0x08268fc6, 0x08268fe0]
08268fc6 +0x00:  push   %ebp
08268fc7 +0x01:  mov    %esp,%ebp
08268fc9 +0x03:  sub    $0x18,%esp
08268fcc +0x06:  mov    0x8(%ebp),%eax
08268fcf +0x09:  movl   $0x0,0x4(%esp)
08268fd7 +0x11:  mov    %eax,(%esp)
08268fda +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268fdf +0x19:  leave
08268fe0 +0x1a:  ret
```

## 反编译 C

```c
// CPvPLiveEvent::EndEvent @ 0x8268fc6

/* CPvPLiveEvent::EndEvent() */

void __thiscall CPvPLiveEvent::EndEvent(CPvPLiveEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
