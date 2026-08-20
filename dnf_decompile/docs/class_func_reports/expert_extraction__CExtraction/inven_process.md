# inven_process

`_ZN17expert_extraction11CExtraction13inven_processEP5CUsersRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEE`

`expert_extraction::CExtraction::inven_process(CUser*, short, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtraction` | `0x084a2cec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a2cec  _ZN17expert_extraction11CExtraction13inven_processEP5CUsersRSt6vectorISt4pairIiiESaIS5_EERS3_IiSaIiEE
#           expert_extraction::CExtraction::inven_process(CUser*, short, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&)
# range [0x084a2cec, 0x084a302d]
084a2cec +0x000:  push   %ebp
084a2ced +0x001:  mov    %esp,%ebp
084a2cef +0x003:  push   %esi
084a2cf0 +0x004:  push   %ebx
084a2cf1 +0x005:  sub    $0xc9b0,%esp
084a2cf7 +0x00b:  mov    0x10(%ebp),%eax
084a2cfa +0x00e:  mov    %ax,-0xc95c(%ebp)
084a2d01 +0x015:  mov    0xc(%ebp),%eax
084a2d04 +0x018:  mov    %eax,(%esp)
084a2d07 +0x01b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084a2d0c +0x020:  mov    %eax,-0x14(%ebp)
084a2d0f +0x023:  lea    -0x818(%ebp),%eax
084a2d15 +0x029:  mov    %eax,(%esp)
084a2d18 +0x02c:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
084a2d1d +0x031:  lea    -0xc957(%ebp),%eax
084a2d23 +0x037:  mov    %eax,(%esp)
084a2d26 +0x03a:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
084a2d2b +0x03f:  lea    -0xc957(%ebp),%eax
084a2d31 +0x045:  mov    %eax,0x4(%esp)
084a2d35 +0x049:  lea    -0x818(%ebp),%eax
084a2d3b +0x04f:  mov    %eax,(%esp)
084a2d3e +0x052:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
084a2d43 +0x057:  mov    0xc(%ebp),%eax
084a2d46 +0x05a:  mov    %eax,(%esp)
084a2d49 +0x05d:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
084a2d4e +0x062:  mov    %eax,0x4(%esp)
084a2d52 +0x066:  lea    -0x818(%ebp),%eax
084a2d58 +0x06c:  mov    %eax,(%esp)
084a2d5b +0x06f:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
084a2d60 +0x074:  movswl -0xc95c(%ebp),%eax
084a2d67 +0x07b:  movl   $0x0,0x14(%esp)
084a2d6f +0x083:  movl   $0x2d,0x10(%esp)
084a2d77 +0x08b:  movl   $0x1,0xc(%esp)
084a2d7f +0x093:  mov    %eax,0x8(%esp)
084a2d83 +0x097:  movl   $0x1,0x4(%esp)
084a2d8b +0x09f:  lea    -0x818(%ebp),%eax
084a2d91 +0x0a5:  mov    %eax,(%esp)
084a2d94 +0x0a8:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
084a2d99 +0x0ad:  mov    %al,-0xd(%ebp)
084a2d9c +0x0b0:  movzbl -0xd(%ebp),%eax
084a2da0 +0x0b4:  xor    $0x1,%eax
084a2da3 +0x0b7:  test   %al,%al
084a2da5 +0x0b9:  je     084a2db1 <+0xc5>
084a2da7 +0x0bb:  mov    $0x0,%ebx
084a2dac +0x0c0:  jmp    084a3014 <+0x328>
084a2db1 +0x0c5:  movl   $0x0,0x4(%esp)
084a2db9 +0x0cd:  mov    0x14(%ebp),%eax
084a2dbc +0x0d0:  mov    %eax,(%esp)
084a2dbf +0x0d3:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
084a2dc4 +0x0d8:  mov    (%eax),%eax
084a2dc6 +0x0da:  mov    %eax,-0x18(%ebp)
084a2dc9 +0x0dd:  movl   $0x0,0x4(%esp)
084a2dd1 +0x0e5:  mov    0x14(%ebp),%eax
084a2dd4 +0x0e8:  mov    %eax,(%esp)
084a2dd7 +0x0eb:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
084a2ddc +0x0f0:  mov    0x4(%eax),%eax
084a2ddf +0x0f3:  mov    %eax,-0x1c(%ebp)
084a2de2 +0x0f6:  mov    -0x18(%ebp),%ebx
084a2de5 +0x0f9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a2dea +0x0fe:  mov    %ebx,0x4(%esp)
084a2dee +0x102:  mov    %eax,(%esp)
084a2df1 +0x105:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084a2df6 +0x10a:  mov    %eax,-0xc(%ebp)
084a2df9 +0x10d:  lea    -0x5d(%ebp),%eax
084a2dfc +0x110:  mov    %eax,(%esp)
084a2dff +0x113:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084a2e04 +0x118:  mov    -0xc(%ebp),%eax
084a2e07 +0x11b:  mov    (%eax),%eax
084a2e09 +0x11d:  add    $0x8,%eax
084a2e0c +0x120:  mov    (%eax),%edx
084a2e0e +0x122:  lea    -0x5d(%ebp),%eax
084a2e11 +0x125:  mov    %eax,0x4(%esp)
084a2e15 +0x129:  mov    -0xc(%ebp),%eax
084a2e18 +0x12c:  mov    %eax,(%esp)
084a2e1b +0x12f:  call   *%edx
084a2e1d +0x131:  mov    -0x1c(%ebp),%eax
084a2e20 +0x134:  mov    %eax,0x4(%esp)
084a2e24 +0x138:  lea    -0x5d(%ebp),%eax
084a2e27 +0x13b:  mov    %eax,(%esp)
084a2e2a +0x13e:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
084a2e2f +0x143:  mov    -0x18(%ebp),%eax
084a2e32 +0x146:  mov    %eax,-0x5b(%ebp)
084a2e35 +0x149:  movl   $0x1,0x4c(%esp)
084a2e3d +0x151:  movl   $0x0,0x48(%esp)
084a2e45 +0x159:  movl   $0x35,0x44(%esp)
084a2e4d +0x161:  mov    -0x5d(%ebp),%eax
084a2e50 +0x164:  mov    %eax,0x4(%esp)
084a2e54 +0x168:  mov    -0x59(%ebp),%eax
084a2e57 +0x16b:  mov    %eax,0x8(%esp)
084a2e5b +0x16f:  mov    -0x55(%ebp),%eax
084a2e5e +0x172:  mov    %eax,0xc(%esp)
084a2e62 +0x176:  mov    -0x51(%ebp),%eax
084a2e65 +0x179:  mov    %eax,0x10(%esp)
084a2e69 +0x17d:  mov    -0x4d(%ebp),%eax
084a2e6c +0x180:  mov    %eax,0x14(%esp)
084a2e70 +0x184:  mov    -0x49(%ebp),%eax
084a2e73 +0x187:  mov    %eax,0x18(%esp)
084a2e77 +0x18b:  mov    -0x45(%ebp),%eax
084a2e7a +0x18e:  mov    %eax,0x1c(%esp)
084a2e7e +0x192:  mov    -0x41(%ebp),%eax
084a2e81 +0x195:  mov    %eax,0x20(%esp)
084a2e85 +0x199:  mov    -0x3d(%ebp),%eax
084a2e88 +0x19c:  mov    %eax,0x24(%esp)
084a2e8c +0x1a0:  mov    -0x39(%ebp),%eax
084a2e8f +0x1a3:  mov    %eax,0x28(%esp)
084a2e93 +0x1a7:  mov    -0x35(%ebp),%eax
084a2e96 +0x1aa:  mov    %eax,0x2c(%esp)
084a2e9a +0x1ae:  mov    -0x31(%ebp),%eax
084a2e9d +0x1b1:  mov    %eax,0x30(%esp)
084a2ea1 +0x1b5:  mov    -0x2d(%ebp),%eax
084a2ea4 +0x1b8:  mov    %eax,0x34(%esp)
084a2ea8 +0x1bc:  mov    -0x29(%ebp),%eax
084a2eab +0x1bf:  mov    %eax,0x38(%esp)
084a2eaf +0x1c3:  mov    -0x25(%ebp),%eax
084a2eb2 +0x1c6:  mov    %eax,0x3c(%esp)
084a2eb6 +0x1ca:  movzbl -0x21(%ebp),%eax
084a2eba +0x1ce:  mov    %al,0x40(%esp)
084a2ebe +0x1d2:  lea    -0x818(%ebp),%eax
084a2ec4 +0x1d8:  mov    %eax,(%esp)
084a2ec7 +0x1db:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
084a2ecc +0x1e0:  mov    %eax,-0x20(%ebp)
084a2ecf +0x1e3:  mov    -0x20(%ebp),%eax
084a2ed2 +0x1e6:  cmp    $0xffffffff,%eax
084a2ed5 +0x1e9:  jne    084a2ee1 <+0x1f5>
084a2ed7 +0x1eb:  mov    $0x0,%ebx
084a2edc +0x1f0:  jmp    084a3014 <+0x328>
084a2ee1 +0x1f5:  movswl -0xc95c(%ebp),%eax
084a2ee8 +0x1fc:  movl   $0x1,0x14(%esp)
084a2ef0 +0x204:  movl   $0x2d,0x10(%esp)
084a2ef8 +0x20c:  movl   $0x1,0xc(%esp)
084a2f00 +0x214:  mov    %eax,0x8(%esp)
084a2f04 +0x218:  movl   $0x1,0x4(%esp)
084a2f0c +0x220:  mov    -0x14(%ebp),%eax
084a2f0f +0x223:  mov    %eax,(%esp)
084a2f12 +0x226:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
084a2f17 +0x22b:  movl   $0x1,0x4c(%esp)
084a2f1f +0x233:  movl   $0x1,0x48(%esp)
084a2f27 +0x23b:  movl   $0x35,0x44(%esp)
084a2f2f +0x243:  mov    -0x5d(%ebp),%eax
084a2f32 +0x246:  mov    %eax,0x4(%esp)
084a2f36 +0x24a:  mov    -0x59(%ebp),%eax
084a2f39 +0x24d:  mov    %eax,0x8(%esp)
084a2f3d +0x251:  mov    -0x55(%ebp),%eax
084a2f40 +0x254:  mov    %eax,0xc(%esp)
084a2f44 +0x258:  mov    -0x51(%ebp),%eax
084a2f47 +0x25b:  mov    %eax,0x10(%esp)
084a2f4b +0x25f:  mov    -0x4d(%ebp),%eax
084a2f4e +0x262:  mov    %eax,0x14(%esp)
084a2f52 +0x266:  mov    -0x49(%ebp),%eax
084a2f55 +0x269:  mov    %eax,0x18(%esp)
084a2f59 +0x26d:  mov    -0x45(%ebp),%eax
084a2f5c +0x270:  mov    %eax,0x1c(%esp)
084a2f60 +0x274:  mov    -0x41(%ebp),%eax
084a2f63 +0x277:  mov    %eax,0x20(%esp)
084a2f67 +0x27b:  mov    -0x3d(%ebp),%eax
084a2f6a +0x27e:  mov    %eax,0x24(%esp)
084a2f6e +0x282:  mov    -0x39(%ebp),%eax
084a2f71 +0x285:  mov    %eax,0x28(%esp)
084a2f75 +0x289:  mov    -0x35(%ebp),%eax
084a2f78 +0x28c:  mov    %eax,0x2c(%esp)
084a2f7c +0x290:  mov    -0x31(%ebp),%eax
084a2f7f +0x293:  mov    %eax,0x30(%esp)
084a2f83 +0x297:  mov    -0x2d(%ebp),%eax
084a2f86 +0x29a:  mov    %eax,0x34(%esp)
084a2f8a +0x29e:  mov    -0x29(%ebp),%eax
084a2f8d +0x2a1:  mov    %eax,0x38(%esp)
084a2f91 +0x2a5:  mov    -0x25(%ebp),%eax
084a2f94 +0x2a8:  mov    %eax,0x3c(%esp)
084a2f98 +0x2ac:  movzbl -0x21(%ebp),%eax
084a2f9c +0x2b0:  mov    %al,0x40(%esp)
084a2fa0 +0x2b4:  mov    -0x14(%ebp),%eax
084a2fa3 +0x2b7:  mov    %eax,(%esp)
084a2fa6 +0x2ba:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
084a2fab +0x2bf:  mov    %eax,-0x20(%ebp)
084a2fae +0x2c2:  mov    0x18(%ebp),%eax
084a2fb1 +0x2c5:  mov    %eax,(%esp)
084a2fb4 +0x2c8:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
084a2fb9 +0x2cd:  lea    -0x20(%ebp),%eax
084a2fbc +0x2d0:  mov    %eax,0x4(%esp)
084a2fc0 +0x2d4:  mov    0x18(%ebp),%eax
084a2fc3 +0x2d7:  mov    %eax,(%esp)
084a2fc6 +0x2da:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
084a2fcb +0x2df:  lea    -0x18(%ebp),%eax
084a2fce +0x2e2:  mov    %eax,0x4(%esp)
084a2fd2 +0x2e6:  mov    0x18(%ebp),%eax
084a2fd5 +0x2e9:  mov    %eax,(%esp)
084a2fd8 +0x2ec:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
084a2fdd +0x2f1:  lea    -0x1c(%ebp),%eax
084a2fe0 +0x2f4:  mov    %eax,0x4(%esp)
084a2fe4 +0x2f8:  mov    0x18(%ebp),%eax
084a2fe7 +0x2fb:  mov    %eax,(%esp)
084a2fea +0x2fe:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
084a2fef +0x303:  mov    $0x1,%ebx
084a2ff4 +0x308:  jmp    084a3014 <+0x328>
084a2ff6 +0x30a:  mov    %edx,%ebx
084a2ff8 +0x30c:  mov    %eax,%esi
084a2ffa +0x30e:  lea    -0x818(%ebp),%eax
084a3000 +0x314:  mov    %eax,(%esp)
084a3003 +0x317:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
084a3008 +0x31c:  mov    %esi,%eax
084a300a +0x31e:  mov    %ebx,%edx
084a300c +0x320:  mov    %eax,(%esp)
084a300f +0x323:  call   08ae3750 <_Unwind_Resume>
084a3014 +0x328:  lea    -0x818(%ebp),%eax
084a301a +0x32e:  mov    %eax,(%esp)
084a301d +0x331:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
084a3022 +0x336:  mov    %ebx,%eax
084a3024 +0x338:  add    $0xc9b0,%esp
084a302a +0x33e:  pop    %ebx
084a302b +0x33f:  pop    %esi
084a302c +0x340:  pop    %ebp
084a302d +0x341:  ret
```

## 反编译 C

```c
// expert_extraction::CExtraction::inven_process @ 0x84a2cec

/* expert_extraction::CExtraction::inven_process(CUser*, short, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&) */

undefined4 __thiscall
expert_extraction::CExtraction::inven_process
          (CExtraction *this,CUser *param_1,short param_2,vector *param_3,vector *param_4)

{
  int iVar1;
  CInventory *pCVar2;
  int *piVar3;
  int iVar4;
  CDataManager *this_00;
  undefined4 uVar5;
  InventoryMemory local_c95b [49471];
  CInventory local_81c [1979];
  undefined2 local_61;
  undefined2 uStack_5f;
  undefined2 uStack_5d;
  undefined2 uStack_5b;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined1 local_25;
  int local_24;
  int local_20;
  int local_1c;
  CInventory *local_18;
  char local_11;
  int *local_10;
  
  local_18 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::CInventory(local_81c);
  InventoryMemory::InventoryMemory(local_c95b);
  CInventory::SetInventoryMemory(local_81c,local_c95b);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 084a2d5b to 084a2fee has its CatchHandler @ 084a2ff6 */
  CInventory::setCopy(local_81c,pCVar2);
  local_11 = CInventory::delete_item(local_81c,1,(int)param_2,1,0x2d,0);
  if (local_11 == '\x01') {
    piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               param_3,0);
    local_1c = *piVar3;
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,0);
    iVar1 = local_1c;
    local_20 = *(int *)(iVar4 + 4);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,iVar1);
    Inven_Item::Inven_Item((Inven_Item *)&local_61);
    (**(code **)(*local_10 + 8))(local_10,&local_61);
    Inven_Item::set_add_info((Inven_Item *)&local_61,local_20);
    uStack_5f = (undefined2)local_1c;
    uStack_5d = (undefined2)((uint)local_1c >> 0x10);
    local_24 = CInventory::insertItemIntoInventory
                         (local_81c,CONCAT22(uStack_5f,local_61),CONCAT22(uStack_5b,uStack_5d),
                          local_59,local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,
                          local_39,local_35,local_31,local_2d,local_29,local_25,0x35,0,1);
    if (local_24 == -1) {
      uVar5 = 0;
      local_24 = -1;
    }
    else {
      CInventory::delete_item(local_18,1,(int)param_2,1,0x2d,1);
      local_24 = CInventory::insertItemIntoInventory
                           (local_18,CONCAT22(uStack_5f,local_61),CONCAT22(uStack_5b,uStack_5d),
                            local_59,local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,
                            local_39,local_35,local_31,local_2d,local_29,local_25,0x35,1,1);
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_4);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_4,&local_24);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_4,&local_1c);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_4,&local_20);
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
  }
  CInventory::~CInventory(local_81c);
  return uVar5;
}
```
