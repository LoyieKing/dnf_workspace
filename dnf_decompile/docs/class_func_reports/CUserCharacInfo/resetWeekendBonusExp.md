# resetWeekendBonusExp

`_ZN15CUserCharacInfo20resetWeekendBonusExpEv`

`CUserCharacInfo::resetWeekendBonusExp()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868e34a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e34a  _ZN15CUserCharacInfo20resetWeekendBonusExpEv
#           CUserCharacInfo::resetWeekendBonusExp()
# range [0x0868e34a, 0x0868e369]
0868e34a +0x00:  push   %ebp
0868e34b +0x01:  mov    %esp,%ebp
0868e34d +0x03:  mov    0x8(%ebp),%eax
0868e350 +0x06:  mov    0x10(%eax),%eax
0868e353 +0x09:  test   %eax,%eax
0868e355 +0x0b:  je     0868e367 <+0x1d>
0868e357 +0x0d:  mov    0x8(%ebp),%eax
0868e35a +0x10:  mov    0x10(%eax),%eax
0868e35d +0x13:  movl   $0x0,0x1291(%eax)
0868e367 +0x1d:  pop    %ebp
0868e368 +0x1e:  ret
0868e369 +0x1f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::resetWeekendBonusExp @ 0x868e34a

/* CUserCharacInfo::resetWeekendBonusExp() */

void __thiscall CUserCharacInfo::resetWeekendBonusExp(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0x1291) = 0;
  }
  return;
}
```
