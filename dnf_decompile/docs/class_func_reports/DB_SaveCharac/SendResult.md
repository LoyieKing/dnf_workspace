# SendResult

`_ZN13DB_SaveCharac10SendResultEiiP15SIG_SAVE_CHARAC`

`DB_SaveCharac::SendResult(int, int, SIG_SAVE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x08416904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08416904  _ZN13DB_SaveCharac10SendResultEiiP15SIG_SAVE_CHARAC
#           DB_SaveCharac::SendResult(int, int, SIG_SAVE_CHARAC*)
# range [0x08416904, 0x0841690d]
08416904 +0x00:  push   %ebp
08416905 +0x01:  mov    %esp,%ebp
08416907 +0x03:  mov    $0x1,%eax
0841690c +0x08:  pop    %ebp
0841690d +0x09:  ret
```

## 反编译 C

```c
// DB_SaveCharac::SendResult @ 0x8416904

/* DB_SaveCharac::SendResult(int, int, SIG_SAVE_CHARAC*) */

undefined4 DB_SaveCharac::SendResult(int param_1,int param_2,SIG_SAVE_CHARAC *param_3)

{
  return 1;
}
```
