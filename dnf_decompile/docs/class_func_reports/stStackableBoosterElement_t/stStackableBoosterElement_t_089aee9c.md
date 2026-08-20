# stStackableBoosterElement_t

`_ZN27stStackableBoosterElement_tC1Ev`

`stStackableBoosterElement_t::stStackableBoosterElement_t()`

| 类 | 地址 |
|---|---|
| `stStackableBoosterElement_t` | `0x089aee9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089aee9c  _ZN27stStackableBoosterElement_tC1Ev
#           stStackableBoosterElement_t::stStackableBoosterElement_t()
# range [0x089aee9c, 0x089aeeb1]
089aee9c +0x00:  push   %ebp
089aee9d +0x01:  mov    %esp,%ebp
089aee9f +0x03:  sub    $0x18,%esp
089aeea2 +0x06:  mov    0x8(%ebp),%eax
089aeea5 +0x09:  add    $0xc,%eax
089aeea8 +0x0c:  mov    %eax,(%esp)
089aeeab +0x0f:  call   08111aa8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfba>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfba
089aeeb0 +0x14:  leave
089aeeb1 +0x15:  ret
```

## 反编译 C

```c
// stStackableBoosterElement_t::stStackableBoosterElement_t @ 0x89aee9c

/* stStackableBoosterElement_t::stStackableBoosterElement_t() */

void __thiscall
stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t *this)

{
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc));
  return;
}
```
