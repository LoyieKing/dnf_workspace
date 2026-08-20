# get_db_table_name

`_ZN13EventClassify18CAccountFirstLogin17get_db_table_nameEv`

`EventClassify::CAccountFirstLogin::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CAccountFirstLogin` | `0x0810debe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810debe  _ZN13EventClassify18CAccountFirstLogin17get_db_table_nameEv
#           EventClassify::CAccountFirstLogin::get_db_table_name()
# range [0x0810debe, 0x0810decb]
0810debe +0x00:  push   %ebp
0810debf +0x01:  mov    %esp,%ebp
0810dec1 +0x03:  mov    0x8(%ebp),%eax
0810dec4 +0x06:  mov    0x1c(%eax),%eax
0810dec7 +0x09:  add    $0x8,%eax
0810deca +0x0c:  pop    %ebp
0810decb +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CAccountFirstLogin::get_db_table_name @ 0x810debe

/* EventClassify::CAccountFirstLogin::get_db_table_name() */

int __thiscall EventClassify::CAccountFirstLogin::get_db_table_name(CAccountFirstLogin *this)

{
  return *(int *)(this + 0x1c) + 8;
}
```
