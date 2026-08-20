# ~CAutoMarketConditionsControl

`_ZN28CAutoMarketConditionsControlD1Ev`

`CAutoMarketConditionsControl::~CAutoMarketConditionsControl()`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f8144` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f8144  _ZN28CAutoMarketConditionsControlD1Ev
#           CAutoMarketConditionsControl::~CAutoMarketConditionsControl()
# range [0x082f8144, 0x082f815b]
082f8144 +0x00:  push   %ebp
082f8145 +0x01:  mov    %esp,%ebp
082f8147 +0x03:  sub    $0x18,%esp
082f814a +0x06:  mov    0x8(%ebp),%eax
082f814d +0x09:  add    $0x3dc,%eax
082f8152 +0x0e:  mov    %eax,(%esp)
082f8155 +0x11:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
082f815a +0x16:  leave
082f815b +0x17:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControl::~CAutoMarketConditionsControl @ 0x82f8144

/* CAutoMarketConditionsControl::~CAutoMarketConditionsControl() */

void __thiscall
CAutoMarketConditionsControl::~CAutoMarketConditionsControl(CAutoMarketConditionsControl *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x3dc));
  return;
}
```
