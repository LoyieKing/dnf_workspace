# WarningDistance

`_ZN15WarningDistanceC1Eiii`

`WarningDistance::WarningDistance(int, int, int)`

| 类 | 地址 |
|---|---|
| `WarningDistance` | `0x08a3aeec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3aeec  _ZN15WarningDistanceC1Eiii
#           WarningDistance::WarningDistance(int, int, int)
# range [0x08a3aeec, 0x08a3af0b]
08a3aeec +0x00:  push   %ebp
08a3aeed +0x01:  mov    %esp,%ebp
08a3aeef +0x03:  mov    0x8(%ebp),%eax
08a3aef2 +0x06:  mov    0xc(%ebp),%edx
08a3aef5 +0x09:  mov    %edx,(%eax)
08a3aef7 +0x0b:  mov    0x8(%ebp),%eax
08a3aefa +0x0e:  mov    0x10(%ebp),%edx
08a3aefd +0x11:  mov    %edx,0x4(%eax)
08a3af00 +0x14:  mov    0x8(%ebp),%eax
08a3af03 +0x17:  mov    0x14(%ebp),%edx
08a3af06 +0x1a:  mov    %edx,0x8(%eax)
08a3af09 +0x1d:  pop    %ebp
08a3af0a +0x1e:  ret
08a3af0b +0x1f:  nop
```

## 反编译 C

```c
// WarningDistance::WarningDistance @ 0x8a3aeec

/* WarningDistance::WarningDistance(int, int, int) */

void __thiscall
WarningDistance::WarningDistance(WarningDistance *this,int param_1,int param_2,int param_3)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}
```
