# AttendanceEvent

`_GLOBAL__I__ZN15AttendanceEventC2Ev`

`global constructors keyed to AttendanceEvent::AttendanceEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to AttendanceEvent` | `0x080c84a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c84a8  _GLOBAL__I__ZN15AttendanceEventC2Ev
#           global constructors keyed to AttendanceEvent::AttendanceEvent()
# range [0x080c84a8, 0x080c8507]
080c84a8 +0x00:  push   %ebp
080c84a9 +0x01:  mov    %esp,%ebp
080c84ab +0x03:  sub    $0x18,%esp
080c84ae +0x06:  movl   $0xffff,0x4(%esp)
080c84b6 +0x0e:  movl   $0x1,(%esp)
080c84bd +0x15:  call   080c8468 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080c84c2 +0x1a:  leave
080c84c3 +0x1b:  ret
080c84c4 +0x1c:  push   %ebp
080c84c5 +0x1d:  mov    %esp,%ebp
080c84c7 +0x1f:  pop    %ebp
080c84c8 +0x20:  ret
080c84c9 +0x21:  nop
080c84ca +0x22:  push   %ebp
080c84cb +0x23:  mov    %esp,%ebp
080c84cd +0x25:  pop    %ebp
080c84ce +0x26:  ret
080c84cf +0x27:  nop
080c84d0 +0x28:  push   %ebp
080c84d1 +0x29:  mov    %esp,%ebp
080c84d3 +0x2b:  mov    0x8(%ebp),%eax
080c84d6 +0x2e:  mov    0xc(%ebp),%edx
080c84d9 +0x31:  mov    0x4(%edx),%edx
080c84dc +0x34:  mov    %edx,(%eax)
080c84de +0x36:  pop    %ebp
080c84df +0x37:  ret    $0x4
080c84e2 +0x3a:  push   %ebp
080c84e3 +0x3b:  mov    %esp,%ebp
080c84e5 +0x3d:  sub    $0x4,%esp
080c84e8 +0x40:  mov    0xc(%ebp),%eax
080c84eb +0x43:  mov    %al,-0x4(%ebp)
080c84ee +0x46:  mov    0x8(%ebp),%eax
080c84f1 +0x49:  movzbl -0x4(%ebp),%edx
080c84f5 +0x4d:  mov    %dl,0x8(%eax)
080c84f8 +0x50:  leave
080c84f9 +0x51:  ret
080c84fa +0x52:  push   %ebp
080c84fb +0x53:  mov    %esp,%ebp
080c84fd +0x55:  mov    0x8(%ebp),%eax
080c8500 +0x58:  movzbl 0x8(%eax),%eax
080c8504 +0x5c:  pop    %ebp
080c8505 +0x5d:  ret
080c8506 +0x5e:  nop
080c8507 +0x5f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80c84a8

/* AttendanceEvent::AttendanceEvent() */

void AttendanceEvent::_GLOBAL__I_AttendanceEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
