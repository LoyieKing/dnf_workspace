# ~AttendanceEvent

`_ZN15AttendanceEventD0Ev`

`AttendanceEvent::~AttendanceEvent()`

| 类 | 地址 |
|---|---|
| `AttendanceEvent` | `0x080c82d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c82d8  _ZN15AttendanceEventD0Ev
#           AttendanceEvent::~AttendanceEvent()
# range [0x080c82d8, 0x080c82f5]
080c82d8 +0x00:  push   %ebp
080c82d9 +0x01:  mov    %esp,%ebp
080c82db +0x03:  sub    $0x18,%esp
080c82de +0x06:  mov    0x8(%ebp),%eax
080c82e1 +0x09:  mov    %eax,(%esp)
080c82e4 +0x0c:  call   080c82a8 <_ZN15AttendanceEventD1Ev>  ; AttendanceEvent::~AttendanceEvent()
080c82e9 +0x11:  mov    0x8(%ebp),%eax
080c82ec +0x14:  mov    %eax,(%esp)
080c82ef +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c82f4 +0x1c:  leave
080c82f5 +0x1d:  ret
```

## 反编译 C

```c
// AttendanceEvent::~AttendanceEvent @ 0x80c82d8

/* AttendanceEvent::~AttendanceEvent() */

void __thiscall AttendanceEvent::~AttendanceEvent(AttendanceEvent *this)

{
  ~AttendanceEvent(this);
  operator_delete(this);
  return;
}
```
