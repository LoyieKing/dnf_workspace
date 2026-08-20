# GoldPickupItem

`_ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item`

`WongWork::CBossStage::GoldPickupItem(CUser*, unsigned int, map_item const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814f0e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814f0e6  _ZN8WongWork10CBossStage14GoldPickupItemEP5CUserjRK8map_item
#           WongWork::CBossStage::GoldPickupItem(CUser*, unsigned int, map_item const&)
# range [0x0814f0e6, 0x0814f425]
0814f0e6 +0x000:  push   %ebp
0814f0e7 +0x001:  mov    %esp,%ebp
0814f0e9 +0x003:  push   %esi
0814f0ea +0x004:  push   %ebx
0814f0eb +0x005:  sub    $0x60,%esp
0814f0ee +0x008:  movl   $0x0,-0x34(%ebp)
0814f0f5 +0x00f:  movl   $0x0,-0x1c(%ebp)
0814f0fc +0x016:  jmp    0814f115 <+0x2f>
0814f0fe +0x018:  mov    -0x1c(%ebp),%eax
0814f101 +0x01b:  mov    0x8(%ebp),%edx
0814f104 +0x01e:  movzbl 0xd(%edx,%eax,1),%eax
0814f109 +0x023:  test   %al,%al
0814f10b +0x025:  je     0814f111 <+0x2b>
0814f10d +0x027:  addl   $0x1,-0x34(%ebp)
0814f111 +0x02b:  addl   $0x1,-0x1c(%ebp)
0814f115 +0x02f:  cmpl   $0x3,-0x1c(%ebp)
0814f119 +0x033:  setle  %al
0814f11c +0x036:  test   %al,%al
0814f11e +0x038:  jne    0814f0fe <+0x18>
0814f120 +0x03a:  lea    -0x44(%ebp),%eax
0814f123 +0x03d:  mov    %eax,(%esp)
0814f126 +0x040:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814f12b +0x045:  lea    -0x44(%ebp),%eax
0814f12e +0x048:  mov    %eax,(%esp)
0814f131 +0x04b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814f136 +0x050:  cmpl   $0x0,-0x34(%ebp)
0814f13a +0x054:  jne    0814f1ac <+0xc6>
0814f13c +0x056:  movl   $0x2e,0x8(%esp)
0814f144 +0x05e:  movl   $0x1,0x4(%esp)
0814f14c +0x066:  lea    -0x44(%ebp),%eax
0814f14f +0x069:  mov    %eax,(%esp)
0814f152 +0x06c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814f157 +0x071:  movl   $0x0,0x4(%esp)
0814f15f +0x079:  lea    -0x44(%ebp),%eax
0814f162 +0x07c:  mov    %eax,(%esp)
0814f165 +0x07f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f16a +0x084:  movl   $0x15,0x4(%esp)
0814f172 +0x08c:  lea    -0x44(%ebp),%eax
0814f175 +0x08f:  mov    %eax,(%esp)
0814f178 +0x092:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f17d +0x097:  movl   $0x1,0x4(%esp)
0814f185 +0x09f:  lea    -0x44(%ebp),%eax
0814f188 +0x0a2:  mov    %eax,(%esp)
0814f18b +0x0a5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814f190 +0x0aa:  lea    -0x44(%ebp),%eax
0814f193 +0x0ad:  mov    %eax,0x4(%esp)
0814f197 +0x0b1:  mov    0xc(%ebp),%eax
0814f19a +0x0b4:  mov    %eax,(%esp)
0814f19d +0x0b7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0814f1a2 +0x0bc:  mov    $0x0,%ebx
0814f1a7 +0x0c1:  jmp    0814f412 <+0x32c>
0814f1ac +0x0c6:  mov    0x14(%ebp),%eax
0814f1af +0x0c9:  add    $0x10,%eax
0814f1b2 +0x0cc:  mov    %eax,(%esp)
0814f1b5 +0x0cf:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0814f1ba +0x0d4:  mov    %eax,-0x30(%ebp)
0814f1bd +0x0d7:  mov    -0x30(%ebp),%eax
0814f1c0 +0x0da:  mov    %eax,%edx
0814f1c2 +0x0dc:  sar    $0x1f,%edx
0814f1c5 +0x0df:  idivl  -0x34(%ebp)
0814f1c8 +0x0e2:  mov    %eax,-0x2c(%ebp)
0814f1cb +0x0e5:  mov    -0x30(%ebp),%eax
0814f1ce +0x0e8:  mov    %eax,%edx
0814f1d0 +0x0ea:  sar    $0x1f,%edx
0814f1d3 +0x0ed:  idivl  -0x34(%ebp)
0814f1d6 +0x0f0:  mov    %edx,-0x28(%ebp)
0814f1d9 +0x0f3:  mov    -0x28(%ebp),%eax
0814f1dc +0x0f6:  mov    -0x2c(%ebp),%edx
0814f1df +0x0f9:  lea    (%edx,%eax,1),%eax
0814f1e2 +0x0fc:  mov    %eax,-0x24(%ebp)
0814f1e5 +0x0ff:  mov    -0x2c(%ebp),%eax
0814f1e8 +0x102:  mov    %eax,-0x20(%ebp)
0814f1eb +0x105:  movl   $0x27,0x8(%esp)
0814f1f3 +0x10d:  movl   $0x0,0x4(%esp)
0814f1fb +0x115:  lea    -0x44(%ebp),%eax
0814f1fe +0x118:  mov    %eax,(%esp)
0814f201 +0x11b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814f206 +0x120:  mov    0x10(%ebp),%eax
0814f209 +0x123:  mov    %eax,0x4(%esp)
0814f20d +0x127:  lea    -0x44(%ebp),%eax
0814f210 +0x12a:  mov    %eax,(%esp)
0814f213 +0x12d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814f218 +0x132:  mov    0xc(%ebp),%eax
0814f21b +0x135:  mov    %eax,(%esp)
0814f21e +0x138:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0814f223 +0x13d:  movzwl %ax,%eax
0814f226 +0x140:  mov    %eax,0x4(%esp)
0814f22a +0x144:  lea    -0x44(%ebp),%eax
0814f22d +0x147:  mov    %eax,(%esp)
0814f230 +0x14a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0814f235 +0x14f:  movl   $0x0,-0x18(%ebp)
0814f23c +0x156:  jmp    0814f39b <+0x2b5>
0814f241 +0x15b:  movl   $0x0,-0x14(%ebp)
0814f248 +0x162:  mov    0x8(%ebp),%eax
0814f24b +0x165:  mov    0x4(%eax),%eax
0814f24e +0x168:  mov    -0x18(%ebp),%edx
0814f251 +0x16b:  mov    %edx,0x4(%esp)
0814f255 +0x16f:  mov    %eax,(%esp)
0814f258 +0x172:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0814f25d +0x177:  mov    %eax,-0x14(%ebp)
0814f260 +0x17a:  cmpl   $0x0,-0x14(%ebp)
0814f264 +0x17e:  je     0814f286 <+0x1a0>
0814f266 +0x180:  mov    0x8(%ebp),%eax
0814f269 +0x183:  mov    0x4(%eax),%eax
0814f26c +0x186:  mov    -0x18(%ebp),%edx
0814f26f +0x189:  mov    %edx,0x4(%esp)
0814f273 +0x18d:  mov    %eax,(%esp)
0814f276 +0x190:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0814f27b +0x195:  test   %al,%al
0814f27d +0x197:  je     0814f286 <+0x1a0>
0814f27f +0x199:  mov    $0x1,%eax
0814f284 +0x19e:  jmp    0814f28b <+0x1a5>
0814f286 +0x1a0:  mov    $0x0,%eax
0814f28b +0x1a5:  test   %al,%al
0814f28d +0x1a7:  je     0814f371 <+0x28b>
0814f293 +0x1ad:  movl   $0x1,0x4(%esp)
0814f29b +0x1b5:  lea    -0x44(%ebp),%eax
0814f29e +0x1b8:  mov    %eax,(%esp)
0814f2a1 +0x1bb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f2a6 +0x1c0:  mov    -0x14(%ebp),%eax
0814f2a9 +0x1c3:  cmp    0xc(%ebp),%eax
0814f2ac +0x1c6:  jne    0814f2b3 <+0x1cd>
0814f2ae +0x1c8:  mov    -0x24(%ebp),%eax
0814f2b1 +0x1cb:  jmp    0814f2b6 <+0x1d0>
0814f2b3 +0x1cd:  mov    -0x20(%ebp),%eax
0814f2b6 +0x1d0:  mov    %eax,-0x10(%ebp)
0814f2b9 +0x1d3:  mov    -0x14(%ebp),%eax
0814f2bc +0x1d6:  mov    %eax,(%esp)
0814f2bf +0x1d9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0814f2c4 +0x1de:  movl   $0x0,0x10(%esp)
0814f2cc +0x1e6:  movl   $0x1,0xc(%esp)
0814f2d4 +0x1ee:  movl   $0x4,0x8(%esp)
0814f2dc +0x1f6:  mov    -0x10(%ebp),%edx
0814f2df +0x1f9:  mov    %edx,0x4(%esp)
0814f2e3 +0x1fd:  mov    %eax,(%esp)
0814f2e6 +0x200:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
0814f2eb +0x205:  mov    %eax,-0xc(%ebp)
0814f2ee +0x208:  mov    -0xc(%ebp),%eax
0814f2f1 +0x20b:  cmp    -0x10(%ebp),%eax
0814f2f4 +0x20e:  jge    0814f324 <+0x23e>
0814f2f6 +0x210:  cmpl   $0x0,-0xc(%ebp)
0814f2fa +0x214:  jns    0814f303 <+0x21d>
0814f2fc +0x216:  movl   $0x0,-0xc(%ebp)
0814f303 +0x21d:  mov    -0xc(%ebp),%edx
0814f306 +0x220:  mov    -0x10(%ebp),%eax
0814f309 +0x223:  mov    %edx,0xc(%esp)
0814f30d +0x227:  mov    %eax,0x8(%esp)
0814f311 +0x22b:  movl   $0x0,0x4(%esp)
0814f319 +0x233:  mov    -0x14(%ebp),%eax
0814f31c +0x236:  mov    %eax,(%esp)
0814f31f +0x239:  call   0867c844 <_ZN5CUser19SendMoneyFullReasonE22ENUM_MONEY_FULL_REASONmm>  ; CUser::SendMoneyFullReason(ENUM_MONEY_FULL_REASON, unsigned long, unsigned long)
0814f324 +0x23e:  mov    -0xc(%ebp),%eax
0814f327 +0x241:  mov    %eax,0x4(%esp)
0814f32b +0x245:  lea    -0x44(%ebp),%eax
0814f32e +0x248:  mov    %eax,(%esp)
0814f331 +0x24b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814f336 +0x250:  movl   $0x1,0x4(%esp)
0814f33e +0x258:  lea    -0x44(%ebp),%eax
0814f341 +0x25b:  mov    %eax,(%esp)
0814f344 +0x25e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f349 +0x263:  movl   $0x0,0x4(%esp)
0814f351 +0x26b:  lea    -0x44(%ebp),%eax
0814f354 +0x26e:  mov    %eax,(%esp)
0814f357 +0x271:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814f35c +0x276:  movl   $0x0,0x4(%esp)
0814f364 +0x27e:  lea    -0x44(%ebp),%eax
0814f367 +0x281:  mov    %eax,(%esp)
0814f36a +0x284:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814f36f +0x289:  jmp    0814f397 <+0x2b1>
0814f371 +0x28b:  movl   $0x0,0x4(%esp)
0814f379 +0x293:  lea    -0x44(%ebp),%eax
0814f37c +0x296:  mov    %eax,(%esp)
0814f37f +0x299:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814f384 +0x29e:  movl   $0x0,0x4(%esp)
0814f38c +0x2a6:  lea    -0x44(%ebp),%eax
0814f38f +0x2a9:  mov    %eax,(%esp)
0814f392 +0x2ac:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0814f397 +0x2b1:  addl   $0x1,-0x18(%ebp)
0814f39b +0x2b5:  cmpl   $0x3,-0x18(%ebp)
0814f39f +0x2b9:  setle  %al
0814f3a2 +0x2bc:  test   %al,%al
0814f3a4 +0x2be:  jne    0814f241 <+0x15b>
0814f3aa +0x2c4:  mov    0x10(%ebp),%eax
0814f3ad +0x2c7:  mov    %eax,-0x38(%ebp)
0814f3b0 +0x2ca:  mov    0x8(%ebp),%eax
0814f3b3 +0x2cd:  lea    0xa18(%eax),%edx
0814f3b9 +0x2d3:  lea    -0x38(%ebp),%eax
0814f3bc +0x2d6:  mov    %eax,0x4(%esp)
0814f3c0 +0x2da:  mov    %edx,(%esp)
0814f3c3 +0x2dd:  call   08152c18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x254d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x254d
0814f3c8 +0x2e2:  movl   $0x1,0x4(%esp)
0814f3d0 +0x2ea:  lea    -0x44(%ebp),%eax
0814f3d3 +0x2ed:  mov    %eax,(%esp)
0814f3d6 +0x2f0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0814f3db +0x2f5:  mov    0x8(%ebp),%eax
0814f3de +0x2f8:  mov    0x4(%eax),%eax
0814f3e1 +0x2fb:  lea    -0x44(%ebp),%edx
0814f3e4 +0x2fe:  mov    %edx,0x4(%esp)
0814f3e8 +0x302:  mov    %eax,(%esp)
0814f3eb +0x305:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0814f3f0 +0x30a:  mov    $0x1,%ebx
0814f3f5 +0x30f:  jmp    0814f412 <+0x32c>
0814f3f7 +0x311:  mov    %edx,%ebx
0814f3f9 +0x313:  mov    %eax,%esi
0814f3fb +0x315:  lea    -0x44(%ebp),%eax
0814f3fe +0x318:  mov    %eax,(%esp)
0814f401 +0x31b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814f406 +0x320:  mov    %esi,%eax
0814f408 +0x322:  mov    %ebx,%edx
0814f40a +0x324:  mov    %eax,(%esp)
0814f40d +0x327:  call   08ae3750 <_Unwind_Resume>
0814f412 +0x32c:  lea    -0x44(%ebp),%eax
0814f415 +0x32f:  mov    %eax,(%esp)
0814f418 +0x332:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814f41d +0x337:  mov    %ebx,%eax
0814f41f +0x339:  add    $0x60,%esp
0814f422 +0x33c:  pop    %ebx
0814f423 +0x33d:  pop    %esi
0814f424 +0x33e:  pop    %ebp
0814f425 +0x33f:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::GoldPickupItem @ 0x814f0e6

/* WongWork::CBossStage::GoldPickupItem(CUser*, unsigned int, map_item const&) */

undefined4 __thiscall
WongWork::CBossStage::GoldPickupItem(CBossStage *this,CUser *param_1,uint param_2,map_item *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  PacketGuard local_48 [12];
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CUserCharacInfo *local_18;
  int local_14;
  int local_10;
  
  local_38 = 0;
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    if (this[local_20 + 0xd] != (CBossStage)0x0) {
      local_38 = local_38 + 1;
    }
  }
  PacketGuard::PacketGuard(local_48);
                    /* try { // try from 0814f131 to 0814f3ef has its CatchHandler @ 0814f3f7 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
  if (local_38 == 0) {
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x2e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send(param_1,local_48);
    uVar5 = 0;
  }
  else {
    local_34 = Inven_Item::get_add_info((Inven_Item *)(param_3 + 0x10));
    local_30 = local_34 / local_38;
    local_2c = local_34 % local_38;
    local_28 = local_30 + local_2c;
    local_24 = local_30;
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x27);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,param_2);
    uVar3 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,uVar3 & 0xffff);
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      local_18 = (CUserCharacInfo *)0x0;
      local_18 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_1c);
      if ((local_18 == (CUserCharacInfo *)0x0) ||
         (cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_1c), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
        local_14 = local_24;
        if (local_18 == (CUserCharacInfo *)param_1) {
          local_14 = local_28;
        }
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(local_18);
        local_10 = CInventory::gain_money(pCVar4,local_14,4,1,0);
        if (local_10 < local_14) {
          if (local_10 < 0) {
            local_10 = 0;
          }
          CUser::SendMoneyFullReason((CUser *)local_18,0,local_14,local_10);
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,0);
      }
    }
    local_3c = param_2;
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
              ((int *)(this + 0xa18));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CParty::send_to_party(*(CParty **)(this + 4),local_48);
    uVar5 = 1;
  }
  PacketGuard::~PacketGuard(local_48);
  return uVar5;
}
```
