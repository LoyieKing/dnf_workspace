# ProcSummonObjectMs

`_ZN12advancealtar9ProcStage18ProcSummonObjectMsC1ERNS_10CharacDataERKi`

`advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs(advancealtar::CharacData&, int const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d378` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d378  _ZN12advancealtar9ProcStage18ProcSummonObjectMsC1ERNS_10CharacDataERKi
#           advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs(advancealtar::CharacData&, int const&)
# range [0x0812d378, 0x0812d3eb]
0812d378 +0x00:  push   %ebp
0812d379 +0x01:  mov    %esp,%ebp
0812d37b +0x03:  push   %esi
0812d37c +0x04:  push   %ebx
0812d37d +0x05:  sub    $0x10,%esp
0812d380 +0x08:  mov    0x8(%ebp),%eax
0812d383 +0x0b:  movl   $0x0,(%eax)
0812d389 +0x11:  mov    0x8(%ebp),%eax
0812d38c +0x14:  add    $0x4,%eax
0812d38f +0x17:  mov    %eax,(%esp)
0812d392 +0x1a:  call   08134f68 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb6f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb6f
0812d397 +0x1f:  mov    0x8(%ebp),%eax
0812d39a +0x22:  add    $0x10,%eax
0812d39d +0x25:  mov    %eax,(%esp)
0812d3a0 +0x28:  call   08134fda <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xbe1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xbe1
0812d3a5 +0x2d:  mov    0x8(%ebp),%eax
0812d3a8 +0x30:  movl   $0x0,0x28(%eax)
0812d3af +0x37:  mov    0x8(%ebp),%eax
0812d3b2 +0x3a:  movl   $0x0,0x2c(%eax)
0812d3b9 +0x41:  mov    0x8(%ebp),%eax
0812d3bc +0x44:  mov    0xc(%ebp),%edx
0812d3bf +0x47:  mov    %edx,0x30(%eax)
0812d3c2 +0x4a:  mov    0x8(%ebp),%eax
0812d3c5 +0x4d:  mov    0x10(%ebp),%edx
0812d3c8 +0x50:  mov    %edx,0x34(%eax)
0812d3cb +0x53:  add    $0x10,%esp
0812d3ce +0x56:  pop    %ebx
0812d3cf +0x57:  pop    %esi
0812d3d0 +0x58:  pop    %ebp
0812d3d1 +0x59:  ret
0812d3d2 +0x5a:  mov    %edx,%ebx
0812d3d4 +0x5c:  mov    %eax,%esi
0812d3d6 +0x5e:  mov    0x8(%ebp),%eax
0812d3d9 +0x61:  add    $0x4,%eax
0812d3dc +0x64:  mov    %eax,(%esp)
0812d3df +0x67:  call   08134f7c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb83>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb83
0812d3e4 +0x6c:  mov    %esi,%eax
0812d3e6 +0x6e:  mov    %ebx,%edx
0812d3e8 +0x70:  mov    %eax,(%esp)
0812d3eb +0x73:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs @ 0x812d378

/* advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs(advancealtar::CharacData&, int
   const&) */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs
          (ProcSummonObjectMs *this,CharacData *param_1,int *param_2)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::vector
            ((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              *)(this + 4));
                    /* try { // try from 0812d3a0 to 0812d3a4 has its CatchHandler @ 0812d3d2 */
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::map((map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
         *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(CharacData **)(this + 0x30) = param_1;
  *(int **)(this + 0x34) = param_2;
  return;
}
```
