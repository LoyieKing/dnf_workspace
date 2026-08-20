# BloodMonsterSpawnPacket

`_ZN13CBattle_Field23BloodMonsterSpawnPacketEiiss`

`CBattle_Field::BloodMonsterSpawnPacket(int, int, short, short)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08305992` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08305992  _ZN13CBattle_Field23BloodMonsterSpawnPacketEiiss
#           CBattle_Field::BloodMonsterSpawnPacket(int, int, short, short)
# range [0x08305992, 0x08305d0b]
08305992 +0x000:  push   %ebp
08305993 +0x001:  mov    %esp,%ebp
08305995 +0x003:  push   %esi
08305996 +0x004:  push   %ebx
08305997 +0x005:  sub    $0x3a0,%esp
0830599d +0x00b:  mov    0x14(%ebp),%edx
083059a0 +0x00e:  mov    0x18(%ebp),%eax
083059a3 +0x011:  mov    %dx,-0x37c(%ebp)
083059aa +0x018:  mov    %ax,-0x380(%ebp)
083059b1 +0x01f:  movl   $0x0,-0xc(%ebp)
083059b8 +0x026:  lea    -0x20(%ebp),%eax
083059bb +0x029:  mov    %eax,(%esp)
083059be +0x02c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
083059c3 +0x031:  movl   $0xd2,0x8(%esp)
083059cb +0x039:  movl   $0x0,0x4(%esp)
083059d3 +0x041:  lea    -0x20(%ebp),%eax
083059d6 +0x044:  mov    %eax,(%esp)
083059d9 +0x047:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
083059de +0x04c:  mov    0xc(%ebp),%eax
083059e1 +0x04f:  mov    %eax,0x4(%esp)
083059e5 +0x053:  lea    -0x20(%ebp),%eax
083059e8 +0x056:  mov    %eax,(%esp)
083059eb +0x059:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
083059f0 +0x05e:  lea    -0x370(%ebp),%eax
083059f6 +0x064:  mov    %eax,(%esp)
083059f9 +0x067:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
083059fe +0x06c:  mov    0x8(%ebp),%eax
08305a01 +0x06f:  mov    %eax,(%esp)
08305a04 +0x072:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08305a09 +0x077:  lea    0xc(%eax),%edx
08305a0c +0x07a:  lea    -0x24(%ebp),%eax
08305a0f +0x07d:  mov    %edx,0x4(%esp)
08305a13 +0x081:  mov    %eax,(%esp)
08305a16 +0x084:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
08305a1b +0x089:  sub    $0x4,%esp
08305a1e +0x08c:  jmp    08305bfb <+0x269>
08305a23 +0x091:  mov    -0xc(%ebp),%eax
08305a26 +0x094:  cmp    0xc(%ebp),%eax
08305a29 +0x097:  je     08305c37 <+0x2a5>
08305a2f +0x09d:  lea    -0x24(%ebp),%eax
08305a32 +0x0a0:  mov    %eax,(%esp)
08305a35 +0x0a3:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305a3a +0x0a8:  movzwl 0x33e(%eax),%eax
08305a41 +0x0af:  cmp    -0x37c(%ebp),%ax
08305a48 +0x0b6:  jne    08305a6a <+0xd8>
08305a4a +0x0b8:  lea    -0x24(%ebp),%eax
08305a4d +0x0bb:  mov    %eax,(%esp)
08305a50 +0x0be:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305a55 +0x0c3:  movzbl 0x348(%eax),%eax
08305a5c +0x0ca:  xor    $0x1,%eax
08305a5f +0x0cd:  test   %al,%al
08305a61 +0x0cf:  je     08305a6a <+0xd8>
08305a63 +0x0d1:  mov    $0x1,%eax
08305a68 +0x0d6:  jmp    08305a6f <+0xdd>
08305a6a +0x0d8:  mov    $0x0,%eax
08305a6f +0x0dd:  test   %al,%al
08305a71 +0x0df:  je     08305bde <+0x24c>
08305a77 +0x0e5:  lea    -0x24(%ebp),%eax
08305a7a +0x0e8:  mov    %eax,(%esp)
08305a7d +0x0eb:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305a82 +0x0f0:  movzbl 0x349(%eax),%eax
08305a89 +0x0f7:  movsbl %al,%eax
08305a8c +0x0fa:  mov    %eax,0x4(%esp)
08305a90 +0x0fe:  lea    -0x20(%ebp),%eax
08305a93 +0x101:  mov    %eax,(%esp)
08305a96 +0x104:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305a9b +0x109:  lea    -0x24(%ebp),%eax
08305a9e +0x10c:  mov    %eax,(%esp)
08305aa1 +0x10f:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305aa6 +0x114:  mov    0x8(%eax),%eax
08305aa9 +0x117:  cwtl
08305aaa +0x118:  mov    %eax,0x4(%esp)
08305aae +0x11c:  lea    -0x20(%ebp),%eax
08305ab1 +0x11f:  mov    %eax,(%esp)
08305ab4 +0x122:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08305ab9 +0x127:  lea    -0x24(%ebp),%eax
08305abc +0x12a:  mov    %eax,(%esp)
08305abf +0x12d:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305ac4 +0x132:  mov    0x10(%eax),%eax
08305ac7 +0x135:  mov    %eax,0x4(%esp)
08305acb +0x139:  lea    -0x20(%ebp),%eax
08305ace +0x13c:  mov    %eax,(%esp)
08305ad1 +0x13f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08305ad6 +0x144:  cmpl   $0xffffffff,0x10(%ebp)
08305ada +0x148:  jne    08305af1 <+0x15f>
08305adc +0x14a:  movl   $0x3,0x4(%esp)
08305ae4 +0x152:  lea    -0x20(%ebp),%eax
08305ae7 +0x155:  mov    %eax,(%esp)
08305aea +0x158:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305aef +0x15d:  jmp    08305b04 <+0x172>
08305af1 +0x15f:  movl   $0x0,0x4(%esp)
08305af9 +0x167:  lea    -0x20(%ebp),%eax
08305afc +0x16a:  mov    %eax,(%esp)
08305aff +0x16d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305b04 +0x172:  mov    0x8(%ebp),%eax
08305b07 +0x175:  mov    0x188(%eax),%eax
08305b0d +0x17b:  movzbl 0x89f(%eax),%eax
08305b14 +0x182:  cmp    $0x2,%al
08305b16 +0x184:  jne    08305b2d <+0x19b>
08305b18 +0x186:  movl   $0x46,0x4(%esp)
08305b20 +0x18e:  lea    -0x20(%ebp),%eax
08305b23 +0x191:  mov    %eax,(%esp)
08305b26 +0x194:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305b2b +0x199:  jmp    08305b40 <+0x1ae>
08305b2d +0x19b:  movl   $0x3c,0x4(%esp)
08305b35 +0x1a3:  lea    -0x20(%ebp),%eax
08305b38 +0x1a6:  mov    %eax,(%esp)
08305b3b +0x1a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305b40 +0x1ae:  lea    -0x24(%ebp),%eax
08305b43 +0x1b1:  mov    %eax,(%esp)
08305b46 +0x1b4:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305b4b +0x1b9:  movzwl 0x340(%eax),%eax
08305b52 +0x1c0:  cwtl
08305b53 +0x1c1:  mov    %eax,0x4(%esp)
08305b57 +0x1c5:  lea    -0x20(%ebp),%eax
08305b5a +0x1c8:  mov    %eax,(%esp)
08305b5d +0x1cb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08305b62 +0x1d0:  lea    -0x24(%ebp),%eax
08305b65 +0x1d3:  mov    %eax,(%esp)
08305b68 +0x1d6:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305b6d +0x1db:  movzwl 0x342(%eax),%eax
08305b74 +0x1e2:  cwtl
08305b75 +0x1e3:  mov    %eax,0x4(%esp)
08305b79 +0x1e7:  lea    -0x20(%ebp),%eax
08305b7c +0x1ea:  mov    %eax,(%esp)
08305b7f +0x1ed:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08305b84 +0x1f2:  lea    -0x24(%ebp),%eax
08305b87 +0x1f5:  mov    %eax,(%esp)
08305b8a +0x1f8:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305b8f +0x1fd:  movzwl 0x344(%eax),%eax
08305b96 +0x204:  cwtl
08305b97 +0x205:  mov    %eax,0x4(%esp)
08305b9b +0x209:  lea    -0x20(%ebp),%eax
08305b9e +0x20c:  mov    %eax,(%esp)
08305ba1 +0x20f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08305ba6 +0x214:  lea    -0x24(%ebp),%eax
08305ba9 +0x217:  mov    %eax,(%esp)
08305bac +0x21a:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305bb1 +0x21f:  movzwl 0x346(%eax),%eax
08305bb8 +0x226:  cwtl
08305bb9 +0x227:  mov    %eax,0x4(%esp)
08305bbd +0x22b:  lea    -0x20(%ebp),%eax
08305bc0 +0x22e:  mov    %eax,(%esp)
08305bc3 +0x231:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08305bc8 +0x236:  lea    -0x24(%ebp),%eax
08305bcb +0x239:  mov    %eax,(%esp)
08305bce +0x23c:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08305bd3 +0x241:  movb   $0x1,0x348(%eax)
08305bda +0x248:  addl   $0x1,-0xc(%ebp)
08305bde +0x24c:  lea    -0x10(%ebp),%eax
08305be1 +0x24f:  movl   $0x0,0x8(%esp)
08305be9 +0x257:  lea    -0x24(%ebp),%edx
08305bec +0x25a:  mov    %edx,0x4(%esp)
08305bf0 +0x25e:  mov    %eax,(%esp)
08305bf3 +0x261:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
08305bf8 +0x266:  sub    $0x4,%esp
08305bfb +0x269:  mov    0x8(%ebp),%eax
08305bfe +0x26c:  mov    %eax,(%esp)
08305c01 +0x26f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08305c06 +0x274:  lea    0xc(%eax),%edx
08305c09 +0x277:  lea    -0x14(%ebp),%eax
08305c0c +0x27a:  mov    %edx,0x4(%esp)
08305c10 +0x27e:  mov    %eax,(%esp)
08305c13 +0x281:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
08305c18 +0x286:  sub    $0x4,%esp
08305c1b +0x289:  lea    -0x14(%ebp),%eax
08305c1e +0x28c:  mov    %eax,0x4(%esp)
08305c22 +0x290:  lea    -0x24(%ebp),%eax
08305c25 +0x293:  mov    %eax,(%esp)
08305c28 +0x296:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
08305c2d +0x29b:  test   %al,%al
08305c2f +0x29d:  jne    08305a23 <+0x91>
08305c35 +0x2a3:  jmp    08305c38 <+0x2a6>
08305c37 +0x2a5:  nop
08305c38 +0x2a6:  mov    -0xc(%ebp),%eax
08305c3b +0x2a9:  cmp    0xc(%ebp),%eax
08305c3e +0x2ac:  je     08305c73 <+0x2e1>
08305c40 +0x2ae:  movl   $"BLOOD_LOG : EROOR BLOOD SPAWN MONSTER COUNT!!\n",0x10(%esp)
08305c48 +0x2b6:  movl   $0xe43,0xc(%esp)
08305c50 +0x2be:  movl   $&_ZZN13CBattle_Field23BloodMonsterSpawnPacketEiissE19__PRETTY_FUNCTION__,0x8(%esp)
08305c58 +0x2c6:  movl   $"battle_field.cpp",0x4(%esp)
08305c60 +0x2ce:  movl   $0x1,(%esp)
08305c67 +0x2d5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08305c6c +0x2da:  mov    $0x0,%ebx
08305c71 +0x2df:  jmp    08305ccb <+0x339>
08305c73 +0x2e1:  mov    0x10(%ebp),%eax
08305c76 +0x2e4:  mov    %eax,0x4(%esp)
08305c7a +0x2e8:  lea    -0x20(%ebp),%eax
08305c7d +0x2eb:  mov    %eax,(%esp)
08305c80 +0x2ee:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08305c85 +0x2f3:  movl   $0x1,0x4(%esp)
08305c8d +0x2fb:  lea    -0x20(%ebp),%eax
08305c90 +0x2fe:  mov    %eax,(%esp)
08305c93 +0x301:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08305c98 +0x306:  mov    0x8(%ebp),%eax
08305c9b +0x309:  mov    (%eax),%eax
08305c9d +0x30b:  lea    -0x20(%ebp),%edx
08305ca0 +0x30e:  mov    %edx,0x4(%esp)
08305ca4 +0x312:  mov    %eax,(%esp)
08305ca7 +0x315:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08305cac +0x31a:  mov    $0x1,%ebx
08305cb1 +0x31f:  jmp    08305ccb <+0x339>
08305cb3 +0x321:  mov    %edx,%ebx
08305cb5 +0x323:  mov    %eax,%esi
08305cb7 +0x325:  lea    -0x370(%ebp),%eax
08305cbd +0x32b:  mov    %eax,(%esp)
08305cc0 +0x32e:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08305cc5 +0x333:  mov    %esi,%eax
08305cc7 +0x335:  mov    %ebx,%edx
08305cc9 +0x337:  jmp    08305cf0 <+0x35e>
08305ccb +0x339:  lea    -0x370(%ebp),%eax
08305cd1 +0x33f:  mov    %eax,(%esp)
08305cd4 +0x342:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08305cd9 +0x347:  test   %ebx,%ebx
08305cdb +0x349:  lea    -0x20(%ebp),%eax
08305cde +0x34c:  mov    %eax,(%esp)
08305ce1 +0x34f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08305ce6 +0x354:  lea    -0x8(%ebp),%esp
08305ce9 +0x357:  add    $0x0,%esp
08305cec +0x35a:  pop    %ebx
08305ced +0x35b:  pop    %esi
08305cee +0x35c:  pop    %ebp
08305cef +0x35d:  ret
08305cf0 +0x35e:  mov    %edx,%ebx
08305cf2 +0x360:  mov    %eax,%esi
08305cf4 +0x362:  lea    -0x20(%ebp),%eax
08305cf7 +0x365:  mov    %eax,(%esp)
08305cfa +0x368:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08305cff +0x36d:  mov    %esi,%eax
08305d01 +0x36f:  mov    %ebx,%edx
08305d03 +0x371:  mov    %eax,(%esp)
08305d06 +0x374:  call   08ae3750 <_Unwind_Resume>
08305d0b +0x379:  nop
```

## 反编译 C

```c
// CBattle_Field::BloodMonsterSpawnPacket @ 0x8305992

/* CBattle_Field::BloodMonsterSpawnPacket(int, int, short, short) */

void CBattle_Field::BloodMonsterSpawnPacket(int param_1,int param_2,short param_3,short param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined2 in_stack_0000000e;
  map_monster local_374 [844];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_28 [4];
  PacketGuard local_24 [12];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_14 [4];
  int local_10;
  
  local_10 = 0;
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 083059d9 to 083059fd has its CatchHandler @ 08305cf0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xd2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,param_2);
  map_monster::map_monster(local_374);
                    /* try { // try from 08305a04 to 08305cab has its CatchHandler @ 08305cb3 */
  GetCurrentMapInfo((CBattle_Field *)param_1);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_28);
  while( true ) {
    GetCurrentMapInfo((CBattle_Field *)param_1);
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_18);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28,
                       (_Rb_tree_iterator *)local_18);
    if ((cVar2 == '\0') || (local_10 == param_2)) break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
    if ((*(short *)(iVar3 + 0x33e) == param_4) &&
       (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28),
       *(char *)(iVar3 + 0x348) != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)*(char *)(iVar3 + 0x349));
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_24,(int)(short)*(undefined4 *)(iVar3 + 8));
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(iVar3 + 0x10));
      if (_param_3 == -1) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,3);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      }
      if (*(char *)(*(int *)(param_1 + 0x188) + 0x89f) == '\x02') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x46);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x3c);
      }
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(int)*(short *)(iVar3 + 0x340));
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(int)*(short *)(iVar3 + 0x342));
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(int)*(short *)(iVar3 + 0x344));
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(int)*(short *)(iVar3 + 0x346));
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
      *(undefined1 *)(iVar3 + 0x348) = 1;
      local_10 = local_10 + 1;
    }
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_14,(int)local_28);
  }
  if (local_10 == param_2) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,_param_3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CParty::send_to_party(*(CParty **)param_1,local_24);
  }
  else {
    LogManager::logFormat
              (1,"battle_field.cpp",
               "void CBattle_Field::BloodMonsterSpawnPacket(int, int, short int, short int)",0xe43,
               "BLOOD_LOG : EROOR BLOOD SPAWN MONSTER COUNT!!\n");
  }
                    /* try { // try from 08305cd4 to 08305cd8 has its CatchHandler @ 08305cf0 */
  map_monster::~map_monster(local_374);
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
