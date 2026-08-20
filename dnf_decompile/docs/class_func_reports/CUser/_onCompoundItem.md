# _onCompoundItem

`_ZN5CUser15_onCompoundItemEi`

`CUser::_onCompoundItem(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086646c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086646c2  _ZN5CUser15_onCompoundItemEi
#           CUser::_onCompoundItem(int)
# range [0x086646c2, 0x086646c7]
086646c2 +0x00:  push   %ebp
086646c3 +0x01:  mov    %esp,%ebp
086646c5 +0x03:  pop    %ebp
086646c6 +0x04:  ret
086646c7 +0x05:  nop
```

## 反编译 C

```c
// CUser::_onCompoundItem @ 0x86646c2

/* CUser::_onCompoundItem(int) */

void CUser::_onCompoundItem(int param_1)

{
  return;
}
```
