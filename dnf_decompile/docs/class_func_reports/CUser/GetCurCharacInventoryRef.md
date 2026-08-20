# GetCurCharacInventoryRef

`_ZNK5CUser24GetCurCharacInventoryRefEtt`

`CUser::GetCurCharacInventoryRef(unsigned short, unsigned short) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08680c8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08680c8a  _ZNK5CUser24GetCurCharacInventoryRefEtt
#           CUser::GetCurCharacInventoryRef(unsigned short, unsigned short) const
# range [0x08680c8a, 0x08680e03]
08680c8a +0x000:  push   %ebp
08680c8b +0x001:  mov    %esp,%ebp
08680c8d +0x003:  push   %esi
08680c8e +0x004:  push   %ebx
08680c8f +0x005:  sub    $0x30,%esp
08680c92 +0x008:  mov    0xc(%ebp),%edx
08680c95 +0x00b:  mov    0x10(%ebp),%eax
08680c98 +0x00e:  mov    %dx,-0x1c(%ebp)
08680c9c +0x012:  mov    %ax,-0x20(%ebp)
08680ca0 +0x016:  mov    0x8(%ebp),%eax
08680ca3 +0x019:  mov    %eax,(%esp)
08680ca6 +0x01c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08680cab +0x021:  test   %eax,%eax
08680cad +0x023:  setne  %al
08680cb0 +0x026:  test   %al,%al
08680cb2 +0x028:  je     08680df7 <+0x16d>
08680cb8 +0x02e:  movzwl -0x1c(%ebp),%eax
08680cbc +0x032:  cmp    $0x16,%eax
08680cbf +0x035:  ja     08680df0 <+0x166>
08680cc5 +0x03b:  mov    &data#b7c13bce(.rodata)(,%eax,4),%eax
08680ccc +0x042:  jmp    *%eax
08680cce +0x044:  movzwl -0x20(%ebp),%ebx
08680cd2 +0x048:  mov    0x8(%ebp),%eax
08680cd5 +0x04b:  mov    %eax,(%esp)
08680cd8 +0x04e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08680cdd +0x053:  mov    %ebx,0x8(%esp)
08680ce1 +0x057:  movl   $0x1,0x4(%esp)
08680ce9 +0x05f:  mov    %eax,(%esp)
08680cec +0x062:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08680cf1 +0x067:  jmp    08680dfc <+0x172>
08680cf6 +0x06c:  movzwl -0x20(%ebp),%ebx
08680cfa +0x070:  mov    0x8(%ebp),%eax
08680cfd +0x073:  mov    %eax,(%esp)
08680d00 +0x076:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08680d05 +0x07b:  mov    %ebx,0x4(%esp)
08680d09 +0x07f:  mov    %eax,(%esp)
08680d0c +0x082:  call   0850b390 <_ZNK6CCargo11GetCargoRefEi>  ; CCargo::GetCargoRef(int) const
08680d11 +0x087:  jmp    08680dfc <+0x172>
08680d16 +0x08c:  movzwl -0x20(%ebp),%ebx
08680d1a +0x090:  mov    0x8(%ebp),%eax
08680d1d +0x093:  mov    %eax,(%esp)
08680d20 +0x096:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08680d25 +0x09b:  mov    %ebx,0x8(%esp)
08680d29 +0x09f:  movl   $0x0,0x4(%esp)
08680d31 +0x0a7:  mov    %eax,(%esp)
08680d34 +0x0aa:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08680d39 +0x0af:  jmp    08680dfc <+0x172>
08680d3e +0x0b4:  movzwl -0x20(%ebp),%ebx
08680d42 +0x0b8:  mov    0x8(%ebp),%eax
08680d45 +0x0bb:  mov    %eax,(%esp)
08680d48 +0x0be:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08680d4d +0x0c3:  mov    %ebx,0x8(%esp)
08680d51 +0x0c7:  movl   $0x3,0x4(%esp)
08680d59 +0x0cf:  mov    %eax,(%esp)
08680d5c +0x0d2:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08680d61 +0x0d7:  jmp    08680dfc <+0x172>
08680d66 +0x0dc:  movzwl -0x20(%ebp),%ebx
08680d6a +0x0e0:  mov    0x8(%ebp),%eax
08680d6d +0x0e3:  mov    %eax,(%esp)
08680d70 +0x0e6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08680d75 +0x0eb:  mov    %ebx,0x8(%esp)
08680d79 +0x0ef:  movl   $0x2,0x4(%esp)
08680d81 +0x0f7:  mov    %eax,(%esp)
08680d84 +0x0fa:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08680d89 +0x0ff:  jmp    08680dfc <+0x172>
08680d8b +0x101:  movl   $0x9,0x4(%esp)
08680d93 +0x109:  mov    0x8(%ebp),%eax
08680d96 +0x10c:  mov    %eax,(%esp)
08680d99 +0x10f:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
08680d9e +0x114:  mov    %eax,-0xc(%ebp)
08680da1 +0x117:  movzwl -0x20(%ebp),%eax
08680da5 +0x11b:  mov    %eax,0x8(%esp)
08680da9 +0x11f:  movl   $0x5,0x4(%esp)
08680db1 +0x127:  mov    -0xc(%ebp),%eax
08680db4 +0x12a:  mov    %eax,(%esp)
08680db7 +0x12d:  call   08499e90 <_ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi>  ; CExpandEquipslot::GetInvenRefR(INVEN_TYPE, int) const
08680dbc +0x132:  jmp    08680dfc <+0x172>
08680dbe +0x134:  movzwl -0x20(%ebp),%esi
08680dc2 +0x138:  movzwl -0x1c(%ebp),%eax
08680dc6 +0x13c:  sub    $0x13,%eax
08680dc9 +0x13f:  mov    %eax,%ebx
08680dcb +0x141:  movl   $0xe,0x4(%esp)
08680dd3 +0x149:  mov    0x8(%ebp),%eax
08680dd6 +0x14c:  mov    %eax,(%esp)
08680dd9 +0x14f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08680dde +0x154:  mov    %esi,0x8(%esp)
08680de2 +0x158:  mov    %ebx,0x4(%esp)
08680de6 +0x15c:  mov    %eax,(%esp)
08680de9 +0x15f:  call   086416d8 <_ZN10CTitleBook12getTitleSlotE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::getTitleSlot(ENUM_TITLE_BOOK_CATEGORY, int)
08680dee +0x164:  jmp    08680dfc <+0x172>
08680df0 +0x166:  mov    $0x0,%eax
08680df5 +0x16b:  jmp    08680dfc <+0x172>
08680df7 +0x16d:  mov    $0x0,%eax
08680dfc +0x172:  add    $0x30,%esp
08680dff +0x175:  pop    %ebx
08680e00 +0x176:  pop    %esi
08680e01 +0x177:  pop    %ebp
08680e02 +0x178:  ret
08680e03 +0x179:  nop
```

## 反编译 C

```c
// CUser::GetCurCharacInventoryRef @ 0x8680c8a

/* CUser::GetCurCharacInventoryRef(unsigned short, unsigned short) const */

undefined4 __thiscall CUser::GetCurCharacInventoryRef(CUser *this,ushort param_1,ushort param_2)

{
  int iVar1;
  CCargo *this_00;
  CInventory *pCVar2;
  CExpandEquipslot *pCVar3;
  CTitleBook *pCVar4;
  undefined4 uVar5;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    switch(param_1) {
    case 0:
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      uVar5 = CInventory::GetInvenRef(pCVar2,1,(uint)param_2);
      break;
    case 1:
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      uVar5 = CInventory::GetInvenRef(pCVar2,2,(uint)param_2);
      break;
    case 2:
      this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
      uVar5 = CCargo::GetCargoRef(this_00,(uint)param_2);
      break;
    case 3:
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      uVar5 = CInventory::GetInvenRef(pCVar2,0,(uint)param_2);
      break;
    default:
      uVar5 = 0;
      break;
    case 7:
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
      uVar5 = CInventory::GetInvenRef(pCVar2,3,(uint)param_2);
      break;
    case 0x12:
      pCVar3 = (CExpandEquipslot *)GetCharacExpandDataR(this,9);
      uVar5 = CExpandEquipslot::GetInvenRefR(pCVar3,5,param_2);
      break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      pCVar4 = (CTitleBook *)GetCharacExpandData(this,0xe);
      uVar5 = CTitleBook::getTitleSlot(pCVar4,param_1 - 0x13,param_2);
    }
  }
  return uVar5;
}
```
