# set_world_map

`_ZN9CWorldMap13set_world_mapEP14WorldMapScript`

`CWorldMap::set_world_map(WorldMapScript*)`

| 类 | 地址 |
|---|---|
| `CWorldMap` | `0x0836421a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836421a  _ZN9CWorldMap13set_world_mapEP14WorldMapScript
#           CWorldMap::set_world_map(WorldMapScript*)
# range [0x0836421a, 0x08364505]
0836421a +0x000:  push   %ebp
0836421b +0x001:  mov    %esp,%ebp
0836421d +0x003:  push   %ebx
0836421e +0x004:  sub    $0x54,%esp
08364221 +0x007:  mov    0xc(%ebp),%eax
08364224 +0x00a:  mov    (%eax),%edx
08364226 +0x00c:  mov    0x8(%ebp),%eax
08364229 +0x00f:  mov    %edx,(%eax)
0836422b +0x011:  mov    0xc(%ebp),%eax
0836422e +0x014:  movzbl 0x20(%eax),%edx
08364232 +0x018:  mov    0x8(%ebp),%eax
08364235 +0x01b:  mov    %dl,0x4(%eax)
08364238 +0x01e:  mov    0xc(%ebp),%eax
0836423b +0x021:  lea    0x24(%eax),%edx
0836423e +0x024:  lea    -0x3c(%ebp),%eax
08364241 +0x027:  mov    %edx,0x4(%esp)
08364245 +0x02b:  mov    %eax,(%esp)
08364248 +0x02e:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0836424d +0x033:  sub    $0x4,%esp
08364250 +0x036:  mov    0xc(%ebp),%eax
08364253 +0x039:  lea    0x24(%eax),%edx
08364256 +0x03c:  lea    -0x38(%ebp),%eax
08364259 +0x03f:  mov    %edx,0x4(%esp)
0836425d +0x043:  mov    %eax,(%esp)
08364260 +0x046:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08364265 +0x04b:  sub    $0x4,%esp
08364268 +0x04e:  mov    0x8(%ebp),%eax
0836426b +0x051:  lea    0x1c(%eax),%edx
0836426e +0x054:  mov    -0x3c(%ebp),%eax
08364271 +0x057:  mov    %eax,0x8(%esp)
08364275 +0x05b:  mov    -0x38(%ebp),%eax
08364278 +0x05e:  mov    %eax,0x4(%esp)
0836427c +0x062:  mov    %edx,(%esp)
0836427f +0x065:  call   08395206 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24ca6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24ca6
08364284 +0x06a:  mov    0x8(%ebp),%eax
08364287 +0x06d:  movb   $0x0,0xc(%eax)
0836428b +0x071:  mov    0xc(%ebp),%eax
0836428e +0x074:  lea    0x30(%eax),%edx
08364291 +0x077:  lea    -0x34(%ebp),%eax
08364294 +0x07a:  mov    %edx,0x4(%esp)
08364298 +0x07e:  mov    %eax,(%esp)
0836429b +0x081:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
083642a0 +0x086:  sub    $0x4,%esp
083642a3 +0x089:  mov    0xc(%ebp),%eax
083642a6 +0x08c:  lea    0x30(%eax),%edx
083642a9 +0x08f:  lea    -0x30(%ebp),%eax
083642ac +0x092:  mov    %edx,0x4(%esp)
083642b0 +0x096:  mov    %eax,(%esp)
083642b3 +0x099:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
083642b8 +0x09e:  sub    $0x4,%esp
083642bb +0x0a1:  mov    0x8(%ebp),%eax
083642be +0x0a4:  lea    0x28(%eax),%edx
083642c1 +0x0a7:  mov    -0x34(%ebp),%eax
083642c4 +0x0aa:  mov    %eax,0x8(%esp)
083642c8 +0x0ae:  mov    -0x30(%ebp),%eax
083642cb +0x0b1:  mov    %eax,0x4(%esp)
083642cf +0x0b5:  mov    %edx,(%esp)
083642d2 +0x0b8:  call   0839522c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24ccc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24ccc
083642d7 +0x0bd:  mov    0xc(%ebp),%eax
083642da +0x0c0:  lea    0x3c(%eax),%edx
083642dd +0x0c3:  lea    -0x2c(%ebp),%eax
083642e0 +0x0c6:  mov    %edx,0x4(%esp)
083642e4 +0x0ca:  mov    %eax,(%esp)
083642e7 +0x0cd:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
083642ec +0x0d2:  sub    $0x4,%esp
083642ef +0x0d5:  mov    0xc(%ebp),%eax
083642f2 +0x0d8:  lea    0x3c(%eax),%edx
083642f5 +0x0db:  lea    -0x28(%ebp),%eax
083642f8 +0x0de:  mov    %edx,0x4(%esp)
083642fc +0x0e2:  mov    %eax,(%esp)
083642ff +0x0e5:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08364304 +0x0ea:  sub    $0x4,%esp
08364307 +0x0ed:  mov    0x8(%ebp),%eax
0836430a +0x0f0:  lea    0x34(%eax),%edx
0836430d +0x0f3:  mov    -0x2c(%ebp),%eax
08364310 +0x0f6:  mov    %eax,0x8(%esp)
08364314 +0x0fa:  mov    -0x28(%ebp),%eax
08364317 +0x0fd:  mov    %eax,0x4(%esp)
0836431b +0x101:  mov    %edx,(%esp)
0836431e +0x104:  call   08395206 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24ca6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24ca6
08364323 +0x109:  mov    0x8(%ebp),%eax
08364326 +0x10c:  movl   $0x7fffffff,0x8(%eax)
0836432d +0x113:  mov    0xc(%ebp),%eax
08364330 +0x116:  lea    0x14(%eax),%edx
08364333 +0x119:  lea    -0x24(%ebp),%eax
08364336 +0x11c:  mov    %edx,0x4(%esp)
0836433a +0x120:  mov    %eax,(%esp)
0836433d +0x123:  call   08395252 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24cf2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24cf2
08364342 +0x128:  sub    $0x4,%esp
08364345 +0x12b:  lea    -0x24(%ebp),%eax
08364348 +0x12e:  mov    %eax,0x4(%esp)
0836434c +0x132:  lea    -0x40(%ebp),%eax
0836434f +0x135:  mov    %eax,(%esp)
08364352 +0x138:  call   08395276 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24d16>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24d16
08364357 +0x13d:  mov    0xc(%ebp),%eax
0836435a +0x140:  lea    0x14(%eax),%edx
0836435d +0x143:  lea    -0x20(%ebp),%eax
08364360 +0x146:  mov    %edx,0x4(%esp)
08364364 +0x14a:  mov    %eax,(%esp)
08364367 +0x14d:  call   08395290 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24d30>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24d30
0836436c +0x152:  sub    $0x4,%esp
0836436f +0x155:  lea    -0x20(%ebp),%eax
08364372 +0x158:  mov    %eax,0x4(%esp)
08364376 +0x15c:  lea    -0x44(%ebp),%eax
08364379 +0x15f:  mov    %eax,(%esp)
0836437c +0x162:  call   08395276 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24d16>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24d16
08364381 +0x167:  jmp    083644e6 <+0x2cc>
08364386 +0x16c:  lea    -0x40(%ebp),%eax
08364389 +0x16f:  mov    %eax,(%esp)
0836438c +0x172:  call   083952f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24d98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24d98
08364391 +0x177:  mov    (%eax),%ebx
08364393 +0x179:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08364398 +0x17e:  mov    %ebx,0x4(%esp)
0836439c +0x182:  mov    %eax,(%esp)
0836439f +0x185:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
083643a4 +0x18a:  mov    %eax,-0xc(%ebp)
083643a7 +0x18d:  cmpl   $0x0,-0xc(%ebp)
083643ab +0x191:  je     083644d7 <+0x2bd>
083643b1 +0x197:  lea    -0x40(%ebp),%eax
083643b4 +0x19a:  mov    %eax,(%esp)
083643b7 +0x19d:  call   083952f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24d98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24d98
083643bc +0x1a2:  mov    0x8(%ebp),%edx
083643bf +0x1a5:  add    $0x10,%edx
083643c2 +0x1a8:  mov    %eax,0x4(%esp)
083643c6 +0x1ac:  mov    %edx,(%esp)
083643c9 +0x1af:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
083643ce +0x1b4:  mov    -0xc(%ebp),%eax
083643d1 +0x1b7:  mov    %eax,(%esp)
083643d4 +0x1ba:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
083643d9 +0x1bf:  cmp    $0x1,%eax
083643dc +0x1c2:  sete   %al
083643df +0x1c5:  test   %al,%al
083643e1 +0x1c7:  je     0836441a <+0x200>
083643e3 +0x1c9:  mov    -0xc(%ebp),%eax
083643e6 +0x1cc:  mov    %eax,(%esp)
083643e9 +0x1cf:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
083643ee +0x1d4:  mov    %eax,-0x1c(%ebp)
083643f1 +0x1d7:  mov    0x8(%ebp),%eax
083643f4 +0x1da:  lea    0x8(%eax),%edx
083643f7 +0x1dd:  lea    -0x1c(%ebp),%eax
083643fa +0x1e0:  mov    %eax,0x4(%esp)
083643fe +0x1e4:  mov    %edx,(%esp)
08364401 +0x1e7:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08364406 +0x1ec:  mov    (%eax),%edx
08364408 +0x1ee:  mov    0x8(%ebp),%eax
0836440b +0x1f1:  mov    %edx,0x8(%eax)
0836440e +0x1f4:  mov    0x8(%ebp),%eax
08364411 +0x1f7:  movb   $0x1,0xc(%eax)
08364415 +0x1fb:  jmp    083644db <+0x2c1>
0836441a +0x200:  mov    -0xc(%ebp),%eax
0836441d +0x203:  mov    %eax,(%esp)
08364420 +0x206:  call   0822b4c0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb6a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb6a
08364425 +0x20b:  cmp    $0x2,%eax
08364428 +0x20e:  sete   %al
0836442b +0x211:  test   %al,%al
0836442d +0x213:  je     0836445c <+0x242>
0836442f +0x215:  mov    -0xc(%ebp),%eax
08364432 +0x218:  mov    %eax,(%esp)
08364435 +0x21b:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
0836443a +0x220:  mov    %eax,-0x18(%ebp)
0836443d +0x223:  mov    0x8(%ebp),%eax
08364440 +0x226:  lea    0x8(%eax),%edx
08364443 +0x229:  lea    -0x18(%ebp),%eax
08364446 +0x22c:  mov    %eax,0x4(%esp)
0836444a +0x230:  mov    %edx,(%esp)
0836444d +0x233:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08364452 +0x238:  mov    (%eax),%edx
08364454 +0x23a:  mov    0x8(%ebp),%eax
08364457 +0x23d:  mov    %edx,0x8(%eax)
0836445a +0x240:  jmp    083644db <+0x2c1>
0836445c +0x242:  mov    -0xc(%ebp),%eax
0836445f +0x245:  movzbl 0x87a(%eax),%eax
08364466 +0x24c:  test   %al,%al
08364468 +0x24e:  jne    083644da <+0x2c0>
0836446a +0x250:  mov    -0xc(%ebp),%eax
0836446d +0x253:  mov    %eax,(%esp)
08364470 +0x256:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08364475 +0x25b:  cmp    $0x64,%eax
08364478 +0x25e:  sete   %al
0836447b +0x261:  test   %al,%al
0836447d +0x263:  je     083644aa <+0x290>
0836447f +0x265:  mov    -0xc(%ebp),%eax
08364482 +0x268:  mov    %eax,(%esp)
08364485 +0x26b:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
0836448a +0x270:  mov    %eax,-0x14(%ebp)
0836448d +0x273:  mov    0x8(%ebp),%eax
08364490 +0x276:  lea    0x8(%eax),%edx
08364493 +0x279:  lea    -0x14(%ebp),%eax
08364496 +0x27c:  mov    %eax,0x4(%esp)
0836449a +0x280:  mov    %edx,(%esp)
0836449d +0x283:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
083644a2 +0x288:  mov    (%eax),%edx
083644a4 +0x28a:  mov    0x8(%ebp),%eax
083644a7 +0x28d:  mov    %edx,0x8(%eax)
083644aa +0x290:  mov    -0xc(%ebp),%eax
083644ad +0x293:  mov    %eax,(%esp)
083644b0 +0x296:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
083644b5 +0x29b:  mov    %eax,-0x10(%ebp)
083644b8 +0x29e:  mov    0x8(%ebp),%eax
083644bb +0x2a1:  lea    0x8(%eax),%edx
083644be +0x2a4:  lea    -0x10(%ebp),%eax
083644c1 +0x2a7:  mov    %eax,0x4(%esp)
083644c5 +0x2ab:  mov    %edx,(%esp)
083644c8 +0x2ae:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
083644cd +0x2b3:  mov    (%eax),%edx
083644cf +0x2b5:  mov    0x8(%ebp),%eax
083644d2 +0x2b8:  mov    %edx,0x8(%eax)
083644d5 +0x2bb:  jmp    083644db <+0x2c1>
083644d7 +0x2bd:  nop
083644d8 +0x2be:  jmp    083644db <+0x2c1>
083644da +0x2c0:  nop
083644db +0x2c1:  lea    -0x40(%ebp),%eax
083644de +0x2c4:  mov    %eax,(%esp)
083644e1 +0x2c7:  call   083952e2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24d82>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24d82
083644e6 +0x2cc:  lea    -0x44(%ebp),%eax
083644e9 +0x2cf:  mov    %eax,0x4(%esp)
083644ed +0x2d3:  lea    -0x40(%ebp),%eax
083644f0 +0x2d6:  mov    %eax,(%esp)
083644f3 +0x2d9:  call   083952b6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24d56>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24d56
083644f8 +0x2de:  test   %al,%al
083644fa +0x2e0:  jne    08364386 <+0x16c>
08364500 +0x2e6:  mov    -0x4(%ebp),%ebx
08364503 +0x2e9:  leave
08364504 +0x2ea:  ret
08364505 +0x2eb:  nop
```

## 反编译 C

```c
// CWorldMap::set_world_map @ 0x836421a

/* CWorldMap::set_world_map(WorldMapScript*) */

void __thiscall CWorldMap::set_world_map(CWorldMap *this,WorldMapScript *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
  local_48 [4];
  __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
  local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  __normal_iterator local_28 [4];
  __normal_iterator local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CDungeon *local_10;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  this[4] = *(CWorldMap *)(param_1 + 0x20);
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (local_3c,this + 0x1c,local_3c,local_40);
  this[0xc] = (CWorldMap)0x0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
  assign<__gnu_cxx::__normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>
            (local_34,this + 0x28,local_34,local_38);
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (local_2c,this + 0x34,local_2c,local_30);
  *(undefined4 *)(this + 8) = 0x7fffffff;
  std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>::begin();
  __gnu_cxx::
  __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
  ::__normal_iterator<WorldMapDungeon*>(local_44,local_28);
  std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>::end();
  __gnu_cxx::
  __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
  ::__normal_iterator<WorldMapDungeon*>(local_48,local_24);
  while (bVar1 = __gnu_cxx::operator!=(local_44,local_48), bVar1) {
    __gnu_cxx::
    __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
    ::operator->(local_44);
    iVar2 = G_CDataManager();
    local_10 = (CDungeon *)CDataManager::find_dungeon(iVar2);
    if (local_10 != (CDungeon *)0x0) {
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
                      ::operator->(local_44);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0x10),piVar3);
      iVar2 = CDungeon::getDungeonKind(local_10);
      if (iVar2 == 1) {
        local_20 = CDungeon::get_min_level(local_10);
        piVar3 = std::min<int>((int *)(this + 8),&local_20);
        *(int *)(this + 8) = *piVar3;
        this[0xc] = (CWorldMap)0x1;
      }
      else {
        iVar2 = CDungeon::getDungeonKind(local_10);
        if (iVar2 == 2) {
          local_1c = CDungeon::get_min_level(local_10);
          piVar3 = std::min<int>((int *)(this + 8),&local_1c);
          *(int *)(this + 8) = *piVar3;
        }
        else if (local_10[0x87a] == (CDungeon)0x0) {
          iVar2 = CDungeon::get_index(local_10);
          if (iVar2 == 100) {
            local_18 = CDungeon::get_min_level(local_10);
            piVar3 = std::min<int>((int *)(this + 8),&local_18);
            *(int *)(this + 8) = *piVar3;
          }
          local_14 = CDungeon::get_standard_level(local_10);
          piVar3 = std::min<int>((int *)(this + 8),&local_14);
          *(int *)(this + 8) = *piVar3;
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<WorldMapDungeon_const*,std::vector<WorldMapDungeon,std::allocator<WorldMapDungeon>>>
    ::operator++(local_44);
  }
  return;
}
```
