# get_db_table_name

`_ZN13EventClassify22CPurchaseCashItemBonus17get_db_table_nameEv`

`EventClassify::CPurchaseCashItemBonus::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CPurchaseCashItemBonus` | `0x0810f9c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f9c0  _ZN13EventClassify22CPurchaseCashItemBonus17get_db_table_nameEv
#           EventClassify::CPurchaseCashItemBonus::get_db_table_name()
# range [0x0810f9c0, 0x0810f9cd]
0810f9c0 +0x00:  push   %ebp
0810f9c1 +0x01:  mov    %esp,%ebp
0810f9c3 +0x03:  mov    0x8(%ebp),%eax
0810f9c6 +0x06:  mov    0x1c(%eax),%eax
0810f9c9 +0x09:  add    $0x8,%eax
0810f9cc +0x0c:  pop    %ebp
0810f9cd +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CPurchaseCashItemBonus::get_db_table_name @ 0x810f9c0

/* EventClassify::CPurchaseCashItemBonus::get_db_table_name() */

int __thiscall
EventClassify::CPurchaseCashItemBonus::get_db_table_name(CPurchaseCashItemBonus *this)

{
  return *(int *)(this + 0x1c) + 8;
}
```
