# generateRewardItem

`_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon`

`WongWork::CBossPlay::generateRewardItem(int, int, unsigned int, ENUM_DUNGEON_DIFFICULTY, unsigned int, CDungeon const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x08149914` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08149914  _ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon
#           WongWork::CBossPlay::generateRewardItem(int, int, unsigned int, ENUM_DUNGEON_DIFFICULTY, unsigned int, CDungeon const*)
# range [0x08149914, 0x08149e1f]
08149914 +0x000:  push   %ebp
08149915 +0x001:  mov    %esp,%ebp
08149917 +0x003:  push   %edi
08149918 +0x004:  push   %esi
08149919 +0x005:  push   %ebx
0814991a +0x006:  sub    $0x13c,%esp
08149920 +0x00c:  mov    0xc(%ebp),%eax
08149923 +0x00f:  mov    0x8(%ebp),%edx
08149926 +0x012:  imul   $0x268,%eax,%eax
0814992c +0x018:  lea    (%edx,%eax,1),%eax
0814992f +0x01b:  lea    0x28(%eax),%edx
08149932 +0x01e:  mov    0x10(%ebp),%eax
08149935 +0x021:  mov    %eax,(%edx)
08149937 +0x023:  movl   $0x0,-0x30(%ebp)
0814993e +0x02a:  movl   $0x0,-0x2c(%ebp)
08149945 +0x031:  mov    $0x0,%eax
0814994a +0x036:  mov    %eax,-0x28(%ebp)
0814994d +0x039:  mov    0x20(%ebp),%eax
08149950 +0x03c:  mov    %eax,(%esp)
08149953 +0x03f:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08149958 +0x044:  mov    %eax,%ebx
0814995a +0x046:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814995f +0x04b:  mov    %ebx,0x4(%esp)
08149963 +0x04f:  mov    %eax,(%esp)
08149966 +0x052:  call   081455d8 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b
0814996b +0x057:  mov    0xc88(%eax),%eax
08149971 +0x05d:  mov    %eax,-0x30(%ebp)
08149974 +0x060:  mov    0x20(%ebp),%eax
08149977 +0x063:  mov    %eax,(%esp)
0814997a +0x066:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0814997f +0x06b:  mov    %eax,%ebx
08149981 +0x06d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08149986 +0x072:  mov    %ebx,0x4(%esp)
0814998a +0x076:  mov    %eax,(%esp)
0814998d +0x079:  call   081455d8 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b
08149992 +0x07e:  mov    0xc8c(%eax),%eax
08149998 +0x084:  mov    %eax,-0x2c(%ebp)
0814999b +0x087:  mov    0x20(%ebp),%eax
0814999e +0x08a:  mov    %eax,(%esp)
081499a1 +0x08d:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
081499a6 +0x092:  mov    %eax,%ebx
081499a8 +0x094:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081499ad +0x099:  mov    %ebx,0x4(%esp)
081499b1 +0x09d:  mov    %eax,(%esp)
081499b4 +0x0a0:  call   081455d8 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b
081499b9 +0x0a5:  mov    0xc94(%eax),%eax
081499bf +0x0ab:  mov    %eax,-0x28(%ebp)
081499c2 +0x0ae:  movl   $0x0,-0x24(%ebp)
081499c9 +0x0b5:  jmp    08149dff <+0x4eb>
081499ce +0x0ba:  lea    -0x124(%ebp),%eax
081499d4 +0x0c0:  mov    %eax,(%esp)
081499d7 +0x0c3:  call   0814a706 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x4a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x4a5
081499dc +0x0c8:  lea    -0x6c(%ebp),%eax
081499df +0x0cb:  mov    %eax,(%esp)
081499e2 +0x0ce:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
081499e7 +0x0d3:  movl   $0x3e8,(%esp)
081499ee +0x0da:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
081499f3 +0x0df:  mov    %eax,-0x20(%ebp)
081499f6 +0x0e2:  mov    -0x30(%ebp),%eax
081499f9 +0x0e5:  imul   0x1c(%ebp),%eax
081499fd +0x0e9:  cmp    -0x20(%ebp),%eax
08149a00 +0x0ec:  jbe    08149ba4 <+0x290>
08149a06 +0x0f2:  mov    0x18(%ebp),%eax
08149a09 +0x0f5:  mov    %al,-0xef(%ebp)
08149a0f +0x0fb:  mov    0x14(%ebp),%eax
08149a12 +0x0fe:  mov    %al,-0xf0(%ebp)
08149a18 +0x104:  mov    0x8(%ebp),%eax
08149a1b +0x107:  mov    0x4(%eax),%eax
08149a1e +0x10a:  mov    %eax,(%esp)
08149a21 +0x10d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08149a26 +0x112:  mov    %al,-0xee(%ebp)
08149a2c +0x118:  movl   $0x1,-0xec(%ebp)
08149a36 +0x122:  movw   $0x1,-0xe8(%ebp)
08149a3f +0x12b:  movw   $0x1,-0xe6(%ebp)
08149a48 +0x134:  movw   $0x1,-0xe4(%ebp)
08149a51 +0x13d:  movw   $0x1,-0xe2(%ebp)
08149a5a +0x146:  lea    -0x9c(%ebp),%eax
08149a60 +0x14c:  mov    %eax,(%esp)
08149a63 +0x14f:  call   0814ab06 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8a5>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8a5
08149a68 +0x154:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08149a6d +0x159:  mov    %eax,(%esp)
08149a70 +0x15c:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
08149a75 +0x161:  movl   $0x2,0x4(%esp)
08149a7d +0x169:  mov    %eax,(%esp)
08149a80 +0x16c:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
08149a85 +0x171:  mov    (%eax),%edx
08149a87 +0x173:  add    $0xc,%edx
08149a8a +0x176:  mov    (%edx),%ecx
08149a8c +0x178:  lea    -0x9c(%ebp),%edx
08149a92 +0x17e:  mov    %edx,0x8(%esp)
08149a96 +0x182:  lea    -0x124(%ebp),%edx
08149a9c +0x188:  mov    %edx,0x4(%esp)
08149aa0 +0x18c:  mov    %eax,(%esp)
08149aa3 +0x18f:  call   *%ecx
08149aa5 +0x191:  lea    -0x3c(%ebp),%eax
08149aa8 +0x194:  lea    -0x9c(%ebp),%edx
08149aae +0x19a:  mov    %edx,0x4(%esp)
08149ab2 +0x19e:  mov    %eax,(%esp)
08149ab5 +0x1a1:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08149aba +0x1a6:  sub    $0x4,%esp
08149abd +0x1a9:  lea    -0x3c(%ebp),%eax
08149ac0 +0x1ac:  mov    %eax,(%esp)
08149ac3 +0x1af:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
08149ac8 +0x1b4:  mov    0xc(%ebp),%edx
08149acb +0x1b7:  mov    -0x24(%ebp),%ecx
08149ace +0x1ba:  imul   $0x3d,%ecx,%ecx
08149ad1 +0x1bd:  imul   $0x268,%edx,%edx
08149ad7 +0x1c3:  lea    (%ecx,%edx,1),%edx
08149ada +0x1c6:  add    $0x20,%edx
08149add +0x1c9:  add    0x8(%ebp),%edx
08149ae0 +0x1cc:  add    $0xc,%edx
08149ae3 +0x1cf:  mov    %eax,0x4(%esp)
08149ae7 +0x1d3:  mov    %edx,(%esp)
08149aea +0x1d6:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08149aef +0x1db:  mov    0xc(%ebp),%eax
08149af2 +0x1de:  mov    -0x24(%ebp),%edx
08149af5 +0x1e1:  imul   $0x3d,%edx,%edx
08149af8 +0x1e4:  imul   $0x268,%eax,%eax
08149afe +0x1ea:  lea    (%edx,%eax,1),%eax
08149b01 +0x1ed:  add    $0x20,%eax
08149b04 +0x1f0:  add    0x8(%ebp),%eax
08149b07 +0x1f3:  add    $0xc,%eax
08149b0a +0x1f6:  mov    %eax,(%esp)
08149b0d +0x1f9:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08149b12 +0x1fe:  mov    %eax,-0x12c(%ebp)
08149b18 +0x204:  fildl  -0x12c(%ebp)
08149b1e +0x20a:  fmuls  -0x28(%ebp)
08149b21 +0x20d:  fnstcw -0x12e(%ebp)
08149b27 +0x213:  movzwl -0x12e(%ebp),%eax
08149b2e +0x21a:  mov    $0xc,%ah
08149b30 +0x21c:  mov    %ax,-0x130(%ebp)
08149b37 +0x223:  fldcw  -0x130(%ebp)
08149b3d +0x229:  fistpl -0x12c(%ebp)
08149b43 +0x22f:  fldcw  -0x12e(%ebp)
08149b49 +0x235:  mov    -0x12c(%ebp),%eax
08149b4f +0x23b:  mov    0xc(%ebp),%edx
08149b52 +0x23e:  mov    -0x24(%ebp),%ecx
08149b55 +0x241:  imul   $0x3d,%ecx,%ecx
08149b58 +0x244:  imul   $0x268,%edx,%edx
08149b5e +0x24a:  lea    (%ecx,%edx,1),%edx
08149b61 +0x24d:  add    $0x20,%edx
08149b64 +0x250:  add    0x8(%ebp),%edx
08149b67 +0x253:  add    $0xc,%edx
08149b6a +0x256:  mov    %eax,0x4(%esp)
08149b6e +0x25a:  mov    %edx,(%esp)
08149b71 +0x25d:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08149b76 +0x262:  lea    -0x9c(%ebp),%eax
08149b7c +0x268:  mov    %eax,(%esp)
08149b7f +0x26b:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
08149b84 +0x270:  jmp    08149da4 <+0x490>
08149b89 +0x275:  mov    %edx,%ebx
08149b8b +0x277:  mov    %eax,%esi
08149b8d +0x279:  lea    -0x9c(%ebp),%eax
08149b93 +0x27f:  mov    %eax,(%esp)
08149b96 +0x282:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
08149b9b +0x287:  mov    %esi,%eax
08149b9d +0x289:  mov    %ebx,%edx
08149b9f +0x28b:  jmp    08149dab <+0x497>
08149ba4 +0x290:  mov    -0x2c(%ebp),%eax
08149ba7 +0x293:  imul   0x1c(%ebp),%eax
08149bab +0x297:  cmp    -0x20(%ebp),%eax
08149bae +0x29a:  jbe    08149da4 <+0x490>
08149bb4 +0x2a0:  mov    0x18(%ebp),%eax
08149bb7 +0x2a3:  mov    %al,-0xef(%ebp)
08149bbd +0x2a9:  mov    0x14(%ebp),%eax
08149bc0 +0x2ac:  mov    %al,-0xf0(%ebp)
08149bc6 +0x2b2:  mov    $0x3f800000,%eax
08149bcb +0x2b7:  mov    %eax,-0xec(%ebp)
08149bd1 +0x2bd:  mov    0x20(%ebp),%eax
08149bd4 +0x2c0:  mov    %eax,-0xe4(%ebp)
08149bda +0x2c6:  movl   $0x0,-0xe8(%ebp)
08149be4 +0x2d0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08149be9 +0x2d5:  mov    %eax,(%esp)
08149bec +0x2d8:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
08149bf1 +0x2dd:  movl   $0x2,0x4(%esp)
08149bf9 +0x2e5:  mov    %eax,(%esp)
08149bfc +0x2e8:  call   0814a7d0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x56f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x56f
08149c01 +0x2ed:  mov    (%eax),%edx
08149c03 +0x2ef:  add    $0x8,%edx
08149c06 +0x2f2:  mov    (%edx),%ecx
08149c08 +0x2f4:  lea    -0x6c(%ebp),%edx
08149c0b +0x2f7:  mov    %edx,0x8(%esp)
08149c0f +0x2fb:  lea    -0x124(%ebp),%edx
08149c15 +0x301:  mov    %edx,0x4(%esp)
08149c19 +0x305:  mov    %eax,(%esp)
08149c1c +0x308:  call   *%ecx
08149c1e +0x30a:  lea    -0x6c(%ebp),%eax
08149c21 +0x30d:  mov    %eax,(%esp)
08149c24 +0x310:  call   0814ad32 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xad1>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xad1
08149c29 +0x315:  xor    $0x1,%eax
08149c2c +0x318:  test   %al,%al
08149c2e +0x31a:  je     08149da4 <+0x490>
08149c34 +0x320:  lea    -0x38(%ebp),%eax
08149c37 +0x323:  lea    -0x6c(%ebp),%edx
08149c3a +0x326:  mov    %edx,0x4(%esp)
08149c3e +0x32a:  mov    %eax,(%esp)
08149c41 +0x32d:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08149c46 +0x332:  sub    $0x4,%esp
08149c49 +0x335:  lea    -0x38(%ebp),%eax
08149c4c +0x338:  mov    %eax,(%esp)
08149c4f +0x33b:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
08149c54 +0x340:  mov    0xc(%ebp),%edx
08149c57 +0x343:  mov    -0x24(%ebp),%ecx
08149c5a +0x346:  imul   $0x3d,%ecx,%ecx
08149c5d +0x349:  imul   $0x268,%edx,%edx
08149c63 +0x34f:  lea    (%ecx,%edx,1),%edx
08149c66 +0x352:  add    $0x20,%edx
08149c69 +0x355:  add    0x8(%ebp),%edx
08149c6c +0x358:  add    $0xc,%edx
08149c6f +0x35b:  mov    %eax,0x4(%esp)
08149c73 +0x35f:  mov    %edx,(%esp)
08149c76 +0x362:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08149c7b +0x367:  lea    -0x34(%ebp),%eax
08149c7e +0x36a:  lea    -0x6c(%ebp),%edx
08149c81 +0x36d:  mov    %edx,0x4(%esp)
08149c85 +0x371:  mov    %eax,(%esp)
08149c88 +0x374:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08149c8d +0x379:  sub    $0x4,%esp
08149c90 +0x37c:  lea    -0x34(%ebp),%eax
08149c93 +0x37f:  mov    %eax,(%esp)
08149c96 +0x382:  call   0814ad28 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xac7>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xac7
08149c9b +0x387:  mov    (%eax),%edx
08149c9d +0x389:  mov    %edx,-0xd9(%ebp)
08149ca3 +0x38f:  mov    0x4(%eax),%edx
08149ca6 +0x392:  mov    %edx,-0xd5(%ebp)
08149cac +0x398:  mov    0x8(%eax),%edx
08149caf +0x39b:  mov    %edx,-0xd1(%ebp)
08149cb5 +0x3a1:  mov    0xc(%eax),%edx
08149cb8 +0x3a4:  mov    %edx,-0xcd(%ebp)
08149cbe +0x3aa:  mov    0x10(%eax),%edx
08149cc1 +0x3ad:  mov    %edx,-0xc9(%ebp)
08149cc7 +0x3b3:  mov    0x14(%eax),%edx
08149cca +0x3b6:  mov    %edx,-0xc5(%ebp)
08149cd0 +0x3bc:  mov    0x18(%eax),%edx
08149cd3 +0x3bf:  mov    %edx,-0xc1(%ebp)
08149cd9 +0x3c5:  mov    0x1c(%eax),%edx
08149cdc +0x3c8:  mov    %edx,-0xbd(%ebp)
08149ce2 +0x3ce:  mov    0x20(%eax),%edx
08149ce5 +0x3d1:  mov    %edx,-0xb9(%ebp)
08149ceb +0x3d7:  mov    0x24(%eax),%edx
08149cee +0x3da:  mov    %edx,-0xb5(%ebp)
08149cf4 +0x3e0:  mov    0x28(%eax),%edx
08149cf7 +0x3e3:  mov    %edx,-0xb1(%ebp)
08149cfd +0x3e9:  mov    0x2c(%eax),%edx
08149d00 +0x3ec:  mov    %edx,-0xad(%ebp)
08149d06 +0x3f2:  mov    0x30(%eax),%edx
08149d09 +0x3f5:  mov    %edx,-0xa9(%ebp)
08149d0f +0x3fb:  mov    0x34(%eax),%edx
08149d12 +0x3fe:  mov    %edx,-0xa5(%ebp)
08149d18 +0x404:  mov    0x38(%eax),%edx
08149d1b +0x407:  mov    %edx,-0xa1(%ebp)
08149d21 +0x40d:  movzbl 0x3c(%eax),%eax
08149d25 +0x411:  mov    %al,-0x9d(%ebp)
08149d2b +0x417:  mov    -0xd7(%ebp),%eax
08149d31 +0x41d:  mov    %eax,%ebx
08149d33 +0x41f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08149d38 +0x424:  mov    0xc(%eax),%eax
08149d3b +0x427:  mov    %ebx,0x4(%esp)
08149d3f +0x42b:  mov    %eax,(%esp)
08149d42 +0x42e:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08149d47 +0x433:  mov    %eax,-0x1c(%ebp)
08149d4a +0x436:  cmpl   $0x0,-0x1c(%ebp)
08149d4e +0x43a:  jne    08149d57 <+0x443>
08149d50 +0x43c:  mov    $0x0,%ebx
08149d55 +0x441:  jmp    08149dc0 <+0x4ac>
08149d57 +0x443:  mov    -0x1c(%ebp),%eax
08149d5a +0x446:  mov    %eax,(%esp)
08149d5d +0x449:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08149d62 +0x44e:  mov    %eax,%ebx
08149d64 +0x450:  mov    -0x1c(%ebp),%eax
08149d67 +0x453:  mov    %eax,(%esp)
08149d6a +0x456:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08149d6f +0x45b:  mov    %eax,%edi
08149d71 +0x45d:  movzbl -0xd8(%ebp),%eax
08149d78 +0x464:  movzbl %al,%esi
08149d7b +0x467:  mov    0x8(%ebp),%eax
08149d7e +0x46a:  mov    0x4(%eax),%eax
08149d81 +0x46d:  mov    0xc(%ebp),%edx
08149d84 +0x470:  mov    %edx,0x4(%esp)
08149d88 +0x474:  mov    %eax,(%esp)
08149d8b +0x477:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08149d90 +0x47c:  mov    %ebx,0xc(%esp)
08149d94 +0x480:  mov    %edi,0x8(%esp)
08149d98 +0x484:  mov    %esi,0x4(%esp)
08149d9c +0x488:  mov    %eax,(%esp)
08149d9f +0x48b:  call   08550a84 <_ZN10CLuckPoint12UseLuckPointEP5CUseriii>  ; CLuckPoint::UseLuckPoint(CUser*, int, int, int)
08149da4 +0x490:  mov    $0x1,%ebx
08149da9 +0x495:  jmp    08149dc0 <+0x4ac>
08149dab +0x497:  mov    %edx,%ebx
08149dad +0x499:  mov    %eax,%esi
08149daf +0x49b:  lea    -0x6c(%ebp),%eax
08149db2 +0x49e:  mov    %eax,(%esp)
08149db5 +0x4a1:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
08149dba +0x4a6:  mov    %esi,%eax
08149dbc +0x4a8:  mov    %ebx,%edx
08149dbe +0x4aa:  jmp    08149de1 <+0x4cd>
08149dc0 +0x4ac:  lea    -0x6c(%ebp),%eax
08149dc3 +0x4af:  mov    %eax,(%esp)
08149dc6 +0x4b2:  call   0814ab4c <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x8eb>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x8eb
08149dcb +0x4b7:  test   %ebx,%ebx
08149dcd +0x4b9:  lea    -0x124(%ebp),%eax
08149dd3 +0x4bf:  mov    %eax,(%esp)
08149dd6 +0x4c2:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08149ddb +0x4c7:  addl   $0x1,-0x24(%ebp)
08149ddf +0x4cb:  jmp    08149dff <+0x4eb>
08149de1 +0x4cd:  mov    %edx,%ebx
08149de3 +0x4cf:  mov    %eax,%esi
08149de5 +0x4d1:  lea    -0x124(%ebp),%eax
08149deb +0x4d7:  mov    %eax,(%esp)
08149dee +0x4da:  call   0814aaf0 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x88f>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x88f
08149df3 +0x4df:  mov    %esi,%eax
08149df5 +0x4e1:  mov    %ebx,%edx
08149df7 +0x4e3:  mov    %eax,(%esp)
08149dfa +0x4e6:  call   08ae3750 <_Unwind_Resume>
08149dff +0x4eb:  mov    -0x24(%ebp),%eax
08149e02 +0x4ee:  cmp    0x10(%ebp),%eax
08149e05 +0x4f1:  setl   %al
08149e08 +0x4f4:  test   %al,%al
08149e0a +0x4f6:  jne    081499ce <+0xba>
08149e10 +0x4fc:  mov    $0x1,%eax
08149e15 +0x501:  lea    -0xc(%ebp),%esp
08149e18 +0x504:  add    $0x0,%esp
08149e1b +0x507:  pop    %ebx
08149e1c +0x508:  pop    %esi
08149e1d +0x509:  pop    %edi
08149e1e +0x50a:  pop    %ebp
08149e1f +0x50b:  ret
```

## 反编译 C

```c
// WongWork::CBossPlay::generateRewardItem @ 0x8149914

/* WongWork::CBossPlay::generateRewardItem(int, int, unsigned int, ENUM_DUNGEON_DIFFICULTY, unsigned
   int, CDungeon const*) */

undefined4 __thiscall
WongWork::CBossPlay::generateRewardItem
          (CBossPlay *this,int param_1,int param_2,undefined1 param_3,undefined1 param_5,int param_6
          ,CDungeon *param_7)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  CDataManager *pCVar4;
  int iVar5;
  CItemGeneratorMgr *pCVar6;
  int *piVar7;
  Inven_Item *pIVar8;
  undefined4 *puVar9;
  int iVar10;
  CUser *pCVar11;
  stGenerateRefData_t local_128 [52];
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined4 local_f0;
  undefined4 local_ec;
  CDungeon *local_e8;
  undefined1 local_dd;
  byte bStack_dc;
  undefined2 uStack_db;
  undefined2 local_d9;
  undefined2 uStack_d7;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined1 local_a1;
  stGenerateResult_t local_a0 [48];
  stGenerateResult_t local_70 [48];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_40 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_3c [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_38 [4];
  int local_34;
  int local_30;
  float local_2c;
  int local_28;
  uint local_24;
  CItem *local_20;
  
  *(int *)(this + param_1 * 0x268 + 0x28) = param_2;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0.0;
  uVar3 = CDungeon::get_index(param_7);
  pCVar4 = (CDataManager *)G_CDataManager();
  iVar5 = CDataManager::GetTowerScript(pCVar4,uVar3);
  local_34 = *(int *)(iVar5 + 0xc88);
  uVar3 = CDungeon::get_index(param_7);
  pCVar4 = (CDataManager *)G_CDataManager();
  iVar5 = CDataManager::GetTowerScript(pCVar4,uVar3);
  local_30 = *(int *)(iVar5 + 0xc8c);
  uVar3 = CDungeon::get_index(param_7);
  pCVar4 = (CDataManager *)G_CDataManager();
  iVar5 = CDataManager::GetTowerScript(pCVar4,uVar3);
  local_2c = *(float *)(iVar5 + 0xc94);
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    stGenerateRefData_t::stGenerateRefData_t(local_128);
                    /* try { // try from 081499e2 to 081499e6 has its CatchHandler @ 08149de1 */
    stGenerateResult_t::stGenerateResult_t(local_70);
                    /* try { // try from 081499ee to 08149a67 has its CatchHandler @ 08149dab */
    local_24 = get_rand_int(1000);
    if ((uint)(local_34 * param_6) < local_24 || local_34 * param_6 - local_24 == 0) {
      if (local_24 <= (uint)(local_30 * param_6) && local_30 * param_6 - local_24 != 0) {
        local_f0 = 0x3f800000;
        local_e8 = param_7;
        local_ec = 0;
        local_f4 = param_3;
        local_f3 = param_5;
                    /* try { // try from 08149be4 to 08149da3 has its CatchHandler @ 08149dab */
        pCVar4 = (CDataManager *)G_CDataManager();
        pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar4);
        piVar7 = (int *)CItemGeneratorMgr::getGenerator(pCVar6,2);
        (**(code **)(*piVar7 + 8))(piVar7,local_128,local_70);
        cVar2 = std::vector<Inven_Item,std::allocator<Inven_Item>>::empty();
        if (cVar2 != '\x01') {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
          pIVar8 = (Inven_Item *)
                   __gnu_cxx::
                   __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                   ::operator*(local_3c);
          Inven_Item::setCopy((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x2c),pIVar8
                             );
          std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
          puVar9 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                   ::operator*(local_38);
          uVar1 = *puVar9;
          local_dd = (undefined1)uVar1;
          bStack_dc = (byte)((uint)uVar1 >> 8);
          uStack_db = (undefined2)((uint)uVar1 >> 0x10);
          local_d9 = (undefined2)puVar9[1];
          uStack_d7 = (undefined2)((uint)puVar9[1] >> 0x10);
          local_d5 = puVar9[2];
          local_d1 = puVar9[3];
          local_cd = puVar9[4];
          local_c9 = puVar9[5];
          local_c5 = puVar9[6];
          local_c1 = puVar9[7];
          local_bd = puVar9[8];
          local_b9 = puVar9[9];
          local_b5 = puVar9[10];
          local_b1 = puVar9[0xb];
          local_ad = puVar9[0xc];
          local_a9 = puVar9[0xd];
          local_a5 = puVar9[0xe];
          local_a1 = *(undefined1 *)(puVar9 + 0xf);
          iVar5 = CONCAT22(local_d9,uStack_db);
          iVar10 = G_CDataManager();
          local_20 = (CItem *)CItemList::find_item(*(CItemList **)(iVar10 + 0xc),iVar5);
          if (local_20 != (CItem *)0x0) {
            iVar5 = CItem::get_grade(local_20);
            iVar10 = CItem::get_rarity(local_20);
            uVar3 = (uint)bStack_dc;
            pCVar11 = (CUser *)CParty::get_user(*(CParty **)(this + 4),param_1);
            CLuckPoint::UseLuckPoint(pCVar11,uVar3,iVar10,iVar5);
          }
        }
      }
    }
    else {
      local_f4 = param_3;
      local_f3 = param_5;
      local_f2 = CParty::get_member_count(*(CParty **)(this + 4));
      local_f0 = 1;
      local_ec = 0x10001;
      local_e8 = (CDungeon *)0x10001;
      stGenerateResult_t::stGenerateResult_t(local_a0);
                    /* try { // try from 08149a68 to 08149ab9 has its CatchHandler @ 08149b89 */
      pCVar4 = (CDataManager *)G_CDataManager();
      pCVar6 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar4);
      piVar7 = (int *)CItemGeneratorMgr::getGenerator(pCVar6,2);
      (**(code **)(*piVar7 + 0xc))(piVar7,local_128,local_a0);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      pIVar8 = (Inven_Item *)
               __gnu_cxx::
               __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
               operator*(local_40);
      Inven_Item::setCopy((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x2c),pIVar8);
      iVar5 = Inven_Item::get_add_info
                        ((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x2c));
      Inven_Item::set_add_info
                ((Inven_Item *)(this + local_28 * 0x3d + param_1 * 0x268 + 0x2c),
                 (int)ROUND((float)iVar5 * local_2c));
                    /* try { // try from 08149b7f to 08149b83 has its CatchHandler @ 08149dab */
      stGenerateResult_t::~stGenerateResult_t(local_a0);
    }
                    /* try { // try from 08149dc6 to 08149dca has its CatchHandler @ 08149de1 */
    stGenerateResult_t::~stGenerateResult_t(local_70);
    stGenerateRefData_t::~stGenerateRefData_t(local_128);
  }
  return 1;
}
```
