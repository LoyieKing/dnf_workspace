# makeStagePacket

`_ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard`

`WongWork::CDeathTower::CStage::makeStagePacket(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x08461828` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461828  _ZN8WongWork11CDeathTower6CStage15makeStagePacketER11PacketGuard
#           WongWork::CDeathTower::CStage::makeStagePacket(PacketGuard&)
# range [0x08461828, 0x08461b3d]
08461828 +0x000:  push   %ebp
08461829 +0x001:  mov    %esp,%ebp
0846182b +0x003:  push   %edi
0846182c +0x004:  push   %esi
0846182d +0x005:  push   %ebx
0846182e +0x006:  sub    $0x3cc,%esp
08461834 +0x00c:  mov    0x8(%ebp),%eax
08461837 +0x00f:  mov    %eax,(%esp)
0846183a +0x012:  call   08469b02 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x1e5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x1e5
0846183f +0x017:  mov    %eax,%edx
08461841 +0x019:  mov    0xc(%ebp),%eax
08461844 +0x01c:  mov    %edx,0x4(%esp)
08461848 +0x020:  mov    %eax,(%esp)
0846184b +0x023:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08461850 +0x028:  movl   $0x0,(%esp)
08461857 +0x02f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0846185c +0x034:  mov    0xc(%ebp),%edx
0846185f +0x037:  mov    %eax,0x4(%esp)
08461863 +0x03b:  mov    %edx,(%esp)
08461866 +0x03e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0846186b +0x043:  mov    0x8(%ebp),%eax
0846186e +0x046:  mov    0x10(%eax),%edx
08461871 +0x049:  mov    0xc(%ebp),%eax
08461874 +0x04c:  mov    %edx,0x4(%esp)
08461878 +0x050:  mov    %eax,(%esp)
0846187b +0x053:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08461880 +0x058:  mov    0x8(%ebp),%eax
08461883 +0x05b:  add    $0x18,%eax
08461886 +0x05e:  mov    %eax,(%esp)
08461889 +0x061:  call   08152966 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x229b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x229b
0846188e +0x066:  mov    %eax,%edx
08461890 +0x068:  mov    0xc(%ebp),%eax
08461893 +0x06b:  mov    %edx,0x4(%esp)
08461897 +0x06f:  mov    %eax,(%esp)
0846189a +0x072:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0846189f +0x077:  mov    0x8(%ebp),%eax
084618a2 +0x07a:  lea    0x18(%eax),%edx
084618a5 +0x07d:  lea    -0x24(%ebp),%eax
084618a8 +0x080:  mov    %edx,0x4(%esp)
084618ac +0x084:  mov    %eax,(%esp)
084618af +0x087:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
084618b4 +0x08c:  sub    $0x4,%esp
084618b7 +0x08f:  jmp    084619bb <+0x193>
084618bc +0x094:  lea    -0x24(%ebp),%eax
084618bf +0x097:  mov    %eax,(%esp)
084618c2 +0x09a:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
084618c7 +0x09f:  add    $0x4,%eax
084618ca +0x0a2:  mov    %eax,0x4(%esp)
084618ce +0x0a6:  lea    -0x3c8(%ebp),%eax
084618d4 +0x0ac:  mov    %eax,(%esp)
084618d7 +0x0af:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
084618dc +0x0b4:  mov    -0x3c8(%ebp),%edx
084618e2 +0x0ba:  mov    0xc(%ebp),%eax
084618e5 +0x0bd:  mov    %edx,0x4(%esp)
084618e9 +0x0c1:  mov    %eax,(%esp)
084618ec +0x0c4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084618f1 +0x0c9:  mov    -0x3c4(%ebp),%eax
084618f7 +0x0cf:  movswl %ax,%edx
084618fa +0x0d2:  mov    0xc(%ebp),%eax
084618fd +0x0d5:  mov    %edx,0x4(%esp)
08461901 +0x0d9:  mov    %eax,(%esp)
08461904 +0x0dc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08461909 +0x0e1:  mov    -0x3bc(%ebp),%edx
0846190f +0x0e7:  mov    0xc(%ebp),%eax
08461912 +0x0ea:  mov    %edx,0x4(%esp)
08461916 +0x0ee:  mov    %eax,(%esp)
08461919 +0x0f1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0846191e +0x0f6:  movzbl -0x3b8(%ebp),%eax
08461925 +0x0fd:  movzbl %al,%edx
08461928 +0x100:  mov    0xc(%ebp),%eax
0846192b +0x103:  mov    %edx,0x4(%esp)
0846192f +0x107:  mov    %eax,(%esp)
08461932 +0x10a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08461937 +0x10f:  movzbl -0x3c0(%ebp),%eax
0846193e +0x116:  movsbl %al,%edx
08461941 +0x119:  mov    0xc(%ebp),%eax
08461944 +0x11c:  mov    %edx,0x4(%esp)
08461948 +0x120:  mov    %eax,(%esp)
0846194b +0x123:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08461950 +0x128:  movzbl -0x3b5(%ebp),%eax
08461957 +0x12f:  movzbl %al,%edx
0846195a +0x132:  mov    0xc(%ebp),%eax
0846195d +0x135:  mov    %edx,0x4(%esp)
08461961 +0x139:  mov    %eax,(%esp)
08461964 +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08461969 +0x141:  movzbl -0x3b4(%ebp),%eax
08461970 +0x148:  movzbl %al,%edx
08461973 +0x14b:  mov    0xc(%ebp),%eax
08461976 +0x14e:  mov    %edx,0x4(%esp)
0846197a +0x152:  mov    %eax,(%esp)
0846197d +0x155:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08461982 +0x15a:  lea    -0x24(%ebp),%eax
08461985 +0x15d:  mov    %eax,(%esp)
08461988 +0x160:  call   0815262e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f63>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f63
0846198d +0x165:  jmp    084619ad <+0x185>
0846198f +0x167:  mov    %edx,%ebx
08461991 +0x169:  mov    %eax,%esi
08461993 +0x16b:  lea    -0x3c8(%ebp),%eax
08461999 +0x171:  mov    %eax,(%esp)
0846199c +0x174:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
084619a1 +0x179:  mov    %esi,%eax
084619a3 +0x17b:  mov    %ebx,%edx
084619a5 +0x17d:  mov    %eax,(%esp)
084619a8 +0x180:  call   08ae3750 <_Unwind_Resume>
084619ad +0x185:  lea    -0x3c8(%ebp),%eax
084619b3 +0x18b:  mov    %eax,(%esp)
084619b6 +0x18e:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
084619bb +0x193:  mov    0x8(%ebp),%eax
084619be +0x196:  lea    0x18(%eax),%edx
084619c1 +0x199:  lea    -0x20(%ebp),%eax
084619c4 +0x19c:  mov    %edx,0x4(%esp)
084619c8 +0x1a0:  mov    %eax,(%esp)
084619cb +0x1a3:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
084619d0 +0x1a8:  sub    $0x4,%esp
084619d3 +0x1ab:  lea    -0x20(%ebp),%eax
084619d6 +0x1ae:  mov    %eax,0x4(%esp)
084619da +0x1b2:  lea    -0x24(%ebp),%eax
084619dd +0x1b5:  mov    %eax,(%esp)
084619e0 +0x1b8:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
084619e5 +0x1bd:  test   %al,%al
084619e7 +0x1bf:  jne    084618bc <+0x94>
084619ed +0x1c5:  mov    0x8(%ebp),%eax
084619f0 +0x1c8:  add    $0x30,%eax
084619f3 +0x1cb:  mov    %eax,(%esp)
084619f6 +0x1ce:  call   0815297a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22af>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22af
084619fb +0x1d3:  mov    %eax,%edx
084619fd +0x1d5:  mov    0xc(%ebp),%eax
08461a00 +0x1d8:  mov    %edx,0x4(%esp)
08461a04 +0x1dc:  mov    %eax,(%esp)
08461a07 +0x1df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08461a0c +0x1e4:  mov    0x8(%ebp),%eax
08461a0f +0x1e7:  lea    0x30(%eax),%edx
08461a12 +0x1ea:  lea    -0x28(%ebp),%eax
08461a15 +0x1ed:  mov    %edx,0x4(%esp)
08461a19 +0x1f1:  mov    %eax,(%esp)
08461a1c +0x1f4:  call   0815298e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22c3
08461a21 +0x1f9:  sub    $0x4,%esp
08461a24 +0x1fc:  jmp    08461b01 <+0x2d9>
08461a29 +0x201:  lea    -0x28(%ebp),%eax
08461a2c +0x204:  mov    %eax,(%esp)
08461a2f +0x207:  call   081529b4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22e9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22e9
08461a34 +0x20c:  lea    -0x7c(%ebp),%edx
08461a37 +0x20f:  lea    0x4(%eax),%ebx
08461a3a +0x212:  mov    $0x15,%eax
08461a3f +0x217:  mov    %edx,%edi
08461a41 +0x219:  mov    %ebx,%esi
08461a43 +0x21b:  mov    %eax,%ecx
08461a45 +0x21d:  rep movsl %ds:(%esi),%es:(%edi)
08461a47 +0x21f:  movzbl -0x7b(%ebp),%eax
08461a4b +0x223:  movsbl %al,%edx
08461a4e +0x226:  mov    0xc(%ebp),%eax
08461a51 +0x229:  mov    %edx,0x4(%esp)
08461a55 +0x22d:  mov    %eax,(%esp)
08461a58 +0x230:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08461a5d +0x235:  mov    -0x78(%ebp),%edx
08461a60 +0x238:  mov    0xc(%ebp),%eax
08461a63 +0x23b:  mov    %edx,0x4(%esp)
08461a67 +0x23f:  mov    %eax,(%esp)
08461a6a +0x242:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08461a6f +0x247:  mov    -0x6a(%ebp),%eax
08461a72 +0x24a:  mov    %eax,%edx
08461a74 +0x24c:  mov    0xc(%ebp),%eax
08461a77 +0x24f:  mov    %edx,0x4(%esp)
08461a7b +0x253:  mov    %eax,(%esp)
08461a7e +0x256:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08461a83 +0x25b:  lea    -0x7c(%ebp),%eax
08461a86 +0x25e:  add    $0x10,%eax
08461a89 +0x261:  mov    %eax,(%esp)
08461a8c +0x264:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08461a91 +0x269:  mov    0xc(%ebp),%edx
08461a94 +0x26c:  mov    %eax,0x4(%esp)
08461a98 +0x270:  mov    %edx,(%esp)
08461a9b +0x273:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08461aa0 +0x278:  movzwl -0x61(%ebp),%eax
08461aa4 +0x27c:  movzwl %ax,%edx
08461aa7 +0x27f:  mov    0xc(%ebp),%eax
08461aaa +0x282:  mov    %edx,0x4(%esp)
08461aae +0x286:  mov    %eax,(%esp)
08461ab1 +0x289:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08461ab6 +0x28e:  lea    -0x7c(%ebp),%eax
08461ab9 +0x291:  add    $0x21,%eax
08461abc +0x294:  mov    %eax,(%esp)
08461abf +0x297:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08461ac4 +0x29c:  movzbl %al,%edx
08461ac7 +0x29f:  mov    0xc(%ebp),%eax
08461aca +0x2a2:  mov    %edx,0x4(%esp)
08461ace +0x2a6:  mov    %eax,(%esp)
08461ad1 +0x2a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08461ad6 +0x2ae:  lea    -0x7c(%ebp),%eax
08461ad9 +0x2b1:  add    $0x21,%eax
08461adc +0x2b4:  mov    %eax,(%esp)
08461adf +0x2b7:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08461ae4 +0x2bc:  movzwl %ax,%edx
08461ae7 +0x2bf:  mov    0xc(%ebp),%eax
08461aea +0x2c2:  mov    %edx,0x4(%esp)
08461aee +0x2c6:  mov    %eax,(%esp)
08461af1 +0x2c9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08461af6 +0x2ce:  lea    -0x28(%ebp),%eax
08461af9 +0x2d1:  mov    %eax,(%esp)
08461afc +0x2d4:  call   081529c2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22f7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22f7
08461b01 +0x2d9:  mov    0x8(%ebp),%eax
08461b04 +0x2dc:  lea    0x30(%eax),%edx
08461b07 +0x2df:  lea    -0x1c(%ebp),%eax
08461b0a +0x2e2:  mov    %edx,0x4(%esp)
08461b0e +0x2e6:  mov    %eax,(%esp)
08461b11 +0x2e9:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
08461b16 +0x2ee:  sub    $0x4,%esp
08461b19 +0x2f1:  lea    -0x1c(%ebp),%eax
08461b1c +0x2f4:  mov    %eax,0x4(%esp)
08461b20 +0x2f8:  lea    -0x28(%ebp),%eax
08461b23 +0x2fb:  mov    %eax,(%esp)
08461b26 +0x2fe:  call   08152584 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1eb9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1eb9
08461b2b +0x303:  test   %al,%al
08461b2d +0x305:  jne    08461a29 <+0x201>
08461b33 +0x30b:  lea    -0xc(%ebp),%esp
08461b36 +0x30e:  add    $0x0,%esp
08461b39 +0x311:  pop    %ebx
08461b3a +0x312:  pop    %esi
08461b3b +0x313:  pop    %edi
08461b3c +0x314:  pop    %ebp
08461b3d +0x315:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::makeStagePacket @ 0x8461828

/* WongWork::CDeathTower::CStage::makeStagePacket(PacketGuard&) */

void __thiscall WongWork::CDeathTower::CStage::makeStagePacket(CStage *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int local_3cc [2];
  char local_3c4;
  int local_3c0;
  byte local_3bc;
  byte local_3b9;
  byte local_3b8;
  undefined4 local_80;
  int local_7c;
  Inven_Item aIStack_70 [2];
  int local_6e;
  ushort local_65;
  stAmplifyOption_t asStack_5f [51];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_2c [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_28 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_24 [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar7 = 0;
  iVar2 = getCurrentStage(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,iVar2);
  iVar2 = get_rand_int(0);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x10));
  iVar2 = std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x18));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_28);
  while( true ) {
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
    map_monster::map_monster((map_monster *)local_3cc,(map_monster *)(iVar2 + 4));
                    /* try { // try from 084618ec to 0846198c has its CatchHandler @ 0846198f */
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,local_3cc[0]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)(short)local_3cc[1]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,local_3c0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)local_3bc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)local_3c4);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)local_3b9);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)local_3b8);
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_28);
    map_monster::~map_monster((map_monster *)local_3cc);
  }
  iVar2 = std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::size
                    ((map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>
                      *)(this + 0x30));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::begin
            (local_2c);
  while( true ) {
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end
              (local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_2c,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_2c);
    puVar5 = (undefined4 *)(iVar2 + 4);
    puVar6 = &local_80;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)local_80._1_1_);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_7c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,local_6e);
    iVar2 = Inven_Item::get_add_info(aIStack_70);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)local_65);
    uVar3 = stAmplifyOption_t::getAbilityType(asStack_5f);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar3 & 0xff);
    uVar3 = stAmplifyOption_t::getAbilityValue(asStack_5f);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
    std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)local_2c);
  }
  return;
}
```
