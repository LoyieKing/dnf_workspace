# ~RefPvpGrade

`_ZN11RefPvpGradeD1Ev`

`RefPvpGrade::~RefPvpGrade()`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d470a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d470a  _ZN11RefPvpGradeD1Ev
#           RefPvpGrade::~RefPvpGrade()
# range [0x085d470a, 0x085d4721]
085d470a +0x00:  push   %ebp
085d470b +0x01:  mov    %esp,%ebp
085d470d +0x03:  sub    $0x18,%esp
085d4710 +0x06:  mov    0x8(%ebp),%eax
085d4713 +0x09:  add    $0x140,%eax
085d4718 +0x0e:  mov    %eax,(%esp)
085d471b +0x11:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085d4720 +0x16:  leave
085d4721 +0x17:  ret
```

## 反编译 C

```c
// RefPvpGrade::~RefPvpGrade @ 0x85d470a

/* RefPvpGrade::~RefPvpGrade() */

void __thiscall RefPvpGrade::~RefPvpGrade(RefPvpGrade *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x140));
  return;
}
```
