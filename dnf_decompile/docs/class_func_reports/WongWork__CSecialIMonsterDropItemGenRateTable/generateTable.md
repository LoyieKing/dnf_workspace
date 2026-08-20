# generateTable

`_ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE`

`WongWork::CSecialIMonsterDropItemGenRateTable::generateTable(WongWork::stGenItemRange_t*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSecialIMonsterDropItemGenRateTable` | `0x08534cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534cd0  _ZN8WongWork35CSecialIMonsterDropItemGenRateTable13generateTableEPNS_16stGenItemRange_tE
#           WongWork::CSecialIMonsterDropItemGenRateTable::generateTable(WongWork::stGenItemRange_t*)
# range [0x08534cd0, 0x08534fcd]
08534cd0 +0x000:  push   %ebp
08534cd1 +0x001:  mov    %esp,%ebp
08534cd3 +0x003:  push   %edi
08534cd4 +0x004:  push   %esi
08534cd5 +0x005:  push   %ebx
08534cd6 +0x006:  sub    $0x6c,%esp
08534cd9 +0x009:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08534cde +0x00e:  mov    0xc(%eax),%eax
08534ce1 +0x011:  mov    %eax,(%esp)
08534ce4 +0x014:  call   08539e38 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xc4>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xc4
08534ce9 +0x019:  mov    %eax,-0x38(%ebp)
08534cec +0x01c:  movl   $0x0,-0x34(%ebp)
08534cf3 +0x023:  jmp    08534fb3 <+0x2e3>
08534cf8 +0x028:  movl   $0x0,-0x30(%ebp)
08534cff +0x02f:  jmp    08534fa0 <+0x2d0>
08534d04 +0x034:  movl   $0x1,-0x2c(%ebp)
08534d0b +0x03b:  jmp    08534f8d <+0x2bd>
08534d10 +0x040:  movl   $0x0,-0x28(%ebp)
08534d17 +0x047:  jmp    08534f7a <+0x2aa>
08534d1c +0x04c:  movl   $0x1,-0x24(%ebp)
08534d23 +0x053:  jmp    08534f64 <+0x294>
08534d28 +0x058:  movl   $0x0,-0x58(%ebp)
08534d2f +0x05f:  mov    -0x24(%ebp),%eax
08534d32 +0x062:  add    %eax,%eax
08534d34 +0x064:  add    0xc(%ebp),%eax
08534d37 +0x067:  movzbl (%eax),%eax
08534d3a +0x06a:  movzbl %al,%eax
08534d3d +0x06d:  neg    %eax
08534d3f +0x06f:  mov    %eax,-0x20(%ebp)
08534d42 +0x072:  jmp    08534f40 <+0x270>
08534d47 +0x077:  mov    -0x20(%ebp),%eax
08534d4a +0x07a:  mov    -0x24(%ebp),%edx
08534d4d +0x07d:  lea    (%edx,%eax,1),%eax
08534d50 +0x080:  cmp    $0xc8,%eax
08534d55 +0x085:  jg     08534f5f <+0x28f>
08534d5b +0x08b:  mov    -0x20(%ebp),%eax
08534d5e +0x08e:  mov    -0x24(%ebp),%edx
08534d61 +0x091:  lea    (%edx,%eax,1),%eax
08534d64 +0x094:  mov    %eax,%edx
08534d66 +0x096:  mov    %edx,%eax
08534d68 +0x098:  shl    $0x2,%eax
08534d6b +0x09b:  add    %edx,%eax
08534d6d +0x09d:  shl    $0x2,%eax
08534d70 +0x0a0:  mov    %eax,%edx
08534d72 +0x0a2:  add    -0x38(%ebp),%edx
08534d75 +0x0a5:  lea    -0x60(%ebp),%eax
08534d78 +0x0a8:  mov    %edx,0x4(%esp)
08534d7c +0x0ac:  mov    %eax,(%esp)
08534d7f +0x0af:  call   0853aee6 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1172>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1172
08534d84 +0x0b4:  sub    $0x4,%esp
08534d87 +0x0b7:  jmp    08534ef6 <+0x226>
08534d8c +0x0bc:  lea    -0x60(%ebp),%eax
08534d8f +0x0bf:  mov    %eax,(%esp)
08534d92 +0x0c2:  call   083946ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2418e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2418e
08534d97 +0x0c7:  mov    0x4(%eax),%eax
08534d9a +0x0ca:  mov    %eax,-0x1c(%ebp)
08534d9d +0x0cd:  mov    -0x1c(%ebp),%eax
08534da0 +0x0d0:  mov    %eax,(%esp)
08534da3 +0x0d3:  call   0832e02a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x88>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x88
08534da8 +0x0d8:  test   %eax,%eax
08534daa +0x0da:  sete   %al
08534dad +0x0dd:  test   %al,%al
08534daf +0x0df:  jne    08534edb <+0x20b>
08534db5 +0x0e5:  mov    -0x1c(%ebp),%eax
08534db8 +0x0e8:  mov    %eax,(%esp)
08534dbb +0x0eb:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08534dc0 +0x0f0:  cmp    -0x28(%ebp),%eax
08534dc3 +0x0f3:  setne  %al
08534dc6 +0x0f6:  test   %al,%al
08534dc8 +0x0f8:  jne    08534ede <+0x20e>
08534dce +0x0fe:  mov    -0x1c(%ebp),%eax
08534dd1 +0x101:  mov    %eax,0x8(%esp)
08534dd5 +0x105:  mov    -0x2c(%ebp),%eax
08534dd8 +0x108:  mov    %eax,0x4(%esp)
08534ddc +0x10c:  mov    0x8(%ebp),%eax
08534ddf +0x10f:  mov    %eax,(%esp)
08534de2 +0x112:  call   085352a6 <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable15_itemTypeVerifyEiPK5CItem>  ; WongWork::CSecialIMonsterDropItemGenRateTable::_itemTypeVerify(int, CItem const*)
08534de7 +0x117:  xor    $0x1,%eax
08534dea +0x11a:  test   %al,%al
08534dec +0x11c:  jne    08534ee1 <+0x211>
08534df2 +0x122:  mov    -0x1c(%ebp),%eax
08534df5 +0x125:  mov    %eax,(%esp)
08534df8 +0x128:  call   08539e00 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x8c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x8c
08534dfd +0x12d:  xor    $0x1,%eax
08534e00 +0x130:  test   %al,%al
08534e02 +0x132:  jne    08534ee4 <+0x214>
08534e08 +0x138:  mov    -0x34(%ebp),%eax
08534e0b +0x13b:  mov    %eax,0x4(%esp)
08534e0f +0x13f:  mov    -0x1c(%ebp),%eax
08534e12 +0x142:  mov    %eax,(%esp)
08534e15 +0x145:  call   08539e10 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x9c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x9c
08534e1a +0x14a:  xor    $0x1,%eax
08534e1d +0x14d:  test   %al,%al
08534e1f +0x14f:  jne    08534ee7 <+0x217>
08534e25 +0x155:  mov    -0x30(%ebp),%eax
08534e28 +0x158:  mov    %eax,0x4(%esp)
08534e2c +0x15c:  mov    -0x1c(%ebp),%eax
08534e2f +0x15f:  mov    %eax,(%esp)
08534e32 +0x162:  call   08539e24 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xb0>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xb0
08534e37 +0x167:  xor    $0x1,%eax
08534e3a +0x16a:  test   %al,%al
08534e3c +0x16c:  jne    08534eea <+0x21a>
08534e42 +0x172:  mov    -0x1c(%ebp),%eax
08534e45 +0x175:  mov    %eax,(%esp)
08534e48 +0x178:  call   0832e02a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x88>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x88
08534e4d +0x17d:  mov    %eax,%edx
08534e4f +0x17f:  mov    -0x58(%ebp),%eax
08534e52 +0x182:  lea    (%edx,%eax,1),%eax
08534e55 +0x185:  mov    %eax,-0x58(%ebp)
08534e58 +0x188:  mov    -0x1c(%ebp),%eax
08534e5b +0x18b:  mov    %eax,(%esp)
08534e5e +0x18e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08534e63 +0x193:  mov    %eax,-0x3c(%ebp)
08534e66 +0x196:  lea    -0x3c(%ebp),%eax
08534e69 +0x199:  mov    %eax,0x8(%esp)
08534e6d +0x19d:  lea    -0x58(%ebp),%eax
08534e70 +0x1a0:  mov    %eax,0x4(%esp)
08534e74 +0x1a4:  lea    -0x44(%ebp),%eax
08534e77 +0x1a7:  mov    %eax,(%esp)
08534e7a +0x1aa:  call   0853af32 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x11be>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x11be
08534e7f +0x1af:  mov    -0x34(%ebp),%ecx
08534e82 +0x1b2:  mov    -0x30(%ebp),%esi
08534e85 +0x1b5:  mov    -0x2c(%ebp),%ebx
08534e88 +0x1b8:  mov    -0x28(%ebp),%edi
08534e8b +0x1bb:  mov    -0x24(%ebp),%edx
08534e8e +0x1be:  mov    %edx,%eax
08534e90 +0x1c0:  add    %eax,%eax
08534e92 +0x1c2:  add    %edx,%eax
08534e94 +0x1c4:  shl    $0x3,%eax
08534e97 +0x1c7:  imul   $0x12d8,%edi,%edx
08534e9d +0x1cd:  lea    (%eax,%edx,1),%edi
08534ea0 +0x1d0:  imul   $&_ZL14gUnicodeBuffer+0x19024,%esi,%edx
08534ea6 +0x1d6:  imul   $0x7110,%ebx,%eax
08534eac +0x1dc:  lea    (%edx,%eax,1),%eax
08534eaf +0x1df:  lea    (%edi,%eax,1),%edx
08534eb2 +0x1e2:  imul   $0x69ff0,%ecx,%eax
08534eb8 +0x1e8:  lea    (%edx,%eax,1),%eax
08534ebb +0x1eb:  mov    %eax,%edx
08534ebd +0x1ed:  add    0x8(%ebp),%edx
08534ec0 +0x1f0:  lea    -0x4c(%ebp),%eax
08534ec3 +0x1f3:  lea    -0x44(%ebp),%ecx
08534ec6 +0x1f6:  mov    %ecx,0x8(%esp)
08534eca +0x1fa:  mov    %edx,0x4(%esp)
08534ece +0x1fe:  mov    %eax,(%esp)
08534ed1 +0x201:  call   082ac1ca <_GLOBAL__I__ZN4CLog5this_E+0x85f1>  ; global constructors keyed to CLog::this_+0x85f1
08534ed6 +0x206:  sub    $0x4,%esp
08534ed9 +0x209:  jmp    08534eeb <+0x21b>
08534edb +0x20b:  nop
08534edc +0x20c:  jmp    08534eeb <+0x21b>
08534ede +0x20e:  nop
08534edf +0x20f:  jmp    08534eeb <+0x21b>
08534ee1 +0x211:  nop
08534ee2 +0x212:  jmp    08534eeb <+0x21b>
08534ee4 +0x214:  nop
08534ee5 +0x215:  jmp    08534eeb <+0x21b>
08534ee7 +0x217:  nop
08534ee8 +0x218:  jmp    08534eeb <+0x21b>
08534eea +0x21a:  nop
08534eeb +0x21b:  lea    -0x60(%ebp),%eax
08534eee +0x21e:  mov    %eax,(%esp)
08534ef1 +0x221:  call   08394656 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240f6
08534ef6 +0x226:  mov    -0x20(%ebp),%eax
08534ef9 +0x229:  mov    -0x24(%ebp),%edx
08534efc +0x22c:  lea    (%edx,%eax,1),%eax
08534eff +0x22f:  mov    %eax,%edx
08534f01 +0x231:  mov    %edx,%eax
08534f03 +0x233:  shl    $0x2,%eax
08534f06 +0x236:  add    %edx,%eax
08534f08 +0x238:  shl    $0x2,%eax
08534f0b +0x23b:  mov    %eax,%edx
08534f0d +0x23d:  add    -0x38(%ebp),%edx
08534f10 +0x240:  lea    -0x54(%ebp),%eax
08534f13 +0x243:  mov    %edx,0x4(%esp)
08534f17 +0x247:  mov    %eax,(%esp)
08534f1a +0x24a:  call   0853af0c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1198>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1198
08534f1f +0x24f:  sub    $0x4,%esp
08534f22 +0x252:  lea    -0x54(%ebp),%eax
08534f25 +0x255:  mov    %eax,0x4(%esp)
08534f29 +0x259:  lea    -0x60(%ebp),%eax
08534f2c +0x25c:  mov    %eax,(%esp)
08534f2f +0x25f:  call   08394642 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240e2
08534f34 +0x264:  test   %al,%al
08534f36 +0x266:  jne    08534d8c <+0xbc>
08534f3c +0x26c:  addl   $0x1,-0x20(%ebp)
08534f40 +0x270:  mov    -0x24(%ebp),%eax
08534f43 +0x273:  add    %eax,%eax
08534f45 +0x275:  add    0xc(%ebp),%eax
08534f48 +0x278:  movzbl 0x1(%eax),%eax
08534f4c +0x27c:  movzbl %al,%eax
08534f4f +0x27f:  cmp    -0x20(%ebp),%eax
08534f52 +0x282:  setg   %al
08534f55 +0x285:  test   %al,%al
08534f57 +0x287:  jne    08534d47 <+0x77>
08534f5d +0x28d:  jmp    08534f60 <+0x290>
08534f5f +0x28f:  nop
08534f60 +0x290:  addl   $0x1,-0x24(%ebp)
08534f64 +0x294:  cmpl   $0xc8,-0x24(%ebp)
08534f6b +0x29b:  setle  %al
08534f6e +0x29e:  test   %al,%al
08534f70 +0x2a0:  jne    08534d28 <+0x58>
08534f76 +0x2a6:  addl   $0x1,-0x28(%ebp)
08534f7a +0x2aa:  cmpl   $0x5,-0x28(%ebp)
08534f7e +0x2ae:  setle  %al
08534f81 +0x2b1:  test   %al,%al
08534f83 +0x2b3:  jne    08534d1c <+0x4c>
08534f89 +0x2b9:  addl   $0x1,-0x2c(%ebp)
08534f8d +0x2bd:  cmpl   $0x4,-0x2c(%ebp)
08534f91 +0x2c1:  setle  %al
08534f94 +0x2c4:  test   %al,%al
08534f96 +0x2c6:  jne    08534d10 <+0x40>
08534f9c +0x2cc:  addl   $0x1,-0x30(%ebp)
08534fa0 +0x2d0:  cmpl   $0x2,-0x30(%ebp)
08534fa4 +0x2d4:  setle  %al
08534fa7 +0x2d7:  test   %al,%al
08534fa9 +0x2d9:  jne    08534d04 <+0x34>
08534faf +0x2df:  addl   $0x1,-0x34(%ebp)
08534fb3 +0x2e3:  cmpl   $0x4,-0x34(%ebp)
08534fb7 +0x2e7:  setle  %al
08534fba +0x2ea:  test   %al,%al
08534fbc +0x2ec:  jne    08534cf8 <+0x28>
08534fc2 +0x2f2:  lea    -0xc(%ebp),%esp
08534fc5 +0x2f5:  add    $0x0,%esp
08534fc8 +0x2f8:  pop    %ebx
08534fc9 +0x2f9:  pop    %esi
08534fca +0x2fa:  pop    %edi
08534fcb +0x2fb:  pop    %ebp
08534fcc +0x2fc:  ret
08534fcd +0x2fd:  nop
```

## 反编译 C

```c
// WongWork::CSecialIMonsterDropItemGenRateTable::generateTable @ 0x8534cd0

/* WongWork::CSecialIMonsterDropItemGenRateTable::generateTable(WongWork::stGenItemRange_t*) */

void __thiscall
WongWork::CSecialIMonsterDropItemGenRateTable::generateTable
          (CSecialIMonsterDropItemGenRateTable *this,stGenItemRange_t *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_64 [8];
  uint local_5c;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_58 [8];
  pair local_50 [8];
  pair<unsigned_int_const,int> local_48 [8];
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CItem *local_20;
  
  iVar2 = G_CDataManager();
  local_3c = CItemList::getItemGradeList(*(CItemList **)(iVar2 + 0xc));
  for (local_38 = 0; local_38 < 5; local_38 = local_38 + 1) {
    for (local_34 = 0; local_34 < 3; local_34 = local_34 + 1) {
      for (local_30 = 1; local_30 < 5; local_30 = local_30 + 1) {
        for (local_2c = 0; local_2c < 6; local_2c = local_2c + 1) {
          for (local_28 = 1; local_28 < 0xc9; local_28 = local_28 + 1) {
            local_5c = 0;
            for (local_24 = -(uint)(byte)param_1[local_28 * 2];
                (local_24 < (int)(uint)(byte)param_1[local_28 * 2 + 1] &&
                (local_28 + local_24 < 0xc9)); local_24 = local_24 + 1) {
              __gnu_cxx::
              hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
              begin(local_64);
              while( true ) {
                __gnu_cxx::
                hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>
                ::end(local_58);
                cVar1 = __gnu_cxx::
                        _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                        ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                                      *)local_64,(_Hashtable_const_iterator *)local_58);
                if (cVar1 == '\0') break;
                iVar2 = __gnu_cxx::
                        _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                        ::operator->((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                                      *)local_64);
                local_20 = *(CItem **)(iVar2 + 4);
                iVar2 = CItem::get_gen_rate(local_20);
                if ((((iVar2 != 0) && (iVar2 = CItem::get_rarity(local_20), iVar2 == local_2c)) &&
                    (cVar1 = _itemTypeVerify(this,local_30,local_20), cVar1 == '\x01')) &&
                   (((cVar1 = CItem::isSpecialMonsterDropItem(local_20), cVar1 == '\x01' &&
                     (cVar1 = CItem::isDropItemDungeonDifficulty(local_20,local_38), cVar1 == '\x01'
                     )) && (cVar1 = CItem::isDropItemDungeonType(local_20,local_34), cVar1 == '\x01'
                           )))) {
                  iVar2 = CItem::get_gen_rate(local_20);
                  local_5c = iVar2 + local_5c;
                  local_40 = CItem::get_index(local_20);
                  std::pair<unsigned_int_const,int>::pair<unsigned_int&,int>
                            (local_48,&local_5c,&local_40);
                  std::
                  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                  ::insert(local_50);
                }
                __gnu_cxx::
                _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                ::operator++((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                              *)local_64);
              }
            }
          }
        }
      }
    }
  }
  return;
}
```
