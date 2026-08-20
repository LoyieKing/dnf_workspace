# ~CFairMatch

`_ZN8fair_pvp10CFairMatchD0Ev`

`fair_pvp::CFairMatch::~CFairMatch()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x085629ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085629ca  _ZN8fair_pvp10CFairMatchD0Ev
#           fair_pvp::CFairMatch::~CFairMatch()
# range [0x085629ca, 0x085629e7]
085629ca +0x00:  push   %ebp
085629cb +0x01:  mov    %esp,%ebp
085629cd +0x03:  sub    $0x18,%esp
085629d0 +0x06:  mov    0x8(%ebp),%eax
085629d3 +0x09:  mov    %eax,(%esp)
085629d6 +0x0c:  call   0856292e <_ZN8fair_pvp10CFairMatchD1Ev>  ; fair_pvp::CFairMatch::~CFairMatch()
085629db +0x11:  mov    0x8(%ebp),%eax
085629de +0x14:  mov    %eax,(%esp)
085629e1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085629e6 +0x1c:  leave
085629e7 +0x1d:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::~CFairMatch @ 0x85629ca

/* fair_pvp::CFairMatch::~CFairMatch() */

void __thiscall fair_pvp::CFairMatch::~CFairMatch(CFairMatch *this)

{
  ~CFairMatch(this);
  operator_delete(this);
  return;
}
```
