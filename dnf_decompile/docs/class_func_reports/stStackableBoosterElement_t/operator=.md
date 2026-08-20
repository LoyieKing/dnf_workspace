# operator=

`_ZN27stStackableBoosterElement_taSERKS_`

`stStackableBoosterElement_t::operator=(stStackableBoosterElement_t const&)`

| 类 | 地址 |
|---|---|
| `stStackableBoosterElement_t` | `0x08513946` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513946  _ZN27stStackableBoosterElement_taSERKS_
#           stStackableBoosterElement_t::operator=(stStackableBoosterElement_t const&)
# range [0x08513946, 0x0851398a]
08513946 +0x00:  push   %ebp
08513947 +0x01:  mov    %esp,%ebp
08513949 +0x03:  sub    $0x18,%esp
0851394c +0x06:  mov    0xc(%ebp),%eax
0851394f +0x09:  mov    (%eax),%edx
08513951 +0x0b:  mov    0x8(%ebp),%eax
08513954 +0x0e:  mov    %edx,(%eax)
08513956 +0x10:  mov    0xc(%ebp),%eax
08513959 +0x13:  mov    0x4(%eax),%edx
0851395c +0x16:  mov    0x8(%ebp),%eax
0851395f +0x19:  mov    %edx,0x4(%eax)
08513962 +0x1c:  mov    0xc(%ebp),%eax
08513965 +0x1f:  mov    0x8(%eax),%edx
08513968 +0x22:  mov    0x8(%ebp),%eax
0851396b +0x25:  mov    %edx,0x8(%eax)
0851396e +0x28:  mov    0xc(%ebp),%eax
08513971 +0x2b:  lea    0xc(%eax),%edx
08513974 +0x2e:  mov    0x8(%ebp),%eax
08513977 +0x31:  add    $0xc,%eax
0851397a +0x34:  mov    %edx,0x4(%esp)
0851397e +0x38:  mov    %eax,(%esp)
08513981 +0x3b:  call   08526758 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+&_ZL14gUnicodeBuffer+0x8861>  ; global constructors keyed to CItem::GetNeedMaterial() const+&_ZL14gUnicodeBuffer+0x8861
08513986 +0x40:  mov    0x8(%ebp),%eax
08513989 +0x43:  leave
0851398a +0x44:  ret
```

## 反编译 C

```c
// stStackableBoosterElement_t::operator= @ 0x8513946

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
