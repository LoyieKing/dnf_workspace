# pause

`_ZN12advancealtar7Manager5pauseEP5CUserb`

`advancealtar::Manager::pause(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x0813105c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813105c  _ZN12advancealtar7Manager5pauseEP5CUserb
#           advancealtar::Manager::pause(CUser*, bool)
# range [0x0813105c, 0x081310b1]
0813105c +0x00:  push   %ebp
0813105d +0x01:  mov    %esp,%ebp
0813105f +0x03:  push   %ebx
08131060 +0x04:  sub    $0x34,%esp
08131063 +0x07:  mov    0xc(%ebp),%eax
08131066 +0x0a:  mov    %al,-0x1c(%ebp)
08131069 +0x0d:  cmpl   $0x0,0x8(%ebp)
0813106d +0x11:  jne    08131076 <+0x1a>
0813106f +0x13:  mov    $0x0,%eax
08131074 +0x18:  jmp    081310ac <+0x50>
08131076 +0x1a:  mov    0x8(%ebp),%eax
08131079 +0x1d:  mov    %eax,(%esp)
0813107c +0x20:  call   08655262 <_ZN5CUser15getAdvanceAltarEv>  ; CUser::getAdvanceAltar()
08131081 +0x25:  mov    %eax,-0xc(%ebp)
08131084 +0x28:  cmpl   $0x0,-0xc(%ebp)
08131088 +0x2c:  je     081310a7 <+0x4b>
0813108a +0x2e:  movzbl -0x1c(%ebp),%ebx
0813108e +0x32:  mov    -0xc(%ebp),%eax
08131091 +0x35:  mov    %eax,(%esp)
08131094 +0x38:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08131099 +0x3d:  mov    %ebx,0x4(%esp)
0813109d +0x41:  mov    %eax,(%esp)
081310a0 +0x44:  call   0812eaa6 <_ZN12advancealtar9ProcStage5pauseEb>  ; advancealtar::ProcStage::pause(bool)
081310a5 +0x49:  jmp    081310ac <+0x50>
081310a7 +0x4b:  mov    $0x0,%eax
081310ac +0x50:  add    $0x34,%esp
081310af +0x53:  pop    %ebx
081310b0 +0x54:  pop    %ebp
081310b1 +0x55:  ret
```

## 反编译 C

```c
// advancealtar::Manager::pause @ 0x813105c

/* advancealtar::Manager::pause(CUser*, bool) */

undefined4 advancealtar::Manager::pause(CUser *param_1,bool param_2)

{
  undefined4 uVar1;
  StageControl *this;
  ProcStage *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    this = (StageControl *)CUser::getAdvanceAltar(param_1);
    if (this == (StageControl *)0x0) {
      uVar1 = 0;
    }
    else {
      this_00 = (ProcStage *)StageControl::getProcStage(this);
      uVar1 = ProcStage::pause(this_00,param_2);
    }
  }
  return uVar1;
}
```
