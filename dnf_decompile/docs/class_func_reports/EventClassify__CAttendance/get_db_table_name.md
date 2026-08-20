# get_db_table_name

`_ZN13EventClassify11CAttendance17get_db_table_nameEv`

`EventClassify::CAttendance::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CAttendance` | `0x0810e7cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e7cc  _ZN13EventClassify11CAttendance17get_db_table_nameEv
#           EventClassify::CAttendance::get_db_table_name()
# range [0x0810e7cc, 0x0810e7d9]
0810e7cc +0x00:  push   %ebp
0810e7cd +0x01:  mov    %esp,%ebp
0810e7cf +0x03:  mov    0x8(%ebp),%eax
0810e7d2 +0x06:  mov    0x1c(%eax),%eax
0810e7d5 +0x09:  add    $0x8,%eax
0810e7d8 +0x0c:  pop    %ebp
0810e7d9 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CAttendance::get_db_table_name @ 0x810e7cc

/* EventClassify::CAttendance::get_db_table_name() */

int __thiscall EventClassify::CAttendance::get_db_table_name(CAttendance *this)

{
  return *(int *)(this + 0x1c) + 8;
}
```
