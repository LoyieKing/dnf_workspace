# Phase

`_ZN12advancealtar5PhaseC1Ev`

`advancealtar::Phase::Phase()`

| 类 | 地址 |
|---|---|
| `advancealtar::Phase` | `0x08899cb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899cb8  _ZN12advancealtar5PhaseC1Ev
#           advancealtar::Phase::Phase()
# range [0x08899cb8, 0x08899ce1]
08899cb8 +0x00:  push   %ebp
08899cb9 +0x01:  mov    %esp,%ebp
08899cbb +0x03:  sub    $0x18,%esp
08899cbe +0x06:  mov    0x8(%ebp),%eax
08899cc1 +0x09:  movl   $0x0,(%eax)
08899cc7 +0x0f:  mov    0x8(%ebp),%eax
08899cca +0x12:  movl   $0x0,0x4(%eax)
08899cd1 +0x19:  mov    0x8(%ebp),%eax
08899cd4 +0x1c:  add    $0x8,%eax
08899cd7 +0x1f:  mov    %eax,(%esp)
08899cda +0x22:  call   0889bc76 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x33f>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x33f
08899cdf +0x27:  leave
08899ce0 +0x28:  ret
08899ce1 +0x29:  nop
```

## 反编译 C

```c
// advancealtar::Phase::Phase @ 0x8899cb8

/* advancealtar::Phase::Phase() */

void __thiscall advancealtar::Phase::Phase(Phase *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::vector
            ((vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>> *)
             (this + 8));
  return;
}
```
