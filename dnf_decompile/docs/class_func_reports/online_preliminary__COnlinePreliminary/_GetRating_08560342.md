# _GetRating

`_ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM`

`online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560342  _ZN18online_preliminary18COnlinePreliminary10_GetRatingE22ENUM_SCHOOL_MATCH_TEAM
#           online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM)
# range [0x08560342, 0x08560367]
08560342 +0x00:  push   %ebp
08560343 +0x01:  mov    %esp,%ebp
08560345 +0x03:  sub    $0x4,%esp
08560348 +0x06:  mov    0xc(%ebp),%edx
0856034b +0x09:  mov    0x8(%ebp),%ecx
0856034e +0x0c:  mov    %edx,%eax
08560350 +0x0e:  shl    $0x2,%eax
08560353 +0x11:  add    %edx,%eax
08560355 +0x13:  shl    $0x3,%eax
08560358 +0x16:  lea    (%ecx,%eax,1),%eax
0856035b +0x19:  add    $0x20,%eax
0856035e +0x1c:  mov    (%eax),%eax
08560360 +0x1e:  mov    %eax,-0x4(%ebp)
08560363 +0x21:  flds   -0x4(%ebp)
08560366 +0x24:  leave
08560367 +0x25:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_GetRating @ 0x8560342

/* online_preliminary::COnlinePreliminary::_GetRating(ENUM_SCHOOL_MATCH_TEAM) */

longdouble __thiscall
online_preliminary::COnlinePreliminary::_GetRating(COnlinePreliminary *this,int param_2)

{
  return (longdouble)*(float *)(this + param_2 * 0x28 + 0x20);
}
```
