# process

`_ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PartyTeleportConfirm::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PartyTeleportConfirm` | `0x081dc5ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dc5ee  _ZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PartyTeleportConfirm::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dc5ee, 0x081dc75b]
081dc5ee +0x000:  push   %ebp
081dc5ef +0x001:  mov    %esp,%ebp
081dc5f1 +0x003:  sub    $0x28,%esp
081dc5f4 +0x006:  mov    0x14(%ebp),%eax
081dc5f7 +0x009:  mov    %eax,-0x18(%ebp)
081dc5fa +0x00c:  mov    0x10(%ebp),%eax
081dc5fd +0x00f:  mov    %eax,0x8(%esp)
081dc601 +0x013:  mov    0xc(%ebp),%eax
081dc604 +0x016:  mov    %eax,0x4(%esp)
081dc608 +0x01a:  mov    0x8(%ebp),%eax
081dc60b +0x01d:  mov    %eax,(%esp)
081dc60e +0x020:  call   081dc75c <_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_PartyTeleportConfirm::check_error(CUser*, MSG_BASE&)
081dc613 +0x025:  mov    -0x18(%ebp),%edx
081dc616 +0x028:  mov    %eax,0x4(%edx)
081dc619 +0x02b:  mov    -0x18(%ebp),%eax
081dc61c +0x02e:  mov    0x4(%eax),%eax
081dc61f +0x031:  test   %eax,%eax
081dc621 +0x033:  jle    081dc62d <+0x3f>
081dc623 +0x035:  mov    $0x0,%eax
081dc628 +0x03a:  jmp    081dc759 <+0x16b>
081dc62d +0x03f:  mov    -0x18(%ebp),%eax
081dc630 +0x042:  mov    0x4(%eax),%eax
081dc633 +0x045:  test   %eax,%eax
081dc635 +0x047:  jns    081dc662 <+0x74>
081dc637 +0x049:  mov    -0x18(%ebp),%eax
081dc63a +0x04c:  mov    0x4(%eax),%eax
081dc63d +0x04f:  movl   $0x0,0xc(%esp)
081dc645 +0x057:  mov    %eax,0x8(%esp)
081dc649 +0x05b:  movl   $&_ZZN31Dispatcher_PartyTeleportConfirm7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081dc651 +0x063:  movl   $0x4be5,(%esp)
081dc658 +0x06a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dc65d +0x06f:  jmp    081dc759 <+0x16b>
081dc662 +0x074:  mov    0x10(%ebp),%eax
081dc665 +0x077:  mov    %eax,-0x14(%ebp)
081dc668 +0x07a:  mov    -0x14(%ebp),%eax
081dc66b +0x07d:  movzbl 0xd(%eax),%edx
081dc66f +0x081:  mov    -0x18(%ebp),%eax
081dc672 +0x084:  mov    %dl,0x8(%eax)
081dc675 +0x087:  mov    0xc(%ebp),%eax
081dc678 +0x08a:  mov    %eax,(%esp)
081dc67b +0x08d:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081dc680 +0x092:  mov    %eax,-0x10(%ebp)
081dc683 +0x095:  cmpl   $0x0,-0x10(%ebp)
081dc687 +0x099:  je     081dc754 <+0x166>
081dc68d +0x09f:  mov    0xc(%ebp),%eax
081dc690 +0x0a2:  mov    %eax,0x4(%esp)
081dc694 +0x0a6:  mov    -0x10(%ebp),%eax
081dc697 +0x0a9:  mov    %eax,(%esp)
081dc69a +0x0ac:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
081dc69f +0x0b1:  mov    %eax,-0xc(%ebp)
081dc6a2 +0x0b4:  mov    -0x14(%ebp),%eax
081dc6a5 +0x0b7:  movzbl 0xd(%eax),%eax
081dc6a9 +0x0bb:  cmp    $0x1,%al
081dc6ab +0x0bd:  jne    081dc6e4 <+0xf6>
081dc6ad +0x0bf:  mov    -0x10(%ebp),%eax
081dc6b0 +0x0c2:  mov    %eax,(%esp)
081dc6b3 +0x0c5:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc6b8 +0x0ca:  movl   $0x1,0x8(%esp)
081dc6c0 +0x0d2:  mov    -0xc(%ebp),%edx
081dc6c3 +0x0d5:  mov    %edx,0x4(%esp)
081dc6c7 +0x0d9:  mov    %eax,(%esp)
081dc6ca +0x0dc:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
081dc6cf +0x0e1:  mov    -0x10(%ebp),%eax
081dc6d2 +0x0e4:  mov    %eax,(%esp)
081dc6d5 +0x0e7:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc6da +0x0ec:  mov    %eax,(%esp)
081dc6dd +0x0ef:  call   085bbb08 <_ZN14CPartyTelePort24check_cur_teleport_stateEv>  ; CPartyTelePort::check_cur_teleport_state()
081dc6e2 +0x0f4:  jmp    081dc754 <+0x166>
081dc6e4 +0x0f6:  mov    -0x14(%ebp),%eax
081dc6e7 +0x0f9:  movzbl 0xd(%eax),%eax
081dc6eb +0x0fd:  test   %al,%al
081dc6ed +0x0ff:  jne    081dc72e <+0x140>
081dc6ef +0x101:  mov    -0x10(%ebp),%eax
081dc6f2 +0x104:  mov    %eax,(%esp)
081dc6f5 +0x107:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc6fa +0x10c:  movl   $0x0,0x8(%esp)
081dc702 +0x114:  mov    -0xc(%ebp),%edx
081dc705 +0x117:  mov    %edx,0x4(%esp)
081dc709 +0x11b:  mov    %eax,(%esp)
081dc70c +0x11e:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
081dc711 +0x123:  mov    -0x10(%ebp),%eax
081dc714 +0x126:  mov    %eax,(%esp)
081dc717 +0x129:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc71c +0x12e:  movl   $0x2,0x4(%esp)
081dc724 +0x136:  mov    %eax,(%esp)
081dc727 +0x139:  call   0822d7fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ea4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ea4
081dc72c +0x13e:  jmp    081dc754 <+0x166>
081dc72e +0x140:  mov    -0x14(%ebp),%eax
081dc731 +0x143:  movzbl 0xd(%eax),%eax
081dc735 +0x147:  cmp    $0x3,%al
081dc737 +0x149:  jne    081dc754 <+0x166>
081dc739 +0x14b:  mov    -0x10(%ebp),%eax
081dc73c +0x14e:  mov    %eax,(%esp)
081dc73f +0x151:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc744 +0x156:  movl   $0x3,0x4(%esp)
081dc74c +0x15e:  mov    %eax,(%esp)
081dc74f +0x161:  call   0822d7fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ea4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ea4
081dc754 +0x166:  mov    $0x0,%eax
081dc759 +0x16b:  leave
081dc75a +0x16c:  ret
081dc75b +0x16d:  nop
```

## 反编译 C

```c
// Dispatcher_PartyTeleportConfirm::process @ 0x81dc5ee

/* Dispatcher_PartyTeleportConfirm::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PartyTeleportConfirm::process
          (Dispatcher_PartyTeleportConfirm *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  undefined4 uVar1;
  CParty *this_00;
  int iVar2;
  CPartyTelePort *pCVar3;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x4be5,
                       "virtual int Dispatcher_PartyTeleportConfirm::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
      this_00 = (CParty *)CUser::GetParty(param_1);
      if (this_00 != (CParty *)0x0) {
        iVar2 = CParty::GetMemberSlotNo(this_00,param_1);
        if (param_2[0xd] == (MSG_BASE)0x1) {
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::set_teleport_member_state(pCVar3,iVar2,'\x01');
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::check_cur_teleport_state(pCVar3);
        }
        else if (param_2[0xd] == (MSG_BASE)0x0) {
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::set_teleport_member_state(pCVar3,iVar2,'\0');
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::set_teleport_state(pCVar3,'\x02');
        }
        else if (param_2[0xd] == (MSG_BASE)0x3) {
          pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
          CPartyTelePort::set_teleport_state(pCVar3,'\x03');
        }
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
