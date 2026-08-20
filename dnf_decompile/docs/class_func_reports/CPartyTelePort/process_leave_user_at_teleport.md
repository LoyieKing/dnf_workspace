# process_leave_user_at_teleport

`_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser`

`CPartyTelePort::process_leave_user_at_teleport(CUser*)`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bc0a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bc0a0  _ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser
#           CPartyTelePort::process_leave_user_at_teleport(CUser*)
# range [0x085bc0a0, 0x085bc251]
085bc0a0 +0x000:  push   %ebp
085bc0a1 +0x001:  mov    %esp,%ebp
085bc0a3 +0x003:  sub    $0x28,%esp
085bc0a6 +0x006:  mov    0x8(%ebp),%eax
085bc0a9 +0x009:  mov    (%eax),%eax
085bc0ab +0x00b:  test   %eax,%eax
085bc0ad +0x00d:  je     085bc23c <+0x19c>
085bc0b3 +0x013:  mov    0x8(%ebp),%eax
085bc0b6 +0x016:  mov    %eax,(%esp)
085bc0b9 +0x019:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
085bc0be +0x01e:  shr    $0x7,%al
085bc0c1 +0x021:  test   %al,%al
085bc0c3 +0x023:  jne    085bc23f <+0x19f>
085bc0c9 +0x029:  mov    0x8(%ebp),%eax
085bc0cc +0x02c:  mov    %eax,(%esp)
085bc0cf +0x02f:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
085bc0d4 +0x034:  cmp    $0x3,%al
085bc0d6 +0x036:  setg   %al
085bc0d9 +0x039:  test   %al,%al
085bc0db +0x03b:  jne    085bc242 <+0x1a2>
085bc0e1 +0x041:  mov    0xc(%ebp),%eax
085bc0e4 +0x044:  mov    %eax,(%esp)
085bc0e7 +0x047:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
085bc0ec +0x04c:  cmp    $0x3,%eax
085bc0ef +0x04f:  setne  %al
085bc0f2 +0x052:  test   %al,%al
085bc0f4 +0x054:  jne    085bc245 <+0x1a5>
085bc0fa +0x05a:  mov    0x8(%ebp),%eax
085bc0fd +0x05d:  mov    %eax,(%esp)
085bc100 +0x060:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
085bc105 +0x065:  cmp    $0xff,%al
085bc107 +0x067:  setne  %al
085bc10a +0x06a:  test   %al,%al
085bc10c +0x06c:  je     085bc24f <+0x1af>
085bc112 +0x072:  mov    0x8(%ebp),%eax
085bc115 +0x075:  mov    (%eax),%eax
085bc117 +0x077:  mov    0xc(%ebp),%edx
085bc11a +0x07a:  mov    %edx,0x4(%esp)
085bc11e +0x07e:  mov    %eax,(%esp)
085bc121 +0x081:  call   0859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>  ; CParty::GetMemberSlotNo(CUser const*) const
085bc126 +0x086:  mov    %eax,-0xc(%ebp)
085bc129 +0x089:  cmpl   $0x0,-0xc(%ebp)
085bc12d +0x08d:  js     085bc248 <+0x1a8>
085bc133 +0x093:  cmpl   $0x3,-0xc(%ebp)
085bc137 +0x097:  jg     085bc24b <+0x1ab>
085bc13d +0x09d:  mov    0x8(%ebp),%eax
085bc140 +0x0a0:  mov    (%eax),%eax
085bc142 +0x0a2:  mov    -0xc(%ebp),%edx
085bc145 +0x0a5:  mov    %edx,0x4(%esp)
085bc149 +0x0a9:  mov    %eax,(%esp)
085bc14c +0x0ac:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bc151 +0x0b1:  xor    $0x1,%eax
085bc154 +0x0b4:  test   %al,%al
085bc156 +0x0b6:  jne    085bc24e <+0x1ae>
085bc15c +0x0bc:  mov    0x8(%ebp),%eax
085bc15f +0x0bf:  mov    (%eax),%eax
085bc161 +0x0c1:  mov    %eax,(%esp)
085bc164 +0x0c4:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085bc169 +0x0c9:  cmp    0xc(%ebp),%eax
085bc16c +0x0cc:  sete   %al
085bc16f +0x0cf:  test   %al,%al
085bc171 +0x0d1:  je     085bc1c3 <+0x123>
085bc173 +0x0d3:  movl   $0x0,0x8(%esp)
085bc17b +0x0db:  mov    -0xc(%ebp),%eax
085bc17e +0x0de:  mov    %eax,0x4(%esp)
085bc182 +0x0e2:  mov    0x8(%ebp),%eax
085bc185 +0x0e5:  mov    %eax,(%esp)
085bc188 +0x0e8:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
085bc18d +0x0ed:  movl   $0x2,0x4(%esp)
085bc195 +0x0f5:  mov    0x8(%ebp),%eax
085bc198 +0x0f8:  mov    %eax,(%esp)
085bc19b +0x0fb:  call   0822d7fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ea4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ea4
085bc1a0 +0x100:  movl   $0x8,0x4(%esp)
085bc1a8 +0x108:  mov    0x8(%ebp),%eax
085bc1ab +0x10b:  mov    %eax,(%esp)
085bc1ae +0x10e:  call   085bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>  ; CPartyTelePort::send_teleport_status(unsigned char)
085bc1b3 +0x113:  mov    0x8(%ebp),%eax
085bc1b6 +0x116:  mov    %eax,(%esp)
085bc1b9 +0x119:  call   085bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>  ; CPartyTelePort::reset_teleport_data()
085bc1be +0x11e:  jmp    085bc24f <+0x1af>
085bc1c3 +0x123:  movl   $0x4,0x8(%esp)
085bc1cb +0x12b:  mov    -0xc(%ebp),%eax
085bc1ce +0x12e:  mov    %eax,0x4(%esp)
085bc1d2 +0x132:  mov    0x8(%ebp),%eax
085bc1d5 +0x135:  mov    %eax,(%esp)
085bc1d8 +0x138:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
085bc1dd +0x13d:  mov    0x8(%ebp),%eax
085bc1e0 +0x140:  mov    %eax,(%esp)
085bc1e3 +0x143:  call   085bbb08 <_ZN14CPartyTelePort24check_cur_teleport_stateEv>  ; CPartyTelePort::check_cur_teleport_state()
085bc1e8 +0x148:  movl   $0x0,0x8(%esp)
085bc1f0 +0x150:  mov    -0xc(%ebp),%eax
085bc1f3 +0x153:  mov    %eax,0x4(%esp)
085bc1f7 +0x157:  mov    0x8(%ebp),%eax
085bc1fa +0x15a:  mov    %eax,(%esp)
085bc1fd +0x15d:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
085bc202 +0x162:  movl   $0x0,0x4(%esp)
085bc20a +0x16a:  mov    0x8(%ebp),%eax
085bc20d +0x16d:  mov    %eax,(%esp)
085bc210 +0x170:  call   085bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>  ; CPartyTelePort::send_teleport_status(unsigned char)
085bc215 +0x175:  movl   $0x4,0x8(%esp)
085bc21d +0x17d:  mov    -0xc(%ebp),%eax
085bc220 +0x180:  mov    %eax,0x4(%esp)
085bc224 +0x184:  mov    0x8(%ebp),%eax
085bc227 +0x187:  mov    %eax,(%esp)
085bc22a +0x18a:  call   085bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>  ; CPartyTelePort::set_teleport_member_state(int, char)
085bc22f +0x18f:  mov    0x8(%ebp),%eax
085bc232 +0x192:  mov    %eax,(%esp)
085bc235 +0x195:  call   085bbbb8 <_ZN14CPartyTelePort16process_teleportEv>  ; CPartyTelePort::process_teleport()
085bc23a +0x19a:  jmp    085bc24f <+0x1af>
085bc23c +0x19c:  nop
085bc23d +0x19d:  jmp    085bc24f <+0x1af>
085bc23f +0x19f:  nop
085bc240 +0x1a0:  jmp    085bc24f <+0x1af>
085bc242 +0x1a2:  nop
085bc243 +0x1a3:  jmp    085bc24f <+0x1af>
085bc245 +0x1a5:  nop
085bc246 +0x1a6:  jmp    085bc24f <+0x1af>
085bc248 +0x1a8:  nop
085bc249 +0x1a9:  jmp    085bc24f <+0x1af>
085bc24b +0x1ab:  nop
085bc24c +0x1ac:  jmp    085bc24f <+0x1af>
085bc24e +0x1ae:  nop
085bc24f +0x1af:  leave
085bc250 +0x1b0:  ret
085bc251 +0x1b1:  nop
```

## 反编译 C

```c
// CPartyTelePort::process_leave_user_at_teleport @ 0x85bc0a0

/* CPartyTelePort::process_leave_user_at_teleport(CUser*) */

void __thiscall CPartyTelePort::process_leave_user_at_teleport(CPartyTelePort *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CUser *pCVar3;
  
  if (((((*(int *)this != 0) && (cVar1 = get_teleport_state(this), -1 < cVar1)) &&
       (cVar1 = get_teleport_state(this), cVar1 < '\x04')) &&
      ((iVar2 = CUser::get_state(param_1), iVar2 == 3 &&
       (cVar1 = get_teleport_state(this), cVar1 != -1)))) &&
     ((iVar2 = CParty::GetMemberSlotNo(*(CParty **)this,param_1), -1 < iVar2 &&
      ((iVar2 < 4 && (cVar1 = CParty::checkValidUser(*(CParty **)this,iVar2), cVar1 == '\x01'))))))
  {
    pCVar3 = (CUser *)CParty::getManager(*(CParty **)this);
    if (pCVar3 == param_1) {
      set_teleport_member_state(this,iVar2,'\0');
      set_teleport_state(this,'\x02');
      send_teleport_status(this,'\b');
      reset_teleport_data(this);
    }
    else {
      set_teleport_member_state(this,iVar2,'\x04');
      check_cur_teleport_state(this);
      set_teleport_member_state(this,iVar2,'\0');
      send_teleport_status(this,'\0');
      set_teleport_member_state(this,iVar2,'\x04');
      process_teleport(this);
    }
  }
  return;
}
```
