# AdvanceAltarShopParameter

`_ZN12advancealtar25AdvanceAltarShopParameterC1Ev`

`advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarShopParameter` | `0x088a0f5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a0f5c  _ZN12advancealtar25AdvanceAltarShopParameterC1Ev
#           advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()
# range [0x088a0f5c, 0x088a0fa1]
088a0f5c +0x00:  push   %ebp
088a0f5d +0x01:  mov    %esp,%ebp
088a0f5f +0x03:  push   %esi
088a0f60 +0x04:  push   %ebx
088a0f61 +0x05:  sub    $0x10,%esp
088a0f64 +0x08:  mov    0x8(%ebp),%eax
088a0f67 +0x0b:  mov    %eax,(%esp)
088a0f6a +0x0e:  call   088a3a78 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x596>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x596
088a0f6f +0x13:  mov    0x8(%ebp),%eax
088a0f72 +0x16:  add    $0x18,%eax
088a0f75 +0x19:  mov    %eax,(%esp)
088a0f78 +0x1c:  call   088a3af2 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x610>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x610
088a0f7d +0x21:  jmp    088a0f9a <+0x3e>
088a0f7f +0x23:  mov    %edx,%ebx
088a0f81 +0x25:  mov    %eax,%esi
088a0f83 +0x27:  mov    0x8(%ebp),%eax
088a0f86 +0x2a:  mov    %eax,(%esp)
088a0f89 +0x2d:  call   088a3784 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x2a2>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x2a2
088a0f8e +0x32:  mov    %esi,%eax
088a0f90 +0x34:  mov    %ebx,%edx
088a0f92 +0x36:  mov    %eax,(%esp)
088a0f95 +0x39:  call   08ae3750 <_Unwind_Resume>
088a0f9a +0x3e:  add    $0x10,%esp
088a0f9d +0x41:  pop    %ebx
088a0f9e +0x42:  pop    %esi
088a0f9f +0x43:  pop    %ebp
088a0fa0 +0x44:  ret
088a0fa1 +0x45:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter @ 0x88a0f5c

/* advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter() */

void __thiscall
advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter(AdvanceAltarShopParameter *this)

{
  std::
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  ::map((map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
         *)this);
                    /* try { // try from 088a0f78 to 088a0f7c has its CatchHandler @ 088a0f7f */
  std::
  map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
  ::map((map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
         *)(this + 0x18));
  return;
}
```
