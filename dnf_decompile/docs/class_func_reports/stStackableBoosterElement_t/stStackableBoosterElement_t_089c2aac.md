# stStackableBoosterElement_t

`_ZN27stStackableBoosterElement_tC1ERKS_`

`stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t const&)`

| 类 | 地址 |
|---|---|
| `stStackableBoosterElement_t` | `0x089c2aac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089c2aac  _ZN27stStackableBoosterElement_tC1ERKS_
#           stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t const&)
# range [0x089c2aac, 0x089c2aed]
089c2aac +0x00:  push   %ebp
089c2aad +0x01:  mov    %esp,%ebp
089c2aaf +0x03:  sub    $0x18,%esp
089c2ab2 +0x06:  mov    0xc(%ebp),%eax
089c2ab5 +0x09:  mov    (%eax),%edx
089c2ab7 +0x0b:  mov    0x8(%ebp),%eax
089c2aba +0x0e:  mov    %edx,(%eax)
089c2abc +0x10:  mov    0xc(%ebp),%eax
089c2abf +0x13:  mov    0x4(%eax),%edx
089c2ac2 +0x16:  mov    0x8(%ebp),%eax
089c2ac5 +0x19:  mov    %edx,0x4(%eax)
089c2ac8 +0x1c:  mov    0xc(%ebp),%eax
089c2acb +0x1f:  mov    0x8(%eax),%edx
089c2ace +0x22:  mov    0x8(%ebp),%eax
089c2ad1 +0x25:  mov    %edx,0x8(%eax)
089c2ad4 +0x28:  mov    0xc(%ebp),%eax
089c2ad7 +0x2b:  lea    0xc(%eax),%edx
089c2ada +0x2e:  mov    0x8(%ebp),%eax
089c2add +0x31:  add    $0xc,%eax
089c2ae0 +0x34:  mov    %edx,0x4(%esp)
089c2ae4 +0x38:  mov    %eax,(%esp)
089c2ae7 +0x3b:  call   085244b6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+&_ZL14gUnicodeBuffer+0x65bf>  ; global constructors keyed to CItem::GetNeedMaterial() const+&_ZL14gUnicodeBuffer+0x65bf
089c2aec +0x40:  leave
089c2aed +0x41:  ret
```

## 反编译 C

```c
// stStackableBoosterElement_t::stStackableBoosterElement_t @ 0x89c2aac

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
