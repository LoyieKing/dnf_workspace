# get_db_table_name

`_ZN13EventClassify12CEventEntity17get_db_table_nameEv`

`EventClassify::CEventEntity::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventEntity` | `0x0810b06c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b06c  _ZN13EventClassify12CEventEntity17get_db_table_nameEv
#           EventClassify::CEventEntity::get_db_table_name()
# range [0x0810b06c, 0x0810b077]
0810b06c +0x00:  push   %ebp
0810b06d +0x01:  mov    %esp,%ebp
0810b06f +0x03:  mov    0x8(%ebp),%eax
0810b072 +0x06:  add    $0x8,%eax
0810b075 +0x09:  pop    %ebp
0810b076 +0x0a:  ret
0810b077 +0x0b:  nop
```

## 反编译 C

```c
// EventClassify::CEventEntity::get_db_table_name @ 0x810b06c

/* EventClassify::CEventEntity::get_db_table_name() */

CEventEntity * __thiscall EventClassify::CEventEntity::get_db_table_name(CEventEntity *this)

{
  return this + 8;
}
```
