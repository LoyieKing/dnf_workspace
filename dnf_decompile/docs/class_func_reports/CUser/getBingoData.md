# getBingoData

`_ZN5CUser12getBingoDataEv`

`CUser::getBingoData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086912b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086912b0  _ZN5CUser12getBingoDataEv
#           CUser::getBingoData()
# range [0x086912b0, 0x086912bd]
086912b0 +0x00:  push   %ebp
086912b1 +0x01:  mov    %esp,%ebp
086912b3 +0x03:  mov    0x8(%ebp),%eax
086912b6 +0x06:  add    $0x8ebdc,%eax
086912bb +0x0b:  pop    %ebp
086912bc +0x0c:  ret
086912bd +0x0d:  nop
```

## 反编译 C

```c
// CUser::getBingoData @ 0x86912b0

/* CUser::getBingoData() */

CUser * __thiscall CUser::getBingoData(CUser *this)

{
  return this + 0x8ebdc;
}
```
