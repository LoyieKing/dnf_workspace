# EndEvent

`_ZN30CIntegratedPvPServerMatchEvent8EndEventEv`

`CIntegratedPvPServerMatchEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CIntegratedPvPServerMatchEvent` | `0x0811d546` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d546  _ZN30CIntegratedPvPServerMatchEvent8EndEventEv
#           CIntegratedPvPServerMatchEvent::EndEvent()
# range [0x0811d546, 0x0811d560]
0811d546 +0x00:  push   %ebp
0811d547 +0x01:  mov    %esp,%ebp
0811d549 +0x03:  sub    $0x18,%esp
0811d54c +0x06:  mov    0x8(%ebp),%eax
0811d54f +0x09:  movl   $0x0,0x4(%esp)
0811d557 +0x11:  mov    %eax,(%esp)
0811d55a +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0811d55f +0x19:  leave
0811d560 +0x1a:  ret
```

## 反编译 C

```c
// CIntegratedPvPServerMatchEvent::EndEvent @ 0x811d546

/* CIntegratedPvPServerMatchEvent::EndEvent() */

void __thiscall CIntegratedPvPServerMatchEvent::EndEvent(CIntegratedPvPServerMatchEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}
```
