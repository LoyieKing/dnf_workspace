# ~Inter_NpcLimitBuyItemInfo

`_ZN25Inter_NpcLimitBuyItemInfoD1Ev`

`Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo()`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfo` | `0x084e6554` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e6554  _ZN25Inter_NpcLimitBuyItemInfoD1Ev
#           Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo()
# range [0x084e6554, 0x084e6583]
084e6554 +0x00:  push   %ebp
084e6555 +0x01:  mov    %esp,%ebp
084e6557 +0x03:  sub    $0x18,%esp
084e655a +0x06:  mov    0x8(%ebp),%eax
084e655d +0x09:  movl   $&_ZTV25Inter_NpcLimitBuyItemInfo+0x8,(%eax)
084e6563 +0x0f:  mov    0x8(%ebp),%eax
084e6566 +0x12:  mov    %eax,(%esp)
084e6569 +0x15:  call   080e23bc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x162>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x162
084e656e +0x1a:  mov    $0x0,%eax
084e6573 +0x1f:  test   %al,%al
084e6575 +0x21:  je     084e6582 <+0x2e>
084e6577 +0x23:  mov    0x8(%ebp),%eax
084e657a +0x26:  mov    %eax,(%esp)
084e657d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084e6582 +0x2e:  leave
084e6583 +0x2f:  ret
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo @ 0x84e6554

/* WARNING: Removing unreachable block (ram,0x084e6577) */
/* Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo() */

void __thiscall
Inter_NpcLimitBuyItemInfo::~Inter_NpcLimitBuyItemInfo(Inter_NpcLimitBuyItemInfo *this)

{
  *(undefined ***)this = &PTR_dispatch_sig_08c8e528;
  ISigDispatcher::~ISigDispatcher((ISigDispatcher *)this);
  return;
}
```
