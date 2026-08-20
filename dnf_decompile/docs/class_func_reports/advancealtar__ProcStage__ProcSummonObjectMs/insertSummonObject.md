# insertSummonObject

`_ZN12advancealtar9ProcStage18ProcSummonObjectMs18insertSummonObjectERNS_15_SummonObjectMsE`

`advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject(advancealtar::_SummonObjectMs&)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d540` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d540  _ZN12advancealtar9ProcStage18ProcSummonObjectMs18insertSummonObjectERNS_15_SummonObjectMsE
#           advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject(advancealtar::_SummonObjectMs&)
# range [0x0812d540, 0x0812d5b9]
0812d540 +0x00:  push   %ebp
0812d541 +0x01:  mov    %esp,%ebp
0812d543 +0x03:  sub    $0x38,%esp
0812d546 +0x06:  mov    0xc(%ebp),%eax
0812d549 +0x09:  mov    %eax,-0x28(%ebp)
0812d54c +0x0c:  mov    0x8(%ebp),%eax
0812d54f +0x0f:  lea    0x4(%eax),%edx
0812d552 +0x12:  lea    -0x28(%ebp),%eax
0812d555 +0x15:  mov    %eax,0x4(%esp)
0812d559 +0x19:  mov    %edx,(%esp)
0812d55c +0x1c:  call   0813516e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd75>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd75
0812d561 +0x21:  mov    0xc(%ebp),%eax
0812d564 +0x24:  mov    %eax,-0xc(%ebp)
0812d567 +0x27:  mov    0xc(%ebp),%eax
0812d56a +0x2a:  lea    0x4(%eax),%ecx
0812d56d +0x2d:  lea    -0x14(%ebp),%eax
0812d570 +0x30:  lea    -0xc(%ebp),%edx
0812d573 +0x33:  mov    %edx,0x8(%esp)
0812d577 +0x37:  mov    %ecx,0x4(%esp)
0812d57b +0x3b:  mov    %eax,(%esp)
0812d57e +0x3e:  call   08135198 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd9f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd9f
0812d583 +0x43:  sub    $0x4,%esp
0812d586 +0x46:  lea    -0x14(%ebp),%eax
0812d589 +0x49:  mov    %eax,0x4(%esp)
0812d58d +0x4d:  lea    -0x1c(%ebp),%eax
0812d590 +0x50:  mov    %eax,(%esp)
0812d593 +0x53:  call   081351da <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xde1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xde1
0812d598 +0x58:  mov    0x8(%ebp),%eax
0812d59b +0x5b:  lea    0x10(%eax),%ecx
0812d59e +0x5e:  lea    -0x24(%ebp),%eax
0812d5a1 +0x61:  lea    -0x1c(%ebp),%edx
0812d5a4 +0x64:  mov    %edx,0x8(%esp)
0812d5a8 +0x68:  mov    %ecx,0x4(%esp)
0812d5ac +0x6c:  mov    %eax,(%esp)
0812d5af +0x6f:  call   0813520c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xe13>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xe13
0812d5b4 +0x74:  sub    $0x4,%esp
0812d5b7 +0x77:  leave
0812d5b8 +0x78:  ret
0812d5b9 +0x79:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject @ 0x812d540

/* advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject(advancealtar::_SummonObjectMs&)
    */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::insertSummonObject
          (ProcSummonObjectMs *this,_SummonObjectMs *param_1)

{
  _SummonObjectMs *local_2c;
  pair local_28 [8];
  pair<short_const,advancealtar::_SummonObjectMs*> local_20 [8];
  short local_18 [4];
  _SummonObjectMs *local_10;
  
  local_2c = param_1;
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
  push_back((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>> *
            )(this + 4),&local_2c);
  local_10 = param_1;
  std::make_pair<short&,advancealtar::_SummonObjectMs*>(local_18,(_SummonObjectMs **)(param_1 + 4));
  std::pair<short_const,advancealtar::_SummonObjectMs*>::pair<short,advancealtar::_SummonObjectMs*>
            (local_20,(pair *)local_18);
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::insert(local_28);
  return;
}
```
