# completePushSummonObject

`_ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi`

`advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject(int)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d5d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d5d0  _ZN12advancealtar9ProcStage18ProcSummonObjectMs24completePushSummonObjectEi
#           advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject(int)
# range [0x0812d5d0, 0x0812d657]
0812d5d0 +0x00:  push   %ebp
0812d5d1 +0x01:  mov    %esp,%ebp
0812d5d3 +0x03:  push   %ebx
0812d5d4 +0x04:  sub    $0x14,%esp
0812d5d7 +0x07:  cmpl   $0x0,0xc(%ebp)
0812d5db +0x0b:  jle    0812d5f0 <+0x20>
0812d5dd +0x0d:  mov    0x8(%ebp),%eax
0812d5e0 +0x10:  add    $0x4,%eax
0812d5e3 +0x13:  mov    %eax,(%esp)
0812d5e6 +0x16:  call   08135152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd59
0812d5eb +0x1b:  cmp    0xc(%ebp),%eax
0812d5ee +0x1e:  jg     0812d5f7 <+0x27>
0812d5f0 +0x20:  mov    $0x1,%eax
0812d5f5 +0x25:  jmp    0812d5fc <+0x2c>
0812d5f7 +0x27:  mov    $0x0,%eax
0812d5fc +0x2c:  test   %al,%al
0812d5fe +0x2e:  jne    0812d650 <+0x80>
0812d600 +0x30:  mov    0x8(%ebp),%eax
0812d603 +0x33:  add    $0x4,%eax
0812d606 +0x36:  mov    %eax,(%esp)
0812d609 +0x39:  call   08135152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd59
0812d60e +0x3e:  lea    -0x1(%eax),%edx
0812d611 +0x41:  mov    0x8(%ebp),%eax
0812d614 +0x44:  add    $0x4,%eax
0812d617 +0x47:  mov    %edx,0x4(%esp)
0812d61b +0x4b:  mov    %eax,(%esp)
0812d61e +0x4e:  call   08135238 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xe3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xe3f
0812d623 +0x53:  mov    %eax,%ebx
0812d625 +0x55:  mov    0xc(%ebp),%eax
0812d628 +0x58:  mov    0x8(%ebp),%edx
0812d62b +0x5b:  add    $0x4,%edx
0812d62e +0x5e:  mov    %eax,0x4(%esp)
0812d632 +0x62:  mov    %edx,(%esp)
0812d635 +0x65:  call   08135238 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xe3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xe3f
0812d63a +0x6a:  movl   $&_ZN12advancealtar9ProcStage18ProcSummonObjectMs7compareEPKNS_15_SummonObjectMsES4_,0x8(%esp)
0812d642 +0x72:  mov    %ebx,0x4(%esp)
0812d646 +0x76:  mov    %eax,(%esp)
0812d649 +0x79:  call   0813524a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xe51>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xe51
0812d64e +0x7e:  jmp    0812d651 <+0x81>
0812d650 +0x80:  nop
0812d651 +0x81:  add    $0x14,%esp
0812d654 +0x84:  pop    %ebx
0812d655 +0x85:  pop    %ebp
0812d656 +0x86:  ret
0812d657 +0x87:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject @ 0x812d5d0

/* advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject(int) */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::completePushSummonObject
          (ProcSummonObjectMs *this,int param_1)

{
  bool bVar1;
  int iVar2;
  _SummonObjectMs **pp_Var3;
  _SummonObjectMs **pp_Var4;
  
  if (0 < param_1) {
    iVar2 = std::
            vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
            size((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                  *)(this + 4));
    if (param_1 < iVar2) {
      bVar1 = false;
      goto LAB_0812d5fc;
    }
  }
  bVar1 = true;
LAB_0812d5fc:
  if (!bVar1) {
    iVar2 = std::
            vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
            size((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                  *)(this + 4));
    pp_Var3 = (_SummonObjectMs **)
              std::
              vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              ::operator[]((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                            *)(this + 4),iVar2 - 1);
    pp_Var4 = (_SummonObjectMs **)
              std::
              vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
              ::operator[]((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                            *)(this + 4),param_1);
    std::
    sort<advancealtar::_SummonObjectMs**,bool(*)(advancealtar::_SummonObjectMs_const*,advancealtar::_SummonObjectMs_const*)>
              (pp_Var4,pp_Var3,compare);
  }
  return;
}
```
