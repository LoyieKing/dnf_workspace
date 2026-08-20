# IsExistRecipeItem

`_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb`

`expert_job::IsExistRecipeItem(CUser*, CItem*, bool)`

| 类 | 地址 |
|---|---|
| `expert_job` | `0x0849b820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849b820  _ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb
#           expert_job::IsExistRecipeItem(CUser*, CItem*, bool)
# range [0x0849b820, 0x0849b956]
0849b820 +0x000:  push   %ebp
0849b821 +0x001:  mov    %esp,%ebp
0849b823 +0x003:  push   %esi
0849b824 +0x004:  push   %ebx
0849b825 +0x005:  sub    $0x30,%esp
0849b828 +0x008:  mov    0x10(%ebp),%eax
0849b82b +0x00b:  mov    %al,-0x1c(%ebp)
0849b82e +0x00e:  lea    -0x18(%ebp),%eax
0849b831 +0x011:  mov    %eax,(%esp)
0849b834 +0x014:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0849b839 +0x019:  cmpb   $0x0,-0x1c(%ebp)
0849b83d +0x01d:  je     0849b8b2 <+0x92>
0849b83f +0x01f:  lea    -0x18(%ebp),%eax
0849b842 +0x022:  mov    %eax,(%esp)
0849b845 +0x025:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0849b84a +0x02a:  lea    -0x18(%ebp),%eax
0849b84d +0x02d:  mov    %eax,0x4(%esp)
0849b851 +0x031:  mov    0xc(%ebp),%eax
0849b854 +0x034:  mov    %eax,(%esp)
0849b857 +0x037:  call   0849b734 <_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE>  ; expert_job::GetRecipeInputItems(CItem*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0849b85c +0x03c:  lea    -0x18(%ebp),%eax
0849b85f +0x03f:  mov    %eax,0x4(%esp)
0849b863 +0x043:  mov    0x8(%ebp),%eax
0849b866 +0x046:  mov    %eax,(%esp)
0849b869 +0x049:  call   0868ba58 <_ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::CalculateExpertJobMaterials(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0849b86e +0x04e:  lea    -0x18(%ebp),%eax
0849b871 +0x051:  mov    %eax,(%esp)
0849b874 +0x054:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0849b879 +0x059:  test   %al,%al
0849b87b +0x05b:  je     0849b887 <+0x67>
0849b87d +0x05d:  mov    $0x0,%ebx
0849b882 +0x062:  jmp    0849b943 <+0x123>
0849b887 +0x067:  mov    0x8(%ebp),%eax
0849b88a +0x06a:  mov    %eax,(%esp)
0849b88d +0x06d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849b892 +0x072:  lea    -0x18(%ebp),%edx
0849b895 +0x075:  mov    %edx,0x4(%esp)
0849b899 +0x079:  mov    %eax,(%esp)
0849b89c +0x07c:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
0849b8a1 +0x081:  xor    $0x1,%eax
0849b8a4 +0x084:  test   %al,%al
0849b8a6 +0x086:  je     0849b921 <+0x101>
0849b8a8 +0x088:  mov    $0x0,%ebx
0849b8ad +0x08d:  jmp    0849b943 <+0x123>
0849b8b2 +0x092:  lea    -0x18(%ebp),%eax
0849b8b5 +0x095:  mov    %eax,(%esp)
0849b8b8 +0x098:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0849b8bd +0x09d:  mov    0xc(%ebp),%eax
0849b8c0 +0x0a0:  mov    %eax,-0xc(%ebp)
0849b8c3 +0x0a3:  cmpl   $0x0,-0xc(%ebp)
0849b8c7 +0x0a7:  jne    0849b8d0 <+0xb0>
0849b8c9 +0x0a9:  mov    $0x0,%ebx
0849b8ce +0x0ae:  jmp    0849b943 <+0x123>
0849b8d0 +0x0b0:  mov    -0xc(%ebp),%eax
0849b8d3 +0x0b3:  add    $0x174,%eax
0849b8d8 +0x0b8:  mov    %eax,0x4(%esp)
0849b8dc +0x0bc:  lea    -0x18(%ebp),%eax
0849b8df +0x0bf:  mov    %eax,(%esp)
0849b8e2 +0x0c2:  call   0830f08c <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0xc71>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0xc71
0849b8e7 +0x0c7:  lea    -0x18(%ebp),%eax
0849b8ea +0x0ca:  mov    %eax,0x4(%esp)
0849b8ee +0x0ce:  mov    0x8(%ebp),%eax
0849b8f1 +0x0d1:  mov    %eax,(%esp)
0849b8f4 +0x0d4:  call   0868ba58 <_ZN5CUser27CalculateExpertJobMaterialsERSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::CalculateExpertJobMaterials(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0849b8f9 +0x0d9:  mov    0x8(%ebp),%eax
0849b8fc +0x0dc:  mov    %eax,(%esp)
0849b8ff +0x0df:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849b904 +0x0e4:  lea    -0x18(%ebp),%edx
0849b907 +0x0e7:  mov    %edx,0x4(%esp)
0849b90b +0x0eb:  mov    %eax,(%esp)
0849b90e +0x0ee:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
0849b913 +0x0f3:  xor    $0x1,%eax
0849b916 +0x0f6:  test   %al,%al
0849b918 +0x0f8:  je     0849b921 <+0x101>
0849b91a +0x0fa:  mov    $0x0,%ebx
0849b91f +0x0ff:  jmp    0849b943 <+0x123>
0849b921 +0x101:  mov    $0x1,%ebx
0849b926 +0x106:  jmp    0849b943 <+0x123>
0849b928 +0x108:  mov    %edx,%ebx
0849b92a +0x10a:  mov    %eax,%esi
0849b92c +0x10c:  lea    -0x18(%ebp),%eax
0849b92f +0x10f:  mov    %eax,(%esp)
0849b932 +0x112:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0849b937 +0x117:  mov    %esi,%eax
0849b939 +0x119:  mov    %ebx,%edx
0849b93b +0x11b:  mov    %eax,(%esp)
0849b93e +0x11e:  call   08ae3750 <_Unwind_Resume>
0849b943 +0x123:  lea    -0x18(%ebp),%eax
0849b946 +0x126:  mov    %eax,(%esp)
0849b949 +0x129:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0849b94e +0x12e:  mov    %ebx,%eax
0849b950 +0x130:  add    $0x30,%esp
0849b953 +0x133:  pop    %ebx
0849b954 +0x134:  pop    %esi
0849b955 +0x135:  pop    %ebp
0849b956 +0x136:  ret
```

## 反编译 C

```c
// expert_job::IsExistRecipeItem @ 0x849b820

/* expert_job::IsExistRecipeItem(CUser*, CItem*, bool) */

undefined4 expert_job::IsExistRecipeItem(CUser *param_1,CItem *param_2,bool param_3)

{
  char cVar1;
  CInventory *pCVar2;
  undefined4 uVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_1c [12];
  CItem *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_1c);
  if (param_3) {
                    /* try { // try from 0849b845 to 0849b912 has its CatchHandler @ 0849b928 */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_1c);
    GetRecipeInputItems(param_2,(vector *)local_1c);
    CUser::CalculateExpertJobMaterials(param_1,(vector *)local_1c);
    cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar1 != '\0') {
      uVar3 = 0;
      goto LAB_0849b943;
    }
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    cVar1 = CInventory::CheckNeedItemList(pCVar2,(vector *)local_1c);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0849b943;
    }
  }
  else {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear(local_1c);
    local_10 = param_2;
    if (param_2 == (CItem *)0x0) {
      uVar3 = 0;
      goto LAB_0849b943;
    }
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
              (local_1c,(vector *)(param_2 + 0x174));
    CUser::CalculateExpertJobMaterials(param_1,(vector *)local_1c);
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    cVar1 = CInventory::CheckNeedItemList(pCVar2,(vector *)local_1c);
    if (cVar1 != '\x01') {
      uVar3 = 0;
      goto LAB_0849b943;
    }
  }
  uVar3 = 1;
LAB_0849b943:
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_1c);
  return uVar3;
}
```
