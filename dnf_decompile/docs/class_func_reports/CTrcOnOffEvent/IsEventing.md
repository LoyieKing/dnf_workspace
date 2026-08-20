# IsEventing

`_ZNK14CTrcOnOffEvent10IsEventingEP5CUser`

`CTrcOnOffEvent::IsEventing(CUser*) const`

| 类 | 地址 |
|---|---|
| `CTrcOnOffEvent` | `0x08285ba4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08285ba4  _ZNK14CTrcOnOffEvent10IsEventingEP5CUser
#           CTrcOnOffEvent::IsEventing(CUser*) const
# range [0x08285ba4, 0x08285bd1]
08285ba4 +0x00:  push   %ebp
08285ba5 +0x01:  mov    %esp,%ebp
08285ba7 +0x03:  sub    $0x18,%esp
08285baa +0x06:  mov    0x8(%ebp),%eax
08285bad +0x09:  movl   $0x0,0x4(%esp)
08285bb5 +0x11:  mov    %eax,(%esp)
08285bb8 +0x14:  call   080c84fa <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x52>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x52
08285bbd +0x19:  xor    $0x1,%eax
08285bc0 +0x1c:  test   %al,%al
08285bc2 +0x1e:  je     08285bcb <+0x27>
08285bc4 +0x20:  mov    $0x0,%eax
08285bc9 +0x25:  jmp    08285bd0 <+0x2c>
08285bcb +0x27:  mov    $0x1,%eax
08285bd0 +0x2c:  leave
08285bd1 +0x2d:  ret
```

## 反编译 C

```c
// CTrcOnOffEvent::IsEventing @ 0x8285ba4

/* CTrcOnOffEvent::IsEventing(CUser*) const */

bool CTrcOnOffEvent::IsEventing(CUser *param_1)

{
  char cVar1;
  
  cVar1 = CEventBase::IsEventing(param_1);
  return cVar1 == '\x01';
}
```
