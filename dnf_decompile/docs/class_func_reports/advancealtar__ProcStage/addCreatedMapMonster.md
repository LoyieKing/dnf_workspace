# addCreatedMapMonster

`_ZN12advancealtar9ProcStage20addCreatedMapMonsterERNS_18_MapMonsterSummaryE`

`advancealtar::ProcStage::addCreatedMapMonster(advancealtar::_MapMonsterSummary&)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812e16e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812e16e  _ZN12advancealtar9ProcStage20addCreatedMapMonsterERNS_18_MapMonsterSummaryE
#           advancealtar::ProcStage::addCreatedMapMonster(advancealtar::_MapMonsterSummary&)
# range [0x0812e16e, 0x0812e1dd]
0812e16e +0x00:  push   %ebp
0812e16f +0x01:  mov    %esp,%ebp
0812e171 +0x03:  sub    $0x48,%esp
0812e174 +0x06:  mov    0x8(%ebp),%eax
0812e177 +0x09:  movzwl 0x14(%eax),%eax
0812e17b +0x0d:  mov    0xc(%ebp),%edx
0812e17e +0x10:  mov    %ax,0x4(%edx)
0812e182 +0x14:  lea    0x1(%eax),%edx
0812e185 +0x17:  mov    0x8(%ebp),%eax
0812e188 +0x1a:  mov    %dx,0x14(%eax)
0812e18c +0x1e:  mov    0xc(%ebp),%eax
0812e18f +0x21:  lea    0x4(%eax),%ecx
0812e192 +0x24:  lea    -0x18(%ebp),%eax
0812e195 +0x27:  mov    0xc(%ebp),%edx
0812e198 +0x2a:  mov    %edx,0x8(%esp)
0812e19c +0x2e:  mov    %ecx,0x4(%esp)
0812e1a0 +0x32:  mov    %eax,(%esp)
0812e1a3 +0x35:  call   081354db <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x10e2>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x10e2
0812e1a8 +0x3a:  sub    $0x4,%esp
0812e1ab +0x3d:  lea    -0x18(%ebp),%eax
0812e1ae +0x40:  mov    %eax,0x4(%esp)
0812e1b2 +0x44:  lea    -0x28(%ebp),%eax
0812e1b5 +0x47:  mov    %eax,(%esp)
0812e1b8 +0x4a:  call   0813551a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1121>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1121
0812e1bd +0x4f:  mov    0x8(%ebp),%eax
0812e1c0 +0x52:  lea    0x50(%eax),%ecx
0812e1c3 +0x55:  lea    -0x30(%ebp),%eax
0812e1c6 +0x58:  lea    -0x28(%ebp),%edx
0812e1c9 +0x5b:  mov    %edx,0x8(%esp)
0812e1cd +0x5f:  mov    %ecx,0x4(%esp)
0812e1d1 +0x63:  mov    %eax,(%esp)
0812e1d4 +0x66:  call   08135560 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1167>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1167
0812e1d9 +0x6b:  sub    $0x4,%esp
0812e1dc +0x6e:  leave
0812e1dd +0x6f:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::addCreatedMapMonster @ 0x812e16e

/* advancealtar::ProcStage::addCreatedMapMonster(advancealtar::_MapMonsterSummary&) */

void __thiscall
advancealtar::ProcStage::addCreatedMapMonster(ProcStage *this,_MapMonsterSummary *param_1)

{
  short sVar1;
  pair local_34 [8];
  pair<short_const,advancealtar::_MapMonsterSummary> local_2c [16];
  short local_1c [12];
  
  sVar1 = *(short *)(this + 0x14);
  *(short *)(param_1 + 4) = sVar1;
  *(short *)(this + 0x14) = sVar1 + 1;
  std::make_pair<short&,advancealtar::_MapMonsterSummary&>(local_1c,param_1 + 4);
  std::pair<short_const,advancealtar::_MapMonsterSummary>::
  pair<short,advancealtar::_MapMonsterSummary>(local_2c,(pair *)local_1c);
  std::
  map<short,advancealtar::_MapMonsterSummary,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_MapMonsterSummary>>>
  ::insert(local_34);
  return;
}
```
