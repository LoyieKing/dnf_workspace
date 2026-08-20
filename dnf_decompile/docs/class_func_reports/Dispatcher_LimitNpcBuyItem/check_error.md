# check_error

`_ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_LimitNpcBuyItem::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LimitNpcBuyItem` | `0x081e1172` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1172  _ZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_LimitNpcBuyItem::check_error(CUser*, MSG_BASE&)
# range [0x081e1172, 0x081e147d]
081e1172 +0x000:  push   %ebp
081e1173 +0x001:  mov    %esp,%ebp
081e1175 +0x003:  push   %esi
081e1176 +0x004:  push   %ebx
081e1177 +0x005:  sub    $0xf0,%esp
081e117d +0x00b:  cmpl   $0x0,0xc(%ebp)
081e1181 +0x00f:  jne    081e118d <+0x1b>
081e1183 +0x011:  mov    $0xffffffff,%eax
081e1188 +0x016:  jmp    081e1473 <+0x301>
081e118d +0x01b:  mov    0xc(%ebp),%eax
081e1190 +0x01e:  mov    %eax,(%esp)
081e1193 +0x021:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e1198 +0x026:  cmp    $0x2,%eax
081e119b +0x029:  jle    081e11ac <+0x3a>
081e119d +0x02b:  mov    0xc(%ebp),%eax
081e11a0 +0x02e:  mov    %eax,(%esp)
081e11a3 +0x031:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081e11a8 +0x036:  test   %eax,%eax
081e11aa +0x038:  jne    081e11b3 <+0x41>
081e11ac +0x03a:  mov    $0x1,%eax
081e11b1 +0x03f:  jmp    081e11b8 <+0x46>
081e11b3 +0x041:  mov    $0x0,%eax
081e11b8 +0x046:  test   %al,%al
081e11ba +0x048:  je     081e11c6 <+0x54>
081e11bc +0x04a:  mov    $0xffffffff,%eax
081e11c1 +0x04f:  jmp    081e1473 <+0x301>
081e11c6 +0x054:  mov    0x10(%ebp),%eax
081e11c9 +0x057:  mov    %eax,-0x10(%ebp)
081e11cc +0x05a:  mov    -0x10(%ebp),%eax
081e11cf +0x05d:  mov    0xd(%eax),%esi
081e11d2 +0x060:  mov    -0x10(%ebp),%eax
081e11d5 +0x063:  mov    0x11(%eax),%ebx
081e11d8 +0x066:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e11dd +0x06b:  mov    %esi,0x8(%esp)
081e11e1 +0x06f:  mov    %ebx,0x4(%esp)
081e11e5 +0x073:  mov    %eax,(%esp)
081e11e8 +0x076:  call   083653f6 <_ZN12CDataManager24checkLimitNpcBuyItemListEjm>  ; CDataManager::checkLimitNpcBuyItemList(unsigned int, unsigned long)
081e11ed +0x07b:  xor    $0x1,%eax
081e11f0 +0x07e:  test   %al,%al
081e11f2 +0x080:  je     081e126e <+0xfc>
081e11f4 +0x082:  movl   $0xffffffff,0x4(%esp)
081e11fc +0x08a:  mov    0xc(%ebp),%eax
081e11ff +0x08d:  mov    %eax,(%esp)
081e1202 +0x090:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e1207 +0x095:  mov    %eax,%esi
081e1209 +0x097:  mov    0xc(%ebp),%eax
081e120c +0x09a:  mov    %eax,(%esp)
081e120f +0x09d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e1214 +0x0a2:  movl   $0x0,0x4(%esp)
081e121c +0x0aa:  mov    %eax,(%esp)
081e121f +0x0ad:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081e1224 +0x0b2:  mov    %eax,%ebx
081e1226 +0x0b4:  movl   $0x5,0xc(%esp)
081e122e +0x0bc:  movl   $0x55e1,0x8(%esp)
081e1236 +0x0c4:  movl   $&_ZZN26Dispatcher_LimitNpcBuyItem11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081e123e +0x0cc:  lea    -0x20(%ebp),%eax
081e1241 +0x0cf:  mov    %eax,(%esp)
081e1244 +0x0d2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e1249 +0x0d7:  mov    %esi,0xc(%esp)
081e124d +0x0db:  mov    %ebx,0x8(%esp)
081e1251 +0x0df:  movl   $"May be HackUser or Must be HackUser : m_id=%s, charac_no=%u",0x4(%esp)
081e1259 +0x0e7:  lea    -0x20(%ebp),%eax
081e125c +0x0ea:  mov    %eax,(%esp)
081e125f +0x0ed:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e1264 +0x0f2:  mov    $0xffffffff,%eax
081e1269 +0x0f7:  jmp    081e1473 <+0x301>
081e126e +0x0fc:  mov    0xc(%ebp),%eax
081e1271 +0x0ff:  mov    %eax,(%esp)
081e1274 +0x102:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
081e1279 +0x107:  test   %al,%al
081e127b +0x109:  je     081e1287 <+0x115>
081e127d +0x10b:  mov    $0x13,%eax
081e1282 +0x110:  jmp    081e1473 <+0x301>
081e1287 +0x115:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
081e128c +0x11a:  mov    0xc(%ebp),%edx
081e128f +0x11d:  mov    %edx,0x4(%esp)
081e1293 +0x121:  mov    %eax,(%esp)
081e1296 +0x124:  call   085cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>  ; private_store::CPrivateStoreMgr::IsBusyPrivateStore(CUser*)
081e129b +0x129:  test   %al,%al
081e129d +0x12b:  je     081e12a9 <+0x137>
081e129f +0x12d:  mov    $0x3c,%eax
081e12a4 +0x132:  jmp    081e1473 <+0x301>
081e12a9 +0x137:  mov    -0x10(%ebp),%eax
081e12ac +0x13a:  mov    0xd(%eax),%eax
081e12af +0x13d:  mov    %eax,%ebx
081e12b1 +0x13f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e12b6 +0x144:  mov    %ebx,0x4(%esp)
081e12ba +0x148:  mov    %eax,(%esp)
081e12bd +0x14b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e12c2 +0x150:  mov    %eax,-0xc(%ebp)
081e12c5 +0x153:  cmpl   $0x0,-0xc(%ebp)
081e12c9 +0x157:  jne    081e12d5 <+0x163>
081e12cb +0x159:  mov    $0x11,%eax
081e12d0 +0x15e:  jmp    081e1473 <+0x301>
081e12d5 +0x163:  lea    -0x65(%ebp),%eax
081e12d8 +0x166:  mov    %eax,(%esp)
081e12db +0x169:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081e12e0 +0x16e:  call   081b5ab2 <_ZN23NeedMaterialDataManager11getInstanceEv>  ; NeedMaterialDataManager::getInstance()
081e12e5 +0x173:  mov    -0xc(%ebp),%edx
081e12e8 +0x176:  mov    %edx,0x4(%esp)
081e12ec +0x17a:  mov    %eax,(%esp)
081e12ef +0x17d:  call   081b5b70 <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem>  ; NeedMaterialDataManager::getNeedMaterial(CItem const*) const
081e12f4 +0x182:  mov    0x4(%eax),%edx
081e12f7 +0x185:  mov    (%eax),%eax
081e12f9 +0x187:  mov    %eax,-0x28(%ebp)
081e12fc +0x18a:  mov    %edx,-0x24(%ebp)
081e12ff +0x18d:  mov    -0x28(%ebp),%eax
081e1302 +0x190:  test   %eax,%eax
081e1304 +0x192:  je     081e130e <+0x19c>
081e1306 +0x194:  mov    -0x28(%ebp),%eax
081e1309 +0x197:  cmp    $0xffffffff,%eax
081e130c +0x19a:  jne    081e1318 <+0x1a6>
081e130e +0x19c:  mov    $0x17,%eax
081e1313 +0x1a1:  jmp    081e1473 <+0x301>
081e1318 +0x1a6:  mov    -0x28(%ebp),%ebx
081e131b +0x1a9:  mov    0xc(%ebp),%eax
081e131e +0x1ac:  mov    %eax,(%esp)
081e1321 +0x1af:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
081e1326 +0x1b4:  lea    -0x65(%ebp),%edx
081e1329 +0x1b7:  mov    %edx,0x8(%esp)
081e132d +0x1bb:  mov    %ebx,0x4(%esp)
081e1331 +0x1bf:  mov    %eax,(%esp)
081e1334 +0x1c2:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
081e1339 +0x1c7:  shr    $0x1f,%eax
081e133c +0x1ca:  test   %al,%al
081e133e +0x1cc:  je     081e134a <+0x1d8>
081e1340 +0x1ce:  mov    $0x15,%eax
081e1345 +0x1d3:  jmp    081e1473 <+0x301>
081e134a +0x1d8:  mov    -0x24(%ebp),%eax
081e134d +0x1db:  test   %eax,%eax
081e134f +0x1dd:  jle    081e1363 <+0x1f1>
081e1351 +0x1df:  mov    -0x24(%ebp),%ebx
081e1354 +0x1e2:  lea    -0x65(%ebp),%eax
081e1357 +0x1e5:  mov    %eax,(%esp)
081e135a +0x1e8:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
081e135f +0x1ed:  cmp    %eax,%ebx
081e1361 +0x1ef:  jle    081e136a <+0x1f8>
081e1363 +0x1f1:  mov    $0x1,%eax
081e1368 +0x1f6:  jmp    081e136f <+0x1fd>
081e136a +0x1f8:  mov    $0x0,%eax
081e136f +0x1fd:  test   %al,%al
081e1371 +0x1ff:  je     081e137d <+0x20b>
081e1373 +0x201:  mov    $0x16,%eax
081e1378 +0x206:  jmp    081e1473 <+0x301>
081e137d +0x20b:  lea    -0xa2(%ebp),%eax
081e1383 +0x211:  mov    %eax,(%esp)
081e1386 +0x214:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081e138b +0x219:  mov    -0x10(%ebp),%eax
081e138e +0x21c:  mov    0xd(%eax),%eax
081e1391 +0x21f:  mov    %eax,-0xa0(%ebp)
081e1397 +0x225:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e139c +0x22a:  mov    0xc(%eax),%eax
081e139f +0x22d:  movl   $0x1,0xc(%esp)
081e13a7 +0x235:  lea    -0xa2(%ebp),%edx
081e13ad +0x23b:  mov    %edx,0x8(%esp)
081e13b1 +0x23f:  movl   $0x0,0x4(%esp)
081e13b9 +0x247:  mov    %eax,(%esp)
081e13bc +0x24a:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
081e13c1 +0x24f:  mov    0xc(%ebp),%eax
081e13c4 +0x252:  mov    %eax,(%esp)
081e13c7 +0x255:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
081e13cc +0x25a:  mov    -0xa2(%ebp),%edx
081e13d2 +0x260:  mov    %edx,0x4(%esp)
081e13d6 +0x264:  mov    -0x9e(%ebp),%edx
081e13dc +0x26a:  mov    %edx,0x8(%esp)
081e13e0 +0x26e:  mov    -0x9a(%ebp),%edx
081e13e6 +0x274:  mov    %edx,0xc(%esp)
081e13ea +0x278:  mov    -0x96(%ebp),%edx
081e13f0 +0x27e:  mov    %edx,0x10(%esp)
081e13f4 +0x282:  mov    -0x92(%ebp),%edx
081e13fa +0x288:  mov    %edx,0x14(%esp)
081e13fe +0x28c:  mov    -0x8e(%ebp),%edx
081e1404 +0x292:  mov    %edx,0x18(%esp)
081e1408 +0x296:  mov    -0x8a(%ebp),%edx
081e140e +0x29c:  mov    %edx,0x1c(%esp)
081e1412 +0x2a0:  mov    -0x86(%ebp),%edx
081e1418 +0x2a6:  mov    %edx,0x20(%esp)
081e141c +0x2aa:  mov    -0x82(%ebp),%edx
081e1422 +0x2b0:  mov    %edx,0x24(%esp)
081e1426 +0x2b4:  mov    -0x7e(%ebp),%edx
081e1429 +0x2b7:  mov    %edx,0x28(%esp)
081e142d +0x2bb:  mov    -0x7a(%ebp),%edx
081e1430 +0x2be:  mov    %edx,0x2c(%esp)
081e1434 +0x2c2:  mov    -0x76(%ebp),%edx
081e1437 +0x2c5:  mov    %edx,0x30(%esp)
081e143b +0x2c9:  mov    -0x72(%ebp),%edx
081e143e +0x2cc:  mov    %edx,0x34(%esp)
081e1442 +0x2d0:  mov    -0x6e(%ebp),%edx
081e1445 +0x2d3:  mov    %edx,0x38(%esp)
081e1449 +0x2d7:  mov    -0x6a(%ebp),%edx
081e144c +0x2da:  mov    %edx,0x3c(%esp)
081e1450 +0x2de:  movzbl -0x66(%ebp),%edx
081e1454 +0x2e2:  mov    %dl,0x40(%esp)
081e1458 +0x2e6:  mov    %eax,(%esp)
081e145b +0x2e9:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
081e1460 +0x2ee:  shr    $0x1f,%eax
081e1463 +0x2f1:  test   %al,%al
081e1465 +0x2f3:  je     081e146e <+0x2fc>
081e1467 +0x2f5:  mov    $0x4,%eax
081e146c +0x2fa:  jmp    081e1473 <+0x301>
081e146e +0x2fc:  mov    $0x0,%eax
081e1473 +0x301:  add    $0xf0,%esp
081e1479 +0x307:  pop    %ebx
081e147a +0x308:  pop    %esi
081e147b +0x309:  pop    %ebp
081e147c +0x30a:  ret
081e147d +0x30b:  nop
```

## 反编译 C

```c
// Dispatcher_LimitNpcBuyItem::check_error @ 0x81e1172

/* Dispatcher_LimitNpcBuyItem::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_LimitNpcBuyItem::check_error
          (Dispatcher_LimitNpcBuyItem *this,CUser *param_1,MSG_BASE *param_2)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  CPrivateStoreMgr *this_00;
  NeedMaterialDataManager *this_01;
  int *piVar9;
  CInventory *this_02;
  int iVar10;
  undefined2 local_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined1 local_6a;
  Inven_Item local_69 [61];
  int local_2c;
  int local_28;
  cMyTrace local_24 [16];
  MSG_BASE *local_14;
  CItem *local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0xffffffff;
  }
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 0xffffffff;
  }
  local_14 = param_2;
  uVar1 = *(ulong *)(param_2 + 0xd);
  uVar7 = *(uint *)(param_2 + 0x11);
  pCVar5 = (CDataManager *)G_CDataManager();
  cVar3 = CDataManager::checkLimitNpcBuyItemList(pCVar5,uVar7,uVar1);
  if (cVar3 != '\x01') {
    uVar6 = CUser::get_charac_no(param_1,-1);
    uVar7 = CUser::get_acc_id(param_1);
    uVar8 = NumberToString(uVar7,0);
    cMyTrace::cMyTrace(local_24,"int Dispatcher_LimitNpcBuyItem::check_error(CUser*, MSG_BASE&)",
                       0x55e1,5);
    cMyTrace::operator()
              (local_24,"May be HackUser or Must be HackUser : m_id=%s, charac_no=%u",uVar8,uVar6);
    return 0xffffffff;
  }
  cVar3 = CUser::CheckInTrade(param_1);
  if (cVar3 == '\0') {
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    cVar3 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,param_1);
    if (cVar3 != '\0') {
      return 0x3c;
    }
    iVar4 = *(int *)(local_14 + 0xd);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_10 = (CItem *)CDataManager::find_item(pCVar5,iVar4);
    if (local_10 != (CItem *)0x0) {
      Inven_Item::Inven_Item(local_69);
      this_01 = (NeedMaterialDataManager *)NeedMaterialDataManager::getInstance();
      piVar9 = (int *)NeedMaterialDataManager::getNeedMaterial(this_01,local_10);
      local_28 = piVar9[1];
      iVar4 = *piVar9;
      if ((iVar4 != 0) && (iVar4 != -1)) {
        local_2c = iVar4;
        this_02 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
        iVar10 = CInventory::GetInvenData(this_02,iVar4,local_69);
        iVar4 = local_28;
        if (-1 < iVar10) {
          if ((local_28 < 1) || (iVar10 = Inven_Item::get_add_info(local_69), iVar10 < iVar4)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            uVar6 = 0x16;
          }
          else {
            Inven_Item::Inven_Item((Inven_Item *)&local_a6);
            uStack_a4 = (undefined2)*(undefined4 *)(local_14 + 0xd);
            uStack_a2 = (undefined2)((uint)*(undefined4 *)(local_14 + 0xd) >> 0x10);
            iVar4 = G_CDataManager();
            CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,&local_a6,1);
            uVar6 = CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
            iVar4 = CInventory::tryInsertItemIntoInventory
                              (uVar6,CONCAT22(uStack_a4,local_a6),CONCAT22(uStack_a0,uStack_a2),
                               local_9e,local_9a,local_96,local_92,local_8e,local_8a,local_86,
                               local_82,local_7e,local_7a,local_76,local_72,local_6e,local_6a);
            if (iVar4 < 0) {
              uVar6 = 4;
            }
            else {
              uVar6 = 0;
            }
          }
          return uVar6;
        }
        return 0x15;
      }
      return 0x17;
    }
    return 0x11;
  }
  return 0x13;
}
```
