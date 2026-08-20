# _generateRandomItem

`_ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf`

`WongWork::CClearReward::_generateRandomItem(WongWork::stGenerateRefClearReward_t const&, int, WongWork::stGenerateResult_t&, float)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x085387c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085387c0  _ZN8WongWork12CClearReward19_generateRandomItemERKNS_26stGenerateRefClearReward_tEiRNS_18stGenerateResult_tEf
#           WongWork::CClearReward::_generateRandomItem(WongWork::stGenerateRefClearReward_t const&, int, WongWork::stGenerateResult_t&, float)
# range [0x085387c0, 0x08538a91]
085387c0 +0x000:  push   %ebp
085387c1 +0x001:  mov    %esp,%ebp
085387c3 +0x003:  push   %ebx
085387c4 +0x004:  sub    $0xa4,%esp
085387ca +0x00a:  mov    0xc(%ebp),%eax
085387cd +0x00d:  mov    0x8(%eax),%edx
085387d0 +0x010:  mov    0xc(%ebp),%eax
085387d3 +0x013:  movzbl (%eax),%eax
085387d6 +0x016:  movzbl %al,%eax
085387d9 +0x019:  mov    %edx,0x8(%esp)
085387dd +0x01d:  mov    %eax,0x4(%esp)
085387e1 +0x021:  mov    0x8(%ebp),%eax
085387e4 +0x024:  mov    %eax,(%esp)
085387e7 +0x027:  call   08538694 <_ZN8WongWork12CClearReward18_getGenItemProbIdxEiNS_22eClearRewardDropProb_tE>  ; WongWork::CClearReward::_getGenItemProbIdx(int, WongWork::eClearRewardDropProb_t)
085387ec +0x02c:  mov    %eax,-0x30(%ebp)
085387ef +0x02f:  cmpl   $0x0,-0x30(%ebp)
085387f3 +0x033:  js     08538a7e <+0x2be>
085387f9 +0x039:  mov    -0x30(%ebp),%ecx
085387fc +0x03c:  mov    0x8(%ebp),%eax
085387ff +0x03f:  lea    0x60(%eax),%ebx
08538802 +0x042:  mov    0xc(%ebp),%eax
08538805 +0x045:  mov    0x8(%eax),%eax
08538808 +0x048:  mov    %eax,%edx
0853880a +0x04a:  mov    %edx,%eax
0853880c +0x04c:  add    %eax,%eax
0853880e +0x04e:  add    %edx,%eax
08538810 +0x050:  shl    $0x2,%eax
08538813 +0x053:  lea    (%ebx,%eax,1),%eax
08538816 +0x056:  mov    %ecx,0x4(%esp)
0853881a +0x05a:  mov    %eax,(%esp)
0853881d +0x05d:  call   0853bd58 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1fe4>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1fe4
08538822 +0x062:  mov    (%eax),%edx
08538824 +0x064:  mov    %edx,-0x3c(%ebp)
08538827 +0x067:  mov    0x4(%eax),%edx
0853882a +0x06a:  mov    %edx,-0x38(%ebp)
0853882d +0x06d:  mov    0x8(%eax),%eax
08538830 +0x070:  mov    %eax,-0x34(%ebp)
08538833 +0x073:  mov    -0x34(%ebp),%eax
08538836 +0x076:  mov    %eax,-0x8c(%ebp)
0853883c +0x07c:  fildl  -0x8c(%ebp)
08538842 +0x082:  mov    0xc(%ebp),%eax
08538845 +0x085:  flds   0x4(%eax)
08538848 +0x088:  fmulp  %st,%st(1)
0853884a +0x08a:  fnstcw -0x8e(%ebp)
08538850 +0x090:  movzwl -0x8e(%ebp),%eax
08538857 +0x097:  mov    $0xc,%ah
08538859 +0x099:  mov    %ax,-0x90(%ebp)
08538860 +0x0a0:  fldcw  -0x90(%ebp)
08538866 +0x0a6:  fistpl -0x8c(%ebp)
0853886c +0x0ac:  fldcw  -0x8e(%ebp)
08538872 +0x0b2:  mov    -0x8c(%ebp),%edx
08538878 +0x0b8:  mov    0xc(%ebp),%eax
0853887b +0x0bb:  movzbl 0x1(%eax),%eax
0853887f +0x0bf:  movzbl %al,%ecx
08538882 +0x0c2:  mov    0x8(%ebp),%eax
08538885 +0x0c5:  add    $0x30,%ecx
08538888 +0x0c8:  mov    0x4(%eax,%ecx,4),%eax
0853888c +0x0cc:  lea    (%edx,%eax,1),%eax
0853888f +0x0cf:  mov    %eax,-0x2c(%ebp)
08538892 +0x0d2:  mov    0x10(%ebp),%ecx
08538895 +0x0d5:  mov    $0x51eb851f,%edx
0853889a +0x0da:  mov    %ecx,%eax
0853889c +0x0dc:  imul   %edx
0853889e +0x0de:  sar    $0x5,%edx
085388a1 +0x0e1:  mov    %ecx,%eax
085388a3 +0x0e3:  sar    $0x1f,%eax
085388a6 +0x0e6:  sub    %eax,%edx
085388a8 +0x0e8:  mov    -0x2c(%ebp),%eax
085388ab +0x0eb:  imul   %edx,%eax
085388ae +0x0ee:  mov    %eax,-0x2c(%ebp)
085388b1 +0x0f1:  fildl  -0x2c(%ebp)
085388b4 +0x0f4:  fld1
085388b6 +0x0f6:  fsubs  0x18(%ebp)
085388b9 +0x0f9:  fmulp  %st,%st(1)
085388bb +0x0fb:  fldcw  -0x90(%ebp)
085388c1 +0x101:  fistpl -0x2c(%ebp)
085388c4 +0x104:  fldcw  -0x8e(%ebp)
085388ca +0x10a:  mov    0x8(%ebp),%eax
085388cd +0x10d:  add    $0x8,%eax
085388d0 +0x110:  movl   $0x2710,0x8(%esp)
085388d8 +0x118:  movl   $0x0,0x4(%esp)
085388e0 +0x120:  mov    %eax,(%esp)
085388e3 +0x123:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
085388e8 +0x128:  cmp    -0x2c(%ebp),%eax
085388eb +0x12b:  setge  %al
085388ee +0x12e:  test   %al,%al
085388f0 +0x130:  jne    08538a81 <+0x2c1>
085388f6 +0x136:  movl   $0x0,-0x28(%ebp)
085388fd +0x13d:  movl   $0x1,-0x24(%ebp)
08538904 +0x144:  mov    0x8(%ebp),%eax
08538907 +0x147:  add    $0x8,%eax
0853890a +0x14a:  movl   $0x2710,0x8(%esp)
08538912 +0x152:  movl   $0x2,0x4(%esp)
0853891a +0x15a:  mov    %eax,(%esp)
0853891d +0x15d:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08538922 +0x162:  mov    %eax,-0x20(%ebp)
08538925 +0x165:  movl   $0x1,-0xc(%ebp)
0853892c +0x16c:  jmp    08538951 <+0x191>
0853892e +0x16e:  mov    -0xc(%ebp),%edx
08538931 +0x171:  mov    0x8(%ebp),%eax
08538934 +0x174:  add    $0x2c,%edx
08538937 +0x177:  mov    (%eax,%edx,4),%eax
0853893a +0x17a:  add    %eax,-0x28(%ebp)
0853893d +0x17d:  mov    -0x20(%ebp),%eax
08538940 +0x180:  cmp    -0x28(%ebp),%eax
08538943 +0x183:  jge    0853894d <+0x18d>
08538945 +0x185:  mov    -0xc(%ebp),%eax
08538948 +0x188:  mov    %eax,-0x24(%ebp)
0853894b +0x18b:  jmp    0853895c <+0x19c>
0853894d +0x18d:  addl   $0x1,-0xc(%ebp)
08538951 +0x191:  cmpl   $0x4,-0xc(%ebp)
08538955 +0x195:  setle  %al
08538958 +0x198:  test   %al,%al
0853895a +0x19a:  jne    0853892e <+0x16e>
0853895c +0x19c:  mov    0x8(%ebp),%eax
0853895f +0x19f:  add    $0x8,%eax
08538962 +0x1a2:  movl   $0xf4240,0x8(%esp)
0853896a +0x1aa:  movl   $0x3,0x4(%esp)
08538972 +0x1b2:  mov    %eax,(%esp)
08538975 +0x1b5:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
0853897a +0x1ba:  mov    %eax,-0x1c(%ebp)
0853897d +0x1bd:  mov    -0x24(%ebp),%eax
08538980 +0x1c0:  mov    0x8(%ebp),%edx
08538983 +0x1c3:  lea    0xfc(%edx),%ecx
08538989 +0x1c9:  mov    0x14(%ebp),%edx
0853898c +0x1cc:  add    $0xc,%edx
0853898f +0x1cf:  mov    %eax,0xc(%esp)
08538993 +0x1d3:  mov    -0x1c(%ebp),%eax
08538996 +0x1d6:  mov    %eax,0x8(%esp)
0853899a +0x1da:  mov    %ecx,0x4(%esp)
0853899e +0x1de:  mov    %edx,(%esp)
085389a1 +0x1e1:  call   08550be4 <_ZN10CLuckPoint13GetItemRarityEPiii>  ; CLuckPoint::GetItemRarity(int*, int, int)
085389a6 +0x1e6:  mov    %eax,-0x18(%ebp)
085389a9 +0x1e9:  mov    0x8(%ebp),%eax
085389ac +0x1ec:  mov    %eax,(%esp)
085389af +0x1ef:  call   0853a41a <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x6a6>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x6a6
085389b4 +0x1f4:  mov    %eax,%ebx
085389b6 +0x1f6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085389bb +0x1fb:  mov    %eax,(%esp)
085389be +0x1fe:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
085389c3 +0x203:  mov    -0x18(%ebp),%edx
085389c6 +0x206:  mov    %edx,0xc(%esp)
085389ca +0x20a:  mov    -0x24(%ebp),%edx
085389cd +0x20d:  mov    %edx,0x8(%esp)
085389d1 +0x211:  mov    %ebx,0x4(%esp)
085389d5 +0x215:  mov    %eax,(%esp)
085389d8 +0x218:  call   085342c6 <_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY>  ; WongWork::CItemGeneratorMgr::onTryGenerateRandomItem(WongWork::CItemGeneratorMgr::eGenerateType_t, WongWork::eItemDropType_t, ENUM_RARITY)
085389dd +0x21d:  mov    0xc(%ebp),%eax
085389e0 +0x220:  movzbl (%eax),%eax
085389e3 +0x223:  movzbl %al,%eax
085389e6 +0x226:  mov    0x8(%ebp),%edx
085389e9 +0x229:  add    $0x2a8,%edx
085389ef +0x22f:  mov    %eax,0xc(%esp)
085389f3 +0x233:  mov    -0x18(%ebp),%eax
085389f6 +0x236:  mov    %eax,0x8(%esp)
085389fa +0x23a:  mov    -0x24(%ebp),%eax
085389fd +0x23d:  mov    %eax,0x4(%esp)
08538a01 +0x241:  mov    %edx,(%esp)
08538a04 +0x244:  call   085349a4 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi>  ; WongWork::CItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int)
08538a09 +0x249:  mov    %eax,-0x14(%ebp)
08538a0c +0x24c:  cmpl   $0xffffffff,-0x14(%ebp)
08538a10 +0x250:  je     08538a84 <+0x2c4>
08538a12 +0x252:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538a17 +0x257:  mov    0xc(%eax),%eax
08538a1a +0x25a:  mov    -0x14(%ebp),%edx
08538a1d +0x25d:  mov    %edx,0x4(%esp)
08538a21 +0x261:  mov    %eax,(%esp)
08538a24 +0x264:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08538a29 +0x269:  mov    %eax,-0x10(%ebp)
08538a2c +0x26c:  cmpl   $0x0,-0x10(%ebp)
08538a30 +0x270:  je     08538a87 <+0x2c7>
08538a32 +0x272:  lea    -0x79(%ebp),%eax
08538a35 +0x275:  mov    %eax,(%esp)
08538a38 +0x278:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08538a3d +0x27d:  mov    -0x14(%ebp),%eax
08538a40 +0x280:  mov    %eax,-0x77(%ebp)
08538a43 +0x283:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538a48 +0x288:  mov    0xc(%eax),%eax
08538a4b +0x28b:  movl   $0x1,0xc(%esp)
08538a53 +0x293:  lea    -0x79(%ebp),%edx
08538a56 +0x296:  mov    %edx,0x8(%esp)
08538a5a +0x29a:  movl   $0x1,0x4(%esp)
08538a62 +0x2a2:  mov    %eax,(%esp)
08538a65 +0x2a5:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08538a6a +0x2aa:  mov    0x14(%ebp),%eax
08538a6d +0x2ad:  lea    -0x79(%ebp),%edx
08538a70 +0x2b0:  mov    %edx,0x4(%esp)
08538a74 +0x2b4:  mov    %eax,(%esp)
08538a77 +0x2b7:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08538a7c +0x2bc:  jmp    08538a88 <+0x2c8>
08538a7e +0x2be:  nop
08538a7f +0x2bf:  jmp    08538a88 <+0x2c8>
08538a81 +0x2c1:  nop
08538a82 +0x2c2:  jmp    08538a88 <+0x2c8>
08538a84 +0x2c4:  nop
08538a85 +0x2c5:  jmp    08538a88 <+0x2c8>
08538a87 +0x2c7:  nop
08538a88 +0x2c8:  add    $0xa4,%esp
08538a8e +0x2ce:  pop    %ebx
08538a8f +0x2cf:  pop    %ebp
08538a90 +0x2d0:  ret
08538a91 +0x2d1:  nop
```

## 反编译 C

```c
// WongWork::CClearReward::_generateRandomItem @ 0x85387c0

/* WongWork::CClearReward::_generateRandomItem(WongWork::stGenerateRefClearReward_t const&, int,
   WongWork::stGenerateResult_t&, float) */

void __thiscall
WongWork::CClearReward::_generateRandomItem
          (CClearReward *this,stGenerateRefClearReward_t *param_1,int param_2,
          stGenerateResult_t *param_3,float param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CItemGeneratorMgr *pCVar4;
  Inven_Item local_7d [2];
  int local_7b;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_34 = _getGenItemProbIdx(this,*param_1,*(undefined4 *)(param_1 + 8));
  if (-1 < (int)local_34) {
    puVar1 = (undefined4 *)
             std::
             vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
             ::operator[]((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                           *)(this + *(int *)(param_1 + 8) * 0xc + 0x60),local_34);
    local_40 = *puVar1;
    local_3c = puVar1[1];
    local_38 = puVar1[2];
    local_30 = (int)ROUND((1.0 - param_4) *
                          (float)(((int)ROUND(*(float *)(param_1 + 4) * (float)local_38) +
                                  *(int *)(this + ((byte)param_1[1] + 0x30) * 4 + 4)) *
                                 (param_2 / 100)));
    iVar2 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,10000);
    if (iVar2 < local_30) {
      local_2c = 0;
      local_28 = 1;
      local_24 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),2,10000);
      for (local_10 = 1; local_10 < 5; local_10 = local_10 + 1) {
        local_2c = local_2c + *(int *)(this + (local_10 + 0x2c) * 4);
        if (local_24 < local_2c) {
          local_28 = local_10;
          break;
        }
      }
      local_20 = CGenerateRandomNumber::generateNumber
                           ((CGenerateRandomNumber *)(this + 8),3,1000000);
      local_1c = CLuckPoint::GetItemRarity
                           ((CLuckPoint *)(param_3 + 0xc),(int *)(this + 0xfc),local_20,local_28);
      uVar3 = CItemGenerator::getGeneratorType((CItemGenerator *)this);
      this_00 = (CDataManager *)G_CDataManager();
      pCVar4 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(this_00);
      CItemGeneratorMgr::onTryGenerateRandomItem(pCVar4,uVar3,local_28,local_1c);
      local_18 = CItemGenRateTable::chooseItem
                           ((CItemGenRateTable *)(this + 0x2a8),local_28,local_1c,*param_1);
      if (local_18 != -1) {
        iVar2 = G_CDataManager();
        local_14 = CItemList::find_item(*(CItemList **)(iVar2 + 0xc),local_18);
        if (local_14 != 0) {
          Inven_Item::Inven_Item(local_7d);
          local_7b = local_18;
          iVar2 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,local_7d,1);
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_3,local_7d);
        }
      }
    }
  }
  return;
}
```
