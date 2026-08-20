# ~CLevelRewardTableMgr

`_ZN20CLevelRewardTableMgrD1Ev`

`CLevelRewardTableMgr::~CLevelRewardTableMgr()`

| 类 | 地址 |
|---|---|
| `CLevelRewardTableMgr` | `0x0868777c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868777c  _ZN20CLevelRewardTableMgrD1Ev
#           CLevelRewardTableMgr::~CLevelRewardTableMgr()
# range [0x0868777c, 0x08687791]
0868777c +0x00:  push   %ebp
0868777d +0x01:  mov    %esp,%ebp
0868777f +0x03:  sub    $0x18,%esp
08687782 +0x06:  mov    0x8(%ebp),%eax
08687785 +0x09:  add    $0x8,%eax
08687788 +0x0c:  mov    %eax,(%esp)
0868778b +0x0f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08687790 +0x14:  leave
08687791 +0x15:  ret
```

## 反编译 C

```c
// CLevelRewardTableMgr::~CLevelRewardTableMgr @ 0x868777c

/* CLevelRewardTableMgr::~CLevelRewardTableMgr() */

void __thiscall CLevelRewardTableMgr::~CLevelRewardTableMgr(CLevelRewardTableMgr *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  return;
}
```
