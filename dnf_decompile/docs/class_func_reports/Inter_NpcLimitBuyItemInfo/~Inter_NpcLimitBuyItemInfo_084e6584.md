# ~Inter_NpcLimitBuyItemInfo

`_ZN25Inter_NpcLimitBuyItemInfoD0Ev`

`Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo()`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfo` | `0x084e6584` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6584  _ZN25Inter_NpcLimitBuyItemInfoD0Ev
#           Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo()
# range [0x084e6584, 0x084e65a1]
084e6584 +0x00:  push   %ebp
084e6585 +0x01:  mov    %esp,%ebp
084e6587 +0x03:  sub    $0x18,%esp
084e658a +0x06:  mov    0x8(%ebp),%eax
084e658d +0x09:  mov    %eax,(%esp)
084e6590 +0x0c:  call   084e6554 <_ZN25Inter_NpcLimitBuyItemInfoD1Ev>  ; Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo()
084e6595 +0x11:  mov    0x8(%ebp),%eax
084e6598 +0x14:  mov    %eax,(%esp)
084e659b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084e65a0 +0x1c:  leave
084e65a1 +0x1d:  ret
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo @ 0x84e6584

/* Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo() */

void __thiscall
Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo(Inter_NpcLimitBuyItemInfo *this)

{
  ~Inter_NpcLimitBuyItemInfo(this);
  operator_delete(this);
  return;
}
```
