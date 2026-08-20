# ~ProcStage

`_ZN12advancealtar9ProcStageD1Ev`

`advancealtar::ProcStage::~ProcStage()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812dd26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812dd26  _ZN12advancealtar9ProcStageD1Ev
#           advancealtar::ProcStage::~ProcStage()
# range [0x0812dd26, 0x0812dd99]
0812dd26 +0x00:  push   %ebp
0812dd27 +0x01:  mov    %esp,%ebp
0812dd29 +0x03:  push   %esi
0812dd2a +0x04:  push   %ebx
0812dd2b +0x05:  sub    $0x10,%esp
0812dd2e +0x08:  mov    0x8(%ebp),%eax
0812dd31 +0x0b:  sub    $0xffffff80,%eax
0812dd34 +0x0e:  mov    %eax,(%esp)
0812dd37 +0x11:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0812dd3c +0x16:  jmp    0812dd56 <+0x30>
0812dd3e +0x18:  mov    %edx,%ebx
0812dd40 +0x1a:  mov    %eax,%esi
0812dd42 +0x1c:  mov    0x8(%ebp),%eax
0812dd45 +0x1f:  add    $0x50,%eax
0812dd48 +0x22:  mov    %eax,(%esp)
0812dd4b +0x25:  call   081349c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5c9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5c9
0812dd50 +0x2a:  mov    %esi,%eax
0812dd52 +0x2c:  mov    %ebx,%edx
0812dd54 +0x2e:  jmp    0812dd66 <+0x40>
0812dd56 +0x30:  mov    0x8(%ebp),%eax
0812dd59 +0x33:  add    $0x50,%eax
0812dd5c +0x36:  mov    %eax,(%esp)
0812dd5f +0x39:  call   081349c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5c9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5c9
0812dd64 +0x3e:  jmp    0812dd84 <+0x5e>
0812dd66 +0x40:  mov    %edx,%ebx
0812dd68 +0x42:  mov    %eax,%esi
0812dd6a +0x44:  mov    0x8(%ebp),%eax
0812dd6d +0x47:  add    $0x18,%eax
0812dd70 +0x4a:  mov    %eax,(%esp)
0812dd73 +0x4d:  call   0812d3f0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev>  ; advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs()
0812dd78 +0x52:  mov    %esi,%eax
0812dd7a +0x54:  mov    %ebx,%edx
0812dd7c +0x56:  mov    %eax,(%esp)
0812dd7f +0x59:  call   08ae3750 <_Unwind_Resume>
0812dd84 +0x5e:  mov    0x8(%ebp),%eax
0812dd87 +0x61:  add    $0x18,%eax
0812dd8a +0x64:  mov    %eax,(%esp)
0812dd8d +0x67:  call   0812d3f0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev>  ; advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs()
0812dd92 +0x6c:  add    $0x10,%esp
0812dd95 +0x6f:  pop    %ebx
0812dd96 +0x70:  pop    %esi
0812dd97 +0x71:  pop    %ebp
0812dd98 +0x72:  ret
0812dd99 +0x73:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::~ProcStage @ 0x812dd26

/* advancealtar::ProcStage::~ProcStage() */

void __thiscall advancealtar::ProcStage::~ProcStage(ProcStage *this)

{
                    /* try { // try from 0812dd37 to 0812dd3b has its CatchHandler @ 0812dd3e */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x80));
                    /* try { // try from 0812dd5f to 0812dd63 has its CatchHandler @ 0812dd66 */
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::~map((map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
          *)(this + 0x50));
  ProcSummonObjectMs::~ProcSummonObjectMs((ProcSummonObjectMs *)(this + 0x18));
  return;
}
```
