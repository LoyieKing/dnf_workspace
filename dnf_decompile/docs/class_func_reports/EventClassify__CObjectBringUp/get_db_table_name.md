# get_db_table_name

`_ZN13EventClassify14CObjectBringUp17get_db_table_nameEv`

`EventClassify::CObjectBringUp::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CObjectBringUp` | `0x0810fcdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810fcdc  _ZN13EventClassify14CObjectBringUp17get_db_table_nameEv
#           EventClassify::CObjectBringUp::get_db_table_name()
# range [0x0810fcdc, 0x0810fce9]
0810fcdc +0x00:  push   %ebp
0810fcdd +0x01:  mov    %esp,%ebp
0810fcdf +0x03:  mov    0x8(%ebp),%eax
0810fce2 +0x06:  mov    0x1c(%eax),%eax
0810fce5 +0x09:  add    $0x8,%eax
0810fce8 +0x0c:  pop    %ebp
0810fce9 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CObjectBringUp::get_db_table_name @ 0x810fcdc

/* EventClassify::CObjectBringUp::get_db_table_name() */

int __thiscall EventClassify::CObjectBringUp::get_db_table_name(CObjectBringUp *this)

{
  return *(int *)(this + 0x1c) + 8;
}
```
