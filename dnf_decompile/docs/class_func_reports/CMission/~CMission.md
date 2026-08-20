# ~CMission

`_ZN8CMissionD1Ev`

`CMission::~CMission()`

| 类 | 地址 |
|---|---|
| `CMission` | `0x085e1a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085e1a6a  _ZN8CMissionD1Ev
#           CMission::~CMission()
# range [0x085e1a6a, 0x085e1a9d]
085e1a6a +0x00:  push   %ebp
085e1a6b +0x01:  mov    %esp,%ebp
085e1a6d +0x03:  sub    $0x18,%esp
085e1a70 +0x06:  mov    0x8(%ebp),%eax
085e1a73 +0x09:  movl   $&_ZTV8CMission+0x8,(%eax)
085e1a79 +0x0f:  mov    0x8(%ebp),%eax
085e1a7c +0x12:  add    $0x30,%eax
085e1a7f +0x15:  mov    %eax,(%esp)
085e1a82 +0x18:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
085e1a87 +0x1d:  mov    $0x0,%eax
085e1a8c +0x22:  test   %al,%al
085e1a8e +0x24:  je     085e1a9b <+0x31>
085e1a90 +0x26:  mov    0x8(%ebp),%eax
085e1a93 +0x29:  mov    %eax,(%esp)
085e1a96 +0x2c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085e1a9b +0x31:  leave
085e1a9c +0x32:  ret
085e1a9d +0x33:  nop
```

## 反编译 C

```c
// CMission::~CMission @ 0x85e1a6a

/* WARNING: Removing unreachable block (ram,0x085e1a90) */
/* CMission::~CMission() */

void __thiscall CMission::~CMission(CMission *this)

{
  *(undefined ***)this = &PTR__makeTotalMissionInfo_08cc4048;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x30));
  return;
}
```
