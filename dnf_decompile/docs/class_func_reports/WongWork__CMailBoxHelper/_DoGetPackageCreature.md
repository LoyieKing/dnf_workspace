# _DoGetPackageCreature

`_ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR`

`WongWork::CMailBoxHelper::_DoGetPackageCreature(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x0855447c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855447c  _ZN8WongWork14CMailBoxHelper21_DoGetPackageCreatureEP5CUserPKNS_8CMailBox5CMailERSt6vectorISt4pairIiiESaIS9_EEbR10ENUM_ERROR
#           WongWork::CMailBoxHelper::_DoGetPackageCreature(CUser*, WongWork::CMailBox::CMail const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&)
# range [0x0855447c, 0x0855464f]
0855447c +0x000:  push   %ebp
0855447d +0x001:  mov    %esp,%ebp
0855447f +0x003:  push   %ebx
08554480 +0x004:  sub    $0xc4,%esp
08554486 +0x00a:  mov    0x14(%ebp),%eax
08554489 +0x00d:  mov    %al,-0x6c(%ebp)
0855448c +0x010:  lea    -0x61(%ebp),%eax
0855448f +0x013:  mov    0xc(%ebp),%edx
08554492 +0x016:  mov    %edx,0x4(%esp)
08554496 +0x01a:  mov    %eax,(%esp)
08554499 +0x01d:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0855449e +0x022:  sub    $0x4,%esp
085544a1 +0x025:  mov    0xc(%ebp),%eax
085544a4 +0x028:  mov    %eax,(%esp)
085544a7 +0x02b:  call   085575ae <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x10f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x10f
085544ac +0x030:  xor    $0x1,%eax
085544af +0x033:  test   %al,%al
085544b1 +0x035:  je     085544c6 <+0x4a>
085544b3 +0x037:  mov    0x18(%ebp),%eax
085544b6 +0x03a:  movl   $0x1,(%eax)
085544bc +0x040:  mov    $0x0,%eax
085544c1 +0x045:  jmp    0855464a <+0x1ce>
085544c6 +0x04a:  movl   $0x0,-0xc(%ebp)
085544cd +0x051:  cmpb   $0x0,-0x6c(%ebp)
085544d1 +0x055:  je     0855450b <+0x8f>
085544d3 +0x057:  mov    0x8(%ebp),%eax
085544d6 +0x05a:  mov    %eax,(%esp)
085544d9 +0x05d:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
085544de +0x062:  lea    -0x61(%ebp),%edx
085544e1 +0x065:  mov    %edx,0x4(%esp)
085544e5 +0x069:  mov    %eax,(%esp)
085544e8 +0x06c:  call   0850aaa4 <_ZNK10CInventory25tryInsertItemIntoCreatureER10Inven_Item>  ; CInventory::tryInsertItemIntoCreature(Inven_Item&) const
085544ed +0x071:  shr    $0x1f,%eax
085544f0 +0x074:  test   %al,%al
085544f2 +0x076:  je     08554645 <+0x1c9>
085544f8 +0x07c:  mov    0x18(%ebp),%eax
085544fb +0x07f:  movl   $0x4,(%eax)
08554501 +0x085:  mov    $0x0,%eax
08554506 +0x08a:  jmp    0855464a <+0x1ce>
0855450b +0x08f:  movl   $0x0,-0x24(%ebp)
08554512 +0x096:  mov    0x8(%ebp),%eax
08554515 +0x099:  mov    %eax,(%esp)
08554518 +0x09c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0855451d +0x0a1:  movl   $0x1,0x4c(%esp)
08554525 +0x0a9:  movl   $0x1,0x48(%esp)
0855452d +0x0b1:  movl   $0x15,0x44(%esp)
08554535 +0x0b9:  mov    -0x61(%ebp),%edx
08554538 +0x0bc:  mov    %edx,0x4(%esp)
0855453c +0x0c0:  mov    -0x5d(%ebp),%edx
0855453f +0x0c3:  mov    %edx,0x8(%esp)
08554543 +0x0c7:  mov    -0x59(%ebp),%edx
08554546 +0x0ca:  mov    %edx,0xc(%esp)
0855454a +0x0ce:  mov    -0x55(%ebp),%edx
0855454d +0x0d1:  mov    %edx,0x10(%esp)
08554551 +0x0d5:  mov    -0x51(%ebp),%edx
08554554 +0x0d8:  mov    %edx,0x14(%esp)
08554558 +0x0dc:  mov    -0x4d(%ebp),%edx
0855455b +0x0df:  mov    %edx,0x18(%esp)
0855455f +0x0e3:  mov    -0x49(%ebp),%edx
08554562 +0x0e6:  mov    %edx,0x1c(%esp)
08554566 +0x0ea:  mov    -0x45(%ebp),%edx
08554569 +0x0ed:  mov    %edx,0x20(%esp)
0855456d +0x0f1:  mov    -0x41(%ebp),%edx
08554570 +0x0f4:  mov    %edx,0x24(%esp)
08554574 +0x0f8:  mov    -0x3d(%ebp),%edx
08554577 +0x0fb:  mov    %edx,0x28(%esp)
0855457b +0x0ff:  mov    -0x39(%ebp),%edx
0855457e +0x102:  mov    %edx,0x2c(%esp)
08554582 +0x106:  mov    -0x35(%ebp),%edx
08554585 +0x109:  mov    %edx,0x30(%esp)
08554589 +0x10d:  mov    -0x31(%ebp),%edx
0855458c +0x110:  mov    %edx,0x34(%esp)
08554590 +0x114:  mov    -0x2d(%ebp),%edx
08554593 +0x117:  mov    %edx,0x38(%esp)
08554597 +0x11b:  mov    -0x29(%ebp),%edx
0855459a +0x11e:  mov    %edx,0x3c(%esp)
0855459e +0x122:  movzbl -0x25(%ebp),%edx
085545a2 +0x126:  mov    %dl,0x40(%esp)
085545a6 +0x12a:  mov    %eax,(%esp)
085545a9 +0x12d:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
085545ae +0x132:  mov    %eax,-0x24(%ebp)
085545b1 +0x135:  mov    -0x24(%ebp),%eax
085545b4 +0x138:  shr    $0x1f,%eax
085545b7 +0x13b:  test   %al,%al
085545b9 +0x13d:  je     085545c5 <+0x149>
085545bb +0x13f:  mov    $0x0,%eax
085545c0 +0x144:  jmp    0855464a <+0x1ce>
085545c5 +0x149:  mov    -0x24(%ebp),%ebx
085545c8 +0x14c:  mov    0x8(%ebp),%eax
085545cb +0x14f:  mov    %eax,(%esp)
085545ce +0x152:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085545d3 +0x157:  mov    %eax,(%esp)
085545d6 +0x15a:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
085545db +0x15f:  movl   $0x15,0xc(%esp)
085545e3 +0x167:  mov    %ebx,0x8(%esp)
085545e7 +0x16b:  lea    -0x61(%ebp),%edx
085545ea +0x16e:  mov    %edx,0x4(%esp)
085545ee +0x172:  mov    %eax,(%esp)
085545f1 +0x175:  call   0833ab9a <_ZN13user_creature12CCreatureMgr8RecvMailEP10Inven_Itemii>  ; user_creature::CCreatureMgr::RecvMail(Inven_Item*, int, int)
085545f6 +0x17a:  movzbl -0x60(%ebp),%eax
085545fa +0x17e:  cmp    $0x5,%al
085545fc +0x180:  je     08554645 <+0x1c9>
085545fe +0x182:  movl   $0x7,-0x10(%ebp)
08554605 +0x189:  lea    -0x18(%ebp),%eax
08554608 +0x18c:  lea    -0x24(%ebp),%edx
0855460b +0x18f:  mov    %edx,0x8(%esp)
0855460f +0x193:  lea    -0x10(%ebp),%edx
08554612 +0x196:  mov    %edx,0x4(%esp)
08554616 +0x19a:  mov    %eax,(%esp)
08554619 +0x19d:  call   085589fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x155f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x155f
0855461e +0x1a2:  sub    $0x4,%esp
08554621 +0x1a5:  lea    -0x18(%ebp),%eax
08554624 +0x1a8:  mov    %eax,0x4(%esp)
08554628 +0x1ac:  lea    -0x20(%ebp),%eax
0855462b +0x1af:  mov    %eax,(%esp)
0855462e +0x1b2:  call   08558a44 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x15a5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x15a5
08554633 +0x1b7:  lea    -0x20(%ebp),%eax
08554636 +0x1ba:  mov    %eax,0x4(%esp)
0855463a +0x1be:  mov    0x10(%ebp),%eax
0855463d +0x1c1:  mov    %eax,(%esp)
08554640 +0x1c4:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08554645 +0x1c9:  mov    $0x1,%eax
0855464a +0x1ce:  mov    -0x4(%ebp),%ebx
0855464d +0x1d1:  leave
0855464e +0x1d2:  ret
0855464f +0x1d3:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::_DoGetPackageCreature @ 0x855447c

/* WongWork::CMailBoxHelper::_DoGetPackageCreature(CUser*, WongWork::CMailBox::CMail const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, ENUM_ERROR&) */

undefined4
WongWork::CMailBoxHelper::_DoGetPackageCreature
          (CUser *param_1,CMail *param_2,vector *param_3,bool param_4,ENUM_ERROR *param_5)

{
  char cVar1;
  undefined4 uVar2;
  CInventory *pCVar3;
  int iVar4;
  CCreatureMgr *this;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
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
  undefined1 local_29;
  int local_28;
  pair<int,int> local_24 [8];
  ENUM_ITEMSPACE local_1c [8];
  int local_14 [3];
  
  CMailBox::CMail::GetPackageItem();
  cVar1 = CMailBox::CMail::isCreaturePackage(param_2);
  if (cVar1 == '\x01') {
    local_14[1] = 0;
    if (param_4) {
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
      iVar4 = CInventory::tryInsertItemIntoCreature(pCVar3,(Inven_Item *)&local_65);
      if (iVar4 < 0) {
        *(undefined4 *)param_5 = 4;
        return 0;
      }
    }
    else {
      local_28 = 0;
      uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      iVar4 = CInventory::insertItemIntoInventory
                        (uVar2,local_65,local_61,local_5d,local_59,local_55,local_51,local_4d,
                         local_49,local_45,local_41,local_3d,local_39,local_35,local_31,local_2d,
                         local_29,0x15,1,1);
      if (iVar4 < 0) {
        return 0;
      }
      local_28 = iVar4;
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      this = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar3);
      user_creature::CCreatureMgr::RecvMail(this,(Inven_Item *)&local_65,iVar4,0x15);
      if (local_65._1_1_ != '\x05') {
        local_14[0] = 7;
        std::make_pair<ENUM_ITEMSPACE,int&>(local_1c,local_14);
        std::pair<int,int>::pair<ENUM_ITEMSPACE,int>(local_24,local_1c);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_24
                  );
      }
    }
    uVar2 = 1;
  }
  else {
    *(undefined4 *)param_5 = 1;
    uVar2 = 0;
  }
  return uVar2;
}
```
