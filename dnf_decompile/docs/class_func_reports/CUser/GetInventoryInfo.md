# GetInventoryInfo

`_ZN5CUser16GetInventoryInfoEP18SIG_LOAD_INVENTORY`

`CUser::GetInventoryInfo(SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864d4ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864d4ba  _ZN5CUser16GetInventoryInfoEP18SIG_LOAD_INVENTORY
#           CUser::GetInventoryInfo(SIG_LOAD_INVENTORY*)
# range [0x0864d4ba, 0x0864d645]
0864d4ba +0x000:  push   %ebp
0864d4bb +0x001:  mov    %esp,%ebp
0864d4bd +0x003:  push   %esi
0864d4be +0x004:  push   %ebx
0864d4bf +0x005:  sub    $0x10,%esp
0864d4c2 +0x008:  mov    0xc(%ebp),%eax
0864d4c5 +0x00b:  movl   $0x0,0x4030(%eax)
0864d4cf +0x015:  movl   $0x2,0x4(%esp)
0864d4d7 +0x01d:  mov    0x8(%ebp),%eax
0864d4da +0x020:  mov    %eax,(%esp)
0864d4dd +0x023:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
0864d4e2 +0x028:  mov    (%eax),%edx
0864d4e4 +0x02a:  add    $0x8,%edx
0864d4e7 +0x02d:  mov    (%edx),%ecx
0864d4e9 +0x02f:  mov    0xc(%ebp),%edx
0864d4ec +0x032:  add    $&_ZL14gUnicodeBuffer+0xa258,%edx
0864d4f2 +0x038:  mov    %edx,0x4(%esp)
0864d4f6 +0x03c:  mov    %eax,(%esp)
0864d4f9 +0x03f:  call   *%ecx
0864d4fb +0x041:  movl   $0x9,0x4(%esp)
0864d503 +0x049:  mov    0x8(%ebp),%eax
0864d506 +0x04c:  mov    %eax,(%esp)
0864d509 +0x04f:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
0864d50e +0x054:  mov    (%eax),%edx
0864d510 +0x056:  add    $0x8,%edx
0864d513 +0x059:  mov    (%edx),%ecx
0864d515 +0x05b:  mov    0xc(%ebp),%edx
0864d518 +0x05e:  add    $&_ZL14gUnicodeBuffer+0xa578,%edx
0864d51e +0x064:  mov    %edx,0x4(%esp)
0864d522 +0x068:  mov    %eax,(%esp)
0864d525 +0x06b:  call   *%ecx
0864d527 +0x06d:  mov    0xc(%ebp),%eax
0864d52a +0x070:  mov    %eax,0x4(%esp)
0864d52e +0x074:  mov    0x8(%ebp),%eax
0864d531 +0x077:  mov    %eax,(%esp)
0864d534 +0x07a:  call   0864d646 <_ZN5CUser12GetInventoryEP18SIG_LOAD_INVENTORY>  ; CUser::GetInventory(SIG_LOAD_INVENTORY*)
0864d539 +0x07f:  xor    $0x1,%eax
0864d53c +0x082:  test   %al,%al
0864d53e +0x084:  jne    0864d5a5 <+0xeb>
0864d540 +0x086:  mov    0x8(%ebp),%eax
0864d543 +0x089:  mov    %eax,(%esp)
0864d546 +0x08c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d54b +0x091:  mov    %eax,(%esp)
0864d54e +0x094:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
0864d553 +0x099:  mov    0xc(%ebp),%edx
0864d556 +0x09c:  mov    %edx,0x4(%esp)
0864d55a +0x0a0:  mov    %eax,(%esp)
0864d55d +0x0a3:  call   0833b80c <_ZNK13user_creature12CCreatureMgr15GetCreatureItemEP18SIG_LOAD_INVENTORY>  ; user_creature::CCreatureMgr::GetCreatureItem(SIG_LOAD_INVENTORY*) const
0864d562 +0x0a8:  xor    $0x1,%eax
0864d565 +0x0ab:  test   %al,%al
0864d567 +0x0ad:  jne    0864d5a5 <+0xeb>
0864d569 +0x0af:  mov    0xc(%ebp),%eax
0864d56c +0x0b2:  lea    0xcd1c(%eax),%esi
0864d572 +0x0b8:  mov    0xc(%ebp),%eax
0864d575 +0x0bb:  lea    0xcd20(%eax),%ebx
0864d57b +0x0c1:  mov    0x8(%ebp),%eax
0864d57e +0x0c4:  mov    %eax,(%esp)
0864d581 +0x0c7:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0864d586 +0x0cc:  mov    %eax,(%esp)
0864d589 +0x0cf:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
0864d58e +0x0d4:  mov    %esi,0x8(%esp)
0864d592 +0x0d8:  mov    %ebx,0x4(%esp)
0864d596 +0x0dc:  mov    %eax,(%esp)
0864d599 +0x0df:  call   082f925c <_ZNK8WongWork14CAvatarItemMgr7GetItemEP16AvatarDetailInfoPi>  ; WongWork::CAvatarItemMgr::GetItem(AvatarDetailInfo*, int*) const
0864d59e +0x0e4:  xor    $0x1,%eax
0864d5a1 +0x0e7:  test   %al,%al
0864d5a3 +0x0e9:  je     0864d5ac <+0xf2>
0864d5a5 +0x0eb:  mov    $0x1,%eax
0864d5aa +0x0f0:  jmp    0864d5b1 <+0xf7>
0864d5ac +0x0f2:  mov    $0x0,%eax
0864d5b1 +0x0f7:  test   %al,%al
0864d5b3 +0x0f9:  je     0864d5c9 <+0x10f>
0864d5b5 +0x0fb:  mov    0xc(%ebp),%eax
0864d5b8 +0x0fe:  movl   $0x1,0x4030(%eax)
0864d5c2 +0x108:  mov    $0x0,%eax
0864d5c7 +0x10d:  jmp    0864d63f <+0x185>
0864d5c9 +0x10f:  mov    0x8(%ebp),%eax
0864d5cc +0x112:  mov    %eax,(%esp)
0864d5cf +0x115:  call   084ebea8 <_GLOBAL__I__Z7getUserj+0x2e5a>  ; global constructors keyed to getUser(unsigned int)+0x2e5a
0864d5d4 +0x11a:  test   %eax,%eax
0864d5d6 +0x11c:  setne  %al
0864d5d9 +0x11f:  test   %al,%al
0864d5db +0x121:  je     0864d5f2 <+0x138>
0864d5dd +0x123:  mov    0xc(%ebp),%eax
0864d5e0 +0x126:  add    $0xc,%eax
0864d5e3 +0x129:  mov    %eax,0x4(%esp)
0864d5e7 +0x12d:  mov    0x8(%ebp),%eax
0864d5ea +0x130:  mov    %eax,(%esp)
0864d5ed +0x133:  call   0869067c <_ZNK5CUser21getTagCharacInventoryEP21TAG_CHARAC_INVEN_DATA>  ; CUser::getTagCharacInventory(TAG_CHARAC_INVEN_DATA*) const
0864d5f2 +0x138:  movl   $0x1,0x8(%esp)
0864d5fa +0x140:  mov    0xc(%ebp),%eax
0864d5fd +0x143:  mov    %eax,0x4(%esp)
0864d601 +0x147:  mov    0x8(%ebp),%eax
0864d604 +0x14a:  mov    %eax,(%esp)
0864d607 +0x14d:  call   0867776c <_ZN5CUser36removeRentalItemInfoFromInvenLoadBufEP18SIG_LOAD_INVENTORYi>  ; CUser::removeRentalItemInfoFromInvenLoadBuf(SIG_LOAD_INVENTORY*, int)
0864d60c +0x152:  movl   $0x2,0x8(%esp)
0864d614 +0x15a:  mov    0xc(%ebp),%eax
0864d617 +0x15d:  mov    %eax,0x4(%esp)
0864d61b +0x161:  mov    0x8(%ebp),%eax
0864d61e +0x164:  mov    %eax,(%esp)
0864d621 +0x167:  call   0867776c <_ZN5CUser36removeRentalItemInfoFromInvenLoadBufEP18SIG_LOAD_INVENTORYi>  ; CUser::removeRentalItemInfoFromInvenLoadBuf(SIG_LOAD_INVENTORY*, int)
0864d626 +0x16c:  mov    0x8(%ebp),%eax
0864d629 +0x16f:  mov    %eax,(%esp)
0864d62c +0x172:  call   086467a0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv>  ; CUserCharacInfo::GetCurCharacMaxEquipLevel() const
0864d631 +0x177:  mov    0xc(%ebp),%edx
0864d634 +0x17a:  mov    %eax,&_ZL14gUnicodeBuffer+0xaf1c(%edx)
0864d63a +0x180:  mov    $0x1,%eax
0864d63f +0x185:  add    $0x10,%esp
0864d642 +0x188:  pop    %ebx
0864d643 +0x189:  pop    %esi
0864d644 +0x18a:  pop    %ebp
0864d645 +0x18b:  ret
```

## 反编译 C

```c
// CUser::GetInventoryInfo @ 0x864d4ba

/* CUser::GetInventoryInfo(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall CUser::GetInventoryInfo(CUser *this,SIG_LOAD_INVENTORY *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  CInventory *pCVar4;
  CCreatureMgr *this_00;
  CAvatarItemMgr *this_01;
  undefined4 uVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x4030) = 0;
  piVar3 = (int *)GetCharacExpandDataR(this,2);
  (**(code **)(*piVar3 + 8))(piVar3,param_1 + 0x14784);
  piVar3 = (int *)GetCharacExpandDataR(this,9);
  (**(code **)(*piVar3 + 8))(piVar3,param_1 + 0x14aa4);
  cVar2 = GetInventory(this,param_1);
  if (cVar2 == '\x01') {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar4);
    cVar2 = user_creature::CCreatureMgr::GetCreatureItem(this_00,param_1);
    if (cVar2 == '\x01') {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      this_01 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
      cVar2 = WongWork::CAvatarItemMgr::GetItem
                        (this_01,(AvatarDetailInfo *)(param_1 + 0xcd20),(int *)(param_1 + 0xcd1c));
      if (cVar2 == '\x01') {
        bVar1 = false;
        goto LAB_0864d5b1;
      }
    }
  }
  bVar1 = true;
LAB_0864d5b1:
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x4030) = 1;
    uVar5 = 0;
  }
  else {
    iVar6 = CUserCharacInfo::getTagCharacR((CUserCharacInfo *)this);
    if (iVar6 != 0) {
      getTagCharacInventory(this,(TAG_CHARAC_INVEN_DATA *)(param_1 + 0xc));
    }
    removeRentalItemInfoFromInvenLoadBuf(this,param_1,1);
    removeRentalItemInfoFromInvenLoadBuf(this,param_1,2);
    uVar5 = CUserCharacInfo::GetCurCharacMaxEquipLevel((CUserCharacInfo *)this);
    *(undefined4 *)(param_1 + 0x15448) = uVar5;
    uVar5 = 1;
  }
  return uVar5;
}
```
