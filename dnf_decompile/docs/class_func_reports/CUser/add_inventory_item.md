# add_inventory_item

`_ZN5CUser18add_inventory_itemEj`

`CUser::add_inventory_item(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cadc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cadc  _ZN5CUser18add_inventory_itemEj
#           CUser::add_inventory_item(unsigned int)
# range [0x0865cadc, 0x0865ccc7]
0865cadc +0x000:  push   %ebp
0865cadd +0x001:  mov    %esp,%ebp
0865cadf +0x003:  push   %esi
0865cae0 +0x004:  push   %ebx
0865cae1 +0x005:  sub    $0xb0,%esp
0865cae7 +0x00b:  mov    0xc(%ebp),%ebx
0865caea +0x00e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0865caef +0x013:  mov    %ebx,0x4(%esp)
0865caf3 +0x017:  mov    %eax,(%esp)
0865caf6 +0x01a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0865cafb +0x01f:  mov    %eax,-0x10(%ebp)
0865cafe +0x022:  cmpl   $0x0,-0x10(%ebp)
0865cb02 +0x026:  je     0865ccb9 <+0x1dd>
0865cb08 +0x02c:  lea    -0x59(%ebp),%eax
0865cb0b +0x02f:  mov    %eax,(%esp)
0865cb0e +0x032:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0865cb13 +0x037:  mov    -0x10(%ebp),%eax
0865cb16 +0x03a:  mov    (%eax),%eax
0865cb18 +0x03c:  add    $0x8,%eax
0865cb1b +0x03f:  mov    (%eax),%edx
0865cb1d +0x041:  lea    -0x59(%ebp),%eax
0865cb20 +0x044:  mov    %eax,0x4(%esp)
0865cb24 +0x048:  mov    -0x10(%ebp),%eax
0865cb27 +0x04b:  mov    %eax,(%esp)
0865cb2a +0x04e:  call   *%edx
0865cb2c +0x050:  movl   $0x1,-0x52(%ebp)
0865cb33 +0x057:  mov    0xc(%ebp),%eax
0865cb36 +0x05a:  mov    %eax,-0x57(%ebp)
0865cb39 +0x05d:  movl   $0xffffffff,-0xc(%ebp)
0865cb40 +0x064:  mov    0x8(%ebp),%eax
0865cb43 +0x067:  mov    %eax,(%esp)
0865cb46 +0x06a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865cb4b +0x06f:  movl   $0x1,0x4c(%esp)
0865cb53 +0x077:  movl   $0x1,0x48(%esp)
0865cb5b +0x07f:  movl   $0x18,0x44(%esp)
0865cb63 +0x087:  mov    -0x59(%ebp),%edx
0865cb66 +0x08a:  mov    %edx,0x4(%esp)
0865cb6a +0x08e:  mov    -0x55(%ebp),%edx
0865cb6d +0x091:  mov    %edx,0x8(%esp)
0865cb71 +0x095:  mov    -0x51(%ebp),%edx
0865cb74 +0x098:  mov    %edx,0xc(%esp)
0865cb78 +0x09c:  mov    -0x4d(%ebp),%edx
0865cb7b +0x09f:  mov    %edx,0x10(%esp)
0865cb7f +0x0a3:  mov    -0x49(%ebp),%edx
0865cb82 +0x0a6:  mov    %edx,0x14(%esp)
0865cb86 +0x0aa:  mov    -0x45(%ebp),%edx
0865cb89 +0x0ad:  mov    %edx,0x18(%esp)
0865cb8d +0x0b1:  mov    -0x41(%ebp),%edx
0865cb90 +0x0b4:  mov    %edx,0x1c(%esp)
0865cb94 +0x0b8:  mov    -0x3d(%ebp),%edx
0865cb97 +0x0bb:  mov    %edx,0x20(%esp)
0865cb9b +0x0bf:  mov    -0x39(%ebp),%edx
0865cb9e +0x0c2:  mov    %edx,0x24(%esp)
0865cba2 +0x0c6:  mov    -0x35(%ebp),%edx
0865cba5 +0x0c9:  mov    %edx,0x28(%esp)
0865cba9 +0x0cd:  mov    -0x31(%ebp),%edx
0865cbac +0x0d0:  mov    %edx,0x2c(%esp)
0865cbb0 +0x0d4:  mov    -0x2d(%ebp),%edx
0865cbb3 +0x0d7:  mov    %edx,0x30(%esp)
0865cbb7 +0x0db:  mov    -0x29(%ebp),%edx
0865cbba +0x0de:  mov    %edx,0x34(%esp)
0865cbbe +0x0e2:  mov    -0x25(%ebp),%edx
0865cbc1 +0x0e5:  mov    %edx,0x38(%esp)
0865cbc5 +0x0e9:  mov    -0x21(%ebp),%edx
0865cbc8 +0x0ec:  mov    %edx,0x3c(%esp)
0865cbcc +0x0f0:  movzbl -0x1d(%ebp),%edx
0865cbd0 +0x0f4:  mov    %dl,0x40(%esp)
0865cbd4 +0x0f8:  mov    %eax,(%esp)
0865cbd7 +0x0fb:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0865cbdc +0x100:  mov    %eax,-0xc(%ebp)
0865cbdf +0x103:  cmpl   $0xffffffff,-0xc(%ebp)
0865cbe3 +0x107:  sete   %al
0865cbe6 +0x10a:  test   %al,%al
0865cbe8 +0x10c:  jne    0865ccbc <+0x1e0>
0865cbee +0x112:  lea    -0x1c(%ebp),%eax
0865cbf1 +0x115:  mov    %eax,(%esp)
0865cbf4 +0x118:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865cbf9 +0x11d:  movl   $0xe,0x8(%esp)
0865cc01 +0x125:  movl   $0x0,0x4(%esp)
0865cc09 +0x12d:  lea    -0x1c(%ebp),%eax
0865cc0c +0x130:  mov    %eax,(%esp)
0865cc0f +0x133:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865cc14 +0x138:  movl   $0x0,0x4(%esp)
0865cc1c +0x140:  lea    -0x1c(%ebp),%eax
0865cc1f +0x143:  mov    %eax,(%esp)
0865cc22 +0x146:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865cc27 +0x14b:  movl   $0x1,0x4(%esp)
0865cc2f +0x153:  lea    -0x1c(%ebp),%eax
0865cc32 +0x156:  mov    %eax,(%esp)
0865cc35 +0x159:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0865cc3a +0x15e:  mov    0x8(%ebp),%eax
0865cc3d +0x161:  mov    %eax,(%esp)
0865cc40 +0x164:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0865cc45 +0x169:  lea    -0x1c(%ebp),%edx
0865cc48 +0x16c:  mov    %edx,0xc(%esp)
0865cc4c +0x170:  mov    -0xc(%ebp),%edx
0865cc4f +0x173:  mov    %edx,0x8(%esp)
0865cc53 +0x177:  movl   $0x1,0x4(%esp)
0865cc5b +0x17f:  mov    %eax,(%esp)
0865cc5e +0x182:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0865cc63 +0x187:  xor    $0x1,%eax
0865cc66 +0x18a:  test   %al,%al
0865cc68 +0x18c:  jne    0865ccac <+0x1d0>
0865cc6a +0x18e:  movl   $0x1,0x4(%esp)
0865cc72 +0x196:  lea    -0x1c(%ebp),%eax
0865cc75 +0x199:  mov    %eax,(%esp)
0865cc78 +0x19c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865cc7d +0x1a1:  lea    -0x1c(%ebp),%eax
0865cc80 +0x1a4:  mov    %eax,0x4(%esp)
0865cc84 +0x1a8:  mov    0x8(%ebp),%eax
0865cc87 +0x1ab:  mov    %eax,(%esp)
0865cc8a +0x1ae:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865cc8f +0x1b3:  jmp    0865ccac <+0x1d0>
0865cc91 +0x1b5:  mov    %edx,%ebx
0865cc93 +0x1b7:  mov    %eax,%esi
0865cc95 +0x1b9:  lea    -0x1c(%ebp),%eax
0865cc98 +0x1bc:  mov    %eax,(%esp)
0865cc9b +0x1bf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865cca0 +0x1c4:  mov    %esi,%eax
0865cca2 +0x1c6:  mov    %ebx,%edx
0865cca4 +0x1c8:  mov    %eax,(%esp)
0865cca7 +0x1cb:  call   08ae3750 <_Unwind_Resume>
0865ccac +0x1d0:  lea    -0x1c(%ebp),%eax
0865ccaf +0x1d3:  mov    %eax,(%esp)
0865ccb2 +0x1d6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865ccb7 +0x1db:  jmp    0865ccbd <+0x1e1>
0865ccb9 +0x1dd:  nop
0865ccba +0x1de:  jmp    0865ccbd <+0x1e1>
0865ccbc +0x1e0:  nop
0865ccbd +0x1e1:  add    $0xb0,%esp
0865ccc3 +0x1e7:  pop    %ebx
0865ccc4 +0x1e8:  pop    %esi
0865ccc5 +0x1e9:  pop    %ebp
0865ccc6 +0x1ea:  ret
0865ccc7 +0x1eb:  nop
```

## 反编译 C

```c
// CUser::add_inventory_item @ 0x865cadc

/* CUser::add_inventory_item(unsigned int) */

void __thiscall CUser::add_inventory_item(CUser *this,uint param_1)

{
  char cVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  CInventory *pCVar3;
  undefined2 local_5d;
  undefined4 uStack_5b;
  undefined1 uStack_57;
  undefined4 uStack_56;
  undefined1 uStack_52;
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
  undefined4 local_25;
  undefined1 local_21;
  PacketGuard local_20 [12];
  int *local_14;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (int *)CDataManager::find_item(this_00,param_1);
  if (local_14 != (int *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_5d);
    (**(code **)(*local_14 + 8))(local_14,&local_5d);
    uStack_56 = 1;
    local_10 = 0xffffffff;
    uStack_5b = param_1;
    uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    local_10 = CInventory::insertItemIntoInventory
                         (uVar2,CONCAT22((undefined2)uStack_5b,local_5d),
                          CONCAT13((undefined1)uStack_56,CONCAT12(uStack_57,uStack_5b._2_2_)),
                          CONCAT13(uStack_52,uStack_56._1_3_),local_51,local_4d,local_49,local_45,
                          local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,local_25,
                          local_21,0x18,1,1);
    if (local_10 != -1) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0865cc0f to 0865cc8e has its CatchHandler @ 0865cc91 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      cVar1 = CInventory::MakeItemPacket(pCVar3,1,local_10,local_20);
      if (cVar1 == '\x01') {
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        Send(this,local_20);
      }
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return;
}
```
