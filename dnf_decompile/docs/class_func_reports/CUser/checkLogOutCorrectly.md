# checkLogOutCorrectly

`_ZN5CUser20checkLogOutCorrectlyEv`

`CUser::checkLogOutCorrectly()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08658a3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08658a3e  _ZN5CUser20checkLogOutCorrectlyEv
#           CUser::checkLogOutCorrectly()
# range [0x08658a3e, 0x08658a4d]
08658a3e +0x00:  push   %ebp
08658a3f +0x01:  mov    %esp,%ebp
08658a41 +0x03:  mov    0x8(%ebp),%eax
08658a44 +0x06:  movb   $0x1,0x8d0df(%eax)
08658a4b +0x0d:  pop    %ebp
08658a4c +0x0e:  ret
08658a4d +0x0f:  nop
```

## 反编译 C

```c
// CUser::checkLogOutCorrectly @ 0x8658a3e

/* CUser::checkLogOutCorrectly() */

void __thiscall CUser::checkLogOutCorrectly(CUser *this)

{
  this[0x8d0df] = (CUser)0x1;
  return;
}
```
