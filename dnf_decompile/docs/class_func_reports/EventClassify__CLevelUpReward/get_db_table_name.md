# get_db_table_name

`_ZN13EventClassify14CLevelUpReward17get_db_table_nameEv`

`EventClassify::CLevelUpReward::get_db_table_name()`

| 类 | 地址 |
|---|---|
| `EventClassify::CLevelUpReward` | `0x0810e2d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e2d6  _ZN13EventClassify14CLevelUpReward17get_db_table_nameEv
#           EventClassify::CLevelUpReward::get_db_table_name()
# range [0x0810e2d6, 0x0810e2e3]
0810e2d6 +0x00:  push   %ebp
0810e2d7 +0x01:  mov    %esp,%ebp
0810e2d9 +0x03:  mov    0x8(%ebp),%eax
0810e2dc +0x06:  mov    0x1c(%eax),%eax
0810e2df +0x09:  add    $0xc,%eax
0810e2e2 +0x0c:  pop    %ebp
0810e2e3 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CLevelUpReward::get_db_table_name @ 0x810e2d6

/* EventClassify::CLevelUpReward::get_db_table_name() */

int __thiscall EventClassify::CLevelUpReward::get_db_table_name(CLevelUpReward *this)

{
  return *(int *)(this + 0x1c) + 0xc;
}
```
