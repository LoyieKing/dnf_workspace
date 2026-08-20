# getTrainingQuest

`_ZN19TrainingQuestScript16getTrainingQuestEiii`

`TrainingQuestScript::getTrainingQuest(int, int, int)`

| 类 | 地址 |
|---|---|
| `TrainingQuestScript` | `0x08aafb44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aafb44  _ZN19TrainingQuestScript16getTrainingQuestEiii
#           TrainingQuestScript::getTrainingQuest(int, int, int)
# range [0x08aafb44, 0x08aafc63]
08aafb44 +0x000:  push   %ebp
08aafb45 +0x001:  mov    %esp,%ebp
08aafb47 +0x003:  push   %ebx
08aafb48 +0x004:  sub    $0x14,%esp
08aafb4b +0x007:  mov    0x10(%ebp),%eax
08aafb4e +0x00a:  cmp    0x14(%ebp),%eax
08aafb51 +0x00d:  jne    08aafb6a <+0x26>
08aafb53 +0x00f:  mov    0x8(%ebp),%eax
08aafb56 +0x012:  mov    0x148c(%eax),%eax
08aafb5c +0x018:  lea    0x1(%eax),%edx
08aafb5f +0x01b:  mov    0x8(%ebp),%eax
08aafb62 +0x01e:  mov    %edx,0x148c(%eax)
08aafb68 +0x024:  jmp    08aafb77 <+0x33>
08aafb6a +0x026:  mov    0x8(%ebp),%eax
08aafb6d +0x029:  movl   $0x0,0x148c(%eax)
08aafb77 +0x033:  cmpl   $0xffffff9c,0x10(%ebp)
08aafb7b +0x037:  jne    08aafbd0 <+0x8c>
08aafb7d +0x039:  mov    0x8(%ebp),%eax
08aafb80 +0x03c:  mov    0x148c(%eax),%eax
08aafb86 +0x042:  mov    %eax,%ebx
08aafb88 +0x044:  mov    0x8(%ebp),%eax
08aafb8b +0x047:  add    $0x1480,%eax
08aafb90 +0x04c:  mov    %eax,(%esp)
08aafb93 +0x04f:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08aafb98 +0x054:  cmp    %eax,%ebx
08aafb9a +0x056:  setae  %al
08aafb9d +0x059:  test   %al,%al
08aafb9f +0x05b:  je     08aafbab <+0x67>
08aafba1 +0x05d:  mov    $0x7fffffff,%eax
08aafba6 +0x062:  jmp    08aafc5e <+0x11a>
08aafbab +0x067:  mov    0x8(%ebp),%eax
08aafbae +0x06a:  mov    0x148c(%eax),%eax
08aafbb4 +0x070:  mov    0x8(%ebp),%edx
08aafbb7 +0x073:  add    $0x1480,%edx
08aafbbd +0x079:  mov    %eax,0x4(%esp)
08aafbc1 +0x07d:  mov    %edx,(%esp)
08aafbc4 +0x080:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
08aafbc9 +0x085:  mov    (%eax),%eax
08aafbcb +0x087:  jmp    08aafc5e <+0x11a>
08aafbd0 +0x08c:  mov    0xc(%ebp),%eax
08aafbd3 +0x08f:  sub    $0x1,%eax
08aafbd6 +0x092:  add    0x10(%ebp),%eax
08aafbd9 +0x095:  test   %eax,%eax
08aafbdb +0x097:  jns    08aafbe4 <+0xa0>
08aafbdd +0x099:  mov    $0x7fffffff,%eax
08aafbe2 +0x09e:  jmp    08aafc5e <+0x11a>
08aafbe4 +0x0a0:  mov    0x8(%ebp),%eax
08aafbe7 +0x0a3:  mov    0x148c(%eax),%eax
08aafbed +0x0a9:  mov    %eax,%ebx
08aafbef +0x0ab:  mov    0xc(%ebp),%eax
08aafbf2 +0x0ae:  sub    $0x1,%eax
08aafbf5 +0x0b1:  mov    %eax,%edx
08aafbf7 +0x0b3:  add    0x10(%ebp),%edx
08aafbfa +0x0b6:  mov    %edx,%eax
08aafbfc +0x0b8:  add    %eax,%eax
08aafbfe +0x0ba:  add    %edx,%eax
08aafc00 +0x0bc:  shl    $0x2,%eax
08aafc03 +0x0bf:  add    $0x1130,%eax
08aafc08 +0x0c4:  add    0x8(%ebp),%eax
08aafc0b +0x0c7:  add    $0x8,%eax
08aafc0e +0x0ca:  mov    %eax,(%esp)
08aafc11 +0x0cd:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08aafc16 +0x0d2:  cmp    %eax,%ebx
08aafc18 +0x0d4:  setae  %al
08aafc1b +0x0d7:  test   %al,%al
08aafc1d +0x0d9:  je     08aafc26 <+0xe2>
08aafc1f +0x0db:  mov    $0x7fffffff,%eax
08aafc24 +0x0e0:  jmp    08aafc5e <+0x11a>
08aafc26 +0x0e2:  mov    0x8(%ebp),%eax
08aafc29 +0x0e5:  mov    0x148c(%eax),%eax
08aafc2f +0x0eb:  mov    %eax,%ecx
08aafc31 +0x0ed:  mov    0xc(%ebp),%eax
08aafc34 +0x0f0:  sub    $0x1,%eax
08aafc37 +0x0f3:  mov    %eax,%edx
08aafc39 +0x0f5:  add    0x10(%ebp),%edx
08aafc3c +0x0f8:  mov    %edx,%eax
08aafc3e +0x0fa:  add    %eax,%eax
08aafc40 +0x0fc:  add    %edx,%eax
08aafc42 +0x0fe:  shl    $0x2,%eax
08aafc45 +0x101:  add    $0x1130,%eax
08aafc4a +0x106:  add    0x8(%ebp),%eax
08aafc4d +0x109:  add    $0x8,%eax
08aafc50 +0x10c:  mov    %ecx,0x4(%esp)
08aafc54 +0x110:  mov    %eax,(%esp)
08aafc57 +0x113:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
08aafc5c +0x118:  mov    (%eax),%eax
08aafc5e +0x11a:  add    $0x14,%esp
08aafc61 +0x11d:  pop    %ebx
08aafc62 +0x11e:  pop    %ebp
08aafc63 +0x11f:  ret
```

## 反编译 C

```c
// TrainingQuestScript::getTrainingQuest @ 0x8aafb44

/* TrainingQuestScript::getTrainingQuest(int, int, int) */

undefined4 __thiscall
TrainingQuestScript::getTrainingQuest(TrainingQuestScript *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_2 == param_3) {
    *(int *)(this + 0x148c) = *(int *)(this + 0x148c) + 1;
  }
  else {
    *(undefined4 *)(this + 0x148c) = 0;
  }
  if (param_2 == -100) {
    uVar1 = *(uint *)(this + 0x148c);
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0x1480));
    if (uVar1 < uVar2) {
      puVar4 = (undefined4 *)
               std::vector<int,std::allocator<int>>::at
                         ((vector<int,std::allocator<int>> *)(this + 0x1480),
                          *(uint *)(this + 0x148c));
      uVar3 = *puVar4;
    }
    else {
      uVar3 = 0x7fffffff;
    }
  }
  else if (param_1 + -1 + param_2 < 0) {
    uVar3 = 0x7fffffff;
  }
  else {
    uVar1 = *(uint *)(this + 0x148c);
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)
                       (this + (param_1 + -1 + param_2) * 0xc + 0x1138));
    if (uVar1 < uVar2) {
      puVar4 = (undefined4 *)
               std::vector<int,std::allocator<int>>::at
                         ((vector<int,std::allocator<int>> *)
                          (this + (param_1 + -1 + param_2) * 0xc + 0x1138),*(uint *)(this + 0x148c))
      ;
      uVar3 = *puVar4;
    }
    else {
      uVar3 = 0x7fffffff;
    }
  }
  return uVar3;
}
```
