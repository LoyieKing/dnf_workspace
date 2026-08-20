# send_charac_visible_data

`_ZN5CUser24send_charac_visible_dataEv`

`CUser::send_charac_visible_data()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868bf98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868bf98  _ZN5CUser24send_charac_visible_dataEv
#           CUser::send_charac_visible_data()
# range [0x0868bf98, 0x0868c16f]
0868bf98 +0x000:  push   %ebp
0868bf99 +0x001:  mov    %esp,%ebp
0868bf9b +0x003:  push   %esi
0868bf9c +0x004:  push   %ebx
0868bf9d +0x005:  sub    $0x30,%esp
0868bfa0 +0x008:  lea    -0x1c(%ebp),%eax
0868bfa3 +0x00b:  mov    %eax,(%esp)
0868bfa6 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868bfab +0x013:  movl   $0x164,0x8(%esp)
0868bfb3 +0x01b:  movl   $0x0,0x4(%esp)
0868bfbb +0x023:  lea    -0x1c(%ebp),%eax
0868bfbe +0x026:  mov    %eax,(%esp)
0868bfc1 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868bfc6 +0x02e:  mov    0x8(%ebp),%eax
0868bfc9 +0x031:  mov    %eax,(%esp)
0868bfcc +0x034:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0868bfd1 +0x039:  movzwl %ax,%eax
0868bfd4 +0x03c:  mov    %eax,0x4(%esp)
0868bfd8 +0x040:  lea    -0x1c(%ebp),%eax
0868bfdb +0x043:  mov    %eax,(%esp)
0868bfde +0x046:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0868bfe3 +0x04b:  mov    0x8(%ebp),%eax
0868bfe6 +0x04e:  mov    %eax,(%esp)
0868bfe9 +0x051:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
0868bfee +0x056:  movsbl %al,%eax
0868bff1 +0x059:  mov    %eax,0x4(%esp)
0868bff5 +0x05d:  lea    -0x1c(%ebp),%eax
0868bff8 +0x060:  mov    %eax,(%esp)
0868bffb +0x063:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868c000 +0x068:  movl   $0x1,0x4(%esp)
0868c008 +0x070:  lea    -0x1c(%ebp),%eax
0868c00b +0x073:  mov    %eax,(%esp)
0868c00e +0x076:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868c013 +0x07b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0868c018 +0x080:  mov    %eax,(%esp)
0868c01b +0x083:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0868c020 +0x088:  test   %al,%al
0868c022 +0x08a:  je     0868c03d <+0xa5>
0868c024 +0x08c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0868c029 +0x091:  lea    -0x1c(%ebp),%edx
0868c02c +0x094:  mov    %edx,0x4(%esp)
0868c030 +0x098:  mov    %eax,(%esp)
0868c033 +0x09b:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0868c038 +0x0a0:  jmp    0868c15e <+0x1c6>
0868c03d +0x0a5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0868c042 +0x0aa:  mov    0x8(%ebp),%edx
0868c045 +0x0ad:  mov    %edx,0x4(%esp)
0868c049 +0x0b1:  mov    %eax,(%esp)
0868c04c +0x0b4:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
0868c051 +0x0b9:  mov    %eax,-0x10(%ebp)
0868c054 +0x0bc:  cmpl   $0x0,-0x10(%ebp)
0868c058 +0x0c0:  je     0868c15e <+0x1c6>
0868c05e +0x0c6:  movl   $0x0,0x4(%esp)
0868c066 +0x0ce:  mov    0x8(%ebp),%eax
0868c069 +0x0d1:  mov    %eax,(%esp)
0868c06c +0x0d4:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0868c071 +0x0d9:  mov    %eax,%ebx
0868c073 +0x0db:  mov    -0x10(%ebp),%eax
0868c076 +0x0de:  mov    %eax,(%esp)
0868c079 +0x0e1:  call   086c3b58 <_ZN7Village13get_gate_areaEv>  ; Village::get_gate_area()
0868c07e +0x0e6:  cmp    %eax,%ebx
0868c080 +0x0e8:  sete   %al
0868c083 +0x0eb:  test   %al,%al
0868c085 +0x0ed:  je     0868c09e <+0x106>
0868c087 +0x0ef:  lea    -0x1c(%ebp),%eax
0868c08a +0x0f2:  mov    %eax,0x4(%esp)
0868c08e +0x0f6:  mov    0x8(%ebp),%eax
0868c091 +0x0f9:  mov    %eax,(%esp)
0868c094 +0x0fc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868c099 +0x101:  jmp    0868c15e <+0x1c6>
0868c09e +0x106:  mov    0x8(%ebp),%eax
0868c0a1 +0x109:  mov    %eax,(%esp)
0868c0a4 +0x10c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0868c0a9 +0x111:  cmp    $0x5,%eax
0868c0ac +0x114:  je     0868c105 <+0x16d>
0868c0ae +0x116:  cmp    $0x5,%eax
0868c0b1 +0x119:  jg     0868c0ba <+0x122>
0868c0b3 +0x11b:  cmp    $0x3,%eax
0868c0b6 +0x11e:  je     0868c0c4 <+0x12c>
0868c0b8 +0x120:  jmp    0868c12d <+0x195>
0868c0ba +0x122:  sub    $0x8,%eax
0868c0bd +0x125:  cmp    $0x2,%eax
0868c0c0 +0x128:  ja     0868c12d <+0x195>
0868c0c2 +0x12a:  jmp    0868c105 <+0x16d>
0868c0c4 +0x12c:  movl   $0x0,0x4(%esp)
0868c0cc +0x134:  mov    0x8(%ebp),%eax
0868c0cf +0x137:  mov    %eax,(%esp)
0868c0d2 +0x13a:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
0868c0d7 +0x13f:  mov    %eax,%ebx
0868c0d9 +0x141:  mov    0x8(%ebp),%eax
0868c0dc +0x144:  mov    %eax,(%esp)
0868c0df +0x147:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
0868c0e4 +0x14c:  movsbl %al,%esi
0868c0e7 +0x14f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0868c0ec +0x154:  lea    -0x1c(%ebp),%edx
0868c0ef +0x157:  mov    %edx,0xc(%esp)
0868c0f3 +0x15b:  mov    %ebx,0x8(%esp)
0868c0f7 +0x15f:  mov    %esi,0x4(%esp)
0868c0fb +0x163:  mov    %eax,(%esp)
0868c0fe +0x166:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
0868c103 +0x16b:  jmp    0868c15e <+0x1c6>
0868c105 +0x16d:  mov    0x8(%ebp),%eax
0868c108 +0x170:  mov    %eax,(%esp)
0868c10b +0x173:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0868c110 +0x178:  mov    %eax,-0xc(%ebp)
0868c113 +0x17b:  cmpl   $0x0,-0xc(%ebp)
0868c117 +0x17f:  je     0868c15e <+0x1c6>
0868c119 +0x181:  lea    -0x1c(%ebp),%eax
0868c11c +0x184:  mov    %eax,0x4(%esp)
0868c120 +0x188:  mov    -0xc(%ebp),%eax
0868c123 +0x18b:  mov    %eax,(%esp)
0868c126 +0x18e:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0868c12b +0x193:  jmp    0868c15e <+0x1c6>
0868c12d +0x195:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0868c132 +0x19a:  lea    -0x1c(%ebp),%edx
0868c135 +0x19d:  mov    %edx,0x4(%esp)
0868c139 +0x1a1:  mov    %eax,(%esp)
0868c13c +0x1a4:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0868c141 +0x1a9:  jmp    0868c15e <+0x1c6>
0868c143 +0x1ab:  mov    %edx,%ebx
0868c145 +0x1ad:  mov    %eax,%esi
0868c147 +0x1af:  lea    -0x1c(%ebp),%eax
0868c14a +0x1b2:  mov    %eax,(%esp)
0868c14d +0x1b5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868c152 +0x1ba:  mov    %esi,%eax
0868c154 +0x1bc:  mov    %ebx,%edx
0868c156 +0x1be:  mov    %eax,(%esp)
0868c159 +0x1c1:  call   08ae3750 <_Unwind_Resume>
0868c15e +0x1c6:  lea    -0x1c(%ebp),%eax
0868c161 +0x1c9:  mov    %eax,(%esp)
0868c164 +0x1cc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868c169 +0x1d1:  add    $0x30,%esp
0868c16c +0x1d4:  pop    %ebx
0868c16d +0x1d5:  pop    %esi
0868c16e +0x1d6:  pop    %ebp
0868c16f +0x1d7:  ret
```

## 反编译 C

```c
// CUser::send_charac_visible_data @ 0x868bf98

/* CUser::send_charac_visible_data() */

void __thiscall CUser::send_charac_visible_data(CUser *this)

{
  char cVar1;
  uint uVar2;
  GameWorld *pGVar3;
  int iVar4;
  int iVar5;
  PacketGuard local_20 [12];
  Village *local_14;
  CParty *local_10;
  
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0868bfc1 to 0868c140 has its CatchHandler @ 0868c143 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x164);
  uVar2 = get_unique_id(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,uVar2 & 0xffff);
  cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)cVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  pGVar3 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(pGVar3);
  if (cVar1 != '\0') {
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar3,local_20);
    goto LAB_0868c15e;
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  local_14 = (Village *)GameWorld::getUserVillage(pGVar3,this);
  if (local_14 == (Village *)0x0) goto LAB_0868c15e;
  iVar4 = get_area(this,false);
  iVar5 = Village::get_gate_area(local_14);
  if (iVar4 == iVar5) {
    Send(this,local_20);
    goto LAB_0868c15e;
  }
  iVar4 = get_state(this);
  if (iVar4 == 5) {
LAB_0868c105:
    local_10 = (CParty *)GetParty(this);
    if (local_10 != (CParty *)0x0) {
      CParty::send_to_party(local_10,local_20);
    }
  }
  else {
    if (iVar4 < 6) {
      if (iVar4 == 3) {
        iVar4 = get_area(this,false);
        cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this);
        pGVar3 = (GameWorld *)G_GameWorld();
        GameWorld::send_to_area(pGVar3,(int)cVar1,iVar4,local_20);
        goto LAB_0868c15e;
      }
    }
    else if (iVar4 - 8U < 3) goto LAB_0868c105;
    pGVar3 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar3,local_20);
  }
LAB_0868c15e:
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
