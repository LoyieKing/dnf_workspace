# eventExpRatio

`_ZN23EventNewCharacterReward13eventExpRatioEv`

`EventNewCharacterReward::eventExpRatio()`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816bd06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bd06  _ZN23EventNewCharacterReward13eventExpRatioEv
#           EventNewCharacterReward::eventExpRatio()
# range [0x0816bd06, 0x0816bd21]
0816bd06 +0x00:  push   %ebp
0816bd07 +0x01:  mov    %esp,%ebp
0816bd09 +0x03:  sub    $0x4,%esp
0816bd0c +0x06:  mov    0x8(%ebp),%eax
0816bd0f +0x09:  mov    0x10(%eax),%eax
0816bd12 +0x0c:  mov    %eax,-0x4(%ebp)
0816bd15 +0x0f:  fildl  -0x4(%ebp)
0816bd18 +0x12:  flds   ""
0816bd1e +0x18:  fdivrp %st,%st(1)
0816bd20 +0x1a:  leave
0816bd21 +0x1b:  ret
```

## 反编译 C

```c
// EventNewCharacterReward::eventExpRatio @ 0x816bd06

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventNewCharacterReward::eventExpRatio() */

longdouble __thiscall EventNewCharacterReward::eventExpRatio(EventNewCharacterReward *this)

{
  return (longdouble)*(int *)(this + 0x10) / (longdouble)_DAT_08b80014;
}
```
