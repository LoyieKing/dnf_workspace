# stStackableBoosterElement_t

`_ZN27stStackableBoosterElement_tC1ERKS_`

`stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t const&)`

| 类 | 地址 |
|---|---|
| `stStackableBoosterElement_t` | `0x085138ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085138ee  _ZN27stStackableBoosterElement_tC1ERKS_
#           stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t const&)
# range [0x085138ee, 0x0851392f]
085138ee +0x00:  push   %ebp
085138ef +0x01:  mov    %esp,%ebp
085138f1 +0x03:  sub    $0x18,%esp
085138f4 +0x06:  mov    0xc(%ebp),%eax
085138f7 +0x09:  mov    (%eax),%edx
085138f9 +0x0b:  mov    0x8(%ebp),%eax
085138fc +0x0e:  mov    %edx,(%eax)
085138fe +0x10:  mov    0xc(%ebp),%eax
08513901 +0x13:  mov    0x4(%eax),%edx
08513904 +0x16:  mov    0x8(%ebp),%eax
08513907 +0x19:  mov    %edx,0x4(%eax)
0851390a +0x1c:  mov    0xc(%ebp),%eax
0851390d +0x1f:  mov    0x8(%eax),%edx
08513910 +0x22:  mov    0x8(%ebp),%eax
08513913 +0x25:  mov    %edx,0x8(%eax)
08513916 +0x28:  mov    0xc(%ebp),%eax
08513919 +0x2b:  lea    0xc(%eax),%edx
0851391c +0x2e:  mov    0x8(%ebp),%eax
0851391f +0x31:  add    $0xc,%eax
08513922 +0x34:  mov    %edx,0x4(%esp)
08513926 +0x38:  mov    %eax,(%esp)
08513929 +0x3b:  call   085244b6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+&_ZL14gUnicodeBuffer+0x65bf>  ; global constructors keyed to CItem::GetNeedMaterial() const+&_ZL14gUnicodeBuffer+0x65bf
0851392e +0x40:  leave
0851392f +0x41:  ret
```

## 反编译 C

```c
// stStackableBoosterElement_t::stStackableBoosterElement_t @ 0x85138ee

/* stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t const&) */

void __thiscall
stStackableBoosterElement_t::stStackableBoosterElement_t
          (stStackableBoosterElement_t *this,stStackableBoosterElement_t *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc),(vector *)(param_1 + 0xc));
  return;
}
```
