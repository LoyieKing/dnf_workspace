# generatePremiumGoldCardItem

`_ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj`

`WongWork::CClearReward::generatePremiumGoldCardItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&, ENUM_RARITY, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x08538a92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08538a92  _ZN8WongWork12CClearReward27generatePremiumGoldCardItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE11ENUM_RARITYj
#           WongWork::CClearReward::generatePremiumGoldCardItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&, ENUM_RARITY, unsigned int)
# range [0x08538a92, 0x08538bf7]
08538a92 +0x000:  push   %ebp
08538a93 +0x001:  mov    %esp,%ebp
08538a95 +0x003:  push   %ebx
08538a96 +0x004:  sub    $0x74,%esp
08538a99 +0x007:  movl   $0x2,-0x20(%ebp)
08538aa0 +0x00e:  movl   $0x0,-0x1c(%ebp)
08538aa7 +0x015:  mov    0x14(%ebp),%eax
08538aaa +0x018:  test   %eax,%eax
08538aac +0x01a:  jns    08538b0e <+0x7c>
08538aae +0x01c:  mov    0x8(%ebp),%eax
08538ab1 +0x01f:  add    $0x8,%eax
08538ab4 +0x022:  movl   $0x2710,0x8(%esp)
08538abc +0x02a:  movl   $0x3,0x4(%esp)
08538ac4 +0x032:  mov    %eax,(%esp)
08538ac7 +0x035:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08538acc +0x03a:  mov    %eax,-0x10(%ebp)
08538acf +0x03d:  movl   $0x0,-0xc(%ebp)
08538ad6 +0x044:  jmp    08538b01 <+0x6f>
08538ad8 +0x046:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538add +0x04b:  mov    -0xc(%ebp),%edx
08538ae0 +0x04e:  add    $0x1264,%edx
08538ae6 +0x054:  mov    0x14(%eax,%edx,4),%eax
08538aea +0x058:  cmp    -0x10(%ebp),%eax
08538aed +0x05b:  setge  %al
08538af0 +0x05e:  test   %al,%al
08538af2 +0x060:  je     08538afd <+0x6b>
08538af4 +0x062:  mov    -0xc(%ebp),%eax
08538af7 +0x065:  mov    %eax,-0x1c(%ebp)
08538afa +0x068:  nop
08538afb +0x069:  jmp    08538b14 <+0x82>
08538afd +0x06b:  addl   $0x1,-0xc(%ebp)
08538b01 +0x06f:  cmpl   $0x5,-0xc(%ebp)
08538b05 +0x073:  setle  %al
08538b08 +0x076:  test   %al,%al
08538b0a +0x078:  jne    08538ad8 <+0x46>
08538b0c +0x07a:  jmp    08538b14 <+0x82>
08538b0e +0x07c:  mov    0x14(%ebp),%eax
08538b11 +0x07f:  mov    %eax,-0x1c(%ebp)
08538b14 +0x082:  mov    0x8(%ebp),%eax
08538b17 +0x085:  mov    %eax,(%esp)
08538b1a +0x088:  call   0853a41a <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x6a6>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x6a6
08538b1f +0x08d:  mov    %eax,%ebx
08538b21 +0x08f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538b26 +0x094:  mov    %eax,(%esp)
08538b29 +0x097:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
08538b2e +0x09c:  mov    -0x1c(%ebp),%edx
08538b31 +0x09f:  mov    %edx,0xc(%esp)
08538b35 +0x0a3:  mov    -0x20(%ebp),%edx
08538b38 +0x0a6:  mov    %edx,0x8(%esp)
08538b3c +0x0aa:  mov    %ebx,0x4(%esp)
08538b40 +0x0ae:  mov    %eax,(%esp)
08538b43 +0x0b1:  call   085342c6 <_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY>  ; WongWork::CItemGeneratorMgr::onTryGenerateRandomItem(WongWork::CItemGeneratorMgr::eGenerateType_t, WongWork::eItemDropType_t, ENUM_RARITY)
08538b48 +0x0b6:  mov    0xc(%ebp),%eax
08538b4b +0x0b9:  movzbl 0x34(%eax),%eax
08538b4f +0x0bd:  movzbl %al,%eax
08538b52 +0x0c0:  mov    0x8(%ebp),%edx
08538b55 +0x0c3:  add    $0x2a8,%edx
08538b5b +0x0c9:  mov    %eax,0xc(%esp)
08538b5f +0x0cd:  mov    -0x1c(%ebp),%eax
08538b62 +0x0d0:  mov    %eax,0x8(%esp)
08538b66 +0x0d4:  mov    -0x20(%ebp),%eax
08538b69 +0x0d7:  mov    %eax,0x4(%esp)
08538b6d +0x0db:  mov    %edx,(%esp)
08538b70 +0x0de:  call   085349a4 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi>  ; WongWork::CItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int)
08538b75 +0x0e3:  mov    %eax,-0x18(%ebp)
08538b78 +0x0e6:  cmpl   $0xffffffff,-0x18(%ebp)
08538b7c +0x0ea:  jne    08538b84 <+0xf2>
08538b7e +0x0ec:  mov    0x18(%ebp),%eax
08538b81 +0x0ef:  mov    %eax,-0x18(%ebp)
08538b84 +0x0f2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538b89 +0x0f7:  mov    0xc(%eax),%eax
08538b8c +0x0fa:  mov    -0x18(%ebp),%edx
08538b8f +0x0fd:  mov    %edx,0x4(%esp)
08538b93 +0x101:  mov    %eax,(%esp)
08538b96 +0x104:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08538b9b +0x109:  mov    %eax,-0x14(%ebp)
08538b9e +0x10c:  cmpl   $0x0,-0x14(%ebp)
08538ba2 +0x110:  je     08538bf0 <+0x15e>
08538ba4 +0x112:  lea    -0x5d(%ebp),%eax
08538ba7 +0x115:  mov    %eax,(%esp)
08538baa +0x118:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08538baf +0x11d:  mov    -0x18(%ebp),%eax
08538bb2 +0x120:  mov    %eax,-0x5b(%ebp)
08538bb5 +0x123:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538bba +0x128:  mov    0xc(%eax),%eax
08538bbd +0x12b:  movl   $0x1,0xc(%esp)
08538bc5 +0x133:  lea    -0x5d(%ebp),%edx
08538bc8 +0x136:  mov    %edx,0x8(%esp)
08538bcc +0x13a:  movl   $0x1,0x4(%esp)
08538bd4 +0x142:  mov    %eax,(%esp)
08538bd7 +0x145:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08538bdc +0x14a:  mov    0x10(%ebp),%eax
08538bdf +0x14d:  lea    -0x5d(%ebp),%edx
08538be2 +0x150:  mov    %edx,0x4(%esp)
08538be6 +0x154:  mov    %eax,(%esp)
08538be9 +0x157:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08538bee +0x15c:  jmp    08538bf1 <+0x15f>
08538bf0 +0x15e:  nop
08538bf1 +0x15f:  add    $0x74,%esp
08538bf4 +0x162:  pop    %ebx
08538bf5 +0x163:  pop    %ebp
08538bf6 +0x164:  ret
08538bf7 +0x165:  nop
```

## 反编译 C

```c
// WongWork::CClearReward::generatePremiumGoldCardItem @ 0x8538a92

/* WongWork::CClearReward::generatePremiumGoldCardItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&, ENUM_RARITY, unsigned int) */

void __thiscall
WongWork::CClearReward::generatePremiumGoldCardItem
          (CClearReward *this,int param_1,vector<Inven_Item,std::allocator<Inven_Item>> *param_2,
          int param_4,int param_5)

{
  undefined4 uVar1;
  CDataManager *this_00;
  CItemGeneratorMgr *pCVar2;
  int iVar3;
  Inven_Item local_61 [2];
  int local_5f;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = 2;
  local_20 = 0;
  if (param_4 < 0) {
    local_14 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),3,10000);
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      iVar3 = G_CDataManager();
      if (local_14 <= *(int *)(iVar3 + 0x14 + (local_10 + 0x1264) * 4)) {
        local_20 = local_10;
        break;
      }
    }
  }
  else {
    local_20 = param_4;
  }
  uVar1 = CItemGenerator::getGeneratorType((CItemGenerator *)this);
  this_00 = (CDataManager *)G_CDataManager();
  pCVar2 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(this_00);
  CItemGeneratorMgr::onTryGenerateRandomItem(pCVar2,uVar1,local_24,local_20);
  local_1c = CItemGenRateTable::chooseItem
                       ((CItemGenRateTable *)(this + 0x2a8),local_24,local_20,
                        *(undefined1 *)(param_1 + 0x34));
  if (local_1c == -1) {
    local_1c = param_5;
  }
  iVar3 = G_CDataManager();
  local_18 = CItemList::find_item(*(CItemList **)(iVar3 + 0xc),local_1c);
  if (local_18 != 0) {
    Inven_Item::Inven_Item(local_61);
    local_5f = local_1c;
    iVar3 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar3 + 0xc),1,local_61,1);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(param_2,local_61);
  }
  return;
}
```
