# get_db_table_name

`_ZN13EventClassify15CAddItemCountDB17get_db_table_nameEv`

`EventClassify::CAddItemCountDB::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CAddItemCountDB` | `0x0810e15a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e15a  _ZN13EventClassify15CAddItemCountDB17get_db_table_nameEv
#           EventClassify::CAddItemCountDB::get_db_table_name()
# range [0x0810e15a, 0x0810e167]
0810e15a +0x00:  push   %ebp
0810e15b +0x01:  mov    %esp,%ebp
0810e15d +0x03:  mov    0x8(%ebp),%eax
0810e160 +0x06:  mov    0x1c(%eax),%eax
0810e163 +0x09:  add    $0x20,%eax
0810e166 +0x0c:  pop    %ebp
0810e167 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CAddItemCountDB::get_db_table_name @ 0x810e15a

/* EventClassify::CAddItemCountDB::get_db_table_name() */

int __thiscall EventClassify::CAddItemCountDB::get_db_table_name(CAddItemCountDB *this)

{
  return *(int *)(this + 0x1c) + 0x20;
}
```
