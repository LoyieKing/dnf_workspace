# SendResult

`_ZN12DB_SaveInven10SendResultEiiP18SIG_SAVE_INVENTORY`

`DB_SaveInven::SendResult(int, int, SIG_SAVE_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `DB_SaveInven` | `0x08417204` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417204  _ZN12DB_SaveInven10SendResultEiiP18SIG_SAVE_INVENTORY
#           DB_SaveInven::SendResult(int, int, SIG_SAVE_INVENTORY*)
# range [0x08417204, 0x0841720d]
08417204 +0x00:  push   %ebp
08417205 +0x01:  mov    %esp,%ebp
08417207 +0x03:  mov    $0x1,%eax
0841720c +0x08:  pop    %ebp
0841720d +0x09:  ret
```

## 反编译 C

```c
// DB_SaveInven::SendResult @ 0x8417204

/* DB_SaveInven::SendResult(int, int, SIG_SAVE_INVENTORY*) */

undefined4 DB_SaveInven::SendResult(int param_1,int param_2,SIG_SAVE_INVENTORY *param_3)

{
  return 1;
}
```
