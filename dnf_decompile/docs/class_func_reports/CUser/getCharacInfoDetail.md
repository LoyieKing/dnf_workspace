# getCharacInfoDetail

`_ZNK5CUser19getCharacInfoDetailEijP11CHARAC_DATA`

`CUser::getCharacInfoDetail(int, unsigned int, CHARAC_DATA*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864bdba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864bdba  _ZNK5CUser19getCharacInfoDetailEijP11CHARAC_DATA
#           CUser::getCharacInfoDetail(int, unsigned int, CHARAC_DATA*) const
# range [0x0864bdba, 0x0864c859]
0864bdba +0x000:  push   %ebp
0864bdbb +0x001:  mov    %esp,%ebp
0864bdbd +0x003:  push   %edi
0864bdbe +0x004:  push   %esi
0864bdbf +0x005:  push   %ebx
0864bdc0 +0x006:  sub    $0x1c,%esp
0864bdc3 +0x009:  cmpl   $0x0,0xc(%ebp)
0864bdc7 +0x00d:  js     0864bde5 <+0x2b>
0864bdc9 +0x00f:  mov    0x8(%ebp),%eax
0864bdcc +0x012:  add    $0x796e8,%eax
0864bdd1 +0x017:  mov    %eax,(%esp)
0864bdd4 +0x01a:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864bdd9 +0x01f:  cmp    0xc(%ebp),%eax
0864bddc +0x022:  jle    0864bde5 <+0x2b>
0864bdde +0x024:  mov    $0x1,%eax
0864bde3 +0x029:  jmp    0864bdea <+0x30>
0864bde5 +0x02b:  mov    $0x0,%eax
0864bdea +0x030:  test   %al,%al
0864bdec +0x032:  je     0864c84c <+0xa92>
0864bdf2 +0x038:  mov    0xc(%ebp),%eax
0864bdf5 +0x03b:  mov    0x8(%ebp),%edx
0864bdf8 +0x03e:  add    $0x796e8,%edx
0864bdfe +0x044:  mov    %eax,0x4(%esp)
0864be02 +0x048:  mov    %edx,(%esp)
0864be05 +0x04b:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864be0a +0x050:  mov    (%eax),%eax
0864be0c +0x052:  cmp    0x10(%ebp),%eax
0864be0f +0x055:  setne  %al
0864be12 +0x058:  test   %al,%al
0864be14 +0x05a:  je     0864be20 <+0x66>
0864be16 +0x05c:  mov    $0x0,%eax
0864be1b +0x061:  jmp    0864c851 <+0xa97>
0864be20 +0x066:  mov    0xc(%ebp),%eax
0864be23 +0x069:  mov    0x8(%ebp),%edx
0864be26 +0x06c:  add    $0x796e8,%edx
0864be2c +0x072:  mov    %eax,0x4(%esp)
0864be30 +0x076:  mov    %edx,(%esp)
0864be33 +0x079:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864be38 +0x07e:  mov    (%eax),%eax
0864be3a +0x080:  mov    %eax,%edx
0864be3c +0x082:  mov    0x14(%ebp),%eax
0864be3f +0x085:  mov    %edx,(%eax)
0864be41 +0x087:  mov    0xc(%ebp),%eax
0864be44 +0x08a:  mov    0x8(%ebp),%edx
0864be47 +0x08d:  add    $0x796e8,%edx
0864be4d +0x093:  mov    %eax,0x4(%esp)
0864be51 +0x097:  mov    %edx,(%esp)
0864be54 +0x09a:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864be59 +0x09f:  add    $0x4,%eax
0864be5c +0x0a2:  mov    0x14(%ebp),%edx
0864be5f +0x0a5:  add    $0x4,%edx
0864be62 +0x0a8:  movl   $0x1e,0x8(%esp)
0864be6a +0x0b0:  mov    %eax,0x4(%esp)
0864be6e +0x0b4:  mov    %edx,(%esp)
0864be71 +0x0b7:  call   0807d8d0 <_init+0x1c8>
0864be76 +0x0bc:  mov    0xc(%ebp),%eax
0864be79 +0x0bf:  mov    0x8(%ebp),%edx
0864be7c +0x0c2:  add    $0x796e8,%edx
0864be82 +0x0c8:  mov    %eax,0x4(%esp)
0864be86 +0x0cc:  mov    %edx,(%esp)
0864be89 +0x0cf:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864be8e +0x0d4:  movzbl 0x22(%eax),%edx
0864be92 +0x0d8:  mov    0x14(%ebp),%eax
0864be95 +0x0db:  mov    %dl,0x22(%eax)
0864be98 +0x0de:  mov    0xc(%ebp),%eax
0864be9b +0x0e1:  mov    0x8(%ebp),%edx
0864be9e +0x0e4:  add    $0x796e8,%edx
0864bea4 +0x0ea:  mov    %eax,0x4(%esp)
0864bea8 +0x0ee:  mov    %edx,(%esp)
0864beab +0x0f1:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864beb0 +0x0f6:  movzbl 0x26(%eax),%edx
0864beb4 +0x0fa:  mov    0x14(%ebp),%eax
0864beb7 +0x0fd:  mov    %dl,0x24(%eax)
0864beba +0x100:  mov    0xc(%ebp),%eax
0864bebd +0x103:  mov    0x8(%ebp),%edx
0864bec0 +0x106:  add    $0x796e8,%edx
0864bec6 +0x10c:  mov    %eax,0x4(%esp)
0864beca +0x110:  mov    %edx,(%esp)
0864becd +0x113:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864bed2 +0x118:  movzwl 0x27(%eax),%edx
0864bed6 +0x11c:  mov    0x14(%ebp),%eax
0864bed9 +0x11f:  mov    %dx,0x25(%eax)
0864bedd +0x123:  mov    0xc(%ebp),%eax
0864bee0 +0x126:  mov    0x8(%ebp),%edx
0864bee3 +0x129:  add    $0x796e8,%edx
0864bee9 +0x12f:  mov    %eax,0x4(%esp)
0864beed +0x133:  mov    %edx,(%esp)
0864bef0 +0x136:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864bef5 +0x13b:  mov    0x2b(%eax),%eax
0864bef8 +0x13e:  mov    %eax,%edx
0864befa +0x140:  mov    0x14(%ebp),%eax
0864befd +0x143:  mov    %edx,0x28(%eax)
0864bf00 +0x146:  mov    0xc(%ebp),%eax
0864bf03 +0x149:  mov    0x8(%ebp),%edx
0864bf06 +0x14c:  add    $0x796e8,%edx
0864bf0c +0x152:  mov    %eax,0x4(%esp)
0864bf10 +0x156:  mov    %edx,(%esp)
0864bf13 +0x159:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864bf18 +0x15e:  movzbl 0x29(%eax),%edx
0864bf1c +0x162:  mov    0x14(%ebp),%eax
0864bf1f +0x165:  mov    %dl,0x27(%eax)
0864bf22 +0x168:  mov    0xc(%ebp),%eax
0864bf25 +0x16b:  mov    0x8(%ebp),%edx
0864bf28 +0x16e:  add    $0x796e8,%edx
0864bf2e +0x174:  mov    %eax,0x4(%esp)
0864bf32 +0x178:  mov    %edx,(%esp)
0864bf35 +0x17b:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864bf3a +0x180:  movzbl 0x75(%eax),%edx
0864bf3e +0x184:  mov    0x14(%ebp),%eax
0864bf41 +0x187:  mov    %dl,0xb2(%eax)
0864bf47 +0x18d:  mov    0xc(%ebp),%eax
0864bf4a +0x190:  mov    0x8(%ebp),%edx
0864bf4d +0x193:  add    $0x796e8,%edx
0864bf53 +0x199:  mov    %eax,0x4(%esp)
0864bf57 +0x19d:  mov    %edx,(%esp)
0864bf5a +0x1a0:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864bf5f +0x1a5:  mov    %eax,%edx
0864bf61 +0x1a7:  mov    0x14(%ebp),%eax
0864bf64 +0x1aa:  add    $0x60,%eax
0864bf67 +0x1ad:  add    $0x88,%edx
0864bf6d +0x1b3:  mov    $0x52,%ebx
0864bf72 +0x1b8:  mov    %eax,%ecx
0864bf74 +0x1ba:  and    $0x1,%ecx
0864bf77 +0x1bd:  test   %ecx,%ecx
0864bf79 +0x1bf:  je     0864bf89 <+0x1cf>
0864bf7b +0x1c1:  movzbl (%edx),%ecx
0864bf7e +0x1c4:  mov    %cl,(%eax)
0864bf80 +0x1c6:  add    $0x1,%eax
0864bf83 +0x1c9:  add    $0x1,%edx
0864bf86 +0x1cc:  sub    $0x1,%ebx
0864bf89 +0x1cf:  mov    %eax,%ecx
0864bf8b +0x1d1:  and    $0x2,%ecx
0864bf8e +0x1d4:  test   %ecx,%ecx
0864bf90 +0x1d6:  je     0864bfa1 <+0x1e7>
0864bf92 +0x1d8:  movzwl (%edx),%ecx
0864bf95 +0x1db:  mov    %cx,(%eax)
0864bf98 +0x1de:  add    $0x2,%eax
0864bf9b +0x1e1:  add    $0x2,%edx
0864bf9e +0x1e4:  sub    $0x2,%ebx
0864bfa1 +0x1e7:  mov    %ebx,%ecx
0864bfa3 +0x1e9:  shr    $0x2,%ecx
0864bfa6 +0x1ec:  mov    %eax,%edi
0864bfa8 +0x1ee:  mov    %edx,%esi
0864bfaa +0x1f0:  rep movsl %ds:(%esi),%es:(%edi)
0864bfac +0x1f2:  mov    %esi,%edx
0864bfae +0x1f4:  mov    %edi,%eax
0864bfb0 +0x1f6:  mov    $0x0,%ecx
0864bfb5 +0x1fb:  mov    %ebx,%esi
0864bfb7 +0x1fd:  and    $0x2,%esi
0864bfba +0x200:  test   %esi,%esi
0864bfbc +0x202:  je     0864bfc9 <+0x20f>
0864bfbe +0x204:  movzwl (%edx,%ecx,1),%esi
0864bfc2 +0x208:  mov    %si,(%eax,%ecx,1)
0864bfc6 +0x20c:  add    $0x2,%ecx
0864bfc9 +0x20f:  and    $0x1,%ebx
0864bfcc +0x212:  test   %ebx,%ebx
0864bfce +0x214:  je     0864bfd7 <+0x21d>
0864bfd0 +0x216:  movzbl (%edx,%ecx,1),%edx
0864bfd4 +0x21a:  mov    %dl,(%eax,%ecx,1)
0864bfd7 +0x21d:  mov    0xc(%ebp),%eax
0864bfda +0x220:  mov    0x8(%ebp),%edx
0864bfdd +0x223:  add    $0x796e8,%edx
0864bfe3 +0x229:  mov    %eax,0x4(%esp)
0864bfe7 +0x22d:  mov    %edx,(%esp)
0864bfea +0x230:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864bfef +0x235:  movzwl 0x33(%eax),%edx
0864bff3 +0x239:  mov    0x14(%ebp),%eax
0864bff6 +0x23c:  mov    %dx,0x2c(%eax)
0864bffa +0x240:  mov    0xc(%ebp),%eax
0864bffd +0x243:  mov    0x8(%ebp),%edx
0864c000 +0x246:  add    $0x796e8,%edx
0864c006 +0x24c:  mov    %eax,0x4(%esp)
0864c00a +0x250:  mov    %edx,(%esp)
0864c00d +0x253:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c012 +0x258:  movzwl 0x35(%eax),%edx
0864c016 +0x25c:  mov    0x14(%ebp),%eax
0864c019 +0x25f:  mov    %dx,0x2e(%eax)
0864c01d +0x263:  mov    0xc(%ebp),%eax
0864c020 +0x266:  mov    0x8(%ebp),%edx
0864c023 +0x269:  add    $0x796e8,%edx
0864c029 +0x26f:  mov    %eax,0x4(%esp)
0864c02d +0x273:  mov    %edx,(%esp)
0864c030 +0x276:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c035 +0x27b:  movzwl 0x37(%eax),%edx
0864c039 +0x27f:  mov    0x14(%ebp),%eax
0864c03c +0x282:  mov    %dx,0x30(%eax)
0864c040 +0x286:  mov    0xc(%ebp),%eax
0864c043 +0x289:  mov    0x8(%ebp),%edx
0864c046 +0x28c:  add    $0x796e8,%edx
0864c04c +0x292:  mov    %eax,0x4(%esp)
0864c050 +0x296:  mov    %edx,(%esp)
0864c053 +0x299:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c058 +0x29e:  movzwl 0x4f(%eax),%edx
0864c05c +0x2a2:  mov    0x14(%ebp),%eax
0864c05f +0x2a5:  mov    %dx,0x32(%eax)
0864c063 +0x2a9:  mov    0xc(%ebp),%eax
0864c066 +0x2ac:  mov    0x8(%ebp),%edx
0864c069 +0x2af:  add    $0x796e8,%edx
0864c06f +0x2b5:  mov    %eax,0x4(%esp)
0864c073 +0x2b9:  mov    %edx,(%esp)
0864c076 +0x2bc:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c07b +0x2c1:  mov    0x7b(%eax),%edx
0864c07e +0x2c4:  mov    0x14(%ebp),%eax
0864c081 +0x2c7:  mov    %edx,0x4d(%eax)
0864c084 +0x2ca:  mov    0xc(%ebp),%eax
0864c087 +0x2cd:  mov    0x8(%ebp),%edx
0864c08a +0x2d0:  add    $0x796e8,%edx
0864c090 +0x2d6:  mov    %eax,0x4(%esp)
0864c094 +0x2da:  mov    %edx,(%esp)
0864c097 +0x2dd:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c09c +0x2e2:  mov    0x7f(%eax),%eax
0864c09f +0x2e5:  mov    %eax,%edx
0864c0a1 +0x2e7:  mov    0x14(%ebp),%eax
0864c0a4 +0x2ea:  mov    %edx,0x118(%eax)
0864c0aa +0x2f0:  mov    0xc(%ebp),%eax
0864c0ad +0x2f3:  mov    0x8(%ebp),%edx
0864c0b0 +0x2f6:  add    $0x796e8,%edx
0864c0b6 +0x2fc:  mov    %eax,0x4(%esp)
0864c0ba +0x300:  mov    %edx,(%esp)
0864c0bd +0x303:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c0c2 +0x308:  mov    0xdbe(%eax),%edx
0864c0c8 +0x30e:  mov    0x14(%ebp),%eax
0864c0cb +0x311:  mov    %edx,0x56(%eax)
0864c0ce +0x314:  mov    0xc(%ebp),%eax
0864c0d1 +0x317:  mov    0x8(%ebp),%edx
0864c0d4 +0x31a:  add    $0x796e8,%edx
0864c0da +0x320:  mov    %eax,0x4(%esp)
0864c0de +0x324:  mov    %edx,(%esp)
0864c0e1 +0x327:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c0e6 +0x32c:  movzbl 0xdc2(%eax),%edx
0864c0ed +0x333:  mov    0x14(%ebp),%eax
0864c0f0 +0x336:  mov    %dl,0x5a(%eax)
0864c0f3 +0x339:  mov    0xc(%ebp),%eax
0864c0f6 +0x33c:  mov    0x8(%ebp),%edx
0864c0f9 +0x33f:  add    $0x796e8,%edx
0864c0ff +0x345:  mov    %eax,0x4(%esp)
0864c103 +0x349:  mov    %edx,(%esp)
0864c106 +0x34c:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c10b +0x351:  movzwl 0x77(%eax),%edx
0864c10f +0x355:  mov    0x14(%ebp),%eax
0864c112 +0x358:  mov    %dx,0x5b(%eax)
0864c116 +0x35c:  mov    0xc(%ebp),%eax
0864c119 +0x35f:  mov    0x8(%ebp),%edx
0864c11c +0x362:  add    $0x796e8,%edx
0864c122 +0x368:  mov    %eax,0x4(%esp)
0864c126 +0x36c:  mov    %edx,(%esp)
0864c129 +0x36f:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c12e +0x374:  movzwl 0x79(%eax),%edx
0864c132 +0x378:  mov    0x14(%ebp),%eax
0864c135 +0x37b:  mov    %dx,0x5d(%eax)
0864c139 +0x37f:  mov    0xc(%ebp),%eax
0864c13c +0x382:  mov    0x8(%ebp),%edx
0864c13f +0x385:  add    $0x796e8,%edx
0864c145 +0x38b:  mov    %eax,0x4(%esp)
0864c149 +0x38f:  mov    %edx,(%esp)
0864c14c +0x392:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c151 +0x397:  mov    0xe22(%eax),%eax
0864c157 +0x39d:  test   %eax,%eax
0864c159 +0x39f:  setne  %al
0864c15c +0x3a2:  test   %al,%al
0864c15e +0x3a4:  je     0864c169 <+0x3af>
0864c160 +0x3a6:  mov    0x14(%ebp),%eax
0864c163 +0x3a9:  movb   $0x1,0x5f(%eax)
0864c167 +0x3ad:  jmp    0864c170 <+0x3b6>
0864c169 +0x3af:  mov    0x14(%ebp),%eax
0864c16c +0x3b2:  movb   $0x0,0x5f(%eax)
0864c170 +0x3b6:  mov    0x14(%ebp),%eax
0864c173 +0x3b9:  lea    0x34(%eax),%ebx
0864c176 +0x3bc:  mov    0xc(%ebp),%eax
0864c179 +0x3bf:  mov    0x8(%ebp),%edx
0864c17c +0x3c2:  add    $0x796e8,%edx
0864c182 +0x3c8:  mov    %eax,0x4(%esp)
0864c186 +0x3cc:  mov    %edx,(%esp)
0864c189 +0x3cf:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c18e +0x3d4:  add    $0x39,%eax
0864c191 +0x3d7:  mov    %ebx,0x4(%esp)
0864c195 +0x3db:  mov    %eax,(%esp)
0864c198 +0x3de:  call   08694806 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x105b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x105b
0864c19d +0x3e3:  mov    0xc(%ebp),%eax
0864c1a0 +0x3e6:  mov    0x8(%ebp),%edx
0864c1a3 +0x3e9:  add    $0x796e8,%edx
0864c1a9 +0x3ef:  mov    %eax,0x4(%esp)
0864c1ad +0x3f3:  mov    %edx,(%esp)
0864c1b0 +0x3f6:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c1b5 +0x3fb:  movzwl 0x4d(%eax),%edx
0864c1b9 +0x3ff:  mov    0x14(%ebp),%eax
0864c1bc +0x402:  mov    %dx,0xb3(%eax)
0864c1c3 +0x409:  mov    0xc(%ebp),%eax
0864c1c6 +0x40c:  mov    0x8(%ebp),%edx
0864c1c9 +0x40f:  add    $0x796e8,%edx
0864c1cf +0x415:  mov    %eax,0x4(%esp)
0864c1d3 +0x419:  mov    %edx,(%esp)
0864c1d6 +0x41c:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c1db +0x421:  mov    0x51(%eax),%edx
0864c1de +0x424:  mov    0x14(%ebp),%eax
0864c1e1 +0x427:  mov    %edx,0xb5(%eax)
0864c1e7 +0x42d:  mov    0xc(%ebp),%eax
0864c1ea +0x430:  mov    0x8(%ebp),%edx
0864c1ed +0x433:  add    $0x796e8,%edx
0864c1f3 +0x439:  mov    %eax,0x4(%esp)
0864c1f7 +0x43d:  mov    %edx,(%esp)
0864c1fa +0x440:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c1ff +0x445:  add    $0x55,%eax
0864c202 +0x448:  mov    0x14(%ebp),%edx
0864c205 +0x44b:  add    $0xb9,%edx
0864c20b +0x451:  movl   $0x10,0x8(%esp)
0864c213 +0x459:  mov    %eax,0x4(%esp)
0864c217 +0x45d:  mov    %edx,(%esp)
0864c21a +0x460:  call   0807d8a0 <_init+0x198>
0864c21f +0x465:  mov    0xc(%ebp),%eax
0864c222 +0x468:  mov    0x8(%ebp),%edx
0864c225 +0x46b:  add    $0x796e8,%edx
0864c22b +0x471:  mov    %eax,0x4(%esp)
0864c22f +0x475:  mov    %edx,(%esp)
0864c232 +0x478:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c237 +0x47d:  mov    0xdf4(%eax),%edx
0864c23d +0x483:  mov    0x14(%ebp),%eax
0864c240 +0x486:  mov    %edx,0xfe(%eax)
0864c246 +0x48c:  mov    0xc(%ebp),%eax
0864c249 +0x48f:  mov    0x8(%ebp),%edx
0864c24c +0x492:  add    $0x796e8,%edx
0864c252 +0x498:  mov    %eax,0x4(%esp)
0864c256 +0x49c:  mov    %edx,(%esp)
0864c259 +0x49f:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c25e +0x4a4:  mov    0xdf8(%eax),%edx
0864c264 +0x4aa:  mov    0x14(%ebp),%eax
0864c267 +0x4ad:  mov    %edx,0x102(%eax)
0864c26d +0x4b3:  mov    0xc(%ebp),%eax
0864c270 +0x4b6:  mov    0x8(%ebp),%edx
0864c273 +0x4b9:  add    $0x796e8,%edx
0864c279 +0x4bf:  mov    %eax,0x4(%esp)
0864c27d +0x4c3:  mov    %edx,(%esp)
0864c280 +0x4c6:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c285 +0x4cb:  add    $0x65,%eax
0864c288 +0x4ce:  mov    %eax,(%esp)
0864c28b +0x4d1:  call   08695986 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x21db>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x21db
0864c290 +0x4d6:  mov    0x14(%ebp),%edx
0864c293 +0x4d9:  mov    %eax,0xc9(%edx)
0864c299 +0x4df:  mov    0xc(%ebp),%eax
0864c29c +0x4e2:  mov    0x8(%ebp),%edx
0864c29f +0x4e5:  add    $0x796e8,%edx
0864c2a5 +0x4eb:  mov    %eax,0x4(%esp)
0864c2a9 +0x4ef:  mov    %edx,(%esp)
0864c2ac +0x4f2:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c2b1 +0x4f7:  add    $0x65,%eax
0864c2b4 +0x4fa:  mov    %eax,(%esp)
0864c2b7 +0x4fd:  call   08695990 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x21e5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x21e5
0864c2bc +0x502:  mov    0x14(%ebp),%edx
0864c2bf +0x505:  mov    %eax,0xcd(%edx)
0864c2c5 +0x50b:  mov    0xc(%ebp),%eax
0864c2c8 +0x50e:  mov    0x8(%ebp),%edx
0864c2cb +0x511:  add    $0x796e8,%edx
0864c2d1 +0x517:  mov    %eax,0x4(%esp)
0864c2d5 +0x51b:  mov    %edx,(%esp)
0864c2d8 +0x51e:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c2dd +0x523:  add    $0x65,%eax
0864c2e0 +0x526:  mov    %eax,(%esp)
0864c2e3 +0x529:  call   0869599c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x21f1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x21f1
0864c2e8 +0x52e:  mov    0x14(%ebp),%edx
0864c2eb +0x531:  mov    %eax,0xd1(%edx)
0864c2f1 +0x537:  mov    0xc(%ebp),%eax
0864c2f4 +0x53a:  mov    0x8(%ebp),%edx
0864c2f7 +0x53d:  add    $0x796e8,%edx
0864c2fd +0x543:  mov    %eax,0x4(%esp)
0864c301 +0x547:  mov    %edx,(%esp)
0864c304 +0x54a:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c309 +0x54f:  mov    0xe49(%eax),%edx
0864c30f +0x555:  mov    0x14(%ebp),%eax
0864c312 +0x558:  mov    %edx,0xd5(%eax)
0864c318 +0x55e:  mov    0xc(%ebp),%eax
0864c31b +0x561:  mov    0x8(%ebp),%edx
0864c31e +0x564:  add    $0x796e8,%edx
0864c324 +0x56a:  mov    %eax,0x4(%esp)
0864c328 +0x56e:  mov    %edx,(%esp)
0864c32b +0x571:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c330 +0x576:  mov    0xe4d(%eax),%edx
0864c336 +0x57c:  mov    0x14(%ebp),%eax
0864c339 +0x57f:  mov    %edx,0xd9(%eax)
0864c33f +0x585:  mov    0xc(%ebp),%eax
0864c342 +0x588:  mov    0x8(%ebp),%edx
0864c345 +0x58b:  add    $0x796e8,%edx
0864c34b +0x591:  mov    %eax,0x4(%esp)
0864c34f +0x595:  mov    %edx,(%esp)
0864c352 +0x598:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c357 +0x59d:  mov    0xe51(%eax),%edx
0864c35d +0x5a3:  mov    0x14(%ebp),%eax
0864c360 +0x5a6:  mov    %edx,0xdd(%eax)
0864c366 +0x5ac:  mov    0xc(%ebp),%eax
0864c369 +0x5af:  mov    0x8(%ebp),%edx
0864c36c +0x5b2:  add    $0x796e8,%edx
0864c372 +0x5b8:  mov    %eax,0x4(%esp)
0864c376 +0x5bc:  mov    %edx,(%esp)
0864c379 +0x5bf:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c37e +0x5c4:  mov    0xe55(%eax),%edx
0864c384 +0x5ca:  mov    0x14(%ebp),%eax
0864c387 +0x5cd:  mov    %edx,0xe1(%eax)
0864c38d +0x5d3:  mov    0xc(%ebp),%eax
0864c390 +0x5d6:  mov    0x8(%ebp),%edx
0864c393 +0x5d9:  add    $0x796e8,%edx
0864c399 +0x5df:  mov    %eax,0x4(%esp)
0864c39d +0x5e3:  mov    %edx,(%esp)
0864c3a0 +0x5e6:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c3a5 +0x5eb:  mov    0xe59(%eax),%edx
0864c3ab +0x5f1:  mov    0x14(%ebp),%eax
0864c3ae +0x5f4:  mov    %edx,0xe5(%eax)
0864c3b4 +0x5fa:  mov    0xc(%ebp),%eax
0864c3b7 +0x5fd:  mov    0x8(%ebp),%edx
0864c3ba +0x600:  add    $0x796e8,%edx
0864c3c0 +0x606:  mov    %eax,0x4(%esp)
0864c3c4 +0x60a:  mov    %edx,(%esp)
0864c3c7 +0x60d:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c3cc +0x612:  mov    0xe5d(%eax),%edx
0864c3d2 +0x618:  mov    0x14(%ebp),%eax
0864c3d5 +0x61b:  mov    %edx,0xe9(%eax)
0864c3db +0x621:  mov    0xc(%ebp),%eax
0864c3de +0x624:  mov    0x8(%ebp),%edx
0864c3e1 +0x627:  add    $0x796e8,%edx
0864c3e7 +0x62d:  mov    %eax,0x4(%esp)
0864c3eb +0x631:  mov    %edx,(%esp)
0864c3ee +0x634:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c3f3 +0x639:  mov    0xe45(%eax),%edx
0864c3f9 +0x63f:  mov    0x14(%ebp),%eax
0864c3fc +0x642:  mov    %edx,0xed(%eax)
0864c402 +0x648:  mov    0xc(%ebp),%eax
0864c405 +0x64b:  mov    0x8(%ebp),%edx
0864c408 +0x64e:  add    $0x796e8,%edx
0864c40e +0x654:  mov    %eax,0x4(%esp)
0864c412 +0x658:  mov    %edx,(%esp)
0864c415 +0x65b:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c41a +0x660:  mov    0xe68(%eax),%edx
0864c420 +0x666:  mov    0x14(%ebp),%eax
0864c423 +0x669:  mov    %edx,0xf1(%eax)
0864c429 +0x66f:  mov    0xc(%ebp),%eax
0864c42c +0x672:  mov    0x8(%ebp),%edx
0864c42f +0x675:  add    $0x796e8,%edx
0864c435 +0x67b:  mov    %eax,0x4(%esp)
0864c439 +0x67f:  mov    %edx,(%esp)
0864c43c +0x682:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c441 +0x687:  movzbl 0xe70(%eax),%edx
0864c448 +0x68e:  mov    0x14(%ebp),%eax
0864c44b +0x691:  mov    %dl,0xf5(%eax)
0864c451 +0x697:  mov    0xc(%ebp),%eax
0864c454 +0x69a:  mov    0x8(%ebp),%edx
0864c457 +0x69d:  add    $0x796e8,%edx
0864c45d +0x6a3:  mov    %eax,0x4(%esp)
0864c461 +0x6a7:  mov    %edx,(%esp)
0864c464 +0x6aa:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c469 +0x6af:  mov    0xe71(%eax),%edx
0864c46f +0x6b5:  mov    0x14(%ebp),%eax
0864c472 +0x6b8:  mov    %edx,0xf6(%eax)
0864c478 +0x6be:  mov    0xc(%ebp),%eax
0864c47b +0x6c1:  mov    0x8(%ebp),%edx
0864c47e +0x6c4:  add    $0x796e8,%edx
0864c484 +0x6ca:  mov    %eax,0x4(%esp)
0864c488 +0x6ce:  mov    %edx,(%esp)
0864c48b +0x6d1:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c490 +0x6d6:  mov    0xe79(%eax),%edx
0864c496 +0x6dc:  mov    0x14(%ebp),%eax
0864c499 +0x6df:  mov    %edx,0xfa(%eax)
0864c49f +0x6e5:  mov    0xc(%ebp),%eax
0864c4a2 +0x6e8:  mov    0x8(%ebp),%edx
0864c4a5 +0x6eb:  add    $0x796e8,%edx
0864c4ab +0x6f1:  mov    %eax,0x4(%esp)
0864c4af +0x6f5:  mov    %edx,(%esp)
0864c4b2 +0x6f8:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c4b7 +0x6fd:  mov    0xe81(%eax),%edx
0864c4bd +0x703:  mov    0x14(%ebp),%eax
0864c4c0 +0x706:  mov    %edx,0x10a(%eax)
0864c4c6 +0x70c:  mov    0xc(%ebp),%eax
0864c4c9 +0x70f:  mov    0x8(%ebp),%edx
0864c4cc +0x712:  add    $0x796e8,%edx
0864c4d2 +0x718:  mov    %eax,0x4(%esp)
0864c4d6 +0x71c:  mov    %edx,(%esp)
0864c4d9 +0x71f:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c4de +0x724:  mov    0xe7d(%eax),%edx
0864c4e4 +0x72a:  mov    0x14(%ebp),%eax
0864c4e7 +0x72d:  mov    %edx,0x106(%eax)
0864c4ed +0x733:  mov    0x8(%ebp),%eax
0864c4f0 +0x736:  mov    %eax,(%esp)
0864c4f3 +0x739:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0864c4f8 +0x73e:  mov    0x14(%ebp),%edx
0864c4fb +0x741:  mov    %eax,0x134(%edx)
0864c501 +0x747:  mov    0xc(%ebp),%eax
0864c504 +0x74a:  mov    0x8(%ebp),%edx
0864c507 +0x74d:  add    $0x796e8,%edx
0864c50d +0x753:  mov    %eax,0x4(%esp)
0864c511 +0x757:  mov    %edx,(%esp)
0864c514 +0x75a:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c519 +0x75f:  movzwl 0x121f(%eax),%edx
0864c520 +0x766:  mov    0x14(%ebp),%eax
0864c523 +0x769:  mov    %dx,0x10e(%eax)
0864c52a +0x770:  mov    0xc(%ebp),%eax
0864c52d +0x773:  mov    0x8(%ebp),%edx
0864c530 +0x776:  add    $0x796e8,%edx
0864c536 +0x77c:  mov    %eax,0x4(%esp)
0864c53a +0x780:  mov    %edx,(%esp)
0864c53d +0x783:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c542 +0x788:  movzbl 0x25(%eax),%edx
0864c546 +0x78c:  mov    0x14(%ebp),%eax
0864c549 +0x78f:  mov    %dl,0x23(%eax)
0864c54c +0x792:  mov    0xc(%ebp),%eax
0864c54f +0x795:  mov    0x8(%ebp),%edx
0864c552 +0x798:  add    $0x796e8,%edx
0864c558 +0x79e:  mov    %eax,0x4(%esp)
0864c55c +0x7a2:  mov    %edx,(%esp)
0864c55f +0x7a5:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c564 +0x7aa:  mov    0x1221(%eax),%edx
0864c56a +0x7b0:  mov    0x14(%ebp),%eax
0864c56d +0x7b3:  mov    %edx,0x110(%eax)
0864c573 +0x7b9:  mov    0xc(%ebp),%eax
0864c576 +0x7bc:  mov    0x8(%ebp),%edx
0864c579 +0x7bf:  add    $0x796e8,%edx
0864c57f +0x7c5:  mov    %eax,0x4(%esp)
0864c583 +0x7c9:  mov    %edx,(%esp)
0864c586 +0x7cc:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c58b +0x7d1:  mov    0x1225(%eax),%edx
0864c591 +0x7d7:  mov    0x14(%ebp),%eax
0864c594 +0x7da:  mov    %edx,0x114(%eax)
0864c59a +0x7e0:  mov    0xc(%ebp),%eax
0864c59d +0x7e3:  mov    0x8(%ebp),%edx
0864c5a0 +0x7e6:  add    $0x796e8,%edx
0864c5a6 +0x7ec:  mov    %eax,0x4(%esp)
0864c5aa +0x7f0:  mov    %edx,(%esp)
0864c5ad +0x7f3:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c5b2 +0x7f8:  mov    0x1225(%eax),%edx
0864c5b8 +0x7fe:  mov    0x14(%ebp),%eax
0864c5bb +0x801:  mov    %edx,0x114(%eax)
0864c5c1 +0x807:  mov    0xc(%ebp),%eax
0864c5c4 +0x80a:  mov    0x8(%ebp),%edx
0864c5c7 +0x80d:  add    $0x796e8,%edx
0864c5cd +0x813:  mov    %eax,0x4(%esp)
0864c5d1 +0x817:  mov    %edx,(%esp)
0864c5d4 +0x81a:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c5d9 +0x81f:  movzwl 0x122c(%eax),%edx
0864c5e0 +0x826:  mov    0x14(%ebp),%eax
0864c5e3 +0x829:  mov    %dx,0x11c(%eax)
0864c5ea +0x830:  mov    0xc(%ebp),%eax
0864c5ed +0x833:  mov    0x8(%ebp),%edx
0864c5f0 +0x836:  add    $0x796e8,%edx
0864c5f6 +0x83c:  mov    %eax,0x4(%esp)
0864c5fa +0x840:  mov    %edx,(%esp)
0864c5fd +0x843:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c602 +0x848:  movzbl 0x1239(%eax),%edx
0864c609 +0x84f:  mov    0x14(%ebp),%eax
0864c60c +0x852:  mov    %dl,0x11e(%eax)
0864c612 +0x858:  mov    0xc(%ebp),%eax
0864c615 +0x85b:  mov    0x8(%ebp),%edx
0864c618 +0x85e:  add    $0x796e8,%edx
0864c61e +0x864:  mov    %eax,0x4(%esp)
0864c622 +0x868:  mov    %edx,(%esp)
0864c625 +0x86b:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c62a +0x870:  movzbl 0x123e(%eax),%edx
0864c631 +0x877:  mov    0x14(%ebp),%eax
0864c634 +0x87a:  mov    %dl,0x11f(%eax)
0864c63a +0x880:  mov    0xc(%ebp),%eax
0864c63d +0x883:  mov    0x8(%ebp),%edx
0864c640 +0x886:  add    $0x796e8,%edx
0864c646 +0x88c:  mov    %eax,0x4(%esp)
0864c64a +0x890:  mov    %edx,(%esp)
0864c64d +0x893:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c652 +0x898:  movzbl 0x123f(%eax),%edx
0864c659 +0x89f:  mov    0x14(%ebp),%eax
0864c65c +0x8a2:  mov    %dl,0x120(%eax)
0864c662 +0x8a8:  mov    0xc(%ebp),%eax
0864c665 +0x8ab:  mov    0x8(%ebp),%edx
0864c668 +0x8ae:  add    $0x796e8,%edx
0864c66e +0x8b4:  mov    %eax,0x4(%esp)
0864c672 +0x8b8:  mov    %edx,(%esp)
0864c675 +0x8bb:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c67a +0x8c0:  movzbl 0x1241(%eax),%eax
0864c681 +0x8c7:  mov    %eax,%edx
0864c683 +0x8c9:  mov    0x14(%ebp),%eax
0864c686 +0x8cc:  mov    %dl,0x121(%eax)
0864c68c +0x8d2:  mov    0xc(%ebp),%eax
0864c68f +0x8d5:  mov    0x8(%ebp),%edx
0864c692 +0x8d8:  add    $0x796e8,%edx
0864c698 +0x8de:  mov    %eax,0x4(%esp)
0864c69c +0x8e2:  mov    %edx,(%esp)
0864c69f +0x8e5:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c6a4 +0x8ea:  movzwl 0x126c(%eax),%eax
0864c6ab +0x8f1:  mov    %eax,%edx
0864c6ad +0x8f3:  mov    0x14(%ebp),%eax
0864c6b0 +0x8f6:  mov    %dx,0x122(%eax)
0864c6b7 +0x8fd:  mov    0xc(%ebp),%eax
0864c6ba +0x900:  mov    0x8(%ebp),%edx
0864c6bd +0x903:  add    $0x796e8,%edx
0864c6c3 +0x909:  mov    %eax,0x4(%esp)
0864c6c7 +0x90d:  mov    %edx,(%esp)
0864c6ca +0x910:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c6cf +0x915:  movzbl 0x126e(%eax),%edx
0864c6d6 +0x91c:  mov    0x14(%ebp),%eax
0864c6d9 +0x91f:  mov    %dl,0x124(%eax)
0864c6df +0x925:  mov    0xc(%ebp),%eax
0864c6e2 +0x928:  mov    0x8(%ebp),%edx
0864c6e5 +0x92b:  add    $0x796e8,%edx
0864c6eb +0x931:  mov    %eax,0x4(%esp)
0864c6ef +0x935:  mov    %edx,(%esp)
0864c6f2 +0x938:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c6f7 +0x93d:  mov    0x126f(%eax),%edx
0864c6fd +0x943:  mov    0x14(%ebp),%eax
0864c700 +0x946:  mov    %edx,0x125(%eax)
0864c706 +0x94c:  mov    0xc(%ebp),%eax
0864c709 +0x94f:  mov    0x8(%ebp),%edx
0864c70c +0x952:  add    $0x796e8,%edx
0864c712 +0x958:  mov    %eax,0x4(%esp)
0864c716 +0x95c:  mov    %edx,(%esp)
0864c719 +0x95f:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c71e +0x964:  movzbl 0x1275(%eax),%edx
0864c725 +0x96b:  mov    0x14(%ebp),%eax
0864c728 +0x96e:  mov    %dl,0x129(%eax)
0864c72e +0x974:  mov    0xc(%ebp),%eax
0864c731 +0x977:  mov    0x8(%ebp),%edx
0864c734 +0x97a:  add    $0x796e8,%edx
0864c73a +0x980:  mov    %eax,0x4(%esp)
0864c73e +0x984:  mov    %edx,(%esp)
0864c741 +0x987:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c746 +0x98c:  movzbl 0x1276(%eax),%edx
0864c74d +0x993:  mov    0x14(%ebp),%eax
0864c750 +0x996:  mov    %dl,0x12a(%eax)
0864c756 +0x99c:  mov    0xc(%ebp),%eax
0864c759 +0x99f:  mov    0x8(%ebp),%edx
0864c75c +0x9a2:  add    $0x796e8,%edx
0864c762 +0x9a8:  mov    %eax,0x4(%esp)
0864c766 +0x9ac:  mov    %edx,(%esp)
0864c769 +0x9af:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c76e +0x9b4:  movzbl 0x1277(%eax),%edx
0864c775 +0x9bb:  mov    0x14(%ebp),%eax
0864c778 +0x9be:  mov    %dl,0x12b(%eax)
0864c77e +0x9c4:  mov    0xc(%ebp),%eax
0864c781 +0x9c7:  mov    0x8(%ebp),%edx
0864c784 +0x9ca:  add    $0x796e8,%edx
0864c78a +0x9d0:  mov    %eax,0x4(%esp)
0864c78e +0x9d4:  mov    %edx,(%esp)
0864c791 +0x9d7:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c796 +0x9dc:  movzbl 0x127a(%eax),%edx
0864c79d +0x9e3:  mov    0x14(%ebp),%eax
0864c7a0 +0x9e6:  mov    %dl,0x12d(%eax)
0864c7a6 +0x9ec:  mov    0xc(%ebp),%eax
0864c7a9 +0x9ef:  mov    0x8(%ebp),%edx
0864c7ac +0x9f2:  add    $0x796e8,%edx
0864c7b2 +0x9f8:  mov    %eax,0x4(%esp)
0864c7b6 +0x9fc:  mov    %edx,(%esp)
0864c7b9 +0x9ff:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c7be +0xa04:  movzbl 0x1278(%eax),%edx
0864c7c5 +0xa0b:  mov    0x14(%ebp),%eax
0864c7c8 +0xa0e:  mov    %dl,0x12c(%eax)
0864c7ce +0xa14:  mov    0xc(%ebp),%eax
0864c7d1 +0xa17:  mov    0x8(%ebp),%edx
0864c7d4 +0xa1a:  add    $0x796e8,%edx
0864c7da +0xa20:  mov    %eax,0x4(%esp)
0864c7de +0xa24:  mov    %edx,(%esp)
0864c7e1 +0xa27:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c7e6 +0xa2c:  movzbl 0xe40(%eax),%edx
0864c7ed +0xa33:  mov    0x14(%ebp),%eax
0864c7f0 +0xa36:  mov    %dl,0x12e(%eax)
0864c7f6 +0xa3c:  mov    0xc(%ebp),%eax
0864c7f9 +0xa3f:  mov    0x8(%ebp),%edx
0864c7fc +0xa42:  add    $0x796e8,%edx
0864c802 +0xa48:  mov    %eax,0x4(%esp)
0864c806 +0xa4c:  mov    %edx,(%esp)
0864c809 +0xa4f:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c80e +0xa54:  movzbl 0x1280(%eax),%edx
0864c815 +0xa5b:  mov    0x14(%ebp),%eax
0864c818 +0xa5e:  mov    %dl,0x12f(%eax)
0864c81e +0xa64:  mov    0xc(%ebp),%eax
0864c821 +0xa67:  mov    0x8(%ebp),%edx
0864c824 +0xa6a:  add    $0x796e8,%edx
0864c82a +0xa70:  mov    %eax,0x4(%esp)
0864c82e +0xa74:  mov    %edx,(%esp)
0864c831 +0xa77:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0864c836 +0xa7c:  mov    0x12ad(%eax),%edx
0864c83c +0xa82:  mov    0x14(%ebp),%eax
0864c83f +0xa85:  mov    %edx,0x130(%eax)
0864c845 +0xa8b:  mov    $0x1,%eax
0864c84a +0xa90:  jmp    0864c851 <+0xa97>
0864c84c +0xa92:  mov    $0x0,%eax
0864c851 +0xa97:  add    $0x1c,%esp
0864c854 +0xa9a:  pop    %ebx
0864c855 +0xa9b:  pop    %esi
0864c856 +0xa9c:  pop    %edi
0864c857 +0xa9d:  pop    %ebp
0864c858 +0xa9e:  ret
0864c859 +0xa9f:  nop
```

## 反编译 C

```c
// CUser::getCharacInfoDetail @ 0x864bdba

/* CUser::getCharacInfoDetail(int, unsigned int, CHARAC_DATA*) const */

undefined4 __thiscall
CUser::getCharacInfoDetail(CUser *this,int param_1,uint param_2,CHARAC_DATA *param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  CHARAC_DATA *pCVar5;
  uint uVar6;
  CHARAC_DATA *pCVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  
  bVar10 = 0;
  if (-1 < param_1) {
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (param_1 < iVar1) {
      bVar9 = true;
      goto LAB_0864bdea;
    }
  }
  bVar9 = false;
LAB_0864bdea:
  if (bVar9) {
    puVar2 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                               ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                (this + 0x796e8),param_1);
    if (*puVar2 == param_2) {
      puVar4 = (undefined4 *)
               std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                         ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                          param_1);
      *(undefined4 *)param_3 = *puVar4;
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      strncpy((char *)(param_3 + 4),(char *)(iVar1 + 4),0x1e);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x22] = *(CHARAC_DATA *)(iVar1 + 0x22);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x24] = *(CHARAC_DATA *)(iVar1 + 0x26);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x25) = *(undefined2 *)(iVar1 + 0x27);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(iVar1 + 0x2b);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x27] = *(CHARAC_DATA *)(iVar1 + 0x29);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0xb2] = *(CHARAC_DATA *)(iVar1 + 0x75);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      pCVar5 = param_3 + 0x60;
      pCVar7 = (CHARAC_DATA *)(iVar1 + 0x88);
      uVar8 = 0x52;
      bVar9 = ((uint)pCVar5 & 1) != 0;
      if (bVar9) {
        *pCVar5 = *pCVar7;
        pCVar5 = param_3 + 0x61;
        pCVar7 = (CHARAC_DATA *)(iVar1 + 0x89);
        uVar8 = 0x51;
      }
      if (((uint)pCVar5 & 2) != 0) {
        *(undefined2 *)pCVar5 = *(undefined2 *)pCVar7;
        pCVar5 = pCVar5 + 2;
        pCVar7 = pCVar7 + 2;
        uVar8 = uVar8 - 2;
      }
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pCVar5 = *(undefined4 *)pCVar7;
        pCVar7 = pCVar7 + (uint)bVar10 * -8 + 4;
        pCVar5 = pCVar5 + (uint)bVar10 * -8 + 4;
      }
      iVar1 = 0;
      if ((uVar8 & 2) != 0) {
        *(undefined2 *)pCVar5 = *(undefined2 *)pCVar7;
        iVar1 = 2;
      }
      if (bVar9) {
        pCVar5[iVar1] = pCVar7[iVar1];
      }
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x2c) = *(undefined2 *)(iVar1 + 0x33);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x2e) = *(undefined2 *)(iVar1 + 0x35);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x30) = *(undefined2 *)(iVar1 + 0x37);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x32) = *(undefined2 *)(iVar1 + 0x4f);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x4d) = *(undefined4 *)(iVar1 + 0x7b);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x118) = *(undefined4 *)(iVar1 + 0x7f);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x56) = *(undefined4 *)(iVar1 + 0xdbe);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x5a] = *(CHARAC_DATA *)(iVar1 + 0xdc2);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x5b) = *(undefined2 *)(iVar1 + 0x77);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x5d) = *(undefined2 *)(iVar1 + 0x79);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      if (*(int *)(iVar1 + 0xe22) == 0) {
        param_3[0x5f] = (CHARAC_DATA)0x0;
      }
      else {
        param_3[0x5f] = (CHARAC_DATA)0x1;
      }
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      CommonTime::GetCreateTime((CommonTime *)(iVar1 + 0x39),(char *)(param_3 + 0x34));
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0xb3) = *(undefined2 *)(iVar1 + 0x4d);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xb5) = *(undefined4 *)(iVar1 + 0x51);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      memcpy(param_3 + 0xb9,(void *)(iVar1 + 0x55),0x10);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xfe) = *(undefined4 *)(iVar1 + 0xdf4);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x102) = *(undefined4 *)(iVar1 + 0xdf8);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      uVar3 = CReliablePerson::GetTradeGoldTotal((CReliablePerson *)(iVar1 + 0x65));
      *(undefined4 *)(param_3 + 0xc9) = uVar3;
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      uVar3 = CReliablePerson::GetTradeGoldTotalBillion((CReliablePerson *)(iVar1 + 0x65));
      *(undefined4 *)(param_3 + 0xcd) = uVar3;
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      uVar3 = CReliablePerson::GetTradeGoldDaily((CReliablePerson *)(iVar1 + 0x65));
      *(undefined4 *)(param_3 + 0xd1) = uVar3;
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xd5) = *(undefined4 *)(iVar1 + 0xe49);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xd9) = *(undefined4 *)(iVar1 + 0xe4d);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xdd) = *(undefined4 *)(iVar1 + 0xe51);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xe1) = *(undefined4 *)(iVar1 + 0xe55);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xe5) = *(undefined4 *)(iVar1 + 0xe59);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xe9) = *(undefined4 *)(iVar1 + 0xe5d);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xed) = *(undefined4 *)(iVar1 + 0xe45);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xf1) = *(undefined4 *)(iVar1 + 0xe68);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0xf5] = *(CHARAC_DATA *)(iVar1 + 0xe70);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xf6) = *(undefined4 *)(iVar1 + 0xe71);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0xfa) = *(undefined4 *)(iVar1 + 0xe79);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x10a) = *(undefined4 *)(iVar1 + 0xe81);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x106) = *(undefined4 *)(iVar1 + 0xe7d);
      uVar3 = get_acc_id(this);
      *(undefined4 *)(param_3 + 0x134) = uVar3;
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x10e) = *(undefined2 *)(iVar1 + 0x121f);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x23] = *(CHARAC_DATA *)(iVar1 + 0x25);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x110) = *(undefined4 *)(iVar1 + 0x1221);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x114) = *(undefined4 *)(iVar1 + 0x1225);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x114) = *(undefined4 *)(iVar1 + 0x1225);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x11c) = *(undefined2 *)(iVar1 + 0x122c);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x11e] = *(CHARAC_DATA *)(iVar1 + 0x1239);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x11f] = *(CHARAC_DATA *)(iVar1 + 0x123e);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x120] = *(CHARAC_DATA *)(iVar1 + 0x123f);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x121] = *(CHARAC_DATA *)(iVar1 + 0x1241);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x122) = *(undefined2 *)(iVar1 + 0x126c);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x124] = *(CHARAC_DATA *)(iVar1 + 0x126e);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x125) = *(undefined4 *)(iVar1 + 0x126f);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x129] = *(CHARAC_DATA *)(iVar1 + 0x1275);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x12a] = *(CHARAC_DATA *)(iVar1 + 0x1276);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[299] = *(CHARAC_DATA *)(iVar1 + 0x1277);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x12d] = *(CHARAC_DATA *)(iVar1 + 0x127a);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[300] = *(CHARAC_DATA *)(iVar1 + 0x1278);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x12e] = *(CHARAC_DATA *)(iVar1 + 0xe40);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x12f] = *(CHARAC_DATA *)(iVar1 + 0x1280);
      iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined4 *)(param_3 + 0x130) = *(undefined4 *)(iVar1 + 0x12ad);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
