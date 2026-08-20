# dispatch

`_ZN17DB_DeletePvPBuddy8dispatchEiiP6Stream`

`DB_DeletePvPBuddy::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DeletePvPBuddy` | `0x0843a9ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a9ac  _ZN17DB_DeletePvPBuddy8dispatchEiiP6Stream
#           DB_DeletePvPBuddy::dispatch(int, int, Stream*)
# range [0x0843a9ac, 0x0843a9b5]
0843a9ac +0x00:  push   %ebp
0843a9ad +0x01:  mov    %esp,%ebp
0843a9af +0x03:  mov    $0x1,%eax
0843a9b4 +0x08:  pop    %ebp
0843a9b5 +0x09:  ret
```

## 反编译 C

```c
// DB_DeletePvPBuddy::dispatch @ 0x843a9ac

/* DB_DeletePvPBuddy::dispatch(int, int, Stream*) */

undefined4 DB_DeletePvPBuddy::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
