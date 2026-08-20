# WarningDistance

`_ZN15WarningDistanceC1Ev`

`WarningDistance::WarningDistance()`

| 类 | 地址 |
|---|---|
| `WarningDistance` | `0x08a3aeca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3aeca  _ZN15WarningDistanceC1Ev
#           WarningDistance::WarningDistance()
# range [0x08a3aeca, 0x08a3aeeb]
08a3aeca +0x00:  push   %ebp
08a3aecb +0x01:  mov    %esp,%ebp
08a3aecd +0x03:  mov    0x8(%ebp),%eax
08a3aed0 +0x06:  movl   $0x0,(%eax)
08a3aed6 +0x0c:  mov    0x8(%ebp),%eax
08a3aed9 +0x0f:  movl   $0x0,0x4(%eax)
08a3aee0 +0x16:  mov    0x8(%ebp),%eax
08a3aee3 +0x19:  movl   $0x0,0x8(%eax)
08a3aeea +0x20:  pop    %ebp
08a3aeeb +0x21:  ret
```

## 反编译 C

```c
// WarningDistance::WarningDistance @ 0x8a3aeca

/* WarningDistance::WarningDistance() */

void __thiscall WarningDistance::WarningDistance(WarningDistance *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
