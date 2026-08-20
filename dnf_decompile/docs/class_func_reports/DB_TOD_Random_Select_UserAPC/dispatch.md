# dispatch

`_ZN28DB_TOD_Random_Select_UserAPC8dispatchEiiP6Stream`

`DB_TOD_Random_Select_UserAPC::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_TOD_Random_Select_UserAPC` | `0x084400b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084400b8  _ZN28DB_TOD_Random_Select_UserAPC8dispatchEiiP6Stream
#           DB_TOD_Random_Select_UserAPC::dispatch(int, int, Stream*)
# range [0x084400b8, 0x084400c7]
084400b8 +0x00:  push   %ebp
084400b9 +0x01:  mov    %esp,%ebp
084400bb +0x03:  sub    $0xb0,%esp
084400c1 +0x09:  mov    $0x1,%eax
084400c6 +0x0e:  leave
084400c7 +0x0f:  ret
```

## 反编译 C

```c
// DB_TOD_Random_Select_UserAPC::dispatch @ 0x84400b8

/* DB_TOD_Random_Select_UserAPC::dispatch(int, int, Stream*) */

undefined4 DB_TOD_Random_Select_UserAPC::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
