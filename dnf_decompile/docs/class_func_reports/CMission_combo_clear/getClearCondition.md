# getClearCondition

`_ZNK20CMission_combo_clear17getClearConditionEv`

`CMission_combo_clear::getClearCondition() const`

| 类 | 地址 |
|---|---|
| `CMission_combo_clear` | `0x085e456c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e456c  _ZNK20CMission_combo_clear17getClearConditionEv
#           CMission_combo_clear::getClearCondition() const
# range [0x085e456c, 0x085e4575]
085e456c +0x00:  push   %ebp
085e456d +0x01:  mov    %esp,%ebp
085e456f +0x03:  mov    $0x0,%eax
085e4574 +0x08:  pop    %ebp
085e4575 +0x09:  ret
```

## 反编译 C

```c
// CMission_combo_clear::getClearCondition @ 0x85e456c

/* CMission_combo_clear::getClearCondition() const */

undefined4 CMission_combo_clear::getClearCondition(void)

{
  return 0;
}
```
