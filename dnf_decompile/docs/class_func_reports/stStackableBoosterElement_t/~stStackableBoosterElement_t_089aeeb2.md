# ~stStackableBoosterElement_t

`_ZN27stStackableBoosterElement_tD1Ev`

`stStackableBoosterElement_t::~stStackableBoosterElement_t()`

| 类 | 地址 |
|---|---|
| `stStackableBoosterElement_t` | `0x089aeeb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089aeeb2  _ZN27stStackableBoosterElement_tD1Ev
#           stStackableBoosterElement_t::~stStackableBoosterElement_t()
# range [0x089aeeb2, 0x089aeec7]
089aeeb2 +0x00:  push   %ebp
089aeeb3 +0x01:  mov    %esp,%ebp
089aeeb5 +0x03:  sub    $0x18,%esp
089aeeb8 +0x06:  mov    0x8(%ebp),%eax
089aeebb +0x09:  add    $0xc,%eax
089aeebe +0x0c:  mov    %eax,(%esp)
089aeec1 +0x0f:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
089aeec6 +0x14:  leave
089aeec7 +0x15:  ret
```

## 反编译 C

```c
// stStackableBoosterElement_t::~stStackableBoosterElement_t @ 0x89aeeb2

/* stStackableBoosterElement_t::~stStackableBoosterElement_t() */

void __thiscall
stStackableBoosterElement_t::~stStackableBoosterElement_t(stStackableBoosterElement_t *this)

{
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc));
  return;
}
```
