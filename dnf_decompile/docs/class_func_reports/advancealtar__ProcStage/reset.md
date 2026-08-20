# reset

`_ZN12advancealtar9ProcStage5resetENS_9StageType1TE`

`advancealtar::ProcStage::reset(advancealtar::StageType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812dde0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812dde0  _ZN12advancealtar9ProcStage5resetENS_9StageType1TE
#           advancealtar::ProcStage::reset(advancealtar::StageType::T)
# range [0x0812dde0, 0x0812de6f]
0812dde0 +0x00:  push   %ebp
0812dde1 +0x01:  mov    %esp,%ebp
0812dde3 +0x03:  sub    $0x18,%esp
0812dde6 +0x06:  mov    0x8(%ebp),%eax
0812dde9 +0x09:  movl   $0x0,0x8(%eax)
0812ddf0 +0x10:  mov    0x8(%ebp),%eax
0812ddf3 +0x13:  movl   $0x0,0xc(%eax)
0812ddfa +0x1a:  mov    0x8(%ebp),%eax
0812ddfd +0x1d:  movl   $0x0,0x10(%eax)
0812de04 +0x24:  mov    0x8(%ebp),%eax
0812de07 +0x27:  movl   $0xffffffff,0x68(%eax)
0812de0e +0x2e:  mov    0x8(%ebp),%eax
0812de11 +0x31:  movl   $0x0,0x74(%eax)
0812de18 +0x38:  mov    0x8(%ebp),%eax
0812de1b +0x3b:  add    $0x18,%eax
0812de1e +0x3e:  mov    %eax,(%esp)
0812de21 +0x41:  call   0812d43c <_ZN12advancealtar9ProcStage18ProcSummonObjectMs5resetEv>  ; advancealtar::ProcStage::ProcSummonObjectMs::reset()
0812de26 +0x46:  mov    0xc(%ebp),%eax
0812de29 +0x49:  cmp    $0x1,%eax
0812de2c +0x4c:  je     0812de6e <+0x8e>
0812de2e +0x4e:  mov    0x8(%ebp),%eax
0812de31 +0x51:  movl   $0x7,0x4(%eax)
0812de38 +0x58:  mov    0x8(%ebp),%eax
0812de3b +0x5b:  movw   $0x0,0x14(%eax)
0812de41 +0x61:  mov    0x8(%ebp),%eax
0812de44 +0x64:  add    $0x50,%eax
0812de47 +0x67:  mov    %eax,(%esp)
0812de4a +0x6a:  call   081354c8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x10cf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x10cf
0812de4f +0x6f:  mov    0x8(%ebp),%eax
0812de52 +0x72:  movb   $0x1,0x78(%eax)
0812de56 +0x76:  mov    0x8(%ebp),%eax
0812de59 +0x79:  movl   $0x0,0x7c(%eax)
0812de60 +0x80:  mov    0x8(%ebp),%eax
0812de63 +0x83:  sub    $0xffffff80,%eax
0812de66 +0x86:  mov    %eax,(%esp)
0812de69 +0x89:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0812de6e +0x8e:  leave
0812de6f +0x8f:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::reset @ 0x812dde0

/* advancealtar::ProcStage::reset(advancealtar::StageType::T) */

void __thiscall advancealtar::ProcStage::reset(ProcStage *this,int param_2)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x74) = 0;
  ProcSummonObjectMs::reset((ProcSummonObjectMs *)(this + 0x18));
  if (param_2 != 1) {
    *(undefined4 *)(this + 4) = 7;
    *(undefined2 *)(this + 0x14) = 0;
    std::
    map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
    ::clear((map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
             *)(this + 0x50));
    this[0x78] = (ProcStage)0x1;
    *(undefined4 *)(this + 0x7c) = 0;
    std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x80));
  }
  return;
}
```
