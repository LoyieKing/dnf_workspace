# checkAvatarDisjointError

`_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem`

`EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError(CUser*, unsigned short, Inven_Item&, CItem const*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAvatarDisjointRandomReward` | `0x0810f3a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f3a4  _ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem
#           EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError(CUser*, unsigned short, Inven_Item&, CItem const*)
# range [0x0810f3a4, 0x0810f4e1]
0810f3a4 +0x000:  push   %ebp
0810f3a5 +0x001:  mov    %esp,%ebp
0810f3a7 +0x003:  push   %ebx
0810f3a8 +0x004:  sub    $0x34,%esp
0810f3ab +0x007:  mov    0x10(%ebp),%eax
0810f3ae +0x00a:  mov    %ax,-0x1c(%ebp)
0810f3b2 +0x00e:  mov    0xc(%ebp),%eax
0810f3b5 +0x011:  mov    %eax,(%esp)
0810f3b8 +0x014:  call   086810a8 <_ZN5CUser26isEnableAvatarSocketActionEv>  ; CUser::isEnableAvatarSocketAction()
0810f3bd +0x019:  mov    %eax,-0xc(%ebp)
0810f3c0 +0x01c:  cmpl   $0x0,-0xc(%ebp)
0810f3c4 +0x020:  je     0810f3ce <+0x2a>
0810f3c6 +0x022:  mov    -0xc(%ebp),%eax
0810f3c9 +0x025:  jmp    0810f4dc <+0x138>
0810f3ce +0x02a:  movzwl -0x1c(%ebp),%eax
0810f3d2 +0x02e:  mov    %eax,0x8(%esp)
0810f3d6 +0x032:  movl   $0x2,0x4(%esp)
0810f3de +0x03a:  mov    0xc(%ebp),%eax
0810f3e1 +0x03d:  mov    %eax,(%esp)
0810f3e4 +0x040:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
0810f3e9 +0x045:  test   %al,%al
0810f3eb +0x047:  je     0810f3f7 <+0x53>
0810f3ed +0x049:  mov    $0xd5,%eax
0810f3f2 +0x04e:  jmp    0810f4dc <+0x138>
0810f3f7 +0x053:  mov    0x18(%ebp),%eax
0810f3fa +0x056:  mov    %eax,(%esp)
0810f3fd +0x059:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0810f402 +0x05e:  test   %eax,%eax
0810f404 +0x060:  je     0810f416 <+0x72>
0810f406 +0x062:  mov    0x18(%ebp),%eax
0810f409 +0x065:  mov    %eax,(%esp)
0810f40c +0x068:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0810f411 +0x06d:  cmp    $0x3,%eax
0810f414 +0x070:  jle    0810f41d <+0x79>
0810f416 +0x072:  mov    $0x1,%eax
0810f41b +0x077:  jmp    0810f422 <+0x7e>
0810f41d +0x079:  mov    $0x0,%eax
0810f422 +0x07e:  test   %al,%al
0810f424 +0x080:  je     0810f430 <+0x8c>
0810f426 +0x082:  mov    $0x13,%eax
0810f42b +0x087:  jmp    0810f4dc <+0x138>
0810f430 +0x08c:  mov    0x18(%ebp),%eax
0810f433 +0x08f:  mov    (%eax),%eax
0810f435 +0x091:  add    $0x24,%eax
0810f438 +0x094:  mov    (%eax),%edx
0810f43a +0x096:  movl   $0x2,0x4(%esp)
0810f442 +0x09e:  mov    0x18(%ebp),%eax
0810f445 +0x0a1:  mov    %eax,(%esp)
0810f448 +0x0a4:  call   *%edx
0810f44a +0x0a6:  xor    $0x1,%eax
0810f44d +0x0a9:  test   %al,%al
0810f44f +0x0ab:  je     0810f45b <+0xb7>
0810f451 +0x0ad:  mov    $0x17,%eax
0810f456 +0x0b2:  jmp    0810f4dc <+0x138>
0810f45b +0x0b7:  mov    0x14(%ebp),%eax
0810f45e +0x0ba:  mov    0x7(%eax),%ebx
0810f461 +0x0bd:  mov    0xc(%ebp),%eax
0810f464 +0x0c0:  mov    %eax,(%esp)
0810f467 +0x0c3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0810f46c +0x0c8:  mov    %eax,(%esp)
0810f46f +0x0cb:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0810f474 +0x0d0:  mov    %ebx,0x4(%esp)
0810f478 +0x0d4:  mov    %eax,(%esp)
0810f47b +0x0d7:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
0810f480 +0x0dc:  test   %eax,%eax
0810f482 +0x0de:  setne  %al
0810f485 +0x0e1:  test   %al,%al
0810f487 +0x0e3:  je     0810f490 <+0xec>
0810f489 +0x0e5:  mov    $0x17,%eax
0810f48e +0x0ea:  jmp    0810f4dc <+0x138>
0810f490 +0x0ec:  mov    0x14(%ebp),%eax
0810f493 +0x0ef:  mov    0x2(%eax),%eax
0810f496 +0x0f2:  mov    %eax,%ebx
0810f498 +0x0f4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0810f49d +0x0f9:  add    $0xb508,%eax
0810f4a2 +0x0fe:  mov    %ebx,0x4(%esp)
0810f4a6 +0x102:  mov    %eax,(%esp)
0810f4a9 +0x105:  call   0895e17c <_ZN21EventAvatarListScript17isfindEventAvatarEi>  ; EventAvatarListScript::isfindEventAvatar(int)
0810f4ae +0x10a:  test   %al,%al
0810f4b0 +0x10c:  je     0810f4b9 <+0x115>
0810f4b2 +0x10e:  mov    $0x17,%eax
0810f4b7 +0x113:  jmp    0810f4dc <+0x138>
0810f4b9 +0x115:  mov    0x14(%ebp),%eax
0810f4bc +0x118:  add    $0x33,%eax
0810f4bf +0x11b:  mov    %eax,(%esp)
0810f4c2 +0x11e:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
0810f4c7 +0x123:  test   %al,%al
0810f4c9 +0x125:  setne  %al
0810f4cc +0x128:  test   %al,%al
0810f4ce +0x12a:  je     0810f4d7 <+0x133>
0810f4d0 +0x12c:  mov    $0x17,%eax
0810f4d5 +0x131:  jmp    0810f4dc <+0x138>
0810f4d7 +0x133:  mov    $0x0,%eax
0810f4dc +0x138:  add    $0x34,%esp
0810f4df +0x13b:  pop    %ebx
0810f4e0 +0x13c:  pop    %ebp
0810f4e1 +0x13d:  ret
```

## 反编译 C

```c
// EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError @ 0x810f3a4

/* EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError(CUser*, unsigned short,
   Inven_Item&, CItem const*) */

int __thiscall
EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError
          (CAvatarDisjointRandomReward *this,CUser *param_1,ushort param_2,Inven_Item *param_3,
          CItem *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  CAvatarItemMgr *this_01;
  
  iVar3 = CUser::isEnableAvatarSocketAction(param_1);
  if (iVar3 == 0) {
    cVar2 = CUser::CheckItemLock(param_1,2,(uint)param_2);
    if (cVar2 == '\0') {
      iVar3 = CItem::get_grade(param_4);
      if ((iVar3 == 0) || (iVar3 = CItem::get_grade(param_4), 3 < iVar3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        iVar3 = 0x13;
      }
      else {
        cVar2 = (**(code **)(*(int *)param_4 + 0x24))(param_4,2);
        if (cVar2 == '\x01') {
          iVar3 = *(int *)(param_3 + 7);
          this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          this_01 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(this_00);
          iVar3 = WongWork::CAvatarItemMgr::GetExpireDate(this_01,iVar3);
          if (iVar3 == 0) {
            iVar3 = G_CDataManager();
            cVar2 = EventAvatarListScript::isfindEventAvatar(iVar3 + 0xb508);
            if (cVar2 == '\0') {
              cVar2 = UpgradeSeparateInfo::IsTradeRestriction
                                ((UpgradeSeparateInfo *)(param_3 + 0x33));
              if (cVar2 == '\0') {
                iVar3 = 0;
              }
              else {
                iVar3 = 0x17;
              }
            }
            else {
              iVar3 = 0x17;
            }
          }
          else {
            iVar3 = 0x17;
          }
        }
        else {
          iVar3 = 0x17;
        }
      }
    }
    else {
      iVar3 = 0xd5;
    }
  }
  return iVar3;
}
```
