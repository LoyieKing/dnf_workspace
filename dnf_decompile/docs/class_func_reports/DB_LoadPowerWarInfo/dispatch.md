# dispatch

`_ZN19DB_LoadPowerWarInfo8dispatchEiiP6Stream`

`DB_LoadPowerWarInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadPowerWarInfo` | `0x08437756` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437756  _ZN19DB_LoadPowerWarInfo8dispatchEiiP6Stream
#           DB_LoadPowerWarInfo::dispatch(int, int, Stream*)
# range [0x08437756, 0x08437763]
08437756 +0x00:  push   %ebp
08437757 +0x01:  mov    %esp,%ebp
08437759 +0x03:  sub    $0x40,%esp
0843775c +0x06:  mov    $0x1,%eax
08437761 +0x0b:  leave
08437762 +0x0c:  ret
08437763 +0x0d:  nop
```

## 反编译 C

```c
// DB_LoadPowerWarInfo::dispatch @ 0x8437756

/* DB_LoadPowerWarInfo::dispatch(int, int, Stream*) */

undefined4 DB_LoadPowerWarInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
