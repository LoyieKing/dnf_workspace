# ArriveMemberSelection

`_ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc`

`CSpecialItemRoutingManager::ArriveMemberSelection(CUser*, CParty*, char)`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860ab2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860ab2e  _ZN26CSpecialItemRoutingManager21ArriveMemberSelectionEP5CUserP6CPartyc
#           CSpecialItemRoutingManager::ArriveMemberSelection(CUser*, CParty*, char)
# range [0x0860ab2e, 0x0860abdd]
0860ab2e +0x00:  push   %ebp
0860ab2f +0x01:  mov    %esp,%ebp
0860ab31 +0x03:  sub    $0x38,%esp
0860ab34 +0x06:  mov    0x14(%ebp),%eax
0860ab37 +0x09:  mov    %al,-0x1c(%ebp)
0860ab3a +0x0c:  mov    0xc(%ebp),%eax
0860ab3d +0x0f:  mov    %eax,0x4(%esp)
0860ab41 +0x13:  mov    0x10(%ebp),%eax
0860ab44 +0x16:  mov    %eax,(%esp)
0860ab47 +0x19:  call   085ba150 <_ZN6CParty21GetMemberRoutingStateEP5CUser>  ; CParty::GetMemberRoutingState(CUser*)
0860ab4c +0x1e:  movsbl %al,%eax
0860ab4f +0x21:  mov    %eax,-0xc(%ebp)
0860ab52 +0x24:  cmpl   $0x0,-0xc(%ebp)
0860ab56 +0x28:  jne    0860ab9c <+0x6e>
0860ab58 +0x2a:  cmpb   $0x0,-0x1c(%ebp)
0860ab5c +0x2e:  jne    0860ab7a <+0x4c>
0860ab5e +0x30:  movl   $0x1,0x8(%esp)
0860ab66 +0x38:  mov    0xc(%ebp),%eax
0860ab69 +0x3b:  mov    %eax,0x4(%esp)
0860ab6d +0x3f:  mov    0x10(%ebp),%eax
0860ab70 +0x42:  mov    %eax,(%esp)
0860ab73 +0x45:  call   085ba0d8 <_ZN6CParty21SetMemberRoutingStateEP5CUserc>  ; CParty::SetMemberRoutingState(CUser*, char)
0860ab78 +0x4a:  jmp    0860aba3 <+0x75>
0860ab7a +0x4c:  cmpb   $0x1,-0x1c(%ebp)
0860ab7e +0x50:  jne    0860aba3 <+0x75>
0860ab80 +0x52:  movl   $0x2,0x8(%esp)
0860ab88 +0x5a:  mov    0xc(%ebp),%eax
0860ab8b +0x5d:  mov    %eax,0x4(%esp)
0860ab8f +0x61:  mov    0x10(%ebp),%eax
0860ab92 +0x64:  mov    %eax,(%esp)
0860ab95 +0x67:  call   085ba0d8 <_ZN6CParty21SetMemberRoutingStateEP5CUserc>  ; CParty::SetMemberRoutingState(CUser*, char)
0860ab9a +0x6c:  jmp    0860aba3 <+0x75>
0860ab9c +0x6e:  mov    $0x0,%eax
0860aba1 +0x73:  jmp    0860abdb <+0xad>
0860aba3 +0x75:  mov    0x10(%ebp),%eax
0860aba6 +0x78:  mov    %eax,(%esp)
0860aba9 +0x7b:  call   085ba1c0 <_ZN6CParty21HasAllMemberSelectionEv>  ; CParty::HasAllMemberSelection()
0860abae +0x80:  test   %al,%al
0860abb0 +0x82:  je     0860abd6 <+0xa8>
0860abb2 +0x84:  mov    0x10(%ebp),%eax
0860abb5 +0x87:  mov    %eax,0x4(%esp)
0860abb9 +0x8b:  mov    0x8(%ebp),%eax
0860abbc +0x8e:  mov    %eax,(%esp)
0860abbf +0x91:  call   0860b4c2 <_ZN26CSpecialItemRoutingManager11cancelTimerEP6CParty>  ; CSpecialItemRoutingManager::cancelTimer(CParty*)
0860abc4 +0x96:  mov    0x10(%ebp),%eax
0860abc7 +0x99:  mov    %eax,0x4(%esp)
0860abcb +0x9d:  mov    0x8(%ebp),%eax
0860abce +0xa0:  mov    %eax,(%esp)
0860abd1 +0xa3:  call   0860ac6a <_ZN26CSpecialItemRoutingManager14processRoutingEP6CParty>  ; CSpecialItemRoutingManager::processRouting(CParty*)
0860abd6 +0xa8:  mov    $0x1,%eax
0860abdb +0xad:  leave
0860abdc +0xae:  ret
0860abdd +0xaf:  nop
```

## 反编译 C

```c
// CSpecialItemRoutingManager::ArriveMemberSelection @ 0x860ab2e

/* CSpecialItemRoutingManager::ArriveMemberSelection(CUser*, CParty*, char) */

undefined4 __thiscall
CSpecialItemRoutingManager::ArriveMemberSelection
          (CSpecialItemRoutingManager *this,CUser *param_1,CParty *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = CParty::GetMemberRoutingState(param_2,param_1);
  if (cVar1 == '\0') {
    if (param_3 == '\0') {
      CParty::SetMemberRoutingState(param_2,param_1,'\x01');
    }
    else if (param_3 == '\x01') {
      CParty::SetMemberRoutingState(param_2,param_1,'\x02');
    }
    cVar1 = CParty::HasAllMemberSelection(param_2);
    if (cVar1 != '\0') {
      cancelTimer(this,param_2);
      processRouting(this,param_2);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
