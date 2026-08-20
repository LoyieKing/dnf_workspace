# ProcStage

`_ZN12advancealtar9ProcStageC1ERNS_10CharacDataE`

`advancealtar::ProcStage::ProcStage(advancealtar::CharacData&)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812dc18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812dc18  _ZN12advancealtar9ProcStageC1ERNS_10CharacDataE
#           advancealtar::ProcStage::ProcStage(advancealtar::CharacData&)
# range [0x0812dc18, 0x0812dd21]
0812dc18 +0x000:  push   %ebp
0812dc19 +0x001:  mov    %esp,%ebp
0812dc1b +0x003:  push   %esi
0812dc1c +0x004:  push   %ebx
0812dc1d +0x005:  sub    $0x10,%esp
0812dc20 +0x008:  mov    0x8(%ebp),%eax
0812dc23 +0x00b:  mov    0xc(%ebp),%edx
0812dc26 +0x00e:  mov    %edx,(%eax)
0812dc28 +0x010:  mov    0x8(%ebp),%eax
0812dc2b +0x013:  movl   $0x7,0x4(%eax)
0812dc32 +0x01a:  mov    0x8(%ebp),%eax
0812dc35 +0x01d:  movl   $0x0,0x8(%eax)
0812dc3c +0x024:  mov    0x8(%ebp),%eax
0812dc3f +0x027:  movl   $0x0,0xc(%eax)
0812dc46 +0x02e:  mov    0x8(%ebp),%eax
0812dc49 +0x031:  movl   $0x0,0x10(%eax)
0812dc50 +0x038:  mov    0x8(%ebp),%eax
0812dc53 +0x03b:  movw   $0x0,0x14(%eax)
0812dc59 +0x041:  mov    0x8(%ebp),%eax
0812dc5c +0x044:  lea    0x8(%eax),%ecx
0812dc5f +0x047:  mov    0x8(%ebp),%eax
0812dc62 +0x04a:  mov    (%eax),%eax
0812dc64 +0x04c:  mov    0x8(%ebp),%edx
0812dc67 +0x04f:  add    $0x18,%edx
0812dc6a +0x052:  mov    %ecx,0x8(%esp)
0812dc6e +0x056:  mov    %eax,0x4(%esp)
0812dc72 +0x05a:  mov    %edx,(%esp)
0812dc75 +0x05d:  call   0812d378 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsC1ERNS_10CharacDataERKi>  ; advancealtar::ProcStage::ProcSummonObjectMs::ProcSummonObjectMs(advancealtar::CharacData&, int const&)
0812dc7a +0x062:  mov    0x8(%ebp),%eax
0812dc7d +0x065:  add    $0x50,%eax
0812dc80 +0x068:  mov    %eax,(%esp)
0812dc83 +0x06b:  call   0813544e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1055>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1055
0812dc88 +0x070:  mov    0x8(%ebp),%eax
0812dc8b +0x073:  movl   $0xffffffff,0x68(%eax)
0812dc92 +0x07a:  mov    0x8(%ebp),%eax
0812dc95 +0x07d:  movl   $0x0,0x6c(%eax)
0812dc9c +0x084:  mov    0x8(%ebp),%eax
0812dc9f +0x087:  movl   $0x0,0x70(%eax)
0812dca6 +0x08e:  mov    0x8(%ebp),%eax
0812dca9 +0x091:  movl   $0x0,0x74(%eax)
0812dcb0 +0x098:  mov    0x8(%ebp),%eax
0812dcb3 +0x09b:  movb   $0x1,0x78(%eax)
0812dcb7 +0x09f:  mov    0x8(%ebp),%eax
0812dcba +0x0a2:  movl   $0x0,0x7c(%eax)
0812dcc1 +0x0a9:  mov    0x8(%ebp),%eax
0812dcc4 +0x0ac:  sub    $0xffffff80,%eax
0812dcc7 +0x0af:  mov    %eax,(%esp)
0812dcca +0x0b2:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0812dccf +0x0b7:  mov    0x8(%ebp),%eax
0812dcd2 +0x0ba:  movl   $0x0,0x8c(%eax)
0812dcdc +0x0c4:  mov    0x8(%ebp),%eax
0812dcdf +0x0c7:  movl   $0x0,0x90(%eax)
0812dce9 +0x0d1:  add    $0x10,%esp
0812dcec +0x0d4:  pop    %ebx
0812dced +0x0d5:  pop    %esi
0812dcee +0x0d6:  pop    %ebp
0812dcef +0x0d7:  ret
0812dcf0 +0x0d8:  mov    %edx,%ebx
0812dcf2 +0x0da:  mov    %eax,%esi
0812dcf4 +0x0dc:  mov    0x8(%ebp),%eax
0812dcf7 +0x0df:  add    $0x50,%eax
0812dcfa +0x0e2:  mov    %eax,(%esp)
0812dcfd +0x0e5:  call   081349c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5c9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5c9
0812dd02 +0x0ea:  mov    %esi,%eax
0812dd04 +0x0ec:  mov    %ebx,%edx
0812dd06 +0x0ee:  jmp    0812dd08 <+0xf0>
0812dd08 +0x0f0:  mov    %edx,%ebx
0812dd0a +0x0f2:  mov    %eax,%esi
0812dd0c +0x0f4:  mov    0x8(%ebp),%eax
0812dd0f +0x0f7:  add    $0x18,%eax
0812dd12 +0x0fa:  mov    %eax,(%esp)
0812dd15 +0x0fd:  call   0812d3f0 <_ZN12advancealtar9ProcStage18ProcSummonObjectMsD1Ev>  ; advancealtar::ProcStage::ProcSummonObjectMs::~ProcSummonObjectMs()
0812dd1a +0x102:  mov    %esi,%eax
0812dd1c +0x104:  mov    %ebx,%edx
0812dd1e +0x106:  mov    %eax,(%esp)
0812dd21 +0x109:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcStage @ 0x812dc18

/* advancealtar::ProcStage::ProcStage(advancealtar::CharacData&) */

void __thiscall advancealtar::ProcStage::ProcStage(ProcStage *this,CharacData *param_1)

{
  *(CharacData **)this = param_1;
  *(undefined4 *)(this + 4) = 7;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  ProcSummonObjectMs::ProcSummonObjectMs
            ((ProcSummonObjectMs *)(this + 0x18),*(CharacData **)this,(int *)(this + 8));
                    /* try { // try from 0812dc83 to 0812dc87 has its CatchHandler @ 0812dd08 */
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::map((map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
         *)(this + 0x50));
  *(undefined4 *)(this + 0x68) = 0xffffffff;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (ProcStage)0x1;
  *(undefined4 *)(this + 0x7c) = 0;
                    /* try { // try from 0812dcca to 0812dcce has its CatchHandler @ 0812dcf0 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x80));
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}
```
