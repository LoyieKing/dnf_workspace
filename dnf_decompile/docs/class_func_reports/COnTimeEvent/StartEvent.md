# StartEvent

`_ZN12COnTimeEvent10StartEventEv`

`COnTimeEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb8ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb8ae  _ZN12COnTimeEvent10StartEventEv
#           COnTimeEvent::StartEvent()
# range [0x081bb8ae, 0x081bb8c9]
081bb8ae +0x00:  push   %ebp
081bb8af +0x01:  mov    %esp,%ebp
081bb8b1 +0x03:  sub    $0x18,%esp
081bb8b4 +0x06:  mov    0x8(%ebp),%eax
081bb8b7 +0x09:  movl   $0x1,0x4(%esp)
081bb8bf +0x11:  mov    %eax,(%esp)
081bb8c2 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081bb8c7 +0x19:  leave
081bb8c8 +0x1a:  ret
081bb8c9 +0x1b:  nop
```

## 反编译 C

```c
// COnTimeEvent::StartEvent @ 0x81bb8ae

/* COnTimeEvent::StartEvent() */

void __thiscall COnTimeEvent::StartEvent(COnTimeEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}
```
