# ~ProcSummonObjectMs

`_ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev`

`advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d3f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d3f0  _ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev
#           advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs()
# range [0x0812d3f0, 0x0812d43b]
0812d3f0 +0x00:  push   %ebp
0812d3f1 +0x01:  mov    %esp,%ebp
0812d3f3 +0x03:  push   %esi
0812d3f4 +0x04:  push   %ebx
0812d3f5 +0x05:  sub    $0x10,%esp
0812d3f8 +0x08:  mov    0x8(%ebp),%eax
0812d3fb +0x0b:  add    $0x10,%eax
0812d3fe +0x0e:  mov    %eax,(%esp)
0812d401 +0x11:  call   081349ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5b5
0812d406 +0x16:  jmp    0812d426 <+0x36>
0812d408 +0x18:  mov    %edx,%ebx
0812d40a +0x1a:  mov    %eax,%esi
0812d40c +0x1c:  mov    0x8(%ebp),%eax
0812d40f +0x1f:  add    $0x4,%eax
0812d412 +0x22:  mov    %eax,(%esp)
0812d415 +0x25:  call   08134f7c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb83>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb83
0812d41a +0x2a:  mov    %esi,%eax
0812d41c +0x2c:  mov    %ebx,%edx
0812d41e +0x2e:  mov    %eax,(%esp)
0812d421 +0x31:  call   08ae3750 <_Unwind_Resume>
0812d426 +0x36:  mov    0x8(%ebp),%eax
0812d429 +0x39:  add    $0x4,%eax
0812d42c +0x3c:  mov    %eax,(%esp)
0812d42f +0x3f:  call   08134f7c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb83>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb83
0812d434 +0x44:  add    $0x10,%esp
0812d437 +0x47:  pop    %ebx
0812d438 +0x48:  pop    %esi
0812d439 +0x49:  pop    %ebp
0812d43a +0x4a:  ret
0812d43b +0x4b:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs @ 0x812d3f0

/* advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs() */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs(ProcSummonObjectMs *this)

{
                    /* try { // try from 0812d401 to 0812d405 has its CatchHandler @ 0812d408 */
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::~map((map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
          *)(this + 0x10));
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
  ~vector((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>> *)
          (this + 4));
  return;
}
```
