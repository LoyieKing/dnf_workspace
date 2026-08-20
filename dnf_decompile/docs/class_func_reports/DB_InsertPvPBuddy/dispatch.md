# dispatch

`_ZN17DB_InsertPvPBuddy8dispatchEiiP6Stream`

`DB_InsertPvPBuddy::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertPvPBuddy` | `0x0843a9a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a9a2  _ZN17DB_InsertPvPBuddy8dispatchEiiP6Stream
#           DB_InsertPvPBuddy::dispatch(int, int, Stream*)
# range [0x0843a9a2, 0x0843a9ab]
0843a9a2 +0x00:  push   %ebp
0843a9a3 +0x01:  mov    %esp,%ebp
0843a9a5 +0x03:  mov    $0x1,%eax
0843a9aa +0x08:  pop    %ebp
0843a9ab +0x09:  ret
```

## 反编译 C

```c
// DB_InsertPvPBuddy::dispatch @ 0x843a9a2

/* DB_InsertPvPBuddy::dispatch(int, int, Stream*) */

undefined4 DB_InsertPvPBuddy::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
