# ~GameResultSet

`_ZN13GameResultSetD1Ev`

`GameResultSet::~GameResultSet()`

| 类 | 地址 |
|---|---|
| `GameResultSet` | `0x084b75e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b75e6  _ZN13GameResultSetD1Ev
#           GameResultSet::~GameResultSet()
# range [0x084b75e6, 0x084b75f9]
084b75e6 +0x00:  push   %ebp
084b75e7 +0x01:  mov    %esp,%ebp
084b75e9 +0x03:  sub    $0x4,%esp
084b75ec +0x06:  mov    0x8(%ebp),%eax
084b75ef +0x09:  mov    %eax,(%esp)
084b75f2 +0x0c:  call   084b7416 <_ZN14GameResultTypeD1Ev>  ; GameResultType::~GameResultType()
084b75f7 +0x11:  leave
084b75f8 +0x12:  ret
084b75f9 +0x13:  nop
```

## 反编译 C

```c
// GameResultSet::~GameResultSet @ 0x84b75e6

/* GameResultSet::~GameResultSet() */

void __thiscall GameResultSet::~GameResultSet(GameResultSet *this)

{
  GameResultType::~GameResultType((GameResultType *)this);
  return;
}
```
