# _M_replace_category

`_ZNSt6locale5_Impl19_M_replace_categoryEPKS0_PKPKNS_2idE`

`std::locale::_Impl::_M_replace_category(std::locale::_Impl const*, std::locale::id const* const*)`

| 类 | 地址 |
|---|---|
| `std::locale::_Impl` | `0x086db8d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086db8d0  _ZNSt6locale5_Impl19_M_replace_categoryEPKS0_PKPKNS_2idE
#           std::locale::_Impl::_M_replace_category(std::locale::_Impl const*, std::locale::id const* const*)
# range [0x086db8d0, 0x086db90f]
086db8d0 +0x00:  push   %ebp
086db8d1 +0x01:  mov    %esp,%ebp
086db8d3 +0x03:  push   %edi
086db8d4 +0x04:  push   %esi
086db8d5 +0x05:  push   %ebx
086db8d6 +0x06:  sub    $0x1c,%esp
086db8d9 +0x09:  mov    0x10(%ebp),%ebx
086db8dc +0x0c:  mov    0x8(%ebp),%edi
086db8df +0x0f:  mov    0xc(%ebp),%esi
086db8e2 +0x12:  mov    (%ebx),%eax
086db8e4 +0x14:  test   %eax,%eax
086db8e6 +0x16:  je     086db901 <+0x31>
086db8e8 +0x18:  add    $0x4,%ebx
086db8eb +0x1b:  mov    %eax,0x8(%esp)
086db8ef +0x1f:  mov    %esi,0x4(%esp)
086db8f3 +0x23:  mov    %edi,(%esp)
086db8f6 +0x26:  call   086db870 <_ZNSt6locale5_Impl16_M_replace_facetEPKS0_PKNS_2idE>  ; std::locale::_Impl::_M_replace_facet(std::locale::_Impl const*, std::locale::id const*)
086db8fb +0x2b:  mov    (%ebx),%eax
086db8fd +0x2d:  test   %eax,%eax
086db8ff +0x2f:  jne    086db8e8 <+0x18>
086db901 +0x31:  add    $0x1c,%esp
086db904 +0x34:  pop    %ebx
086db905 +0x35:  pop    %esi
086db906 +0x36:  pop    %edi
086db907 +0x37:  pop    %ebp
086db908 +0x38:  ret
086db909 +0x39:  nop
086db90a +0x3a:  nop
086db90b +0x3b:  nop
086db90c +0x3c:  nop
086db90d +0x3d:  nop
086db90e +0x3e:  nop
086db90f +0x3f:  nop
```

## 反编译 C

```c
// std::locale::_Impl::_M_replace_category @ 0x86db8d0

/* std::locale::_Impl::_M_replace_category(std::locale::_Impl const*, std::locale::id const* const*)
    */

void __thiscall std::locale::_Impl::_M_replace_category(_Impl *this,_Impl *param_1,id **param_2)

{
  id *piVar1;
  
  piVar1 = *param_2;
  while (piVar1 != (id *)0x0) {
    param_2 = param_2 + 1;
    _M_replace_facet(this,param_1,piVar1);
    piVar1 = *param_2;
  }
  return;
}
```
