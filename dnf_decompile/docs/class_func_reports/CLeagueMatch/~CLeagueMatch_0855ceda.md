# ~CLeagueMatch

`_ZN12CLeagueMatchD0Ev`

`CLeagueMatch::~CLeagueMatch()`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855ceda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855ceda  _ZN12CLeagueMatchD0Ev
#           CLeagueMatch::~CLeagueMatch()
# range [0x0855ceda, 0x0855cef7]
0855ceda +0x00:  push   %ebp
0855cedb +0x01:  mov    %esp,%ebp
0855cedd +0x03:  sub    $0x18,%esp
0855cee0 +0x06:  mov    0x8(%ebp),%eax
0855cee3 +0x09:  mov    %eax,(%esp)
0855cee6 +0x0c:  call   0855ce4c <_ZN12CLeagueMatchD1Ev>  ; CLeagueMatch::~CLeagueMatch()
0855ceeb +0x11:  mov    0x8(%ebp),%eax
0855ceee +0x14:  mov    %eax,(%esp)
0855cef1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0855cef6 +0x1c:  leave
0855cef7 +0x1d:  ret
```

## 反编译 C

```c
// CLeagueMatch::~CLeagueMatch @ 0x855ceda

/* CLeagueMatch::~CLeagueMatch() */

void __thiscall CLeagueMatch::~CLeagueMatch(CLeagueMatch *this)

{
  ~CLeagueMatch(this);
  operator_delete(this);
  return;
}
```
