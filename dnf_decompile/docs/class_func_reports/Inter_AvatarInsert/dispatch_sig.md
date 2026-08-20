# dispatch_sig

`_ZN18Inter_AvatarInsert12dispatch_sigEP5CUserPci`

`Inter_AvatarInsert::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AvatarInsert` | `0x084cf5a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf5a4  _ZN18Inter_AvatarInsert12dispatch_sigEP5CUserPci
#           Inter_AvatarInsert::dispatch_sig(CUser*, char*, int)
# range [0x084cf5a4, 0x084cf6eb]
084cf5a4 +0x000:  push   %ebp
084cf5a5 +0x001:  mov    %esp,%ebp
084cf5a7 +0x003:  push   %esi
084cf5a8 +0x004:  push   %ebx
084cf5a9 +0x005:  sub    $0xa0,%esp
084cf5af +0x00b:  mov    0xc(%ebp),%eax
084cf5b2 +0x00e:  mov    %eax,(%esp)
084cf5b5 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cf5ba +0x016:  cmp    $0x2,%eax
084cf5bd +0x019:  setle  %al
084cf5c0 +0x01c:  test   %al,%al
084cf5c2 +0x01e:  je     084cf5ce <+0x2a>
084cf5c4 +0x020:  mov    $0x0,%eax
084cf5c9 +0x025:  jmp    084cf6e1 <+0x13d>
084cf5ce +0x02a:  mov    0x10(%ebp),%eax
084cf5d1 +0x02d:  mov    %eax,-0xc(%ebp)
084cf5d4 +0x030:  mov    -0xc(%ebp),%eax
084cf5d7 +0x033:  movzbl 0x8(%eax),%eax
084cf5db +0x037:  movzbl %al,%eax
084cf5de +0x03a:  lea    -0xa(%eax),%ebx
084cf5e1 +0x03d:  mov    0xc(%ebp),%eax
084cf5e4 +0x040:  mov    %eax,(%esp)
084cf5e7 +0x043:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084cf5ec +0x048:  lea    -0x49(%ebp),%edx
084cf5ef +0x04b:  mov    %ebx,0xc(%esp)
084cf5f3 +0x04f:  movl   $0x2,0x8(%esp)
084cf5fb +0x057:  mov    %eax,0x4(%esp)
084cf5ff +0x05b:  mov    %edx,(%esp)
084cf602 +0x05e:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
084cf607 +0x063:  sub    $0x4,%esp
084cf60a +0x066:  mov    -0xc(%ebp),%eax
084cf60d +0x069:  mov    0x4b(%eax),%esi
084cf610 +0x06c:  mov    -0x42(%ebp),%ebx
084cf613 +0x06f:  mov    0xc(%ebp),%eax
084cf616 +0x072:  mov    %eax,(%esp)
084cf619 +0x075:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084cf61e +0x07a:  mov    %eax,(%esp)
084cf621 +0x07d:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
084cf626 +0x082:  mov    %esi,0x8(%esp)
084cf62a +0x086:  mov    %ebx,0x4(%esp)
084cf62e +0x08a:  mov    %eax,(%esp)
084cf631 +0x08d:  call   082f9772 <_ZN8WongWork14CAvatarItemMgr19AssignAvatarItemKeyEii>  ; WongWork::CAvatarItemMgr::AssignAvatarItemKey(int, int)
084cf636 +0x092:  mov    -0xc(%ebp),%eax
084cf639 +0x095:  mov    0x4b(%eax),%eax
084cf63c +0x098:  mov    %eax,-0x42(%ebp)
084cf63f +0x09b:  mov    -0xc(%ebp),%eax
084cf642 +0x09e:  movzbl 0x8(%eax),%eax
084cf646 +0x0a2:  movzbl %al,%eax
084cf649 +0x0a5:  lea    -0xa(%eax),%ebx
084cf64c +0x0a8:  mov    0xc(%ebp),%eax
084cf64f +0x0ab:  mov    %eax,(%esp)
084cf652 +0x0ae:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084cf657 +0x0b3:  mov    -0x49(%ebp),%edx
084cf65a +0x0b6:  mov    %edx,0xc(%esp)
084cf65e +0x0ba:  mov    -0x45(%ebp),%edx
084cf661 +0x0bd:  mov    %edx,0x10(%esp)
084cf665 +0x0c1:  mov    -0x41(%ebp),%edx
084cf668 +0x0c4:  mov    %edx,0x14(%esp)
084cf66c +0x0c8:  mov    -0x3d(%ebp),%edx
084cf66f +0x0cb:  mov    %edx,0x18(%esp)
084cf673 +0x0cf:  mov    -0x39(%ebp),%edx
084cf676 +0x0d2:  mov    %edx,0x1c(%esp)
084cf67a +0x0d6:  mov    -0x35(%ebp),%edx
084cf67d +0x0d9:  mov    %edx,0x20(%esp)
084cf681 +0x0dd:  mov    -0x31(%ebp),%edx
084cf684 +0x0e0:  mov    %edx,0x24(%esp)
084cf688 +0x0e4:  mov    -0x2d(%ebp),%edx
084cf68b +0x0e7:  mov    %edx,0x28(%esp)
084cf68f +0x0eb:  mov    -0x29(%ebp),%edx
084cf692 +0x0ee:  mov    %edx,0x2c(%esp)
084cf696 +0x0f2:  mov    -0x25(%ebp),%edx
084cf699 +0x0f5:  mov    %edx,0x30(%esp)
084cf69d +0x0f9:  mov    -0x21(%ebp),%edx
084cf6a0 +0x0fc:  mov    %edx,0x34(%esp)
084cf6a4 +0x100:  mov    -0x1d(%ebp),%edx
084cf6a7 +0x103:  mov    %edx,0x38(%esp)
084cf6ab +0x107:  mov    -0x19(%ebp),%edx
084cf6ae +0x10a:  mov    %edx,0x3c(%esp)
084cf6b2 +0x10e:  mov    -0x15(%ebp),%edx
084cf6b5 +0x111:  mov    %edx,0x40(%esp)
084cf6b9 +0x115:  mov    -0x11(%ebp),%edx
084cf6bc +0x118:  mov    %edx,0x44(%esp)
084cf6c0 +0x11c:  movzbl -0xd(%ebp),%edx
084cf6c4 +0x120:  mov    %dl,0x48(%esp)
084cf6c8 +0x124:  mov    %ebx,0x8(%esp)
084cf6cc +0x128:  movl   $0x2,0x4(%esp)
084cf6d4 +0x130:  mov    %eax,(%esp)
084cf6d7 +0x133:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
084cf6dc +0x138:  mov    $0x0,%eax
084cf6e1 +0x13d:  lea    -0x8(%ebp),%esp
084cf6e4 +0x140:  add    $0x0,%esp
084cf6e7 +0x143:  pop    %ebx
084cf6e8 +0x144:  pop    %esi
084cf6e9 +0x145:  pop    %ebp
084cf6ea +0x146:  ret
084cf6eb +0x147:  nop
```

## 反编译 C

```c
// Inter_AvatarInsert::dispatch_sig @ 0x84cf5a4

/* Inter_AvatarInsert::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AvatarInsert::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  CInventory *this;
  CAvatarItemMgr *this_00;
  undefined4 uVar4;
  undefined4 local_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
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
  undefined4 local_15;
  undefined1 local_11;
  int local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    local_10 = param_3;
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    CInventory::GetInvenSlot((int)&local_4d,iVar3);
    iVar3 = *(int *)(local_10 + 0x4b);
    iVar2 = CONCAT31((undefined3)uStack_45,uStack_49._3_1_);
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(this);
    WongWork::CAvatarItemMgr::AssignAvatarItemKey(this_00,iVar2,iVar3);
    uStack_49._3_1_ = (undefined1)*(undefined4 *)(local_10 + 0x4b);
    uStack_45._0_3_ = (undefined3)((uint)*(undefined4 *)(local_10 + 0x4b) >> 8);
    bVar1 = *(byte *)(local_10 + 8);
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    CInventory::update_item
              (uVar4,2,bVar1 - 10,local_4d,uStack_49,uStack_45,local_41,local_3d,local_39,local_35,
               local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11);
  }
  return 0;
}
```
