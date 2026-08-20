# dispatch

`_ZN14DB_StatCoinUse8dispatchEiiP6Stream`

`DB_StatCoinUse::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatCoinUse` | `0x08417b6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417b6e  _ZN14DB_StatCoinUse8dispatchEiiP6Stream
#           DB_StatCoinUse::dispatch(int, int, Stream*)
# range [0x08417b6e, 0x08417b77]
08417b6e +0x00:  push   %ebp
08417b6f +0x01:  mov    %esp,%ebp
08417b71 +0x03:  mov    $0x1,%eax
08417b76 +0x08:  pop    %ebp
08417b77 +0x09:  ret
```

## 反编译 C

```c
// DB_StatCoinUse::dispatch @ 0x8417b6e

/* DB_StatCoinUse::dispatch(int, int, Stream*) */

undefined4 DB_StatCoinUse::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
