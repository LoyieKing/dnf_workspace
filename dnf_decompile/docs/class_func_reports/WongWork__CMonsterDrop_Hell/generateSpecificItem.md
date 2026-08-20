# generateSpecificItem

`_ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CMonsterDrop_Hell::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop_Hell` | `0x08535726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08535726  _ZN8WongWork17CMonsterDrop_Hell20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CMonsterDrop_Hell::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x08535726, 0x08535947]
08535726 +0x000:  push   %ebp
08535727 +0x001:  mov    %esp,%ebp
08535729 +0x003:  push   %esi
0853572a +0x004:  push   %ebx
0853572b +0x005:  sub    $0x90,%esp
08535731 +0x00b:  mov    0xc(%ebp),%eax
08535734 +0x00e:  add    $0x34,%eax
08535737 +0x011:  mov    %eax,-0x2c(%ebp)
0853573a +0x014:  mov    -0x2c(%ebp),%eax
0853573d +0x017:  movzbl 0x1(%eax),%eax
08535741 +0x01b:  movzbl %al,%eax
08535744 +0x01e:  mov    %eax,0x4(%esp)
08535748 +0x022:  mov    0x8(%ebp),%eax
0853574b +0x025:  mov    %eax,(%esp)
0853574e +0x028:  call   08535a88 <_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi>  ; WongWork::CMonsterDrop_Hell::_getGenItemProbIdx(int)
08535753 +0x02d:  mov    %eax,-0x28(%ebp)
08535756 +0x030:  cmpl   $0x0,-0x28(%ebp)
0853575a +0x034:  js     08535934 <+0x20e>
08535760 +0x03a:  mov    -0x28(%ebp),%eax
08535763 +0x03d:  mov    0x8(%ebp),%edx
08535766 +0x040:  add    $0x24,%edx
08535769 +0x043:  mov    %eax,0x4(%esp)
0853576d +0x047:  mov    %edx,(%esp)
08535770 +0x04a:  call   0853b0a0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x132c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x132c
08535775 +0x04f:  mov    %eax,-0x24(%ebp)
08535778 +0x052:  mov    -0x2c(%ebp),%eax
0853577b +0x055:  movzbl 0x2(%eax),%eax
0853577f +0x059:  movzbl %al,%edx
08535782 +0x05c:  mov    -0x24(%ebp),%eax
08535785 +0x05f:  mov    0x8(%eax,%edx,4),%edx
08535789 +0x063:  mov    0xc(%ebp),%eax
0853578c +0x066:  mov    (%eax),%eax
0853578e +0x068:  mov    %edx,%ecx
08535790 +0x06a:  imul   %eax,%ecx
08535793 +0x06d:  mov    $0x51eb851f,%edx
08535798 +0x072:  mov    %ecx,%eax
0853579a +0x074:  imul   %edx
0853579c +0x076:  sar    $0x5,%edx
0853579f +0x079:  mov    %ecx,%eax
085357a1 +0x07b:  sar    $0x1f,%eax
085357a4 +0x07e:  mov    %edx,%ecx
085357a6 +0x080:  sub    %eax,%ecx
085357a8 +0x082:  mov    %ecx,%eax
085357aa +0x084:  mov    %eax,-0x20(%ebp)
085357ad +0x087:  mov    0x8(%ebp),%eax
085357b0 +0x08a:  add    $0x8,%eax
085357b3 +0x08d:  movl   $0x3e8,0x8(%esp)
085357bb +0x095:  movl   $0x0,0x4(%esp)
085357c3 +0x09d:  mov    %eax,(%esp)
085357c6 +0x0a0:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
085357cb +0x0a5:  cmp    -0x20(%ebp),%eax
085357ce +0x0a8:  setg   %al
085357d1 +0x0ab:  test   %al,%al
085357d3 +0x0ad:  jne    08535937 <+0x211>
085357d9 +0x0b3:  mov    0x8(%ebp),%eax
085357dc +0x0b6:  add    $0x8,%eax
085357df +0x0b9:  movl   $0xf4240,0x8(%esp)
085357e7 +0x0c1:  movl   $0x1,0x4(%esp)
085357ef +0x0c9:  mov    %eax,(%esp)
085357f2 +0x0cc:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
085357f7 +0x0d1:  mov    %eax,-0x1c(%ebp)
085357fa +0x0d4:  mov    0xc(%ebp),%eax
085357fd +0x0d7:  movzbl 0x42(%eax),%eax
08535801 +0x0db:  movsbl %al,%eax
08535804 +0x0de:  mov    %eax,-0x18(%ebp)
08535807 +0x0e1:  mov    -0x18(%ebp),%edx
0853580a +0x0e4:  mov    %edx,%eax
0853580c +0x0e6:  add    %eax,%eax
0853580e +0x0e8:  add    %edx,%eax
08535810 +0x0ea:  shl    $0x3,%eax
08535813 +0x0ed:  add    $0x30,%eax
08535816 +0x0f0:  add    0x8(%ebp),%eax
08535819 +0x0f3:  mov    0x10(%ebp),%edx
0853581c +0x0f6:  lea    0xc(%edx),%ecx
0853581f +0x0f9:  movl   $0x2,0xc(%esp)
08535827 +0x101:  mov    -0x1c(%ebp),%edx
0853582a +0x104:  mov    %edx,0x8(%esp)
0853582e +0x108:  mov    %eax,0x4(%esp)
08535832 +0x10c:  mov    %ecx,(%esp)
08535835 +0x10f:  call   08550be4 <_ZN10CLuckPoint13GetItemRarityEPiii>  ; CLuckPoint::GetItemRarity(int*, int, int)
0853583a +0x114:  mov    %eax,-0x14(%ebp)
0853583d +0x117:  mov    -0x2c(%ebp),%eax
08535840 +0x11a:  movzbl 0x1(%eax),%eax
08535844 +0x11e:  movzbl %al,%eax
08535847 +0x121:  mov    0x8(%ebp),%edx
0853584a +0x124:  add    $0x254,%edx
08535850 +0x12a:  mov    %eax,0xc(%esp)
08535854 +0x12e:  mov    -0x14(%ebp),%eax
08535857 +0x131:  mov    %eax,0x8(%esp)
0853585b +0x135:  movl   $0x2,0x4(%esp)
08535863 +0x13d:  mov    %edx,(%esp)
08535866 +0x140:  call   085349a4 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi>  ; WongWork::CItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int)
0853586b +0x145:  mov    %eax,-0x10(%ebp)
0853586e +0x148:  cmpl   $0xffffffff,-0x10(%ebp)
08535872 +0x14c:  je     0853593a <+0x214>
08535878 +0x152:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0853587d +0x157:  mov    0xc(%eax),%eax
08535880 +0x15a:  mov    -0x10(%ebp),%edx
08535883 +0x15d:  mov    %edx,0x4(%esp)
08535887 +0x161:  mov    %eax,(%esp)
0853588a +0x164:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
0853588f +0x169:  mov    %eax,-0xc(%ebp)
08535892 +0x16c:  cmpl   $0x0,-0xc(%ebp)
08535896 +0x170:  je     0853593d <+0x217>
0853589c +0x176:  lea    -0x69(%ebp),%eax
0853589f +0x179:  mov    %eax,(%esp)
085358a2 +0x17c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085358a7 +0x181:  mov    -0x10(%ebp),%eax
085358aa +0x184:  mov    %eax,-0x67(%ebp)
085358ad +0x187:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085358b2 +0x18c:  mov    0xc(%eax),%eax
085358b5 +0x18f:  movl   $0x1,0xc(%esp)
085358bd +0x197:  lea    -0x69(%ebp),%edx
085358c0 +0x19a:  mov    %edx,0x8(%esp)
085358c4 +0x19e:  movl   $0x1,0x4(%esp)
085358cc +0x1a6:  mov    %eax,(%esp)
085358cf +0x1a9:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
085358d4 +0x1ae:  mov    0x10(%ebp),%eax
085358d7 +0x1b1:  mov    %eax,(%esp)
085358da +0x1b4:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
085358df +0x1b9:  mov    %eax,%esi
085358e1 +0x1bb:  mov    -0xc(%ebp),%eax
085358e4 +0x1be:  mov    %eax,(%esp)
085358e7 +0x1c1:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
085358ec +0x1c6:  mov    %eax,%ebx
085358ee +0x1c8:  mov    -0xc(%ebp),%eax
085358f1 +0x1cb:  mov    %eax,(%esp)
085358f4 +0x1ce:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085358f9 +0x1d3:  mov    %eax,%edx
085358fb +0x1d5:  movzbl -0x68(%ebp),%eax
085358ff +0x1d9:  movzbl %al,%eax
08535902 +0x1dc:  mov    0x10(%ebp),%ecx
08535905 +0x1df:  add    $0xc,%ecx
08535908 +0x1e2:  mov    %esi,0x10(%esp)
0853590c +0x1e6:  mov    %ebx,0xc(%esp)
08535910 +0x1ea:  mov    %edx,0x8(%esp)
08535914 +0x1ee:  mov    %eax,0x4(%esp)
08535918 +0x1f2:  mov    %ecx,(%esp)
0853591b +0x1f5:  call   08550b14 <_ZN10CLuckPoint12UseLuckPointEiiii>  ; CLuckPoint::UseLuckPoint(int, int, int, int)
08535920 +0x1fa:  mov    0x10(%ebp),%eax
08535923 +0x1fd:  lea    -0x69(%ebp),%edx
08535926 +0x200:  mov    %edx,0x4(%esp)
0853592a +0x204:  mov    %eax,(%esp)
0853592d +0x207:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08535932 +0x20c:  jmp    0853593e <+0x218>
08535934 +0x20e:  nop
08535935 +0x20f:  jmp    0853593e <+0x218>
08535937 +0x211:  nop
08535938 +0x212:  jmp    0853593e <+0x218>
0853593a +0x214:  nop
0853593b +0x215:  jmp    0853593e <+0x218>
0853593d +0x217:  nop
0853593e +0x218:  add    $0x90,%esp
08535944 +0x21e:  pop    %ebx
08535945 +0x21f:  pop    %esi
08535946 +0x220:  pop    %ebp
08535947 +0x221:  ret
```

## 反编译 C

```c
// WongWork::CMonsterDrop_Hell::generateSpecificItem @ 0x8535726

/* WongWork::CMonsterDrop_Hell::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CMonsterDrop_Hell::generateSpecificItem
          (CMonsterDrop_Hell *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  int iVar1;
  int iVar2;
  Inven_Item local_6d;
  byte local_6c;
  int local_6b;
  stGenerateRefData_t *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  CItem *local_10;
  
  local_30 = param_1 + 0x34;
  local_2c = _getGenItemProbIdx(this,(uint)(byte)param_1[0x35]);
  if (-1 < (int)local_2c) {
    local_28 = std::
               vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
               ::operator[]((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                             *)(this + 0x24),local_2c);
    local_24 = (*(int *)(local_28 + 8 + (uint)(byte)local_30[2] * 4) * *(int *)param_1) / 100;
    iVar1 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,1000);
    if (iVar1 <= local_24) {
      local_20 = CGenerateRandomNumber::generateNumber
                           ((CGenerateRandomNumber *)(this + 8),1,1000000);
      local_1c = (int)(char)param_1[0x42];
      local_18 = CLuckPoint::GetItemRarity
                           ((CLuckPoint *)(param_2 + 0xc),(int *)(this + local_1c * 0x18 + 0x30),
                            local_20,2);
      local_14 = CItemGenRateTable::chooseItem
                           ((CItemGenRateTable *)(this + 0x254),2,local_18,local_30[1]);
      if (local_14 != -1) {
        iVar1 = G_CDataManager();
        local_10 = (CItem *)CItemList::find_item(*(CItemList **)(iVar1 + 0xc),local_14);
        if (local_10 != (CItem *)0x0) {
          Inven_Item::Inven_Item(&local_6d);
          local_6b = local_14;
          iVar1 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar1 + 0xc),1,&local_6d,1);
          std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2);
          iVar1 = CItem::get_grade(local_10);
          iVar2 = CItem::get_rarity(local_10);
          CLuckPoint::UseLuckPoint((int)(param_2 + 0xc),(uint)local_6c,iVar2,iVar1);
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,&local_6d);
        }
      }
    }
  }
  return;
}
```
