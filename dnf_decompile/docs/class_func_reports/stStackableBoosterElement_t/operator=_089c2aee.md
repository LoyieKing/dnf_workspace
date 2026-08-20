# operator=

`_ZN27stStackableBoosterElement_taSERKS_`

`stStackableBoosterElement_t::operator=(stStackableBoosterElement_t const&)`

| 类 | 地址 |
|---|---|
| `stStackableBoosterElement_t` | `0x089c2aee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089c2aee  _ZN27stStackableBoosterElement_taSERKS_
#           stStackableBoosterElement_t::operator=(stStackableBoosterElement_t const&)
# range [0x089c2aee, 0x089c2b33]
089c2aee +0x00:  push   %ebp
089c2aef +0x01:  mov    %esp,%ebp
089c2af1 +0x03:  sub    $0x18,%esp
089c2af4 +0x06:  mov    0xc(%ebp),%eax
089c2af7 +0x09:  mov    (%eax),%edx
089c2af9 +0x0b:  mov    0x8(%ebp),%eax
089c2afc +0x0e:  mov    %edx,(%eax)
089c2afe +0x10:  mov    0xc(%ebp),%eax
089c2b01 +0x13:  mov    0x4(%eax),%edx
089c2b04 +0x16:  mov    0x8(%ebp),%eax
089c2b07 +0x19:  mov    %edx,0x4(%eax)
089c2b0a +0x1c:  mov    0xc(%ebp),%eax
089c2b0d +0x1f:  mov    0x8(%eax),%edx
089c2b10 +0x22:  mov    0x8(%ebp),%eax
089c2b13 +0x25:  mov    %edx,0x8(%eax)
089c2b16 +0x28:  mov    0xc(%ebp),%eax
089c2b19 +0x2b:  lea    0xc(%eax),%edx
089c2b1c +0x2e:  mov    0x8(%ebp),%eax
089c2b1f +0x31:  add    $0xc,%eax
089c2b22 +0x34:  mov    %edx,0x4(%esp)
089c2b26 +0x38:  mov    %eax,(%esp)
089c2b29 +0x3b:  call   08526758 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+&_ZL14gUnicodeBuffer+0x8861>  ; global constructors keyed to CItem::GetNeedMaterial() const+&_ZL14gUnicodeBuffer+0x8861
089c2b2e +0x40:  mov    0x8(%ebp),%eax
089c2b31 +0x43:  leave
089c2b32 +0x44:  ret
089c2b33 +0x45:  nop
```

## 反编译 C

```c
// stStackableBoosterElement_t::operator= @ 0x89c2aee

/* stStackableBoosterElement_t::TEMPNAMEPLACEHOLDERVALUE(stStackableBoosterElement_t const&) */

stStackableBoosterElement_t * __thiscall
stStackableBoosterElement_t::operator=
          (stStackableBoosterElement_t *this,stStackableBoosterElement_t *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::operator=
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc),(vector *)(param_1 + 0xc));
  return this;
}
```
