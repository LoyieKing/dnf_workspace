# GetCurCharacInventoryRef

`_ZN5CUser24GetCurCharacInventoryRefEtt`

`CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08680f2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08680f2e  _ZN5CUser24GetCurCharacInventoryRefEtt
#           CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
# range [0x08680f2e, 0x086810a7]
08680f2e +0x000:  push   %ebp
08680f2f +0x001:  mov    %esp,%ebp
08680f31 +0x003:  push   %esi
08680f32 +0x004:  push   %ebx
08680f33 +0x005:  sub    $0x30,%esp
08680f36 +0x008:  mov    0xc(%ebp),%edx
08680f39 +0x00b:  mov    0x10(%ebp),%eax
08680f3c +0x00e:  mov    %dx,-0x1c(%ebp)
08680f40 +0x012:  mov    %ax,-0x20(%ebp)
08680f44 +0x016:  mov    0x8(%ebp),%eax
08680f47 +0x019:  mov    %eax,(%esp)
08680f4a +0x01c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08680f4f +0x021:  test   %eax,%eax
08680f51 +0x023:  setne  %al
08680f54 +0x026:  test   %al,%al
08680f56 +0x028:  je     0868109b <+0x16d>
08680f5c +0x02e:  movzwl -0x1c(%ebp),%eax
08680f60 +0x032:  cmp    $0x16,%eax
08680f63 +0x035:  ja     08681094 <+0x166>
08680f69 +0x03b:  mov    &data#e4b5d474(.rodata)(,%eax,4),%eax
08680f70 +0x042:  jmp    *%eax
08680f72 +0x044:  movzwl -0x20(%ebp),%ebx
08680f76 +0x048:  mov    0x8(%ebp),%eax
08680f79 +0x04b:  mov    %eax,(%esp)
08680f7c +0x04e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08680f81 +0x053:  mov    %ebx,0x8(%esp)
08680f85 +0x057:  movl   $0x1,0x4(%esp)
08680f8d +0x05f:  mov    %eax,(%esp)
08680f90 +0x062:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08680f95 +0x067:  jmp    086810a0 <+0x172>
08680f9a +0x06c:  movzwl -0x20(%ebp),%ebx
08680f9e +0x070:  mov    0x8(%ebp),%eax
08680fa1 +0x073:  mov    %eax,(%esp)
08680fa4 +0x076:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
08680fa9 +0x07b:  mov    %ebx,0x4(%esp)
08680fad +0x07f:  mov    %eax,(%esp)
08680fb0 +0x082:  call   0850b3c8 <_ZN6CCargo11GetCargoRefEi>  ; CCargo::GetCargoRef(int)
08680fb5 +0x087:  jmp    086810a0 <+0x172>
08680fba +0x08c:  movzwl -0x20(%ebp),%ebx
08680fbe +0x090:  mov    0x8(%ebp),%eax
08680fc1 +0x093:  mov    %eax,(%esp)
08680fc4 +0x096:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08680fc9 +0x09b:  mov    %ebx,0x8(%esp)
08680fcd +0x09f:  movl   $0x0,0x4(%esp)
08680fd5 +0x0a7:  mov    %eax,(%esp)
08680fd8 +0x0aa:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08680fdd +0x0af:  jmp    086810a0 <+0x172>
08680fe2 +0x0b4:  movzwl -0x20(%ebp),%ebx
08680fe6 +0x0b8:  mov    0x8(%ebp),%eax
08680fe9 +0x0bb:  mov    %eax,(%esp)
08680fec +0x0be:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08680ff1 +0x0c3:  mov    %ebx,0x8(%esp)
08680ff5 +0x0c7:  movl   $0x2,0x4(%esp)
08680ffd +0x0cf:  mov    %eax,(%esp)
08681000 +0x0d2:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
08681005 +0x0d7:  jmp    086810a0 <+0x172>
0868100a +0x0dc:  movzwl -0x20(%ebp),%ebx
0868100e +0x0e0:  mov    0x8(%ebp),%eax
08681011 +0x0e3:  mov    %eax,(%esp)
08681014 +0x0e6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08681019 +0x0eb:  mov    %ebx,0x8(%esp)
0868101d +0x0ef:  movl   $0x3,0x4(%esp)
08681025 +0x0f7:  mov    %eax,(%esp)
08681028 +0x0fa:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0868102d +0x0ff:  jmp    086810a0 <+0x172>
0868102f +0x101:  movl   $0x9,0x4(%esp)
08681037 +0x109:  mov    0x8(%ebp),%eax
0868103a +0x10c:  mov    %eax,(%esp)
0868103d +0x10f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08681042 +0x114:  mov    %eax,-0xc(%ebp)
08681045 +0x117:  movzwl -0x20(%ebp),%eax
08681049 +0x11b:  mov    %eax,0x8(%esp)
0868104d +0x11f:  movl   $0x5,0x4(%esp)
08681055 +0x127:  mov    -0xc(%ebp),%eax
08681058 +0x12a:  mov    %eax,(%esp)
0868105b +0x12d:  call   08499ec6 <_ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi>  ; CExpandEquipslot::GetInvenRefW(INVEN_TYPE, int)
08681060 +0x132:  jmp    086810a0 <+0x172>
08681062 +0x134:  movzwl -0x20(%ebp),%esi
08681066 +0x138:  movzwl -0x1c(%ebp),%eax
0868106a +0x13c:  sub    $0x13,%eax
0868106d +0x13f:  mov    %eax,%ebx
0868106f +0x141:  movl   $0xe,0x4(%esp)
08681077 +0x149:  mov    0x8(%ebp),%eax
0868107a +0x14c:  mov    %eax,(%esp)
0868107d +0x14f:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08681082 +0x154:  mov    %esi,0x8(%esp)
08681086 +0x158:  mov    %ebx,0x4(%esp)
0868108a +0x15c:  mov    %eax,(%esp)
0868108d +0x15f:  call   086416d8 <_ZN10CTitleBook12getTitleSlotE24ENUM_TITLE_BOOK_CATEGORYi>  ; CTitleBook::getTitleSlot(ENUM_TITLE_BOOK_CATEGORY, int)
08681092 +0x164:  jmp    086810a0 <+0x172>
08681094 +0x166:  mov    $0x0,%eax
08681099 +0x16b:  jmp    086810a0 <+0x172>
0868109b +0x16d:  mov    $0x0,%eax
086810a0 +0x172:  add    $0x30,%esp
086810a3 +0x175:  pop    %ebx
086810a4 +0x176:  pop    %esi
086810a5 +0x177:  pop    %ebp
086810a6 +0x178:  ret
086810a7 +0x179:  nop
```

## 反编译 C

```c
// CUser::GetCurCharacInventoryRef @ 0x8680f2e

/* CUser::GetCurCharacInventoryRef(unsigned short, unsigned short) */

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
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      uVar5 = CInventory::GetInvenRef(pCVar2,1,(uint)param_2);
      break;
    case 1:
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      uVar5 = CInventory::GetInvenRef(pCVar2,2,(uint)param_2);
      break;
    case 2:
      this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)this);
      uVar5 = CCargo::GetCargoRef(this_00,(uint)param_2);
      break;
    case 3:
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      uVar5 = CInventory::GetInvenRef(pCVar2,0,(uint)param_2);
      break;
    default:
      uVar5 = 0;
      break;
    case 7:
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      uVar5 = CInventory::GetInvenRef(pCVar2,3,(uint)param_2);
      break;
    case 0x12:
      pCVar3 = (CExpandEquipslot *)GetCharacExpandData(this,9);
      uVar5 = CExpandEquipslot::GetInvenRefW(pCVar3,5,param_2);
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
