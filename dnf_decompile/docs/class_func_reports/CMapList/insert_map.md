# insert_map

`_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE`

`CMapList::insert_map(int, int, CMap*, std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&)`

| 类 | 地址 |
|---|---|
| `CMapList` | `0x0834f18e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f18e  _ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE
#           CMapList::insert_map(int, int, CMap*, std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&)
# range [0x0834f18e, 0x0834f43d]
0834f18e +0x000:  push   %ebp
0834f18f +0x001:  mov    %esp,%ebp
0834f191 +0x003:  sub    $0x88,%esp
0834f197 +0x009:  mov    0x14(%ebp),%eax
0834f19a +0x00c:  mov    %eax,(%esp)
0834f19d +0x00f:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834f1a2 +0x014:  mov    %eax,0x4(%esp)
0834f1a6 +0x018:  mov    0x8(%ebp),%eax
0834f1a9 +0x01b:  mov    %eax,(%esp)
0834f1ac +0x01e:  call   0834f43e <_ZN8CMapList8find_mapEi>  ; CMapList::find_map(int)
0834f1b1 +0x023:  test   %eax,%eax
0834f1b3 +0x025:  setne  %al
0834f1b6 +0x028:  test   %al,%al
0834f1b8 +0x02a:  je     0834f1c4 <+0x36>
0834f1ba +0x02c:  mov    $0x0,%eax
0834f1bf +0x031:  jmp    0834f43b <+0x2ad>
0834f1c4 +0x036:  mov    0x14(%ebp),%eax
0834f1c7 +0x039:  mov    %eax,(%esp)
0834f1ca +0x03c:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834f1cf +0x041:  cmp    $0xc350,%eax
0834f1d4 +0x046:  jle    0834f1ef <+0x61>
0834f1d6 +0x048:  mov    0x14(%ebp),%eax
0834f1d9 +0x04b:  mov    %eax,(%esp)
0834f1dc +0x04e:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834f1e1 +0x053:  cmp    $0xc738,%eax
0834f1e6 +0x058:  jg     0834f1ef <+0x61>
0834f1e8 +0x05a:  mov    $0x1,%eax
0834f1ed +0x05f:  jmp    0834f1f4 <+0x66>
0834f1ef +0x061:  mov    $0x0,%eax
0834f1f4 +0x066:  test   %al,%al
0834f1f6 +0x068:  je     0834f2e7 <+0x159>
0834f1fc +0x06e:  mov    0x8(%ebp),%eax
0834f1ff +0x071:  mov    0x3d4(%eax),%eax
0834f205 +0x077:  lea    0x1(%eax),%edx
0834f208 +0x07a:  mov    0x8(%ebp),%eax
0834f20b +0x07d:  mov    %edx,0x3d4(%eax)
0834f211 +0x083:  lea    -0x6c(%ebp),%eax
0834f214 +0x086:  mov    %eax,(%esp)
0834f217 +0x089:  call   0822b49e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb48
0834f21c +0x08e:  mov    0x14(%ebp),%eax
0834f21f +0x091:  mov    %eax,(%esp)
0834f222 +0x094:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834f227 +0x099:  mov    %eax,-0x6c(%ebp)
0834f22a +0x09c:  movl   $0x0,-0x70(%ebp)
0834f231 +0x0a3:  lea    -0x64(%ebp),%eax
0834f234 +0x0a6:  mov    0x18(%ebp),%edx
0834f237 +0x0a9:  mov    %edx,0x4(%esp)
0834f23b +0x0ad:  mov    %eax,(%esp)
0834f23e +0x0b0:  call   0838bc14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b6b4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b6b4
0834f243 +0x0b5:  sub    $0x4,%esp
0834f246 +0x0b8:  lea    -0x64(%ebp),%eax
0834f249 +0x0bb:  mov    %eax,0x4(%esp)
0834f24d +0x0bf:  lea    -0x74(%ebp),%eax
0834f250 +0x0c2:  mov    %eax,(%esp)
0834f253 +0x0c5:  call   0838bc38 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b6d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b6d8
0834f258 +0x0ca:  jmp    0834f288 <+0xfa>
0834f25a +0x0cc:  lea    -0x74(%ebp),%eax
0834f25d +0x0cf:  mov    %eax,(%esp)
0834f260 +0x0d2:  call   0838bcba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b75a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b75a
0834f265 +0x0d7:  mov    0x4(%eax),%edx
0834f268 +0x0da:  mov    -0x6c(%ebp),%eax
0834f26b +0x0dd:  cmp    %eax,%edx
0834f26d +0x0df:  sete   %al
0834f270 +0x0e2:  test   %al,%al
0834f272 +0x0e4:  jne    0834f2b5 <+0x127>
0834f274 +0x0e6:  mov    -0x70(%ebp),%eax
0834f277 +0x0e9:  add    $0x1,%eax
0834f27a +0x0ec:  mov    %eax,-0x70(%ebp)
0834f27d +0x0ef:  lea    -0x74(%ebp),%eax
0834f280 +0x0f2:  mov    %eax,(%esp)
0834f283 +0x0f5:  call   0838bca4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b744>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b744
0834f288 +0x0fa:  lea    -0x60(%ebp),%eax
0834f28b +0x0fd:  mov    0x18(%ebp),%edx
0834f28e +0x100:  mov    %edx,0x4(%esp)
0834f292 +0x104:  mov    %eax,(%esp)
0834f295 +0x107:  call   0838bc52 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b6f2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b6f2
0834f29a +0x10c:  sub    $0x4,%esp
0834f29d +0x10f:  lea    -0x60(%ebp),%eax
0834f2a0 +0x112:  mov    %eax,0x4(%esp)
0834f2a4 +0x116:  lea    -0x74(%ebp),%eax
0834f2a7 +0x119:  mov    %eax,(%esp)
0834f2aa +0x11c:  call   0838bc78 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b718>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b718
0834f2af +0x121:  test   %al,%al
0834f2b1 +0x123:  jne    0834f25a <+0xcc>
0834f2b3 +0x125:  jmp    0834f2b6 <+0x128>
0834f2b5 +0x127:  nop
0834f2b6 +0x128:  lea    -0x70(%ebp),%eax
0834f2b9 +0x12b:  mov    %eax,0x4(%esp)
0834f2bd +0x12f:  movl   $&_ZN8CMapList14mapPvpMapInfo_E,(%esp)
0834f2c4 +0x136:  call   0838bcc4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b764>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b764
0834f2c9 +0x13b:  lea    -0x6c(%ebp),%edx
0834f2cc +0x13e:  cmp    %edx,%eax
0834f2ce +0x140:  je     0834f2e7 <+0x159>
0834f2d0 +0x142:  movl   $0x5,0x8(%esp)
0834f2d8 +0x14a:  lea    -0x6c(%ebp),%edx
0834f2db +0x14d:  mov    %edx,0x4(%esp)
0834f2df +0x151:  mov    %eax,(%esp)
0834f2e2 +0x154:  call   0807d8a0 <_init+0x198>
0834f2e7 +0x159:  mov    0x14(%ebp),%eax
0834f2ea +0x15c:  mov    %eax,(%esp)
0834f2ed +0x15f:  call   08134776 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x37d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x37d
0834f2f2 +0x164:  mov    %eax,-0x48(%ebp)
0834f2f5 +0x167:  lea    0x14(%ebp),%eax
0834f2f8 +0x16a:  mov    %eax,0x8(%esp)
0834f2fc +0x16e:  lea    -0x48(%ebp),%eax
0834f2ff +0x171:  mov    %eax,0x4(%esp)
0834f303 +0x175:  lea    -0x50(%ebp),%eax
0834f306 +0x178:  mov    %eax,(%esp)
0834f309 +0x17b:  call   0838a138 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19bd8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19bd8
0834f30e +0x180:  mov    0x8(%ebp),%edx
0834f311 +0x183:  lea    -0x5c(%ebp),%eax
0834f314 +0x186:  lea    -0x50(%ebp),%ecx
0834f317 +0x189:  mov    %ecx,0x8(%esp)
0834f31b +0x18d:  mov    %edx,0x4(%esp)
0834f31f +0x191:  mov    %eax,(%esp)
0834f322 +0x194:  call   0838a166 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c06>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c06
0834f327 +0x199:  sub    $0x4,%esp
0834f32a +0x19c:  mov    0x14(%ebp),%eax
0834f32d +0x19f:  mov    %eax,(%esp)
0834f330 +0x1a2:  call   0830e5c0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a5
0834f335 +0x1a7:  test   %eax,%eax
0834f337 +0x1a9:  sete   %al
0834f33a +0x1ac:  test   %al,%al
0834f33c +0x1ae:  je     0834f38b <+0x1fd>
0834f33e +0x1b0:  lea    0x14(%ebp),%eax
0834f341 +0x1b3:  mov    %eax,0x8(%esp)
0834f345 +0x1b7:  lea    0x10(%ebp),%eax
0834f348 +0x1ba:  mov    %eax,0x4(%esp)
0834f34c +0x1be:  lea    -0x38(%ebp),%eax
0834f34f +0x1c1:  mov    %eax,(%esp)
0834f352 +0x1c4:  call   0838bdbe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b85e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b85e
0834f357 +0x1c9:  mov    0xc(%ebp),%edx
0834f35a +0x1cc:  mov    %edx,%eax
0834f35c +0x1ce:  shl    $0x2,%eax
0834f35f +0x1d1:  add    %edx,%eax
0834f361 +0x1d3:  shl    $0x2,%eax
0834f364 +0x1d6:  add    $0x10,%eax
0834f367 +0x1d9:  add    0x8(%ebp),%eax
0834f36a +0x1dc:  lea    0x4(%eax),%ecx
0834f36d +0x1df:  lea    -0x44(%ebp),%eax
0834f370 +0x1e2:  lea    -0x38(%ebp),%edx
0834f373 +0x1e5:  mov    %edx,0x8(%esp)
0834f377 +0x1e9:  mov    %ecx,0x4(%esp)
0834f37b +0x1ed:  mov    %eax,(%esp)
0834f37e +0x1f0:  call   0838a166 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c06>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c06
0834f383 +0x1f5:  sub    $0x4,%esp
0834f386 +0x1f8:  jmp    0834f436 <+0x2a8>
0834f38b +0x1fd:  mov    0x14(%ebp),%eax
0834f38e +0x200:  mov    %eax,(%esp)
0834f391 +0x203:  call   0830e5c0 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1a5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1a5
0834f396 +0x208:  cmp    $0x2,%eax
0834f399 +0x20b:  sete   %al
0834f39c +0x20e:  test   %al,%al
0834f39e +0x210:  je     0834f3ec <+0x25e>
0834f3a0 +0x212:  lea    0x14(%ebp),%eax
0834f3a3 +0x215:  mov    %eax,0x8(%esp)
0834f3a7 +0x219:  lea    0x10(%ebp),%eax
0834f3aa +0x21c:  mov    %eax,0x4(%esp)
0834f3ae +0x220:  lea    -0x24(%ebp),%eax
0834f3b1 +0x223:  mov    %eax,(%esp)
0834f3b4 +0x226:  call   0838bdbe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b85e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b85e
0834f3b9 +0x22b:  mov    0xc(%ebp),%edx
0834f3bc +0x22e:  mov    %edx,%eax
0834f3be +0x230:  shl    $0x2,%eax
0834f3c1 +0x233:  add    %edx,%eax
0834f3c3 +0x235:  shl    $0x2,%eax
0834f3c6 +0x238:  add    $0x290,%eax
0834f3cb +0x23d:  add    0x8(%ebp),%eax
0834f3ce +0x240:  lea    0x4(%eax),%ecx
0834f3d1 +0x243:  lea    -0x30(%ebp),%eax
0834f3d4 +0x246:  lea    -0x24(%ebp),%edx
0834f3d7 +0x249:  mov    %edx,0x8(%esp)
0834f3db +0x24d:  mov    %ecx,0x4(%esp)
0834f3df +0x251:  mov    %eax,(%esp)
0834f3e2 +0x254:  call   0838a166 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c06>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c06
0834f3e7 +0x259:  sub    $0x4,%esp
0834f3ea +0x25c:  jmp    0834f436 <+0x2a8>
0834f3ec +0x25e:  lea    0x14(%ebp),%eax
0834f3ef +0x261:  mov    %eax,0x8(%esp)
0834f3f3 +0x265:  lea    0x10(%ebp),%eax
0834f3f6 +0x268:  mov    %eax,0x4(%esp)
0834f3fa +0x26c:  lea    -0x10(%ebp),%eax
0834f3fd +0x26f:  mov    %eax,(%esp)
0834f400 +0x272:  call   0838bdbe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b85e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b85e
0834f405 +0x277:  mov    0xc(%ebp),%edx
0834f408 +0x27a:  mov    %edx,%eax
0834f40a +0x27c:  shl    $0x2,%eax
0834f40d +0x27f:  add    %edx,%eax
0834f40f +0x281:  shl    $0x2,%eax
0834f412 +0x284:  add    $0x150,%eax
0834f417 +0x289:  add    0x8(%ebp),%eax
0834f41a +0x28c:  lea    0x4(%eax),%ecx
0834f41d +0x28f:  lea    -0x1c(%ebp),%eax
0834f420 +0x292:  lea    -0x10(%ebp),%edx
0834f423 +0x295:  mov    %edx,0x8(%esp)
0834f427 +0x299:  mov    %ecx,0x4(%esp)
0834f42b +0x29d:  mov    %eax,(%esp)
0834f42e +0x2a0:  call   0838a166 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c06>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c06
0834f433 +0x2a5:  sub    $0x4,%esp
0834f436 +0x2a8:  mov    $0x1,%eax
0834f43b +0x2ad:  leave
0834f43c +0x2ae:  ret
0834f43d +0x2af:  nop
```

## 反编译 C

```c
// CMapList::insert_map @ 0x834f18e

/* CMapList::insert_map(int, int, CMap*, std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&) */

undefined4 __thiscall
CMapList::insert_map(CMapList *this,int param_1,int param_2,CMap *param_3,vector *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *__dest;
  __normal_iterator<PVPMAP_DATA_const*,std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>>
  local_78 [4];
  int local_74;
  int local_70 [2];
  __normal_iterator local_68 [4];
  __normal_iterator local_64 [4];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_60 [12];
  pair<int_const,CMap*> local_54 [8];
  int local_4c;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_48 [12];
  pair<int_const,CMap*> local_3c [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_34 [12];
  pair<int_const,CMap*> local_28 [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_20 [12];
  pair<int_const,CMap*> local_14 [16];
  
  CMap::get_index(param_3);
  iVar2 = find_map((int)this);
  if (iVar2 == 0) {
    iVar2 = CMap::get_index(param_3);
    if ((iVar2 < 0xc351) || (iVar2 = CMap::get_index(param_3), 51000 < iVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(int *)(this + 0x3d4) = *(int *)(this + 0x3d4) + 1;
      PvPMapInfo::PvPMapInfo((PvPMapInfo *)local_70);
      local_70[0] = CMap::get_index(param_3);
      local_74 = 0;
      std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>::begin();
      __gnu_cxx::
      __normal_iterator<PVPMAP_DATA_const*,std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>>::
      __normal_iterator<PVPMAP_DATA*>(local_78,local_68);
      while( true ) {
        std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>::end();
        bVar1 = __gnu_cxx::operator!=(local_78,local_64);
        if ((!bVar1) ||
           (iVar2 = __gnu_cxx::
                    __normal_iterator<PVPMAP_DATA_const*,std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>>
                    ::operator*(local_78), *(int *)(iVar2 + 4) == local_70[0])) break;
        local_74 = local_74 + 1;
        __gnu_cxx::
        __normal_iterator<PVPMAP_DATA_const*,std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>>::
        operator++(local_78);
      }
      __dest = (int *)std::
                      map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>
                      ::operator[]((map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>
                                    *)mapPvpMapInfo_,&local_74);
      if (__dest != local_70) {
        memcpy(__dest,local_70,5);
      }
    }
    local_4c = CMap::get_index(param_3);
    std::pair<int_const,CMap*>::pair<int,CMap*&>(local_54,&local_4c,&param_3);
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    insert(local_60,this);
    iVar2 = CMap::get_map_type(param_3);
    if (iVar2 == 0) {
      std::pair<int_const,CMap*>::pair<int&,CMap*&>(local_3c,&param_2,&param_3);
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      insert(local_48,this + param_1 * 0x14 + 0x14);
    }
    else {
      iVar2 = CMap::get_map_type(param_3);
      if (iVar2 == 2) {
        std::pair<int_const,CMap*>::pair<int&,CMap*&>(local_28,&param_2,&param_3);
        __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
        ::insert(local_34,this + param_1 * 0x14 + 0x294);
      }
      else {
        std::pair<int_const,CMap*>::pair<int&,CMap*&>(local_14,&param_2,&param_3);
        __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
        ::insert(local_20,this + param_1 * 0x14 + 0x154);
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
