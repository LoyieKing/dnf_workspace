# ProcessTimeOut

`_ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty`

`CSpecialItemRoutingManager::ProcessTimeOut(CParty*)`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860abde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860abde  _ZN26CSpecialItemRoutingManager14ProcessTimeOutEP6CParty
#           CSpecialItemRoutingManager::ProcessTimeOut(CParty*)
# range [0x0860abde, 0x0860ac69]
0860abde +0x00:  push   %ebp
0860abdf +0x01:  mov    %esp,%ebp
0860abe1 +0x03:  sub    $0x18,%esp
0860abe4 +0x06:  mov    0xc(%ebp),%eax
0860abe7 +0x09:  mov    %eax,(%esp)
0860abea +0x0c:  call   08145840 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2c3
0860abef +0x11:  xor    $0x1,%eax
0860abf2 +0x14:  test   %al,%al
0860abf4 +0x16:  je     0860ac08 <+0x2a>
0860abf6 +0x18:  mov    0xc(%ebp),%eax
0860abf9 +0x1b:  mov    %eax,(%esp)
0860abfc +0x1e:  call   085bf82a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd88>  ; global constructors keyed to CParty::cMember::cMember()+0xd88
0860ac01 +0x23:  mov    $0x1,%eax
0860ac06 +0x28:  jmp    0860ac67 <+0x89>
0860ac08 +0x2a:  mov    0xc(%ebp),%eax
0860ac0b +0x2d:  mov    %eax,(%esp)
0860ac0e +0x30:  call   085ba574 <_ZN6CParty24GetFirstValidMemberStateEv>  ; CParty::GetFirstValidMemberState()
0860ac13 +0x35:  movsbl %al,%eax
0860ac16 +0x38:  cmp    $0x5,%eax
0860ac19 +0x3b:  je     0860ac32 <+0x54>
0860ac1b +0x3d:  cmp    $0xc,%eax
0860ac1e +0x40:  je     0860ac35 <+0x57>
0860ac20 +0x42:  mov    0xc(%ebp),%eax
0860ac23 +0x45:  mov    %eax,(%esp)
0860ac26 +0x48:  call   085bf82a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd88>  ; global constructors keyed to CParty::cMember::cMember()+0xd88
0860ac2b +0x4d:  mov    $0x1,%eax
0860ac30 +0x52:  jmp    0860ac67 <+0x89>
0860ac32 +0x54:  nop
0860ac33 +0x55:  jmp    0860ac36 <+0x58>
0860ac35 +0x57:  nop
0860ac36 +0x58:  mov    0xc(%ebp),%eax
0860ac39 +0x5b:  mov    %eax,(%esp)
0860ac3c +0x5e:  call   085ba222 <_ZN6CParty19SetRoutingTimerOverEv>  ; CParty::SetRoutingTimerOver()
0860ac41 +0x63:  mov    0xc(%ebp),%eax
0860ac44 +0x66:  mov    %eax,(%esp)
0860ac47 +0x69:  call   085ba1c0 <_ZN6CParty21HasAllMemberSelectionEv>  ; CParty::HasAllMemberSelection()
0860ac4c +0x6e:  test   %al,%al
0860ac4e +0x70:  je     0860ac62 <+0x84>
0860ac50 +0x72:  mov    0xc(%ebp),%eax
0860ac53 +0x75:  mov    %eax,0x4(%esp)
0860ac57 +0x79:  mov    0x8(%ebp),%eax
0860ac5a +0x7c:  mov    %eax,(%esp)
0860ac5d +0x7f:  call   0860ac6a <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty>  ; CSpecialItemRoutingManager::processRouting(CParty*)
0860ac62 +0x84:  mov    $0x1,%eax
0860ac67 +0x89:  leave
0860ac68 +0x8a:  ret
0860ac69 +0x8b:  nop
```

## 反编译 C

```c
// CSpecialItemRoutingManager::ProcessTimeOut @ 0x860abde

/* CSpecialItemRoutingManager::ProcessTimeOut(CParty*) */

undefined4 __thiscall
CSpecialItemRoutingManager::ProcessTimeOut(CSpecialItemRoutingManager *this,CParty *param_1)

{
  char cVar1;
  
  cVar1 = CParty::IsRoutingState(param_1);
  if (cVar1 == '\x01') {
    cVar1 = CParty::GetFirstValidMemberState(param_1);
    if ((cVar1 == '\x05') || (cVar1 == '\f')) {
      CParty::SetRoutingTimerOver(param_1);
      cVar1 = CParty::HasAllMemberSelection(param_1);
      if (cVar1 != '\0') {
        processRouting(this,param_1);
      }
    }
    else {
      CParty::SetEndRouting(param_1);
    }
  }
  else {
    CParty::SetEndRouting(param_1);
  }
  return 1;
}
```
