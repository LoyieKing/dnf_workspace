# onEplpReturnVillage

`_ZN12advancealtar12StageControl19onEplpReturnVillageEv`

`advancealtar::StageControl::onEplpReturnVillage()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x08130692` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08130692  _ZN12advancealtar12StageControl19onEplpReturnVillageEv
#           advancealtar::StageControl::onEplpReturnVillage()
# range [0x08130692, 0x081306bd]
08130692 +0x00:  push   %ebp
08130693 +0x01:  mov    %esp,%ebp
08130695 +0x03:  sub    $0x18,%esp
08130698 +0x06:  mov    0x8(%ebp),%eax
0813069b +0x09:  add    $0x4,%eax
0813069e +0x0c:  mov    %eax,(%esp)
081306a1 +0x0f:  call   08134838 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x43f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x43f
081306a6 +0x14:  cmp    $0x6,%eax
081306a9 +0x17:  sete   %al
081306ac +0x1a:  test   %al,%al
081306ae +0x1c:  je     081306bb <+0x29>
081306b0 +0x1e:  mov    0x8(%ebp),%eax
081306b3 +0x21:  mov    %eax,(%esp)
081306b6 +0x24:  call   0812fc4e <_ZN12advancealtar12StageControl9leaveUserEv>  ; advancealtar::StageControl::leaveUser()
081306bb +0x29:  leave
081306bc +0x2a:  ret
081306bd +0x2b:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::onEplpReturnVillage @ 0x8130692

/* advancealtar::StageControl::onEplpReturnVillage() */

void __thiscall advancealtar::StageControl::onEplpReturnVillage(StageControl *this)

{
  int iVar1;
  
  iVar1 = ProcStage::getState((ProcStage *)(this + 4));
  if (iVar1 == 6) {
    leaveUser(this);
  }
  return;
}
```
