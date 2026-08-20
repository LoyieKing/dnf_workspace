# generateTable

`_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb`

`WongWork::CItemGenRateTable::generateTable(WongWork::stGenItemRange_t*, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGenRateTable` | `0x0853466c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853466c  _ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb
#           WongWork::CItemGenRateTable::generateTable(WongWork::stGenItemRange_t*, bool)
# range [0x0853466c, 0x08534905]
0853466c +0x000:  push   %ebp
0853466d +0x001:  mov    %esp,%ebp
0853466f +0x003:  push   %ebx
08534670 +0x004:  sub    $0x64,%esp
08534673 +0x007:  mov    0x10(%ebp),%eax
08534676 +0x00a:  mov    %al,-0x4c(%ebp)
08534679 +0x00d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0853467e +0x012:  mov    0xc(%eax),%eax
08534681 +0x015:  mov    %eax,(%esp)
08534684 +0x018:  call   08539e38 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xc4>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xc4
08534689 +0x01d:  mov    %eax,-0x20(%ebp)
0853468c +0x020:  movl   $0x1,-0x1c(%ebp)
08534693 +0x027:  jmp    085348f2 <+0x286>
08534698 +0x02c:  movl   $0x0,-0x18(%ebp)
0853469f +0x033:  jmp    085348df <+0x273>
085346a4 +0x038:  movl   $0x1,-0x14(%ebp)
085346ab +0x03f:  jmp    085348c9 <+0x25d>
085346b0 +0x044:  movl   $0x0,-0x40(%ebp)
085346b7 +0x04b:  mov    -0x14(%ebp),%eax
085346ba +0x04e:  add    %eax,%eax
085346bc +0x050:  add    0xc(%ebp),%eax
085346bf +0x053:  movzbl (%eax),%eax
085346c2 +0x056:  movzbl %al,%eax
085346c5 +0x059:  neg    %eax
085346c7 +0x05b:  mov    %eax,-0x10(%ebp)
085346ca +0x05e:  jmp    085348a5 <+0x239>
085346cf +0x063:  mov    -0x10(%ebp),%eax
085346d2 +0x066:  mov    -0x14(%ebp),%edx
085346d5 +0x069:  lea    (%edx,%eax,1),%eax
085346d8 +0x06c:  cmp    $0xc8,%eax
085346dd +0x071:  jg     085348c4 <+0x258>
085346e3 +0x077:  mov    -0x10(%ebp),%eax
085346e6 +0x07a:  mov    -0x14(%ebp),%edx
085346e9 +0x07d:  lea    (%edx,%eax,1),%eax
085346ec +0x080:  mov    %eax,%edx
085346ee +0x082:  mov    %edx,%eax
085346f0 +0x084:  shl    $0x2,%eax
085346f3 +0x087:  add    %edx,%eax
085346f5 +0x089:  shl    $0x2,%eax
085346f8 +0x08c:  mov    %eax,%edx
085346fa +0x08e:  add    -0x20(%ebp),%edx
085346fd +0x091:  lea    -0x48(%ebp),%eax
08534700 +0x094:  mov    %edx,0x4(%esp)
08534704 +0x098:  mov    %eax,(%esp)
08534707 +0x09b:  call   0853aee6 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1172>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1172
0853470c +0x0a0:  sub    $0x4,%esp
0853470f +0x0a3:  jmp    0853485b <+0x1ef>
08534714 +0x0a8:  lea    -0x48(%ebp),%eax
08534717 +0x0ab:  mov    %eax,(%esp)
0853471a +0x0ae:  call   083946ee <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2418e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2418e
0853471f +0x0b3:  mov    0x4(%eax),%eax
08534722 +0x0b6:  mov    %eax,-0xc(%ebp)
08534725 +0x0b9:  mov    -0xc(%ebp),%eax
08534728 +0x0bc:  mov    %eax,(%esp)
0853472b +0x0bf:  call   0832e02a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x88>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x88
08534730 +0x0c4:  test   %eax,%eax
08534732 +0x0c6:  sete   %al
08534735 +0x0c9:  test   %al,%al
08534737 +0x0cb:  jne    08534843 <+0x1d7>
0853473d +0x0d1:  mov    -0xc(%ebp),%eax
08534740 +0x0d4:  mov    %eax,(%esp)
08534743 +0x0d7:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08534748 +0x0dc:  cmp    -0x18(%ebp),%eax
0853474b +0x0df:  setne  %al
0853474e +0x0e2:  test   %al,%al
08534750 +0x0e4:  jne    08534846 <+0x1da>
08534756 +0x0ea:  mov    -0xc(%ebp),%eax
08534759 +0x0ed:  mov    %eax,0x8(%esp)
0853475d +0x0f1:  mov    -0x1c(%ebp),%eax
08534760 +0x0f4:  mov    %eax,0x4(%esp)
08534764 +0x0f8:  mov    0x8(%ebp),%eax
08534767 +0x0fb:  mov    %eax,(%esp)
0853476a +0x0fe:  call   08534906 <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem>  ; WongWork::CItemGenRateTable::_itemTypeVerify(int, CItem const*)
0853476f +0x103:  xor    $0x1,%eax
08534772 +0x106:  test   %al,%al
08534774 +0x108:  jne    08534849 <+0x1dd>
0853477a +0x10e:  mov    -0xc(%ebp),%eax
0853477d +0x111:  mov    %eax,(%esp)
08534780 +0x114:  call   08539e00 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x8c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x8c
08534785 +0x119:  test   %al,%al
08534787 +0x11b:  jne    0853484c <+0x1e0>
0853478d +0x121:  movzbl -0x4c(%ebp),%eax
08534791 +0x125:  xor    $0x1,%eax
08534794 +0x128:  test   %al,%al
08534796 +0x12a:  je     085347b5 <+0x149>
08534798 +0x12c:  mov    -0xc(%ebp),%eax
0853479b +0x12f:  mov    (%eax),%eax
0853479d +0x131:  add    $0x4c,%eax
085347a0 +0x134:  mov    (%eax),%edx
085347a2 +0x136:  mov    -0xc(%ebp),%eax
085347a5 +0x139:  mov    %eax,(%esp)
085347a8 +0x13c:  call   *%edx
085347aa +0x13e:  test   %al,%al
085347ac +0x140:  je     085347b5 <+0x149>
085347ae +0x142:  mov    $0x1,%eax
085347b3 +0x147:  jmp    085347ba <+0x14e>
085347b5 +0x149:  mov    $0x0,%eax
085347ba +0x14e:  test   %al,%al
085347bc +0x150:  jne    0853484f <+0x1e3>
085347c2 +0x156:  mov    -0xc(%ebp),%eax
085347c5 +0x159:  mov    %eax,(%esp)
085347c8 +0x15c:  call   0832e02a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x88>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x88
085347cd +0x161:  mov    %eax,%edx
085347cf +0x163:  mov    -0x40(%ebp),%eax
085347d2 +0x166:  lea    (%edx,%eax,1),%eax
085347d5 +0x169:  mov    %eax,-0x40(%ebp)
085347d8 +0x16c:  mov    -0xc(%ebp),%eax
085347db +0x16f:  mov    %eax,(%esp)
085347de +0x172:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
085347e3 +0x177:  mov    %eax,-0x24(%ebp)
085347e6 +0x17a:  lea    -0x24(%ebp),%eax
085347e9 +0x17d:  mov    %eax,0x8(%esp)
085347ed +0x181:  lea    -0x40(%ebp),%eax
085347f0 +0x184:  mov    %eax,0x4(%esp)
085347f4 +0x188:  lea    -0x2c(%ebp),%eax
085347f7 +0x18b:  mov    %eax,(%esp)
085347fa +0x18e:  call   0853af32 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x11be>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x11be
085347ff +0x193:  mov    -0x1c(%ebp),%ecx
08534802 +0x196:  mov    -0x18(%ebp),%ebx
08534805 +0x199:  mov    -0x14(%ebp),%edx
08534808 +0x19c:  mov    %edx,%eax
0853480a +0x19e:  add    %eax,%eax
0853480c +0x1a0:  add    %edx,%eax
0853480e +0x1a2:  shl    $0x3,%eax
08534811 +0x1a5:  imul   $0x12d8,%ebx,%edx
08534817 +0x1ab:  lea    (%eax,%edx,1),%edx
0853481a +0x1ae:  imul   $0x7110,%ecx,%eax
08534820 +0x1b4:  lea    (%edx,%eax,1),%eax
08534823 +0x1b7:  mov    %eax,%edx
08534825 +0x1b9:  add    0x8(%ebp),%edx
08534828 +0x1bc:  lea    -0x34(%ebp),%eax
0853482b +0x1bf:  lea    -0x2c(%ebp),%ecx
0853482e +0x1c2:  mov    %ecx,0x8(%esp)
08534832 +0x1c6:  mov    %edx,0x4(%esp)
08534836 +0x1ca:  mov    %eax,(%esp)
08534839 +0x1cd:  call   082ac1ca <_GLOBAL__I__ZN4CLog5this_E+0x85f1>  ; global constructors keyed to CLog::this_+0x85f1
0853483e +0x1d2:  sub    $0x4,%esp
08534841 +0x1d5:  jmp    08534850 <+0x1e4>
08534843 +0x1d7:  nop
08534844 +0x1d8:  jmp    08534850 <+0x1e4>
08534846 +0x1da:  nop
08534847 +0x1db:  jmp    08534850 <+0x1e4>
08534849 +0x1dd:  nop
0853484a +0x1de:  jmp    08534850 <+0x1e4>
0853484c +0x1e0:  nop
0853484d +0x1e1:  jmp    08534850 <+0x1e4>
0853484f +0x1e3:  nop
08534850 +0x1e4:  lea    -0x48(%ebp),%eax
08534853 +0x1e7:  mov    %eax,(%esp)
08534856 +0x1ea:  call   08394656 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240f6
0853485b +0x1ef:  mov    -0x10(%ebp),%eax
0853485e +0x1f2:  mov    -0x14(%ebp),%edx
08534861 +0x1f5:  lea    (%edx,%eax,1),%eax
08534864 +0x1f8:  mov    %eax,%edx
08534866 +0x1fa:  mov    %edx,%eax
08534868 +0x1fc:  shl    $0x2,%eax
0853486b +0x1ff:  add    %edx,%eax
0853486d +0x201:  shl    $0x2,%eax
08534870 +0x204:  mov    %eax,%edx
08534872 +0x206:  add    -0x20(%ebp),%edx
08534875 +0x209:  lea    -0x3c(%ebp),%eax
08534878 +0x20c:  mov    %edx,0x4(%esp)
0853487c +0x210:  mov    %eax,(%esp)
0853487f +0x213:  call   0853af0c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1198>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1198
08534884 +0x218:  sub    $0x4,%esp
08534887 +0x21b:  lea    -0x3c(%ebp),%eax
0853488a +0x21e:  mov    %eax,0x4(%esp)
0853488e +0x222:  lea    -0x48(%ebp),%eax
08534891 +0x225:  mov    %eax,(%esp)
08534894 +0x228:  call   08394642 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x240e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x240e2
08534899 +0x22d:  test   %al,%al
0853489b +0x22f:  jne    08534714 <+0xa8>
085348a1 +0x235:  addl   $0x1,-0x10(%ebp)
085348a5 +0x239:  mov    -0x14(%ebp),%eax
085348a8 +0x23c:  add    %eax,%eax
085348aa +0x23e:  add    0xc(%ebp),%eax
085348ad +0x241:  movzbl 0x1(%eax),%eax
085348b1 +0x245:  movzbl %al,%eax
085348b4 +0x248:  cmp    -0x10(%ebp),%eax
085348b7 +0x24b:  setg   %al
085348ba +0x24e:  test   %al,%al
085348bc +0x250:  jne    085346cf <+0x63>
085348c2 +0x256:  jmp    085348c5 <+0x259>
085348c4 +0x258:  nop
085348c5 +0x259:  addl   $0x1,-0x14(%ebp)
085348c9 +0x25d:  cmpl   $0xc8,-0x14(%ebp)
085348d0 +0x264:  setle  %al
085348d3 +0x267:  test   %al,%al
085348d5 +0x269:  jne    085346b0 <+0x44>
085348db +0x26f:  addl   $0x1,-0x18(%ebp)
085348df +0x273:  cmpl   $0x5,-0x18(%ebp)
085348e3 +0x277:  setle  %al
085348e6 +0x27a:  test   %al,%al
085348e8 +0x27c:  jne    085346a4 <+0x38>
085348ee +0x282:  addl   $0x1,-0x1c(%ebp)
085348f2 +0x286:  cmpl   $0x4,-0x1c(%ebp)
085348f6 +0x28a:  setle  %al
085348f9 +0x28d:  test   %al,%al
085348fb +0x28f:  jne    08534698 <+0x2c>
08534901 +0x295:  mov    -0x4(%ebp),%ebx
08534904 +0x298:  leave
08534905 +0x299:  ret
```

## 反编译 C

```c
// WongWork::CItemGenRateTable::generateTable @ 0x853466c

/* WongWork::CItemGenRateTable::generateTable(WongWork::stGenItemRange_t*, bool) */

void __thiscall
WongWork::CItemGenRateTable::generateTable
          (CItemGenRateTable *this,stGenItemRange_t *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_4c [8];
  uint local_44;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_40 [8];
  pair local_38 [8];
  pair<unsigned_int_const,int> local_30 [8];
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  iVar3 = G_CDataManager();
  local_24 = CItemList::getItemGradeList(*(CItemList **)(iVar3 + 0xc));
  for (local_20 = 1; local_20 < 5; local_20 = local_20 + 1) {
    for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
      for (local_18 = 1; local_18 < 0xc9; local_18 = local_18 + 1) {
        local_44 = 0;
        for (local_14 = -(uint)(byte)param_1[local_18 * 2];
            (local_14 < (int)(uint)(byte)param_1[local_18 * 2 + 1] && (local_18 + local_14 < 0xc9));
            local_14 = local_14 + 1) {
          __gnu_cxx::
          hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::begin
                    (local_4c);
          while( true ) {
            __gnu_cxx::
            hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::end
                      (local_40);
            cVar2 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                    ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                                  *)local_4c,(_Hashtable_const_iterator *)local_40);
            if (cVar2 == '\0') break;
            iVar3 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                    ::operator->((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                                  *)local_4c);
            local_10 = *(CItem **)(iVar3 + 4);
            iVar3 = CItem::get_gen_rate(local_10);
            if ((((iVar3 != 0) && (iVar3 = CItem::get_rarity(local_10), iVar3 == local_1c)) &&
                (cVar2 = _itemTypeVerify(this,local_20,local_10), cVar2 == '\x01')) &&
               (cVar2 = CItem::isSpecialMonsterDropItem(local_10), cVar2 == '\0')) {
              if ((param_2) ||
                 (cVar2 = (**(code **)(*(int *)local_10 + 0x4c))(local_10), cVar2 == '\0')) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) {
                iVar3 = CItem::get_gen_rate(local_10);
                local_44 = iVar3 + local_44;
                local_28 = CItem::get_index(local_10);
                std::pair<unsigned_int_const,int>::pair<unsigned_int&,int>
                          (local_30,&local_44,&local_28);
                std::
                map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                ::insert(local_38);
              }
            }
            __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator++((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)local_4c);
          }
        }
      }
    }
  }
  return;
}
```
