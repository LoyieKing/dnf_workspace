# _M_replace_facet

`_ZNSt6locale5_Impl16_M_replace_facetEPKS0_PKNS_2idE`

`std::locale::_Impl::_M_replace_facet(std::locale::_Impl const*, std::locale::id const*)`

| 类 | 地址 |
|---|---|
| `std::locale::_Impl` | `0x086db870` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086db870  _ZNSt6locale5_Impl16_M_replace_facetEPKS0_PKNS_2idE
#           std::locale::_Impl::_M_replace_facet(std::locale::_Impl const*, std::locale::id const*)
# range [0x086db870, 0x086db8cf]
086db870 +0x00:  push   %ebp
086db871 +0x01:  mov    %esp,%ebp
086db873 +0x03:  sub    $0x28,%esp
086db876 +0x06:  mov    %ebx,-0xc(%ebp)
086db879 +0x09:  mov    0x10(%ebp),%ebx
086db87c +0x0c:  mov    %esi,-0x8(%ebp)
086db87f +0x0f:  mov    0xc(%ebp),%esi
086db882 +0x12:  mov    %edi,-0x4(%ebp)
086db885 +0x15:  mov    0x8(%ebp),%edi
086db888 +0x18:  mov    %ebx,(%esp)
086db88b +0x1b:  call   086dadb0 <_ZNKSt6locale2id5_M_idEv>  ; std::locale::id::_M_id() const
086db890 +0x20:  mov    0x8(%esi),%edx
086db893 +0x23:  sub    $0x1,%edx
086db896 +0x26:  cmp    %edx,%eax
086db898 +0x28:  ja     086db8be <+0x4e>
086db89a +0x2a:  mov    0x4(%esi),%edx
086db89d +0x2d:  mov    (%edx,%eax,4),%eax
086db8a0 +0x30:  test   %eax,%eax
086db8a2 +0x32:  je     086db8be <+0x4e>
086db8a4 +0x34:  mov    %ebx,0xc(%ebp)
086db8a7 +0x37:  mov    -0x8(%ebp),%esi
086db8aa +0x3a:  mov    %edi,0x8(%ebp)
086db8ad +0x3d:  mov    -0xc(%ebp),%ebx
086db8b0 +0x40:  mov    %eax,0x10(%ebp)
086db8b3 +0x43:  mov    -0x4(%ebp),%edi
086db8b6 +0x46:  mov    %ebp,%esp
086db8b8 +0x48:  pop    %ebp
086db8b9 +0x49:  jmp    086db600 <_ZNSt6locale5_Impl16_M_install_facetEPKNS_2idEPKNS_5facetE>  ; std::locale::_Impl::_M_install_facet(std::locale::id const*, std::locale::facet const*)
086db8be +0x4e:  movl   $"locale::_Impl::_M_replace_facet",(%esp)
086db8c5 +0x55:  call   086d9aa0 <_ZSt21__throw_runtime_errorPKc>  ; std::__throw_runtime_error(char const*)
086db8ca +0x5a:  nop
086db8cb +0x5b:  nop
086db8cc +0x5c:  nop
086db8cd +0x5d:  nop
086db8ce +0x5e:  nop
086db8cf +0x5f:  nop
```

## 反编译 C

```c
// std::locale::_Impl::_M_replace_facet @ 0x86db870

/* std::locale::_Impl::_M_replace_facet(std::locale::_Impl const*, std::locale::id const*) */

void __thiscall std::locale::_Impl::_M_replace_facet(_Impl *this,_Impl *param_1,id *param_2)

{
  uint uVar1;
  
  uVar1 = locale::id::_M_id(param_2);
  if ((uVar1 <= param_1->_M_facets_size - 1) && (param_1->_M_facets[uVar1] != (facet *)0x0)) {
    _M_install_facet(this,param_2,param_1->_M_facets[uVar1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_runtime_error("locale::_Impl::_M_replace_facet");
}
```
