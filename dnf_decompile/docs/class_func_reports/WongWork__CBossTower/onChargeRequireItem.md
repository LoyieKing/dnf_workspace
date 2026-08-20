# onChargeRequireItem

`_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser`

`WongWork::CBossTower::onChargeRequireItem(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x0814530c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814530c  _ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser
#           WongWork::CBossTower::onChargeRequireItem(CUser*)
# range [0x0814530c, 0x081454b7]
0814530c +0x000:  push   %ebp
0814530d +0x001:  mov    %esp,%ebp
0814530f +0x003:  push   %ebx
08145310 +0x004:  sub    $0xa4,%esp
08145316 +0x00a:  cmpl   $0x0,0xc(%ebp)
0814531a +0x00e:  jne    08145326 <+0x1a>
0814531c +0x010:  mov    $0x0,%eax
08145321 +0x015:  jmp    081454ae <+0x1a2>
08145326 +0x01a:  mov    0x8(%ebp),%eax
08145329 +0x01d:  mov    0x4(%eax),%eax
0814532c +0x020:  mov    0xcd8(%eax),%eax
08145332 +0x026:  cmp    $0x1,%eax
08145335 +0x029:  jne    08145341 <+0x35>
08145337 +0x02b:  mov    $0x1,%eax
0814533c +0x030:  jmp    081454ae <+0x1a2>
08145341 +0x035:  mov    0x8(%ebp),%eax
08145344 +0x038:  mov    0x9f0(%eax),%eax
0814534a +0x03e:  movzbl 0x7fc(%eax),%eax
08145351 +0x045:  test   %al,%al
08145353 +0x047:  je     081454a9 <+0x19d>
08145359 +0x04d:  movl   $0x0,-0x10(%ebp)
08145360 +0x054:  lea    -0x4d(%ebp),%eax
08145363 +0x057:  mov    %eax,(%esp)
08145366 +0x05a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0814536b +0x05f:  mov    0x8(%ebp),%eax
0814536e +0x062:  mov    0x9f0(%eax),%eax
08145374 +0x068:  mov    0x7f4(%eax),%ebx
0814537a +0x06e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814537f +0x073:  mov    %ebx,0x4(%esp)
08145383 +0x077:  mov    %eax,(%esp)
08145386 +0x07a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0814538b +0x07f:  mov    %eax,-0x10(%ebp)
0814538e +0x082:  cmpl   $0x0,-0x10(%ebp)
08145392 +0x086:  jne    0814539e <+0x92>
08145394 +0x088:  mov    $0x0,%eax
08145399 +0x08d:  jmp    081454ae <+0x1a2>
0814539e +0x092:  mov    -0x10(%ebp),%eax
081453a1 +0x095:  mov    (%eax),%eax
081453a3 +0x097:  add    $0x8,%eax
081453a6 +0x09a:  mov    (%eax),%edx
081453a8 +0x09c:  lea    -0x4d(%ebp),%eax
081453ab +0x09f:  mov    %eax,0x4(%esp)
081453af +0x0a3:  mov    -0x10(%ebp),%eax
081453b2 +0x0a6:  mov    %eax,(%esp)
081453b5 +0x0a9:  call   *%edx
081453b7 +0x0ab:  mov    0x8(%ebp),%eax
081453ba +0x0ae:  mov    0x9f0(%eax),%eax
081453c0 +0x0b4:  mov    0x7f8(%eax),%eax
081453c6 +0x0ba:  mov    %eax,-0x46(%ebp)
081453c9 +0x0bd:  mov    0x8(%ebp),%eax
081453cc +0x0c0:  mov    0x9f0(%eax),%eax
081453d2 +0x0c6:  mov    0x7f4(%eax),%eax
081453d8 +0x0cc:  mov    %eax,-0x4b(%ebp)
081453db +0x0cf:  movl   $0xffffffff,-0xc(%ebp)
081453e2 +0x0d6:  mov    0xc(%ebp),%eax
081453e5 +0x0d9:  mov    %eax,(%esp)
081453e8 +0x0dc:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081453ed +0x0e1:  movl   $0x1,0x4c(%esp)
081453f5 +0x0e9:  movl   $0x1,0x48(%esp)
081453fd +0x0f1:  movl   $0x4,0x44(%esp)
08145405 +0x0f9:  mov    -0x4d(%ebp),%edx
08145408 +0x0fc:  mov    %edx,0x4(%esp)
0814540c +0x100:  mov    -0x49(%ebp),%edx
0814540f +0x103:  mov    %edx,0x8(%esp)
08145413 +0x107:  mov    -0x45(%ebp),%edx
08145416 +0x10a:  mov    %edx,0xc(%esp)
0814541a +0x10e:  mov    -0x41(%ebp),%edx
0814541d +0x111:  mov    %edx,0x10(%esp)
08145421 +0x115:  mov    -0x3d(%ebp),%edx
08145424 +0x118:  mov    %edx,0x14(%esp)
08145428 +0x11c:  mov    -0x39(%ebp),%edx
0814542b +0x11f:  mov    %edx,0x18(%esp)
0814542f +0x123:  mov    -0x35(%ebp),%edx
08145432 +0x126:  mov    %edx,0x1c(%esp)
08145436 +0x12a:  mov    -0x31(%ebp),%edx
08145439 +0x12d:  mov    %edx,0x20(%esp)
0814543d +0x131:  mov    -0x2d(%ebp),%edx
08145440 +0x134:  mov    %edx,0x24(%esp)
08145444 +0x138:  mov    -0x29(%ebp),%edx
08145447 +0x13b:  mov    %edx,0x28(%esp)
0814544b +0x13f:  mov    -0x25(%ebp),%edx
0814544e +0x142:  mov    %edx,0x2c(%esp)
08145452 +0x146:  mov    -0x21(%ebp),%edx
08145455 +0x149:  mov    %edx,0x30(%esp)
08145459 +0x14d:  mov    -0x1d(%ebp),%edx
0814545c +0x150:  mov    %edx,0x34(%esp)
08145460 +0x154:  mov    -0x19(%ebp),%edx
08145463 +0x157:  mov    %edx,0x38(%esp)
08145467 +0x15b:  mov    -0x15(%ebp),%edx
0814546a +0x15e:  mov    %edx,0x3c(%esp)
0814546e +0x162:  movzbl -0x11(%ebp),%edx
08145472 +0x166:  mov    %dl,0x40(%esp)
08145476 +0x16a:  mov    %eax,(%esp)
08145479 +0x16d:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0814547e +0x172:  mov    %eax,-0xc(%ebp)
08145481 +0x175:  cmpl   $0x0,-0xc(%ebp)
08145485 +0x179:  js     081454a9 <+0x19d>
08145487 +0x17b:  mov    -0xc(%ebp),%eax
0814548a +0x17e:  mov    %eax,0xc(%esp)
0814548e +0x182:  movl   $0x0,0x8(%esp)
08145496 +0x18a:  movl   $0x1,0x4(%esp)
0814549e +0x192:  mov    0xc(%ebp),%eax
081454a1 +0x195:  mov    %eax,(%esp)
081454a4 +0x198:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081454a9 +0x19d:  mov    $0x1,%eax
081454ae +0x1a2:  add    $0xa4,%esp
081454b4 +0x1a8:  pop    %ebx
081454b5 +0x1a9:  pop    %ebp
081454b6 +0x1aa:  ret
081454b7 +0x1ab:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::onChargeRequireItem @ 0x814530c

/* WongWork::CBossTower::onChargeRequireItem(CUser*) */

undefined4 __thiscall WongWork::CBossTower::onChargeRequireItem(CBossTower *this,CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  CDataManager *this_00;
  undefined2 local_51;
  undefined2 uStack_4f;
  undefined2 uStack_4d;
  undefined1 uStack_4b;
  undefined4 uStack_4a;
  undefined1 uStack_46;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  int *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(*(int *)(this + 4) + 0xcd8) == 1) {
    uVar2 = 1;
  }
  else {
    if (*(char *)(*(int *)(this + 0x9f0) + 0x7fc) != '\0') {
      local_14 = (int *)0x0;
      Inven_Item::Inven_Item((Inven_Item *)&local_51);
      iVar1 = *(int *)(*(int *)(this + 0x9f0) + 0x7f4);
      this_00 = (CDataManager *)G_CDataManager();
      local_14 = (int *)CDataManager::find_item(this_00,iVar1);
      if (local_14 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*local_14 + 8))(local_14,&local_51);
      uStack_4a = *(undefined4 *)(*(int *)(this + 0x9f0) + 0x7f8);
      uStack_4f = (undefined2)*(undefined4 *)(*(int *)(this + 0x9f0) + 0x7f4);
      uStack_4d = (undefined2)((uint)*(undefined4 *)(*(int *)(this + 0x9f0) + 0x7f4) >> 0x10);
      local_10 = 0xffffffff;
      uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_10 = CInventory::insertItemIntoInventory
                           (uVar2,CONCAT22(uStack_4f,local_51),
                            CONCAT13((undefined1)uStack_4a,CONCAT12(uStack_4b,uStack_4d)),
                            CONCAT13(uStack_46,uStack_4a._1_3_),local_45,local_41,local_3d,local_39,
                            local_35,local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,
                            local_15,4,1,1);
      if (-1 < local_10) {
        CUser::SendUpdateItemList(param_1,1,0,local_10);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
