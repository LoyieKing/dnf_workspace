# ~AdvanceAltarShopParameter

`_ZN12advancealtar25AdvanceAltarShopParameterD1Ev`

`advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter()`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarShopParameter` | `0x088a0fa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a0fa2  _ZN12advancealtar25AdvanceAltarShopParameterD1Ev
#           advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter()
# range [0x088a0fa2, 0x088a0fe7]
088a0fa2 +0x00:  push   %ebp
088a0fa3 +0x01:  mov    %esp,%ebp
088a0fa5 +0x03:  push   %esi
088a0fa6 +0x04:  push   %ebx
088a0fa7 +0x05:  sub    $0x10,%esp
088a0faa +0x08:  mov    0x8(%ebp),%eax
088a0fad +0x0b:  add    $0x18,%eax
088a0fb0 +0x0e:  mov    %eax,(%esp)
088a0fb3 +0x11:  call   088a3798 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x2b6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x2b6
088a0fb8 +0x16:  jmp    088a0fd5 <+0x33>
088a0fba +0x18:  mov    %edx,%ebx
088a0fbc +0x1a:  mov    %eax,%esi
088a0fbe +0x1c:  mov    0x8(%ebp),%eax
088a0fc1 +0x1f:  mov    %eax,(%esp)
088a0fc4 +0x22:  call   088a3784 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x2a2>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x2a2
088a0fc9 +0x27:  mov    %esi,%eax
088a0fcb +0x29:  mov    %ebx,%edx
088a0fcd +0x2b:  mov    %eax,(%esp)
088a0fd0 +0x2e:  call   08ae3750 <_Unwind_Resume>
088a0fd5 +0x33:  mov    0x8(%ebp),%eax
088a0fd8 +0x36:  mov    %eax,(%esp)
088a0fdb +0x39:  call   088a3784 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x2a2>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x2a2
088a0fe0 +0x3e:  add    $0x10,%esp
088a0fe3 +0x41:  pop    %ebx
088a0fe4 +0x42:  pop    %esi
088a0fe5 +0x43:  pop    %ebp
088a0fe6 +0x44:  ret
088a0fe7 +0x45:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter @ 0x88a0fa2

/* advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter() */

void __thiscall
advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter(AdvanceAltarShopParameter *this)

{
                    /* try { // try from 088a0fb3 to 088a0fb7 has its CatchHandler @ 088a0fba */
  std::
  map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
  ::~map((map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
          *)(this + 0x18));
  std::
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  ::~map((map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
          *)this);
  return;
}
```
