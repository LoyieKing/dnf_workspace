# checkItemUpgradePossible

`_ZNK5CItem24checkItemUpgradePossibleEv`

`CItem::checkItemUpgradePossible() const`

| 类 | 地址 |
|---|---|
| `CItem` | `0x08513884` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513884  _ZNK5CItem24checkItemUpgradePossibleEv
#           CItem::checkItemUpgradePossible() const
# range [0x08513884, 0x0851388d]
08513884 +0x00:  push   %ebp
08513885 +0x01:  mov    %esp,%ebp
08513887 +0x03:  mov    $0x0,%eax
0851388c +0x08:  pop    %ebp
0851388d +0x09:  ret
```

## 反编译 C

```c
// CItem::checkItemUpgradePossible @ 0x8513884

/* CItem::checkItemUpgradePossible() const */

undefined4 CItem::checkItemUpgradePossible(void)

{
  return 0;
}
```
