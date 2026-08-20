# Login

`_ZN15cUserHistoryLog5LoginEPKcS1_iihi`

`cUserHistoryLog::Login(char const*, char const*, int, int, unsigned char, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683d86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683d86  _ZN15cUserHistoryLog5LoginEPKcS1_iihi
#           cUserHistoryLog::Login(char const*, char const*, int, int, unsigned char, int)
# range [0x08683d86, 0x086840c3]
08683d86 +0x000:  push   %ebp
08683d87 +0x001:  mov    %esp,%ebp
08683d89 +0x003:  push   %edi
08683d8a +0x004:  push   %esi
08683d8b +0x005:  push   %ebx
08683d8c +0x006:  sub    $0xcc,%esp
08683d92 +0x00c:  mov    0x1c(%ebp),%eax
08683d95 +0x00f:  mov    %al,-0x6c(%ebp)
08683d98 +0x012:  movl   $0x0,-0x5c(%ebp)
08683d9f +0x019:  movl   $0x0,-0x58(%ebp)
08683da6 +0x020:  movl   $0x0,-0x54(%ebp)
08683dad +0x027:  movl   $0x0,-0x50(%ebp)
08683db4 +0x02e:  movl   $0x0,-0x4c(%ebp)
08683dbb +0x035:  movl   $0x0,-0x48(%ebp)
08683dc2 +0x03c:  movl   $0x0,-0x44(%ebp)
08683dc9 +0x043:  mov    0x8(%ebp),%eax
08683dcc +0x046:  mov    (%eax),%eax
08683dce +0x048:  mov    %eax,(%esp)
08683dd1 +0x04b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08683dd6 +0x050:  add    $0xda,%eax
08683ddb +0x055:  mov    %eax,(%esp)
08683dde +0x058:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08683de3 +0x05d:  mov    %eax,-0x58(%ebp)
08683de6 +0x060:  movl   $0xa,-0x30(%ebp)
08683ded +0x067:  jmp    08683ea3 <+0x11d>
08683df2 +0x06c:  mov    0x8(%ebp),%eax
08683df5 +0x06f:  mov    (%eax),%eax
08683df7 +0x071:  mov    %eax,(%esp)
08683dfa +0x074:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08683dff +0x079:  mov    -0x30(%ebp),%edx
08683e02 +0x07c:  mov    %edx,0x8(%esp)
08683e06 +0x080:  movl   $0x0,0x4(%esp)
08683e0e +0x088:  mov    %eax,(%esp)
08683e11 +0x08b:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08683e16 +0x090:  mov    %eax,-0x2c(%ebp)
08683e19 +0x093:  cmpl   $0x0,-0x2c(%ebp)
08683e1d +0x097:  je     08683e9e <+0x118>
08683e1f +0x099:  mov    -0x2c(%ebp),%eax
08683e22 +0x09c:  mov    0x2(%eax),%eax
08683e25 +0x09f:  test   %eax,%eax
08683e27 +0x0a1:  je     08683e9f <+0x119>
08683e29 +0x0a3:  cmpl   $0xa,-0x30(%ebp)
08683e2d +0x0a7:  jne    08683e4b <+0xc5>
08683e2f +0x0a9:  mov    -0x2c(%ebp),%eax
08683e32 +0x0ac:  mov    %eax,(%esp)
08683e35 +0x0af:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08683e3a +0x0b4:  movzbl %al,%eax
08683e3d +0x0b7:  mov    %eax,-0x54(%ebp)
08683e40 +0x0ba:  mov    -0x2c(%ebp),%eax
08683e43 +0x0bd:  mov    0x2(%eax),%eax
08683e46 +0x0c0:  mov    %eax,-0x50(%ebp)
08683e49 +0x0c3:  jmp    08683e5c <+0xd6>
08683e4b +0x0c5:  mov    -0x2c(%ebp),%eax
08683e4e +0x0c8:  mov    %eax,(%esp)
08683e51 +0x0cb:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08683e56 +0x0d0:  movzbl %al,%eax
08683e59 +0x0d3:  add    %eax,-0x4c(%ebp)
08683e5c +0x0d6:  mov    -0x2c(%ebp),%eax
08683e5f +0x0d9:  mov    0x2(%eax),%eax
08683e62 +0x0dc:  mov    %eax,%ebx
08683e64 +0x0de:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08683e69 +0x0e3:  mov    %ebx,0x4(%esp)
08683e6d +0x0e7:  mov    %eax,(%esp)
08683e70 +0x0ea:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08683e75 +0x0ef:  mov    %eax,-0x28(%ebp)
08683e78 +0x0f2:  cmpl   $0x0,-0x28(%ebp)
08683e7c +0x0f6:  je     08683e9f <+0x119>
08683e7e +0x0f8:  mov    -0x28(%ebp),%eax
08683e81 +0x0fb:  mov    %eax,(%esp)
08683e84 +0x0fe:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08683e89 +0x103:  mov    %eax,-0x24(%ebp)
08683e8c +0x106:  cmpl   $0x0,-0x24(%ebp)
08683e90 +0x10a:  je     08683e98 <+0x112>
08683e92 +0x10c:  cmpl   $0x1,-0x24(%ebp)
08683e96 +0x110:  jne    08683e9f <+0x119>
08683e98 +0x112:  addl   $0x1,-0x48(%ebp)
08683e9c +0x116:  jmp    08683e9f <+0x119>
08683e9e +0x118:  nop
08683e9f +0x119:  addl   $0x1,-0x30(%ebp)
08683ea3 +0x11d:  cmpl   $0x13,-0x30(%ebp)
08683ea7 +0x121:  setle  %al
08683eaa +0x124:  test   %al,%al
08683eac +0x126:  jne    08683df2 <+0x6c>
08683eb2 +0x12c:  movl   $0x0,-0x20(%ebp)
08683eb9 +0x133:  jmp    08683efd <+0x177>
08683ebb +0x135:  mov    0x8(%ebp),%eax
08683ebe +0x138:  mov    (%eax),%eax
08683ec0 +0x13a:  mov    %eax,(%esp)
08683ec3 +0x13d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08683ec8 +0x142:  mov    -0x20(%ebp),%edx
08683ecb +0x145:  mov    %edx,0x8(%esp)
08683ecf +0x149:  movl   $0x2,0x4(%esp)
08683ed7 +0x151:  mov    %eax,(%esp)
08683eda +0x154:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08683edf +0x159:  mov    %eax,-0x1c(%ebp)
08683ee2 +0x15c:  cmpl   $0x0,-0x1c(%ebp)
08683ee6 +0x160:  je     08683ef8 <+0x172>
08683ee8 +0x162:  mov    -0x1c(%ebp),%eax
08683eeb +0x165:  mov    0x2(%eax),%eax
08683eee +0x168:  test   %eax,%eax
08683ef0 +0x16a:  je     08683ef9 <+0x173>
08683ef2 +0x16c:  addl   $0x1,-0x44(%ebp)
08683ef6 +0x170:  jmp    08683ef9 <+0x173>
08683ef8 +0x172:  nop
08683ef9 +0x173:  addl   $0x1,-0x20(%ebp)
08683efd +0x177:  cmpl   $0x73,-0x20(%ebp)
08683f01 +0x17b:  setle  %al
08683f04 +0x17e:  test   %al,%al
08683f06 +0x180:  jne    08683ebb <+0x135>
08683f08 +0x182:  mov    0x8(%ebp),%eax
08683f0b +0x185:  mov    (%eax),%eax
08683f0d +0x187:  mov    %eax,(%esp)
08683f10 +0x18a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08683f15 +0x18f:  mov    0x7b(%eax),%eax
08683f18 +0x192:  mov    %eax,-0x40(%ebp)
08683f1b +0x195:  mov    0x8(%ebp),%eax
08683f1e +0x198:  mov    (%eax),%eax
08683f20 +0x19a:  mov    %eax,(%esp)
08683f23 +0x19d:  call   086971ce <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a23>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a23
08683f28 +0x1a2:  mov    %al,-0x39(%ebp)
08683f2b +0x1a5:  cmpl   $0x0,-0x40(%ebp)
08683f2f +0x1a9:  jne    08683f40 <+0x1ba>
08683f31 +0x1ab:  cmpb   $0x0,-0x39(%ebp)
08683f35 +0x1af:  je     08683f40 <+0x1ba>
08683f37 +0x1b1:  movl   $0x0,-0x5c(%ebp)
08683f3e +0x1b8:  jmp    08683f7d <+0x1f7>
08683f40 +0x1ba:  cmpb   $0x0,-0x6c(%ebp)
08683f44 +0x1be:  jne    08683f55 <+0x1cf>
08683f46 +0x1c0:  cmpl   $0x0,-0x40(%ebp)
08683f4a +0x1c4:  je     08683f55 <+0x1cf>
08683f4c +0x1c6:  movl   $0x1,-0x5c(%ebp)
08683f53 +0x1cd:  jmp    08683f7d <+0x1f7>
08683f55 +0x1cf:  cmpb   $0x1,-0x6c(%ebp)
08683f59 +0x1d3:  jne    08683f6a <+0x1e4>
08683f5b +0x1d5:  cmpl   $0x0,-0x40(%ebp)
08683f5f +0x1d9:  je     08683f6a <+0x1e4>
08683f61 +0x1db:  movl   $0x2,-0x5c(%ebp)
08683f68 +0x1e2:  jmp    08683f7d <+0x1f7>
08683f6a +0x1e4:  cmpb   $0x2,-0x6c(%ebp)
08683f6e +0x1e8:  jne    08683f7d <+0x1f7>
08683f70 +0x1ea:  cmpl   $0x0,-0x40(%ebp)
08683f74 +0x1ee:  je     08683f7d <+0x1f7>
08683f76 +0x1f0:  movl   $0x3,-0x5c(%ebp)
08683f7d +0x1f7:  movl   $0x0,-0x38(%ebp)
08683f84 +0x1fe:  mov    0x8(%ebp),%eax
08683f87 +0x201:  mov    (%eax),%eax
08683f89 +0x203:  mov    %eax,(%esp)
08683f8c +0x206:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08683f91 +0x20b:  mov    %eax,%ebx
08683f93 +0x20d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08683f98 +0x212:  mov    %ebx,0x4(%esp)
08683f9c +0x216:  mov    %eax,(%esp)
08683f9f +0x219:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
08683fa4 +0x21e:  mov    %eax,-0x34(%ebp)
08683fa7 +0x221:  cmpl   $0x0,-0x34(%ebp)
08683fab +0x225:  je     08683fcc <+0x246>
08683fad +0x227:  mov    0x8(%ebp),%eax
08683fb0 +0x22a:  mov    (%eax),%eax
08683fb2 +0x22c:  mov    %eax,(%esp)
08683fb5 +0x22f:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
08683fba +0x234:  mov    %eax,0x4(%esp)
08683fbe +0x238:  mov    -0x34(%ebp),%eax
08683fc1 +0x23b:  mov    %eax,(%esp)
08683fc4 +0x23e:  call   08693ba0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3f5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3f5
08683fc9 +0x243:  mov    %eax,-0x38(%ebp)
08683fcc +0x246:  mov    0x8(%ebp),%eax
08683fcf +0x249:  mov    (%eax),%ebx
08683fd1 +0x24b:  mov    0x8(%ebp),%eax
08683fd4 +0x24e:  mov    (%eax),%eax
08683fd6 +0x250:  mov    %eax,(%esp)
08683fd9 +0x253:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
08683fde +0x258:  mov    %eax,%esi
08683fe0 +0x25a:  mov    0x8(%ebp),%eax
08683fe3 +0x25d:  mov    (%eax),%eax
08683fe5 +0x25f:  mov    %eax,(%esp)
08683fe8 +0x262:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
08683fed +0x267:  movsbl %al,%eax
08683ff0 +0x26a:  mov    %eax,-0x78(%ebp)
08683ff3 +0x26d:  mov    0x8(%ebp),%eax
08683ff6 +0x270:  mov    (%eax),%eax
08683ff8 +0x272:  mov    %eax,(%esp)
08683ffb +0x275:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08684000 +0x27a:  movsbl %al,%eax
08684003 +0x27d:  mov    %eax,-0x74(%ebp)
08684006 +0x280:  mov    0x8(%ebp),%eax
08684009 +0x283:  mov    (%eax),%eax
0868400b +0x285:  mov    %eax,(%esp)
0868400e +0x288:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08684013 +0x28d:  mov    %eax,%edi
08684015 +0x28f:  mov    0x8(%ebp),%eax
08684018 +0x292:  mov    (%eax),%eax
0868401a +0x294:  mov    %eax,(%esp)
0868401d +0x297:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08684022 +0x29c:  mov    %eax,%ecx
08684024 +0x29e:  movzbl -0x6c(%ebp),%eax
08684028 +0x2a2:  mov    %eax,-0x70(%ebp)
0868402b +0x2a5:  mov    0x8(%ebp),%eax
0868402e +0x2a8:  mov    (%eax),%edx
08684030 +0x2aa:  mov    %ebx,0x50(%esp)
08684034 +0x2ae:  mov    -0x38(%ebp),%eax
08684037 +0x2b1:  mov    %eax,0x4c(%esp)
0868403b +0x2b5:  mov    %esi,0x48(%esp)
0868403f +0x2b9:  mov    -0x44(%ebp),%eax
08684042 +0x2bc:  mov    %eax,0x44(%esp)
08684046 +0x2c0:  mov    -0x48(%ebp),%eax
08684049 +0x2c3:  mov    %eax,0x40(%esp)
0868404d +0x2c7:  mov    -0x4c(%ebp),%eax
08684050 +0x2ca:  mov    %eax,0x3c(%esp)
08684054 +0x2ce:  mov    -0x50(%ebp),%eax
08684057 +0x2d1:  mov    %eax,0x38(%esp)
0868405b +0x2d5:  mov    -0x54(%ebp),%eax
0868405e +0x2d8:  mov    %eax,0x34(%esp)
08684062 +0x2dc:  mov    -0x58(%ebp),%eax
08684065 +0x2df:  mov    %eax,0x30(%esp)
08684069 +0x2e3:  mov    -0x5c(%ebp),%eax
0868406c +0x2e6:  mov    %eax,0x2c(%esp)
08684070 +0x2ea:  mov    -0x78(%ebp),%eax
08684073 +0x2ed:  mov    %eax,0x28(%esp)
08684077 +0x2f1:  mov    -0x74(%ebp),%eax
0868407a +0x2f4:  mov    %eax,0x24(%esp)
0868407e +0x2f8:  mov    %edi,0x20(%esp)
08684082 +0x2fc:  mov    %ecx,0x1c(%esp)
08684086 +0x300:  mov    0x20(%ebp),%eax
08684089 +0x303:  mov    %eax,0x18(%esp)
0868408d +0x307:  mov    -0x70(%ebp),%eax
08684090 +0x30a:  mov    %eax,0x14(%esp)
08684094 +0x30e:  mov    0x18(%ebp),%eax
08684097 +0x311:  mov    %eax,0x10(%esp)
0868409b +0x315:  mov    0x14(%ebp),%eax
0868409e +0x318:  mov    %eax,0xc(%esp)
086840a2 +0x31c:  mov    0x10(%ebp),%eax
086840a5 +0x31f:  mov    %eax,0x8(%esp)
086840a9 +0x323:  movl   $"IP+,%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%p",0x4(%esp)
086840b1 +0x32b:  mov    %edx,(%esp)
086840b4 +0x32e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086840b9 +0x333:  add    $0xcc,%esp
086840bf +0x339:  pop    %ebx
086840c0 +0x33a:  pop    %esi
086840c1 +0x33b:  pop    %edi
086840c2 +0x33c:  pop    %ebp
086840c3 +0x33d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::Login @ 0x8683d86

/* cUserHistoryLog::Login(char const*, char const*, int, int, unsigned char, int) */

void __thiscall
cUserHistoryLog::Login
          (cUserHistoryLog *this,char *param_1,char *param_2,int param_3,int param_4,uchar param_5,
          int param_6)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  Inven_Item *this_00;
  CDataManager *this_01;
  CItem *this_02;
  CInventory *pCVar6;
  STExpertJobScript *this_03;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_60;
  uint local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_3c;
  int local_34;
  int local_24;
  
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
  uVar5 = CInventory::get_money((CInventory *)(iVar4 + 0xda));
  for (local_34 = 10; local_34 < 0x14; local_34 = local_34 + 1) {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
    this_00 = (Inven_Item *)CInventory::GetInvenRef(pCVar6,0,local_34);
    if ((this_00 != (Inven_Item *)0x0) && (*(int *)(this_00 + 2) != 0)) {
      if (local_34 == 10) {
        local_58 = Inven_Item::GetUpgrade(this_00);
        local_58 = local_58 & 0xff;
        local_54 = *(undefined4 *)(this_00 + 2);
      }
      else {
        uVar7 = Inven_Item::GetUpgrade(this_00);
        local_50 = local_50 + (uVar7 & 0xff);
      }
      iVar4 = *(int *)(this_00 + 2);
      this_01 = (CDataManager *)G_CDataManager();
      this_02 = (CItem *)CDataManager::find_item(this_01,iVar4);
      if (this_02 != (CItem *)0x0) {
        iVar4 = CItem::get_rarity(this_02);
        if ((iVar4 == 0) || (iVar4 == 1)) {
          local_4c = local_4c + 1;
        }
      }
    }
  }
  for (local_24 = 0; local_24 < 0x74; local_24 = local_24 + 1) {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
    iVar4 = CInventory::GetInvenRef(pCVar6,2,local_24);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 2) != 0)) {
      local_48 = local_48 + 1;
    }
  }
  iVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
  iVar4 = *(int *)(iVar4 + 0x7b);
  cVar2 = CUser::GetFirstLogin(*(CUser **)this);
  if ((iVar4 == 0) && (cVar2 != '\0')) {
    local_60 = 0;
  }
  else if ((param_5 == '\0') && (iVar4 != 0)) {
    local_60 = 1;
  }
  else if ((param_5 == '\x01') && (iVar4 != 0)) {
    local_60 = 2;
  }
  else if ((param_5 == '\x02') && (iVar4 != 0)) {
    local_60 = 3;
  }
  local_3c = 0;
  CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
  iVar4 = G_CDataManager();
  this_03 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar4);
  if (this_03 != (STExpertJobScript *)0x0) {
    uVar7 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)this);
    local_3c = STExpertJobScript::GetLevel(this_03,uVar7);
  }
  uVar1 = *(undefined4 *)this;
  uVar8 = CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
  cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
  cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
  uVar9 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
  uVar10 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
  CUser::LogHistory(*(CUser **)this,"IP+,%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%p",
                    param_2,param_3,param_4,(uint)param_5,param_6,uVar10,uVar9,(int)cVar3,(int)cVar2
                    ,local_60,uVar5,local_58,local_54,local_50,local_4c,local_48,uVar8,local_3c,
                    uVar1);
  return;
}
```
