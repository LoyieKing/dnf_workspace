# SetWeekendEvent

`_ZN6CParty15SetWeekendEventEb`

`CParty::SetWeekendEvent(bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bca8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bca8a  _ZN6CParty15SetWeekendEventEb
#           CParty::SetWeekendEvent(bool)
# range [0x085bca8a, 0x085bcaa5]
085bca8a +0x00:  push   %ebp
085bca8b +0x01:  mov    %esp,%ebp
085bca8d +0x03:  sub    $0x4,%esp
085bca90 +0x06:  mov    0xc(%ebp),%eax
085bca93 +0x09:  mov    %al,-0x4(%ebp)
085bca96 +0x0c:  mov    0x8(%ebp),%eax
085bca99 +0x0f:  movzbl -0x4(%ebp),%edx
085bca9d +0x13:  mov    %dl,0x1af0(%eax)
085bcaa3 +0x19:  leave
085bcaa4 +0x1a:  ret
085bcaa5 +0x1b:  nop
```

## 反编译 C

```c
// CParty::SetWeekendEvent @ 0x85bca8a

/* CParty::SetWeekendEvent(bool) */

void __thiscall CParty::SetWeekendEvent(CParty *this,bool param_1)

{
  this[0x1af0] = (CParty)param_1;
  return;
}
```
