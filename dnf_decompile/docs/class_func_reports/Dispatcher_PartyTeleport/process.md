# process

`_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PartyTeleport::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PartyTeleport` | `0x081dbfd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dbfd6  _ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PartyTeleport::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dbfd6, 0x081dc199]
081dbfd6 +0x000:  push   %ebp
081dbfd7 +0x001:  mov    %esp,%ebp
081dbfd9 +0x003:  push   %edi
081dbfda +0x004:  push   %esi
081dbfdb +0x005:  push   %ebx
081dbfdc +0x006:  sub    $0x5c,%esp
081dbfdf +0x009:  mov    0x14(%ebp),%eax
081dbfe2 +0x00c:  mov    %eax,-0x2c(%ebp)
081dbfe5 +0x00f:  mov    0x10(%ebp),%eax
081dbfe8 +0x012:  mov    %eax,0x8(%esp)
081dbfec +0x016:  mov    0xc(%ebp),%eax
081dbfef +0x019:  mov    %eax,0x4(%esp)
081dbff3 +0x01d:  mov    0x8(%ebp),%eax
081dbff6 +0x020:  mov    %eax,(%esp)
081dbff9 +0x023:  call   081dc19a <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_PartyTeleport::check_error(CUser*, MSG_BASE&)
081dbffe +0x028:  mov    -0x2c(%ebp),%edx
081dc001 +0x02b:  mov    %eax,0x4(%edx)
081dc004 +0x02e:  mov    0x10(%ebp),%eax
081dc007 +0x031:  mov    %eax,-0x28(%ebp)
081dc00a +0x034:  mov    -0x28(%ebp),%eax
081dc00d +0x037:  movzbl 0xd(%eax),%edx
081dc011 +0x03b:  mov    -0x2c(%ebp),%eax
081dc014 +0x03e:  mov    %dl,0x8(%eax)
081dc017 +0x041:  movl   $0x0,0x4(%esp)
081dc01f +0x049:  mov    0xc(%ebp),%eax
081dc022 +0x04c:  mov    %eax,(%esp)
081dc025 +0x04f:  call   0868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>  ; CUser::get_aura_avatar_option_value(int)
081dc02a +0x054:  mov    -0x2c(%ebp),%edx
081dc02d +0x057:  mov    %eax,0xc(%edx)
081dc030 +0x05a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081dc037 +0x061:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081dc03c +0x066:  mov    %eax,-0x24(%ebp)
081dc03f +0x069:  mov    -0x2c(%ebp),%eax
081dc042 +0x06c:  mov    0xc(%eax),%eax
081dc045 +0x06f:  cmp    -0x24(%ebp),%eax
081dc048 +0x072:  jle    081dc05d <+0x87>
081dc04a +0x074:  mov    -0x2c(%ebp),%eax
081dc04d +0x077:  mov    0xc(%eax),%eax
081dc050 +0x07a:  mov    %eax,%edx
081dc052 +0x07c:  sub    -0x24(%ebp),%edx
081dc055 +0x07f:  mov    -0x2c(%ebp),%eax
081dc058 +0x082:  mov    %edx,0xc(%eax)
081dc05b +0x085:  jmp    081dc067 <+0x91>
081dc05d +0x087:  mov    -0x2c(%ebp),%eax
081dc060 +0x08a:  movl   $0x0,0xc(%eax)
081dc067 +0x091:  mov    -0x2c(%ebp),%eax
081dc06a +0x094:  mov    0x4(%eax),%eax
081dc06d +0x097:  test   %eax,%eax
081dc06f +0x099:  jle    081dc07b <+0xa5>
081dc071 +0x09b:  mov    $0x0,%eax
081dc076 +0x0a0:  jmp    081dc192 <+0x1bc>
081dc07b +0x0a5:  mov    -0x2c(%ebp),%eax
081dc07e +0x0a8:  mov    0x4(%eax),%eax
081dc081 +0x0ab:  test   %eax,%eax
081dc083 +0x0ad:  jns    081dc0b0 <+0xda>
081dc085 +0x0af:  mov    -0x2c(%ebp),%eax
081dc088 +0x0b2:  mov    0x4(%eax),%eax
081dc08b +0x0b5:  movl   $0x0,0xc(%esp)
081dc093 +0x0bd:  mov    %eax,0x8(%esp)
081dc097 +0x0c1:  movl   $&_ZZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081dc09f +0x0c9:  movl   $0x4b3c,(%esp)
081dc0a6 +0x0d0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dc0ab +0x0d5:  jmp    081dc192 <+0x1bc>
081dc0b0 +0x0da:  mov    0xc(%ebp),%eax
081dc0b3 +0x0dd:  mov    %eax,(%esp)
081dc0b6 +0x0e0:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081dc0bb +0x0e5:  mov    %eax,-0x20(%ebp)
081dc0be +0x0e8:  cmpl   $0x0,-0x20(%ebp)
081dc0c2 +0x0ec:  jne    081dc0d8 <+0x102>
081dc0c4 +0x0ee:  mov    -0x2c(%ebp),%eax
081dc0c7 +0x0f1:  movl   $0x13,0x4(%eax)
081dc0ce +0x0f8:  mov    $0x0,%eax
081dc0d3 +0x0fd:  jmp    081dc192 <+0x1bc>
081dc0d8 +0x102:  mov    -0x28(%ebp),%eax
081dc0db +0x105:  movzbl 0x13(%eax),%eax
081dc0df +0x109:  movzbl %al,%eax
081dc0e2 +0x10c:  mov    %eax,-0x40(%ebp)
081dc0e5 +0x10f:  mov    -0x28(%ebp),%eax
081dc0e8 +0x112:  movzwl 0x11(%eax),%eax
081dc0ec +0x116:  cwtl
081dc0ed +0x117:  mov    %eax,-0x3c(%ebp)
081dc0f0 +0x11a:  mov    -0x28(%ebp),%eax
081dc0f3 +0x11d:  movzwl 0xf(%eax),%eax
081dc0f7 +0x121:  movswl %ax,%edi
081dc0fa +0x124:  mov    -0x28(%ebp),%eax
081dc0fd +0x127:  movzbl 0xe(%eax),%eax
081dc101 +0x12b:  movzbl %al,%esi
081dc104 +0x12e:  mov    -0x28(%ebp),%eax
081dc107 +0x131:  movzbl 0xd(%eax),%eax
081dc10b +0x135:  movzbl %al,%ebx
081dc10e +0x138:  mov    -0x20(%ebp),%eax
081dc111 +0x13b:  mov    %eax,(%esp)
081dc114 +0x13e:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc119 +0x143:  movl   $0x0,0x18(%esp)
081dc121 +0x14b:  mov    -0x40(%ebp),%edx
081dc124 +0x14e:  mov    %edx,0x14(%esp)
081dc128 +0x152:  mov    -0x3c(%ebp),%edx
081dc12b +0x155:  mov    %edx,0x10(%esp)
081dc12f +0x159:  mov    %edi,0xc(%esp)
081dc133 +0x15d:  mov    %esi,0x8(%esp)
081dc137 +0x161:  mov    %ebx,0x4(%esp)
081dc13b +0x165:  mov    %eax,(%esp)
081dc13e +0x168:  call   085bb85c <_ZN14CPartyTelePort17set_teleport_dataEhhsshc>  ; CPartyTelePort::set_teleport_data(unsigned char, unsigned char, short, short, unsigned char, char)
081dc143 +0x16d:  mov    0xc(%ebp),%eax
081dc146 +0x170:  mov    %eax,0x4(%esp)
081dc14a +0x174:  mov    -0x20(%ebp),%eax
081dc14d +0x177:  mov    %eax,(%esp)
081dc150 +0x17a:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
081dc155 +0x17f:  mov    %eax,-0x1c(%ebp)
081dc158 +0x182:  mov    -0x20(%ebp),%eax
081dc15b +0x185:  mov    %eax,(%esp)
081dc15e +0x188:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc163 +0x18d:  movl   $0x1,0x8(%esp)
081dc16b +0x195:  mov    -0x1c(%ebp),%edx
081dc16e +0x198:  mov    %edx,0x4(%esp)
081dc172 +0x19c:  mov    %eax,(%esp)
081dc175 +0x19f:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
081dc17a +0x1a4:  mov    -0x20(%ebp),%eax
081dc17d +0x1a7:  mov    %eax,(%esp)
081dc180 +0x1aa:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc185 +0x1af:  mov    %eax,(%esp)
081dc188 +0x1b2:  call   085bbb08 <_ZN14CPartyTelePort24check_cur_teleport_stateEv>  ; CPartyTelePort::check_cur_teleport_state()
081dc18d +0x1b7:  mov    $0x0,%eax
081dc192 +0x1bc:  add    $0x5c,%esp
081dc195 +0x1bf:  pop    %ebx
081dc196 +0x1c0:  pop    %esi
081dc197 +0x1c1:  pop    %edi
081dc198 +0x1c2:  pop    %ebp
081dc199 +0x1c3:  ret
```

## 反编译 C

```c
// Dispatcher_PartyTeleport::process @ 0x81dbfd6

/* Dispatcher_PartyTeleport::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PartyTeleport::process
          (Dispatcher_PartyTeleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  MSG_BASE MVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  CParty *this_00;
  CPartyTelePort *pCVar8;
  
  uVar6 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar6;
  *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
  uVar6 = CUser::get_aura_avatar_option_value(param_1,0);
  *(undefined4 *)(param_3 + 0xc) = uVar6;
  iVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar7 < *(int *)(param_3 + 0xc)) {
    *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) - iVar7;
  }
  else {
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar6 = LineFunc(0x4b3c,
                       "virtual int Dispatcher_PartyTeleport::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (CParty *)CUser::GetParty(param_1);
      if (this_00 == (CParty *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x13;
        uVar6 = 0;
      }
      else {
        MVar1 = param_2[0x13];
        sVar4 = *(short *)(param_2 + 0x11);
        sVar5 = *(short *)(param_2 + 0xf);
        MVar2 = param_2[0xe];
        MVar3 = param_2[0xd];
        pCVar8 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
        CPartyTelePort::set_teleport_data
                  (pCVar8,(uchar)MVar3,(uchar)MVar2,sVar5,sVar4,(uchar)MVar1,'\0');
        iVar7 = CParty::GetMemberSlotNo(this_00,param_1);
        pCVar8 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
        CPartyTelePort::set_teleport_member_state(pCVar8,iVar7,'\x01');
        pCVar8 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
        CPartyTelePort::check_cur_teleport_state(pCVar8);
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
