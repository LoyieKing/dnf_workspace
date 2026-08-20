# isEndSummon

`_ZNK12advancealtar9ProcStage18ProcSummonObjectMs11isEndSummonEv`

`advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon() const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d50a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d50a  _ZNK12advancealtar9ProcStage18ProcSummonObjectMs11isEndSummonEv
#           advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon() const
# range [0x0812d50a, 0x0812d53f]
0812d50a +0x00:  push   %ebp
0812d50b +0x01:  mov    %esp,%ebp
0812d50d +0x03:  push   %ebx
0812d50e +0x04:  sub    $0x14,%esp
0812d511 +0x07:  mov    0x8(%ebp),%eax
0812d514 +0x0a:  mov    (%eax),%ebx
0812d516 +0x0c:  mov    0x8(%ebp),%eax
0812d519 +0x0f:  add    $0x4,%eax
0812d51c +0x12:  mov    %eax,(%esp)
0812d51f +0x15:  call   08135152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd59
0812d524 +0x1a:  cmp    %eax,%ebx
0812d526 +0x1c:  setae  %al
0812d529 +0x1f:  test   %al,%al
0812d52b +0x21:  je     0812d534 <+0x2a>
0812d52d +0x23:  mov    $0x1,%eax
0812d532 +0x28:  jmp    0812d539 <+0x2f>
0812d534 +0x2a:  mov    $0x0,%eax
0812d539 +0x2f:  add    $0x14,%esp
0812d53c +0x32:  pop    %ebx
0812d53d +0x33:  pop    %ebp
0812d53e +0x34:  ret
0812d53f +0x35:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon @ 0x812d50a

/* advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon() const */

bool __thiscall advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon(ProcSummonObjectMs *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)this;
  uVar2 = std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
          ::size((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                  *)(this + 4));
  return uVar2 <= uVar1;
}
```
