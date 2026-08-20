# isSeriesMission

`_ZNK20CMission_combo_clear15isSeriesMissionEv`

`CMission_combo_clear::isSeriesMission() const`

| 类 | 地址 |
|---|---|
| `CMission_combo_clear` | `0x085e4558` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e4558  _ZNK20CMission_combo_clear15isSeriesMissionEv
#           CMission_combo_clear::isSeriesMission() const
# range [0x085e4558, 0x085e4561]
085e4558 +0x00:  push   %ebp
085e4559 +0x01:  mov    %esp,%ebp
085e455b +0x03:  mov    $0x1,%eax
085e4560 +0x08:  pop    %ebp
085e4561 +0x09:  ret
```

## 反编译 C

```c
// CMission_combo_clear::isSeriesMission @ 0x85e4558

/* CMission_combo_clear::isSeriesMission() const */

undefined4 CMission_combo_clear::isSeriesMission(void)

{
  return 1;
}
```
