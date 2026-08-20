# MoveClearAvatar

`_ZN10CInventory15MoveClearAvatarEiiiiii`

`CInventory::MoveClearAvatar(int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08508fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08508fd0  _ZN10CInventory15MoveClearAvatarEiiiiii
#           CInventory::MoveClearAvatar(int, int, int, int, int, int)
# range [0x08508fd0, 0x0850937d]
08508fd0 +0x000:  push   %ebp
08508fd1 +0x001:  mov    %esp,%ebp
08508fd3 +0x003:  push   %edi
08508fd4 +0x004:  push   %esi
08508fd5 +0x005:  push   %ebx
08508fd6 +0x006:  sub    $0x6c,%esp
08508fd9 +0x009:  movl   $0x0,-0x3c(%ebp)
08508fe0 +0x010:  movl   $0x0,-0x38(%ebp)
08508fe7 +0x017:  movl   $0x0,-0x34(%ebp)
08508fee +0x01e:  cmpl   $0x0,0x14(%ebp)
08508ff2 +0x022:  je     085092f8 <+0x328>
08508ff8 +0x028:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08508ffd +0x02d:  mov    0x14(%ebp),%edx
08509000 +0x030:  mov    %edx,0x4(%esp)
08509004 +0x034:  mov    %eax,(%esp)
08509007 +0x037:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850900c +0x03c:  mov    %eax,-0x3c(%ebp)
0850900f +0x03f:  cmpl   $0x0,-0x3c(%ebp)
08509013 +0x043:  je     08509032 <+0x62>
08509015 +0x045:  mov    -0x3c(%ebp),%eax
08509018 +0x048:  mov    (%eax),%eax
0850901a +0x04a:  add    $0x18,%eax
0850901d +0x04d:  mov    (%eax),%edx
0850901f +0x04f:  mov    -0x3c(%ebp),%eax
08509022 +0x052:  mov    %eax,(%esp)
08509025 +0x055:  call   *%edx
08509027 +0x057:  test   %al,%al
08509029 +0x059:  je     08509032 <+0x62>
0850902b +0x05b:  mov    $0x1,%eax
08509030 +0x060:  jmp    08509037 <+0x67>
08509032 +0x062:  mov    $0x0,%eax
08509037 +0x067:  test   %al,%al
08509039 +0x069:  je     085092f8 <+0x328>
0850903f +0x06f:  cmpl   $0x0,0x20(%ebp)
08509043 +0x073:  je     085092f8 <+0x328>
08509049 +0x079:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850904e +0x07e:  mov    0x20(%ebp),%edx
08509051 +0x081:  mov    %edx,0x4(%esp)
08509055 +0x085:  mov    %eax,(%esp)
08509058 +0x088:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850905d +0x08d:  mov    %eax,-0x38(%ebp)
08509060 +0x090:  cmpl   $0x0,-0x38(%ebp)
08509064 +0x094:  je     08509086 <+0xb6>
08509066 +0x096:  mov    -0x38(%ebp),%eax
08509069 +0x099:  mov    (%eax),%eax
0850906b +0x09b:  add    $0x18,%eax
0850906e +0x09e:  mov    (%eax),%edx
08509070 +0x0a0:  mov    -0x38(%ebp),%eax
08509073 +0x0a3:  mov    %eax,(%esp)
08509076 +0x0a6:  call   *%edx
08509078 +0x0a8:  xor    $0x1,%eax
0850907b +0x0ab:  test   %al,%al
0850907d +0x0ad:  je     08509086 <+0xb6>
0850907f +0x0af:  mov    $0x1,%eax
08509084 +0x0b4:  jmp    0850908b <+0xbb>
08509086 +0x0b6:  mov    $0x0,%eax
0850908b +0x0bb:  test   %al,%al
0850908d +0x0bd:  je     085092f8 <+0x328>
08509093 +0x0c3:  mov    0x20(%ebp),%eax
08509096 +0x0c6:  mov    %eax,0x8(%esp)
0850909a +0x0ca:  mov    0x18(%ebp),%eax
0850909d +0x0cd:  mov    %eax,0x4(%esp)
085090a1 +0x0d1:  mov    0x8(%ebp),%eax
085090a4 +0x0d4:  mov    %eax,(%esp)
085090a7 +0x0d7:  call   084e9990 <_GLOBAL__I__Z7getUserj+0x942>  ; global constructors keyed to getUser(unsigned int)+0x942
085090ac +0x0dc:  cmpl   $0x0,0x18(%ebp)
085090b0 +0x0e0:  js     08509363 <+0x393>
085090b6 +0x0e6:  cmpl   $0x19,0x18(%ebp)
085090ba +0x0ea:  jg     08509366 <+0x396>
085090c0 +0x0f0:  mov    0x18(%ebp),%eax
085090c3 +0x0f3:  imul   $0x3d,%eax,%eax
085090c6 +0x0f6:  add    $0x10,%eax
085090c9 +0x0f9:  add    0x8(%ebp),%eax
085090cc +0x0fc:  add    $0xc,%eax
085090cf +0x0ff:  mov    %eax,-0x30(%ebp)
085090d2 +0x102:  mov    -0x30(%ebp),%eax
085090d5 +0x105:  mov    0x7(%eax),%ebx
085090d8 +0x108:  mov    0x8(%ebp),%eax
085090db +0x10b:  mov    %eax,(%esp)
085090de +0x10e:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
085090e3 +0x113:  mov    %ebx,0x4(%esp)
085090e7 +0x117:  mov    %eax,(%esp)
085090ea +0x11a:  call   082f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>  ; WongWork::CAvatarItemMgr::GetExpansionInfo(int) const
085090ef +0x11f:  mov    %eax,-0x2c(%ebp)
085090f2 +0x122:  cmpl   $0x0,-0x2c(%ebp)
085090f6 +0x126:  je     08509369 <+0x399>
085090fc +0x12c:  mov    0xc(%ebp),%eax
085090ff +0x12f:  sub    $0xa,%eax
08509102 +0x132:  mov    %eax,-0x28(%ebp)
08509105 +0x135:  cmpl   $0x0,-0x28(%ebp)
08509109 +0x139:  js     0850936c <+0x39c>
0850910f +0x13f:  cmpl   $0x68,-0x28(%ebp)
08509113 +0x143:  jg     0850936f <+0x39f>
08509119 +0x149:  mov    0x8(%ebp),%eax
0850911c +0x14c:  mov    0x654(%eax),%edx
08509122 +0x152:  mov    -0x28(%ebp),%eax
08509125 +0x155:  imul   $0x3d,%eax,%eax
08509128 +0x158:  lea    (%edx,%eax,1),%eax
0850912b +0x15b:  mov    %eax,-0x24(%ebp)
0850912e +0x15e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08509133 +0x163:  add    $0x8740,%eax
08509138 +0x168:  mov    %eax,-0x20(%ebp)
0850913b +0x16b:  mov    -0x2c(%ebp),%eax
0850913e +0x16e:  movzwl (%eax),%eax
08509141 +0x171:  cwtl
08509142 +0x172:  mov    %eax,-0x50(%ebp)
08509145 +0x175:  lea    -0x54(%ebp),%eax
08509148 +0x178:  lea    -0x50(%ebp),%edx
0850914b +0x17b:  mov    %edx,0x8(%esp)
0850914f +0x17f:  mov    -0x20(%ebp),%edx
08509152 +0x182:  mov    %edx,0x4(%esp)
08509156 +0x186:  mov    %eax,(%esp)
08509159 +0x189:  call   0823769e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd48
0850915e +0x18e:  sub    $0x4,%esp
08509161 +0x191:  lea    -0x4c(%ebp),%eax
08509164 +0x194:  mov    -0x20(%ebp),%edx
08509167 +0x197:  mov    %edx,0x4(%esp)
0850916b +0x19b:  mov    %eax,(%esp)
0850916e +0x19e:  call   08237678 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd22>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd22
08509173 +0x1a3:  sub    $0x4,%esp
08509176 +0x1a6:  lea    -0x54(%ebp),%eax
08509179 +0x1a9:  mov    %eax,0x4(%esp)
0850917d +0x1ad:  lea    -0x4c(%ebp),%eax
08509180 +0x1b0:  mov    %eax,(%esp)
08509183 +0x1b3:  call   082376ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd74
08509188 +0x1b8:  test   %al,%al
0850918a +0x1ba:  je     085091d4 <+0x204>
0850918c +0x1bc:  mov    -0x2c(%ebp),%eax
0850918f +0x1bf:  movzwl (%eax),%eax
08509192 +0x1c2:  movswl %ax,%edx
08509195 +0x1c5:  mov    -0x30(%ebp),%eax
08509198 +0x1c8:  mov    0x7(%eax),%eax
0850919b +0x1cb:  mov    %edx,0x18(%esp)
0850919f +0x1cf:  mov    %eax,0x14(%esp)
085091a3 +0x1d3:  movl   $"Avatar color1 error. ItemID(%d), colorId(%d)",0x10(%esp)
085091ab +0x1db:  movl   $0x21db,0xc(%esp)
085091b3 +0x1e3:  movl   $&_ZZN10CInventory15MoveClearAvatarEiiiiiiE19__PRETTY_FUNCTION__,0x8(%esp)
085091bb +0x1eb:  movl   $"inventory.cpp",0x4(%esp)
085091c3 +0x1f3:  movl   $0x1,(%esp)
085091ca +0x1fa:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085091cf +0x1ff:  jmp    08509373 <+0x3a3>
085091d4 +0x204:  mov    -0x2c(%ebp),%eax
085091d7 +0x207:  movzwl 0x2(%eax),%eax
085091db +0x20b:  cwtl
085091dc +0x20c:  mov    %eax,-0x44(%ebp)
085091df +0x20f:  lea    -0x48(%ebp),%eax
085091e2 +0x212:  lea    -0x44(%ebp),%edx
085091e5 +0x215:  mov    %edx,0x8(%esp)
085091e9 +0x219:  mov    -0x20(%ebp),%edx
085091ec +0x21c:  mov    %edx,0x4(%esp)
085091f0 +0x220:  mov    %eax,(%esp)
085091f3 +0x223:  call   0823769e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd48
085091f8 +0x228:  sub    $0x4,%esp
085091fb +0x22b:  lea    -0x40(%ebp),%eax
085091fe +0x22e:  mov    -0x20(%ebp),%edx
08509201 +0x231:  mov    %edx,0x4(%esp)
08509205 +0x235:  mov    %eax,(%esp)
08509208 +0x238:  call   08237678 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd22>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd22
0850920d +0x23d:  sub    $0x4,%esp
08509210 +0x240:  lea    -0x48(%ebp),%eax
08509213 +0x243:  mov    %eax,0x4(%esp)
08509217 +0x247:  lea    -0x40(%ebp),%eax
0850921a +0x24a:  mov    %eax,(%esp)
0850921d +0x24d:  call   082376ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd74
08509222 +0x252:  test   %al,%al
08509224 +0x254:  je     0850926e <+0x29e>
08509226 +0x256:  mov    -0x2c(%ebp),%eax
08509229 +0x259:  movzwl (%eax),%eax
0850922c +0x25c:  movswl %ax,%edx
0850922f +0x25f:  mov    -0x30(%ebp),%eax
08509232 +0x262:  mov    0x7(%eax),%eax
08509235 +0x265:  mov    %edx,0x18(%esp)
08509239 +0x269:  mov    %eax,0x14(%esp)
0850923d +0x26d:  movl   $"Avatar color2 error. ItemID(%d), colorId(%d)",0x10(%esp)
08509245 +0x275:  movl   $0x21e2,0xc(%esp)
0850924d +0x27d:  movl   $&_ZZN10CInventory15MoveClearAvatarEiiiiiiE19__PRETTY_FUNCTION__,0x8(%esp)
08509255 +0x285:  movl   $"inventory.cpp",0x4(%esp)
0850925d +0x28d:  movl   $0x1,(%esp)
08509264 +0x294:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08509269 +0x299:  jmp    08509373 <+0x3a3>
0850926e +0x29e:  mov    -0x2c(%ebp),%eax
08509271 +0x2a1:  movzwl 0x2(%eax),%eax
08509275 +0x2a5:  movswl %ax,%edi
08509278 +0x2a8:  mov    -0x2c(%ebp),%eax
0850927b +0x2ab:  movzwl (%eax),%eax
0850927e +0x2ae:  movswl %ax,%esi
08509281 +0x2b1:  mov    -0x24(%ebp),%eax
08509284 +0x2b4:  mov    0x7(%eax),%ebx
08509287 +0x2b7:  mov    0x8(%ebp),%eax
0850928a +0x2ba:  mov    %eax,(%esp)
0850928d +0x2bd:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
08509292 +0x2c2:  mov    %edi,0xc(%esp)
08509296 +0x2c6:  mov    %esi,0x8(%esp)
0850929a +0x2ca:  mov    %ebx,0x4(%esp)
0850929e +0x2ce:  mov    %eax,(%esp)
085092a1 +0x2d1:  call   082f9964 <_ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss>  ; WongWork::CAvatarItemMgr::SetAvatarColor(int, short, short)
085092a6 +0x2d6:  mov    %al,-0x19(%ebp)
085092a9 +0x2d9:  movzbl -0x19(%ebp),%eax
085092ad +0x2dd:  xor    $0x1,%eax
085092b0 +0x2e0:  test   %al,%al
085092b2 +0x2e2:  jne    08509372 <+0x3a2>
085092b8 +0x2e8:  mov    -0x2c(%ebp),%eax
085092bb +0x2eb:  movzwl 0x2(%eax),%eax
085092bf +0x2ef:  movswl %ax,%ecx
085092c2 +0x2f2:  mov    -0x2c(%ebp),%eax
085092c5 +0x2f5:  movzwl (%eax),%eax
085092c8 +0x2f8:  movswl %ax,%edx
085092cb +0x2fb:  mov    -0x24(%ebp),%eax
085092ce +0x2fe:  mov    0x7(%eax),%eax
085092d1 +0x301:  movl   $0x0,0x14(%esp)
085092d9 +0x309:  mov    %ecx,0x10(%esp)
085092dd +0x30d:  mov    %edx,0xc(%esp)
085092e1 +0x311:  mov    %eax,0x8(%esp)
085092e5 +0x315:  movl   $0x31a,0x4(%esp)
085092ed +0x31d:  mov    0x8(%ebp),%eax
085092f0 +0x320:  mov    %eax,(%esp)
085092f3 +0x323:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
085092f8 +0x328:  cmpl   $0x0,0x20(%ebp)
085092fc +0x32c:  je     08509373 <+0x3a3>
085092fe +0x32e:  cmpl   $0x0,-0x38(%ebp)
08509302 +0x332:  jne    0850931b <+0x34b>
08509304 +0x334:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08509309 +0x339:  mov    0x20(%ebp),%edx
0850930c +0x33c:  mov    %edx,0x4(%esp)
08509310 +0x340:  mov    %eax,(%esp)
08509313 +0x343:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08509318 +0x348:  mov    %eax,-0x38(%ebp)
0850931b +0x34b:  cmpl   $0x0,-0x38(%ebp)
0850931f +0x34f:  je     0850933e <+0x36e>
08509321 +0x351:  mov    -0x38(%ebp),%eax
08509324 +0x354:  mov    (%eax),%eax
08509326 +0x356:  add    $0x18,%eax
08509329 +0x359:  mov    (%eax),%edx
0850932b +0x35b:  mov    -0x38(%ebp),%eax
0850932e +0x35e:  mov    %eax,(%esp)
08509331 +0x361:  call   *%edx
08509333 +0x363:  test   %al,%al
08509335 +0x365:  je     0850933e <+0x36e>
08509337 +0x367:  mov    $0x1,%eax
0850933c +0x36c:  jmp    08509343 <+0x373>
0850933e +0x36e:  mov    $0x0,%eax
08509343 +0x373:  test   %al,%al
08509345 +0x375:  je     08509373 <+0x3a3>
08509347 +0x377:  movl   $0x0,0x8(%esp)
0850934f +0x37f:  mov    0x18(%ebp),%eax
08509352 +0x382:  mov    %eax,0x4(%esp)
08509356 +0x386:  mov    0x8(%ebp),%eax
08509359 +0x389:  mov    %eax,(%esp)
0850935c +0x38c:  call   084e9990 <_GLOBAL__I__Z7getUserj+0x942>  ; global constructors keyed to getUser(unsigned int)+0x942
08509361 +0x391:  jmp    08509373 <+0x3a3>
08509363 +0x393:  nop
08509364 +0x394:  jmp    08509373 <+0x3a3>
08509366 +0x396:  nop
08509367 +0x397:  jmp    08509373 <+0x3a3>
08509369 +0x399:  nop
0850936a +0x39a:  jmp    08509373 <+0x3a3>
0850936c +0x39c:  nop
0850936d +0x39d:  jmp    08509373 <+0x3a3>
0850936f +0x39f:  nop
08509370 +0x3a0:  jmp    08509373 <+0x3a3>
08509372 +0x3a2:  nop
08509373 +0x3a3:  lea    -0xc(%ebp),%esp
08509376 +0x3a6:  add    $0x0,%esp
08509379 +0x3a9:  pop    %ebx
0850937a +0x3aa:  pop    %esi
0850937b +0x3ab:  pop    %edi
0850937c +0x3ac:  pop    %ebp
0850937d +0x3ad:  ret
```

## 反编译 C

```c
// CInventory::MoveClearAvatar @ 0x8508fd0

/* CInventory::MoveClearAvatar(int, int, int, int, int, int) */

void __thiscall
CInventory::MoveClearAvatar
          (CInventory *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  CDataManager *pCVar6;
  CAvatarItemMgr *pCVar7;
  _Rb_tree_iterator local_58 [4];
  int local_54;
  map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
  local_50 [4];
  _Rb_tree_iterator local_4c [4];
  int local_48;
  map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
  local_44 [4];
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  CInventory *local_34;
  short *local_30;
  int local_2c;
  int local_28;
  int local_24;
  char local_1d;
  
  local_40 = (int *)0x0;
  local_3c = (int *)0x0;
  local_38 = 0;
  if (param_3 != 0) {
    pCVar6 = (CDataManager *)G_CDataManager();
    local_40 = (int *)CDataManager::find_item(pCVar6,param_3);
    if ((local_40 == (int *)0x0) ||
       (cVar5 = (**(code **)(*local_40 + 0x18))(local_40), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (param_6 != 0)) {
      pCVar6 = (CDataManager *)G_CDataManager();
      local_3c = (int *)CDataManager::find_item(pCVar6,param_6);
      if ((local_3c == (int *)0x0) ||
         (cVar5 = (**(code **)(*local_3c + 0x18))(local_3c), cVar5 == '\x01')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        SetClearAvatar(this,param_4,param_6);
        if (param_4 < 0) {
          return;
        }
        if (0x19 < param_4) {
          return;
        }
        local_34 = this + param_4 * 0x3d + 0x1c;
        iVar3 = *(int *)(this + param_4 * 0x3d + 0x23);
        pCVar7 = (CAvatarItemMgr *)GetAvatarItemMgrW(this);
        local_30 = (short *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar7,iVar3);
        if (local_30 == (short *)0x0) {
          return;
        }
        local_2c = param_1 + -10;
        if (local_2c < 0) {
          return;
        }
        if (0x68 < local_2c) {
          return;
        }
        local_28 = *(int *)(this + 0x654) + local_2c * 0x3d;
        local_24 = G_CDataManager();
        local_24 = local_24 + 0x8740;
        local_54 = (int)*local_30;
        std::
        map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
        ::find((int *)local_58);
        std::
        map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
        ::end(local_50);
        cVar5 = std::_Rb_tree_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::operator==
                          ((_Rb_tree_iterator<std::pair<int_const,AvatarVariation::colorRGB>> *)
                           local_50,local_58);
        if (cVar5 != '\0') {
          LogManager::logFormat
                    (1,"inventory.cpp",
                     "void CInventory::MoveClearAvatar(int, int, int, int, int, int)",0x21db,
                     "Avatar color1 error. ItemID(%d), colorId(%d)",*(undefined4 *)(local_34 + 7),
                     (int)*local_30);
          return;
        }
        local_48 = (int)local_30[1];
        std::
        map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
        ::find((int *)local_4c);
        std::
        map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
        ::end(local_44);
        cVar5 = std::_Rb_tree_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::operator==
                          ((_Rb_tree_iterator<std::pair<int_const,AvatarVariation::colorRGB>> *)
                           local_44,local_4c);
        if (cVar5 != '\0') {
          LogManager::logFormat
                    (1,"inventory.cpp",
                     "void CInventory::MoveClearAvatar(int, int, int, int, int, int)",0x21e2,
                     "Avatar color2 error. ItemID(%d), colorId(%d)",*(undefined4 *)(local_34 + 7),
                     (int)*local_30);
          return;
        }
        sVar1 = local_30[1];
        sVar2 = *local_30;
        iVar3 = *(int *)(local_28 + 7);
        pCVar7 = (CAvatarItemMgr *)GetAvatarItemMgrW(this);
        local_1d = WongWork::CAvatarItemMgr::SetAvatarColor(pCVar7,iVar3,sVar2,sVar1);
        if (local_1d != '\x01') {
          return;
        }
        SendAvatarEvent(this,0x31a,*(int *)(local_28 + 7),(int)*local_30,(int)local_30[1],0);
      }
    }
  }
  if (param_6 != 0) {
    if (local_3c == (int *)0x0) {
      pCVar6 = (CDataManager *)G_CDataManager();
      local_3c = (int *)CDataManager::find_item(pCVar6,param_6);
    }
    if ((local_3c == (int *)0x0) ||
       (cVar5 = (**(code **)(*local_3c + 0x18))(local_3c), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      SetClearAvatar(this,param_4,0);
    }
  }
  return;
}
```
