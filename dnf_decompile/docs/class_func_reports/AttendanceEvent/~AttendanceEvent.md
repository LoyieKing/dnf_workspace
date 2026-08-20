# ~AttendanceEvent

`_ZN15AttendanceEventD1Ev`

`AttendanceEvent::~AttendanceEvent()`

| 类 | 地址 |
|---|---|
| `AttendanceEvent` | `0x080c82a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c82a8  _ZN15AttendanceEventD1Ev
#           AttendanceEvent::~AttendanceEvent()
# range [0x080c82a8, 0x080c82d7]
080c82a8 +0x00:  push   %ebp
080c82a9 +0x01:  mov    %esp,%ebp
080c82ab +0x03:  sub    $0x18,%esp
080c82ae +0x06:  mov    0x8(%ebp),%eax
080c82b1 +0x09:  movl   $&_ZTV15AttendanceEvent+0x8,(%eax)
080c82b7 +0x0f:  mov    0x8(%ebp),%eax
080c82ba +0x12:  mov    %eax,(%esp)
080c82bd +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
080c82c2 +0x1a:  mov    $0x0,%eax
080c82c7 +0x1f:  test   %al,%al
080c82c9 +0x21:  je     080c82d6 <+0x2e>
080c82cb +0x23:  mov    0x8(%ebp),%eax
080c82ce +0x26:  mov    %eax,(%esp)
080c82d1 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c82d6 +0x2e:  leave
080c82d7 +0x2f:  ret
```

## 反编译 C

```c
// AttendanceEvent::~AttendanceEvent @ 0x80c82a8

/* WARNING: Removing unreachable block (ram,0x080c82cb) */
/* AttendanceEvent::~AttendanceEvent() */

void __thiscall AttendanceEvent::~AttendanceEvent(AttendanceEvent *this)

{
  *(undefined ***)this = &PTR__AttendanceEvent_08b25ba8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
