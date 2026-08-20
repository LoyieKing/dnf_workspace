# get_db_table_name

`_ZN13EventClassify20CUsedFatigueGiveItem17get_db_table_nameEv`

`EventClassify::CUsedFatigueGiveItem::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CUsedFatigueGiveItem` | `0x081105e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081105e8  _ZN13EventClassify20CUsedFatigueGiveItem17get_db_table_nameEv
#           EventClassify::CUsedFatigueGiveItem::get_db_table_name()
# range [0x081105e8, 0x081105f5]
081105e8 +0x00:  push   %ebp
081105e9 +0x01:  mov    %esp,%ebp
081105eb +0x03:  mov    0x8(%ebp),%eax
081105ee +0x06:  mov    0x1c(%eax),%eax
081105f1 +0x09:  add    $0x8,%eax
081105f4 +0x0c:  pop    %ebp
081105f5 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CUsedFatigueGiveItem::get_db_table_name @ 0x81105e8

/* EventClassify::CUsedFatigueGiveItem::get_db_table_name() */

int __thiscall EventClassify::CUsedFatigueGiveItem::get_db_table_name(CUsedFatigueGiveItem *this)

{
  return *(int *)(this + 0x1c) + 8;
}
```
