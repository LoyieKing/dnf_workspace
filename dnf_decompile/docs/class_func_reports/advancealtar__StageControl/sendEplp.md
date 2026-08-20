# sendEplp

`_ZN12advancealtar12StageControl8sendEplpENS_12StageEndType1TE`

`advancealtar::StageControl::sendEplp(advancealtar::StageEndType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x081306be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081306be  _ZN12advancealtar12StageControl8sendEplpENS_12StageEndType1TE
#           advancealtar::StageControl::sendEplp(advancealtar::StageEndType::T)
# range [0x081306be, 0x081307a5]
081306be +0x00:  push   %ebp
081306bf +0x01:  mov    %esp,%ebp
081306c1 +0x03:  push   %esi
081306c2 +0x04:  push   %ebx
081306c3 +0x05:  sub    $0x30,%esp
081306c6 +0x08:  mov    0x8(%ebp),%eax
081306c9 +0x0b:  add    $0x98,%eax
081306ce +0x10:  mov    %eax,(%esp)
081306d1 +0x13:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
081306d6 +0x18:  mov    %eax,-0x10(%ebp)
081306d9 +0x1b:  cmpl   $0x0,-0x10(%ebp)
081306dd +0x1f:  je     0813079d <+0xdf>
081306e3 +0x25:  mov    -0x10(%ebp),%eax
081306e6 +0x28:  add    $0x8df60,%eax
081306eb +0x2d:  mov    %eax,(%esp)
081306ee +0x30:  call   081312ec <_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv>  ; advancealtar::CharacAdvanceAltarManager::isAvailableTciket() const
081306f3 +0x35:  mov    %al,-0x9(%ebp)
081306f6 +0x38:  lea    -0x18(%ebp),%eax
081306f9 +0x3b:  mov    %eax,(%esp)
081306fc +0x3e:  call   08134752 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x359>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x359
08130701 +0x43:  mov    0xc(%ebp),%eax
08130704 +0x46:  mov    %eax,-0x18(%ebp)
08130707 +0x49:  movzbl -0x9(%ebp),%eax
0813070b +0x4d:  mov    %al,-0x14(%ebp)
0813070e +0x50:  lea    -0x24(%ebp),%eax
08130711 +0x53:  mov    %eax,(%esp)
08130714 +0x56:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08130719 +0x5b:  movl   $0x20e,0x8(%esp)
08130721 +0x63:  movl   $0x0,0x4(%esp)
08130729 +0x6b:  lea    -0x24(%ebp),%eax
0813072c +0x6e:  mov    %eax,(%esp)
0813072f +0x71:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08130734 +0x76:  lea    -0x18(%ebp),%eax
08130737 +0x79:  movl   $0x8,0x8(%esp)
0813073f +0x81:  mov    %eax,0x4(%esp)
08130743 +0x85:  lea    -0x24(%ebp),%eax
08130746 +0x88:  mov    %eax,(%esp)
08130749 +0x8b:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0813074e +0x90:  movl   $0x1,0x4(%esp)
08130756 +0x98:  lea    -0x24(%ebp),%eax
08130759 +0x9b:  mov    %eax,(%esp)
0813075c +0x9e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08130761 +0xa3:  lea    -0x24(%ebp),%eax
08130764 +0xa6:  mov    %eax,0x4(%esp)
08130768 +0xaa:  mov    -0x10(%ebp),%eax
0813076b +0xad:  mov    %eax,(%esp)
0813076e +0xb0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08130773 +0xb5:  jmp    08130790 <+0xd2>
08130775 +0xb7:  mov    %edx,%ebx
08130777 +0xb9:  mov    %eax,%esi
08130779 +0xbb:  lea    -0x24(%ebp),%eax
0813077c +0xbe:  mov    %eax,(%esp)
0813077f +0xc1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08130784 +0xc6:  mov    %esi,%eax
08130786 +0xc8:  mov    %ebx,%edx
08130788 +0xca:  mov    %eax,(%esp)
0813078b +0xcd:  call   08ae3750 <_Unwind_Resume>
08130790 +0xd2:  lea    -0x24(%ebp),%eax
08130793 +0xd5:  mov    %eax,(%esp)
08130796 +0xd8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0813079b +0xdd:  jmp    0813079e <+0xe0>
0813079d +0xdf:  nop
0813079e +0xe0:  add    $0x30,%esp
081307a1 +0xe3:  pop    %ebx
081307a2 +0xe4:  pop    %esi
081307a3 +0xe5:  pop    %ebp
081307a4 +0xe6:  ret
081307a5 +0xe7:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::sendEplp @ 0x81306be

/* advancealtar::StageControl::sendEplp(advancealtar::StageEndType::T) */

void __thiscall advancealtar::StageControl::sendEplp(StageControl *this,undefined4 param_2)

{
  PacketGuard local_28 [12];
  undefined4 local_1c;
  undefined1 local_18;
  CUser *local_14;
  undefined1 local_d;
  
  local_14 = (CUser *)CharacData::getUser((CharacData *)(this + 0x98));
  if (local_14 != (CUser *)0x0) {
    local_d = CharacAdvanceAltarManager::isAvailableTciket
                        ((CharacAdvanceAltarManager *)(local_14 + 0x8df60));
    NOTIPacketStruct::_NotiAdvanceAltarEplpState::_NotiAdvanceAltarEplpState
              ((_NotiAdvanceAltarEplpState *)&local_1c);
    local_1c = param_2;
    local_18 = local_d;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0813072f to 08130772 has its CatchHandler @ 08130775 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x20e);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_28,(char *)&local_1c,8);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(local_14,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
