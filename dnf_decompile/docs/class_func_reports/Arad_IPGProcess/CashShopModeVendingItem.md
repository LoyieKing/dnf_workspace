# CashShopModeVendingItem

`_ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic`

`Arad_IPGProcess::CashShopModeVendingItem(CUser*, unsigned long, unsigned short, int, long, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, int&, int, char)`

| 类 | 地址 |
|---|---|
| `Arad_IPGProcess` | `0x0819c862` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819c862  _ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic
#           Arad_IPGProcess::CashShopModeVendingItem(CUser*, unsigned long, unsigned short, int, long, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, int&, int, char)
# range [0x0819c862, 0x0819cb07]
0819c862 +0x000:  push   %ebp
0819c863 +0x001:  mov    %esp,%ebp
0819c865 +0x003:  push   %ebx
0819c866 +0x004:  sub    $0xc4,%esp
0819c86c +0x00a:  mov    0x14(%ebp),%edx
0819c86f +0x00d:  mov    0x30(%ebp),%eax
0819c872 +0x010:  mov    %dx,-0x6c(%ebp)
0819c876 +0x014:  mov    %al,-0x70(%ebp)
0819c879 +0x017:  mov    0x10(%ebp),%ebx
0819c87c +0x01a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819c881 +0x01f:  mov    %ebx,0x4(%esp)
0819c885 +0x023:  mov    %eax,(%esp)
0819c888 +0x026:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0819c88d +0x02b:  mov    %eax,-0x14(%ebp)
0819c890 +0x02e:  cmpl   $0x0,-0x14(%ebp)
0819c894 +0x032:  je     0819cafe <+0x29c>
0819c89a +0x038:  lea    -0x5a(%ebp),%eax
0819c89d +0x03b:  mov    %eax,(%esp)
0819c8a0 +0x03e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0819c8a5 +0x043:  mov    -0x14(%ebp),%eax
0819c8a8 +0x046:  mov    (%eax),%eax
0819c8aa +0x048:  add    $0x8,%eax
0819c8ad +0x04b:  mov    (%eax),%edx
0819c8af +0x04d:  lea    -0x5a(%ebp),%eax
0819c8b2 +0x050:  mov    %eax,0x4(%esp)
0819c8b6 +0x054:  mov    -0x14(%ebp),%eax
0819c8b9 +0x057:  mov    %eax,(%esp)
0819c8bc +0x05a:  call   *%edx
0819c8be +0x05c:  mov    0x10(%ebp),%eax
0819c8c1 +0x05f:  mov    %eax,-0x58(%ebp)
0819c8c4 +0x062:  movzwl -0x6c(%ebp),%eax
0819c8c8 +0x066:  mov    %eax,-0x53(%ebp)
0819c8cb +0x069:  movl   $0x0,-0x18(%ebp)
0819c8d2 +0x070:  movl   $0x0,-0x1c(%ebp)
0819c8d9 +0x077:  movb   $0x0,-0x1d(%ebp)
0819c8dd +0x07b:  mov    -0x58(%ebp),%eax
0819c8e0 +0x07e:  mov    %eax,%edx
0819c8e2 +0x080:  mov    0x8(%ebp),%eax
0819c8e5 +0x083:  mov    (%eax),%eax
0819c8e7 +0x085:  lea    -0x1d(%ebp),%ecx
0819c8ea +0x088:  mov    %ecx,0x10(%esp)
0819c8ee +0x08c:  lea    -0x1c(%ebp),%ecx
0819c8f1 +0x08f:  mov    %ecx,0xc(%esp)
0819c8f5 +0x093:  lea    -0x18(%ebp),%ecx
0819c8f8 +0x096:  mov    %ecx,0x8(%esp)
0819c8fc +0x09a:  mov    %edx,0x4(%esp)
0819c900 +0x09e:  mov    %eax,(%esp)
0819c903 +0x0a1:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
0819c908 +0x0a6:  xor    $0x1,%eax
0819c90b +0x0a9:  test   %al,%al
0819c90d +0x0ab:  je     0819ca66 <+0x204>
0819c913 +0x0b1:  mov    0xc(%ebp),%eax
0819c916 +0x0b4:  mov    %eax,(%esp)
0819c919 +0x0b7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0819c91e +0x0bc:  movl   $0x0,0x4c(%esp)
0819c926 +0x0c4:  movl   $0x1,0x48(%esp)
0819c92e +0x0cc:  movl   $0x1e,0x44(%esp)
0819c936 +0x0d4:  mov    -0x5a(%ebp),%edx
0819c939 +0x0d7:  mov    %edx,0x4(%esp)
0819c93d +0x0db:  mov    -0x56(%ebp),%edx
0819c940 +0x0de:  mov    %edx,0x8(%esp)
0819c944 +0x0e2:  mov    -0x52(%ebp),%edx
0819c947 +0x0e5:  mov    %edx,0xc(%esp)
0819c94b +0x0e9:  mov    -0x4e(%ebp),%edx
0819c94e +0x0ec:  mov    %edx,0x10(%esp)
0819c952 +0x0f0:  mov    -0x4a(%ebp),%edx
0819c955 +0x0f3:  mov    %edx,0x14(%esp)
0819c959 +0x0f7:  mov    -0x46(%ebp),%edx
0819c95c +0x0fa:  mov    %edx,0x18(%esp)
0819c960 +0x0fe:  mov    -0x42(%ebp),%edx
0819c963 +0x101:  mov    %edx,0x1c(%esp)
0819c967 +0x105:  mov    -0x3e(%ebp),%edx
0819c96a +0x108:  mov    %edx,0x20(%esp)
0819c96e +0x10c:  mov    -0x3a(%ebp),%edx
0819c971 +0x10f:  mov    %edx,0x24(%esp)
0819c975 +0x113:  mov    -0x36(%ebp),%edx
0819c978 +0x116:  mov    %edx,0x28(%esp)
0819c97c +0x11a:  mov    -0x32(%ebp),%edx
0819c97f +0x11d:  mov    %edx,0x2c(%esp)
0819c983 +0x121:  mov    -0x2e(%ebp),%edx
0819c986 +0x124:  mov    %edx,0x30(%esp)
0819c98a +0x128:  mov    -0x2a(%ebp),%edx
0819c98d +0x12b:  mov    %edx,0x34(%esp)
0819c991 +0x12f:  mov    -0x26(%ebp),%edx
0819c994 +0x132:  mov    %edx,0x38(%esp)
0819c998 +0x136:  mov    -0x22(%ebp),%edx
0819c99b +0x139:  mov    %edx,0x3c(%esp)
0819c99f +0x13d:  movzbl -0x1e(%ebp),%edx
0819c9a3 +0x141:  mov    %dl,0x40(%esp)
0819c9a7 +0x145:  mov    %eax,(%esp)
0819c9aa +0x148:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0819c9af +0x14d:  mov    %eax,-0x10(%ebp)
0819c9b2 +0x150:  cmpl   $0xffffffff,-0x10(%ebp)
0819c9b6 +0x154:  je     0819c9ea <+0x188>
0819c9b8 +0x156:  mov    -0x10(%ebp),%eax
0819c9bb +0x159:  mov    %eax,0xc(%esp)
0819c9bf +0x15d:  movl   $0x0,0x8(%esp)
0819c9c7 +0x165:  movl   $0x1,0x4(%esp)
0819c9cf +0x16d:  mov    0xc(%ebp),%eax
0819c9d2 +0x170:  mov    %eax,(%esp)
0819c9d5 +0x173:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0819c9da +0x178:  mov    0xc(%ebp),%eax
0819c9dd +0x17b:  mov    %eax,(%esp)
0819c9e0 +0x17e:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
0819c9e5 +0x183:  jmp    0819caff <+0x29d>
0819c9ea +0x188:  movl   $0x0,0xc(%esp)
0819c9f2 +0x190:  movl   $"game_server_msg_104",0x8(%esp)
0819c9fa +0x198:  movl   $0x4,0x4(%esp)
0819ca02 +0x1a0:  movl   $&g_scriptStringManager_,(%esp)
0819ca09 +0x1a7:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0819ca0e +0x1ac:  mov    %eax,-0xc(%ebp)
0819ca11 +0x1af:  mov    -0xc(%ebp),%eax
0819ca14 +0x1b2:  mov    %eax,(%esp)
0819ca17 +0x1b5:  call   0807e3b0 <_init+0xca8>
0819ca1c +0x1ba:  mov    %eax,%ebx
0819ca1e +0x1bc:  mov    0xc(%ebp),%eax
0819ca21 +0x1bf:  mov    %eax,(%esp)
0819ca24 +0x1c2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0819ca29 +0x1c7:  mov    %ebx,0x18(%esp)
0819ca2d +0x1cb:  mov    -0xc(%ebp),%edx
0819ca30 +0x1ce:  mov    %edx,0x14(%esp)
0819ca34 +0x1d2:  movl   $0x1,0x10(%esp)
0819ca3c +0x1da:  mov    %eax,0xc(%esp)
0819ca40 +0x1de:  movl   $0x0,0x8(%esp)
0819ca48 +0x1e6:  lea    -0x5a(%ebp),%eax
0819ca4b +0x1e9:  mov    %eax,0x4(%esp)
0819ca4f +0x1ed:  mov    0xc(%ebp),%eax
0819ca52 +0x1f0:  mov    %eax,(%esp)
0819ca55 +0x1f3:  call   08556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
0819ca5a +0x1f8:  movl   $0x0,-0x10(%ebp)
0819ca61 +0x1ff:  jmp    0819caff <+0x29d>
0819ca66 +0x204:  mov    0x10(%ebp),%edx
0819ca69 +0x207:  mov    0x8(%ebp),%eax
0819ca6c +0x20a:  mov    (%eax),%eax
0819ca6e +0x20c:  movl   $0x1,0x30(%esp)
0819ca76 +0x214:  movl   $0x0,0x2c(%esp)
0819ca7e +0x21c:  movl   $0x0,0x28(%esp)
0819ca86 +0x224:  movl   $0x0,0x24(%esp)
0819ca8e +0x22c:  mov    0x24(%ebp),%ecx
0819ca91 +0x22f:  mov    %ecx,0x20(%esp)
0819ca95 +0x233:  mov    0x20(%ebp),%ecx
0819ca98 +0x236:  mov    %ecx,0x1c(%esp)
0819ca9c +0x23a:  movl   $0x1,0x18(%esp)
0819caa4 +0x242:  mov    0x1c(%ebp),%ecx
0819caa7 +0x245:  mov    %ecx,0x14(%esp)
0819caab +0x249:  mov    0x28(%ebp),%ecx
0819caae +0x24c:  mov    %ecx,0x10(%esp)
0819cab2 +0x250:  mov    0x18(%ebp),%ecx
0819cab5 +0x253:  mov    %ecx,0xc(%esp)
0819cab9 +0x257:  mov    %edx,0x8(%esp)
0819cabd +0x25b:  mov    0xc(%ebp),%edx
0819cac0 +0x25e:  mov    %edx,0x4(%esp)
0819cac4 +0x262:  mov    %eax,(%esp)
0819cac7 +0x265:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
0819cacc +0x26a:  test   %al,%al
0819cace +0x26c:  je     0819caff <+0x29d>
0819cad0 +0x26e:  movl   $"ProcessSpecialItem failed",0x10(%esp)
0819cad8 +0x276:  movl   $0x1a2,0xc(%esp)
0819cae0 +0x27e:  movl   $&_ZZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiicE19__PRETTY_FUNCTION__,0x8(%esp)
0819cae8 +0x286:  movl   $"localjapan/Arad_IPGProcess.cpp",0x4(%esp)
0819caf0 +0x28e:  movl   $0x1,(%esp)
0819caf7 +0x295:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819cafc +0x29a:  jmp    0819caff <+0x29d>
0819cafe +0x29c:  nop
0819caff +0x29d:  add    $0xc4,%esp
0819cb05 +0x2a3:  pop    %ebx
0819cb06 +0x2a4:  pop    %ebp
0819cb07 +0x2a5:  ret
```

## 反编译 C

```c
// Arad_IPGProcess::CashShopModeVendingItem @ 0x819c862

/* Arad_IPGProcess::CashShopModeVendingItem(CUser*, unsigned long, unsigned short, int, long,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, int&, int, char) */

void Arad_IPGProcess::CashShopModeVendingItem
               (CUser *param_1,ulong param_2,ushort param_3,int param_4,long param_5,vector *param_6
               ,stCeraShopItemParam_t *param_7,int *param_8,int param_9,char param_10)

{
  char cVar1;
  CDataManager *this;
  undefined4 uVar2;
  size_t sVar3;
  uint uVar4;
  undefined2 in_stack_0000000e;
  undefined2 local_5e;
  ushort uStack_5c;
  undefined2 uStack_5a;
  undefined1 uStack_58;
  uint uStack_57;
  undefined1 uStack_53;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined1 local_22;
  bool local_21;
  int local_20 [2];
  int *local_18;
  int local_14;
  char *local_10;
  
  this = (CDataManager *)G_CDataManager();
  local_18 = (int *)CDataManager::find_item(this,_param_3);
  if (local_18 != (int *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_5e);
    (**(code **)(*local_18 + 8))(local_18,&local_5e);
    uStack_5c = param_3;
    uStack_5a = in_stack_0000000e;
    uStack_57 = param_4 & 0xffff;
    local_20[1] = 0;
    local_20[0] = 0;
    local_21 = false;
    cVar1 = WongWork::CCeraShop::IsSpecialItem
                      (*(CCeraShop **)param_1,CONCAT22(in_stack_0000000e,param_3),local_20 + 1,
                       local_20,&local_21);
    if (cVar1 == '\x01') {
      cVar1 = WongWork::CCeraShop::ProcessSpecialItem
                        (*(CCeraShop **)param_1,(CUser *)param_2,_param_3,param_5,(int *)param_9,
                         (long)param_6,true,(vector *)param_7,(stCeraShopItemParam_t *)param_8,'\0',
                         '\0',false,1);
      if (cVar1 != '\0') {
        LogManager::logFormat
                  (1,"localjapan/Arad_IPGProcess.cpp",
                   "void Arad_IPGProcess::CashShopModeVendingItem(CUser*, itemIndexOnlyServer_t, short unsigned int, int, long int, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, int&, int, char)"
                   ,0x1a2,"ProcessSpecialItem failed");
      }
    }
    else {
      uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_14 = CInventory::insertItemIntoInventory
                           (uVar2,CONCAT22(uStack_5c,local_5e),
                            CONCAT13((undefined1)uStack_57,CONCAT12(uStack_58,uStack_5a)),
                            CONCAT13(uStack_53,uStack_57._1_3_),local_52,local_4e,local_4a,local_46,
                            local_42,local_3e,local_3a,local_36,local_32,local_2e,local_2a,local_26,
                            local_22,0x1e,1,0);
      if (local_14 == -1) {
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_104",(bool *)0x0);
        sVar3 = strlen(local_10);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop
                  ((CUser *)param_2,(Inven_Item *)&local_5e,0,uVar4,true,local_10,sVar3);
      }
      else {
        CUser::SendUpdateItemList((CUser *)param_2,1,0,local_14);
        CUser::SaveInventory((CUser *)param_2);
      }
    }
  }
  return;
}
```
