# ~stStackableBoosterElement_t

`_ZN27stStackableBoosterElement_tD1Ev`

`stStackableBoosterElement_t::~stStackableBoosterElement_t()`

| 类 | 地址 |
|---|---|
| `stStackableBoosterElement_t` | `0x08513930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513930  _ZN27stStackableBoosterElement_tD1Ev
#           stStackableBoosterElement_t::~stStackableBoosterElement_t()
# range [0x08513930, 0x08513945]
08513930 +0x00:  push   %ebp
08513931 +0x01:  mov    %esp,%ebp
08513933 +0x03:  sub    $0x18,%esp
08513936 +0x06:  mov    0x8(%ebp),%eax
08513939 +0x09:  add    $0xc,%eax
0851393c +0x0c:  mov    %eax,(%esp)
0851393f +0x0f:  call   08111abc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xfce>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xfce
08513944 +0x14:  leave
08513945 +0x15:  ret
```

## 反编译 C

```c
// stStackableBoosterElement_t::~stStackableBoosterElement_t @ 0x8513930

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
