# ~CFairPvPScore

`_ZN8fair_pvp13CFairPvPScoreD0Ev`

`fair_pvp::CFairPvPScore::~CFairPvPScore()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairPvPScore` | `0x084a48da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a48da  _ZN8fair_pvp13CFairPvPScoreD0Ev
#           fair_pvp::CFairPvPScore::~CFairPvPScore()
# range [0x084a48da, 0x084a48f7]
084a48da +0x00:  push   %ebp
084a48db +0x01:  mov    %esp,%ebp
084a48dd +0x03:  sub    $0x18,%esp
084a48e0 +0x06:  mov    0x8(%ebp),%eax
084a48e3 +0x09:  mov    %eax,(%esp)
084a48e6 +0x0c:  call   084a4850 <_ZN8fair_pvp13CFairPvPScoreD1Ev>  ; fair_pvp::CFairPvPScore::~CFairPvPScore()
084a48eb +0x11:  mov    0x8(%ebp),%eax
084a48ee +0x14:  mov    %eax,(%esp)
084a48f1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084a48f6 +0x1c:  leave
084a48f7 +0x1d:  ret
```

## 反编译 C

```c
// fair_pvp::CFairPvPScore::~CFairPvPScore @ 0x84a48da

/* fair_pvp::CFairPvPScore::~CFairPvPScore() */

void __thiscall fair_pvp::CFairPvPScore::~CFairPvPScore(CFairPvPScore *this)

{
  ~CFairPvPScore(this);
  operator_delete(this);
  return;
}
```
