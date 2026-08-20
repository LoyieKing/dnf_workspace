# getAddCommand

`_ZN13StrikerScript13getAddCommandEsi`

`StrikerScript::getAddCommand(short, int)`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9eb3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9eb3a  _ZN13StrikerScript13getAddCommandEsi
#           StrikerScript::getAddCommand(short, int)
# range [0x08a9eb3a, 0x08a9ebed]
08a9eb3a +0x00:  push   %ebp
08a9eb3b +0x01:  mov    %esp,%ebp
08a9eb3d +0x03:  push   %ebx
08a9eb3e +0x04:  sub    $0x34,%esp
08a9eb41 +0x07:  mov    0xc(%ebp),%eax
08a9eb44 +0x0a:  mov    %ax,-0x1c(%ebp)
08a9eb48 +0x0e:  movl   $0x0,-0xc(%ebp)
08a9eb4f +0x15:  jmp    08a9ebc4 <+0x8a>
08a9eb51 +0x17:  movswl -0x1c(%ebp),%ebx
08a9eb55 +0x1b:  mov    0x8(%ebp),%eax
08a9eb58 +0x1e:  lea    0x94(%eax),%edx
08a9eb5e +0x24:  mov    -0xc(%ebp),%eax
08a9eb61 +0x27:  mov    %eax,0x4(%esp)
08a9eb65 +0x2b:  mov    %edx,(%esp)
08a9eb68 +0x2e:  call   08a9f772 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa85>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa85
08a9eb6d +0x33:  mov    (%eax),%eax
08a9eb6f +0x35:  cmp    %eax,%ebx
08a9eb71 +0x37:  jne    08a9eb9a <+0x60>
08a9eb73 +0x39:  mov    0x8(%ebp),%eax
08a9eb76 +0x3c:  lea    0x94(%eax),%edx
08a9eb7c +0x42:  mov    -0xc(%ebp),%eax
08a9eb7f +0x45:  mov    %eax,0x4(%esp)
08a9eb83 +0x49:  mov    %edx,(%esp)
08a9eb86 +0x4c:  call   08a9f772 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa85>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa85
08a9eb8b +0x51:  mov    0x4(%eax),%eax
08a9eb8e +0x54:  cmp    0x10(%ebp),%eax
08a9eb91 +0x57:  jne    08a9eb9a <+0x60>
08a9eb93 +0x59:  mov    $0x1,%eax
08a9eb98 +0x5e:  jmp    08a9eb9f <+0x65>
08a9eb9a +0x60:  mov    $0x0,%eax
08a9eb9f +0x65:  test   %al,%al
08a9eba1 +0x67:  je     08a9ebc0 <+0x86>
08a9eba3 +0x69:  mov    0x8(%ebp),%eax
08a9eba6 +0x6c:  lea    0x94(%eax),%edx
08a9ebac +0x72:  mov    -0xc(%ebp),%eax
08a9ebaf +0x75:  mov    %eax,0x4(%esp)
08a9ebb3 +0x79:  mov    %edx,(%esp)
08a9ebb6 +0x7c:  call   08a9f772 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa85>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa85
08a9ebbb +0x81:  mov    0x8(%eax),%eax
08a9ebbe +0x84:  jmp    08a9ebe7 <+0xad>
08a9ebc0 +0x86:  addl   $0x1,-0xc(%ebp)
08a9ebc4 +0x8a:  mov    0x8(%ebp),%eax
08a9ebc7 +0x8d:  add    $0x94,%eax
08a9ebcc +0x92:  mov    %eax,(%esp)
08a9ebcf +0x95:  call   08a9f750 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0xa63>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0xa63
08a9ebd4 +0x9a:  cmp    -0xc(%ebp),%eax
08a9ebd7 +0x9d:  seta   %al
08a9ebda +0xa0:  test   %al,%al
08a9ebdc +0xa2:  jne    08a9eb51 <+0x17>
08a9ebe2 +0xa8:  mov    $0x0,%eax
08a9ebe7 +0xad:  add    $0x34,%esp
08a9ebea +0xb0:  pop    %ebx
08a9ebeb +0xb1:  pop    %ebp
08a9ebec +0xb2:  ret
08a9ebed +0xb3:  nop
```

## 反编译 C

```c
// StrikerScript::getAddCommand @ 0x8a9eb3a

/* StrikerScript::getAddCommand(short, int) */

undefined4 __thiscall StrikerScript::getAddCommand(StrikerScript *this,short param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::size
                      ((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)
                       (this + 0x94));
    if (uVar4 <= local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::
                    operator[]((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>
                                *)(this + 0x94),local_10);
    if (((int)param_1 == *piVar2) &&
       (iVar3 = std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::
                operator[]((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)
                           (this + 0x94),local_10), *(int *)(iVar3 + 4) == param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  iVar3 = std::vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>>::operator[]
                    ((vector<StrikerSkillAddCommand,std::allocator<StrikerSkillAddCommand>> *)
                     (this + 0x94),local_10);
  return *(undefined4 *)(iVar3 + 8);
}
```
