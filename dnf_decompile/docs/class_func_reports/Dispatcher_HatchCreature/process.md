# process

`_ZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_HatchCreature::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_HatchCreature` | `0x081cd446` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd446  _ZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_HatchCreature::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cd446, 0x081cd571]
081cd446 +0x000:  push   %ebp
081cd447 +0x001:  mov    %esp,%ebp
081cd449 +0x003:  push   %esi
081cd44a +0x004:  push   %ebx
081cd44b +0x005:  sub    $0x20,%esp
081cd44e +0x008:  mov    0x14(%ebp),%eax
081cd451 +0x00b:  mov    %eax,-0x14(%ebp)
081cd454 +0x00e:  mov    0x10(%ebp),%eax
081cd457 +0x011:  mov    %eax,0x8(%esp)
081cd45b +0x015:  mov    0xc(%ebp),%eax
081cd45e +0x018:  mov    %eax,0x4(%esp)
081cd462 +0x01c:  mov    0x8(%ebp),%eax
081cd465 +0x01f:  mov    %eax,(%esp)
081cd468 +0x022:  call   081cd5aa <_ZN24Dispatcher_HatchCreature11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_HatchCreature::check_error(CUser*, MSG_BASE&)
081cd46d +0x027:  mov    %eax,%edx
081cd46f +0x029:  mov    -0x14(%ebp),%eax
081cd472 +0x02c:  mov    %edx,0x4(%eax)
081cd475 +0x02f:  mov    -0x14(%ebp),%eax
081cd478 +0x032:  mov    0x4(%eax),%eax
081cd47b +0x035:  test   %eax,%eax
081cd47d +0x037:  jle    081cd489 <+0x43>
081cd47f +0x039:  mov    $0x0,%eax
081cd484 +0x03e:  jmp    081cd56b <+0x125>
081cd489 +0x043:  mov    -0x14(%ebp),%eax
081cd48c +0x046:  mov    0x4(%eax),%eax
081cd48f +0x049:  test   %eax,%eax
081cd491 +0x04b:  jns    081cd4c5 <+0x7f>
081cd493 +0x04d:  mov    0xc(%ebp),%eax
081cd496 +0x050:  mov    %eax,(%esp)
081cd499 +0x053:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cd49e +0x058:  mov    -0x14(%ebp),%edx
081cd4a1 +0x05b:  mov    0x4(%edx),%edx
081cd4a4 +0x05e:  mov    %eax,0xc(%esp)
081cd4a8 +0x062:  mov    %edx,0x8(%esp)
081cd4ac +0x066:  movl   $&_ZZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cd4b4 +0x06e:  movl   $0x252c,(%esp)
081cd4bb +0x075:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd4c0 +0x07a:  jmp    081cd56b <+0x125>
081cd4c5 +0x07f:  mov    0x10(%ebp),%eax
081cd4c8 +0x082:  mov    %eax,-0x10(%ebp)
081cd4cb +0x085:  mov    -0x10(%ebp),%eax
081cd4ce +0x088:  movzwl 0xe(%eax),%eax
081cd4d2 +0x08c:  movswl %ax,%esi
081cd4d5 +0x08f:  mov    -0x10(%ebp),%eax
081cd4d8 +0x092:  movzbl 0xd(%eax),%eax
081cd4dc +0x096:  movzbl %al,%eax
081cd4df +0x099:  mov    %eax,(%esp)
081cd4e2 +0x09c:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081cd4e7 +0x0a1:  mov    %eax,%ebx
081cd4e9 +0x0a3:  mov    0xc(%ebp),%eax
081cd4ec +0x0a6:  mov    %eax,(%esp)
081cd4ef +0x0a9:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
081cd4f4 +0x0ae:  mov    %esi,0x8(%esp)
081cd4f8 +0x0b2:  mov    %ebx,0x4(%esp)
081cd4fc +0x0b6:  mov    %eax,(%esp)
081cd4ff +0x0b9:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081cd504 +0x0be:  mov    %eax,-0xc(%ebp)
081cd507 +0x0c1:  cmpl   $0x0,-0xc(%ebp)
081cd50b +0x0c5:  jne    081cd53a <+0xf4>
081cd50d +0x0c7:  mov    0xc(%ebp),%eax
081cd510 +0x0ca:  mov    %eax,(%esp)
081cd513 +0x0cd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cd518 +0x0d2:  mov    %eax,0xc(%esp)
081cd51c +0x0d6:  movl   $0x0,0x8(%esp)
081cd524 +0x0de:  movl   $&_ZZN24Dispatcher_HatchCreature7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cd52c +0x0e6:  movl   $0x2533,(%esp)
081cd533 +0x0ed:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd538 +0x0f2:  jmp    081cd56b <+0x125>
081cd53a +0x0f4:  mov    -0xc(%ebp),%eax
081cd53d +0x0f7:  mov    %eax,(%esp)
081cd540 +0x0fa:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
081cd545 +0x0ff:  mov    %eax,%ebx
081cd547 +0x101:  mov    0xc(%ebp),%eax
081cd54a +0x104:  mov    %eax,(%esp)
081cd54d +0x107:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081cd552 +0x10c:  mov    %eax,(%esp)
081cd555 +0x10f:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
081cd55a +0x114:  mov    %ebx,0x4(%esp)
081cd55e +0x118:  mov    %eax,(%esp)
081cd561 +0x11b:  call   08339fa0 <_ZN13user_creature12CCreatureMgr5HatchEi>  ; user_creature::CCreatureMgr::Hatch(int)
081cd566 +0x120:  mov    $0x0,%eax
081cd56b +0x125:  add    $0x20,%esp
081cd56e +0x128:  pop    %ebx
081cd56f +0x129:  pop    %esi
081cd570 +0x12a:  pop    %ebp
081cd571 +0x12b:  ret
```

## 反编译 C

```c
// Dispatcher_HatchCreature::process @ 0x81cd446

/* Dispatcher_HatchCreature::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_HatchCreature::process
          (Dispatcher_HatchCreature *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  CInventory *pCVar5;
  Inven_Item *this_00;
  
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x252c,
                       "virtual int Dispatcher_HatchCreature::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar3);
    }
    else {
      sVar1 = *(short *)(param_2 + 0xe);
      iVar4 = GetInvenTypeFromItemSpace(param_2[0xd]);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
      this_00 = (Inven_Item *)CInventory::GetInvenRef(pCVar5,iVar4,(int)sVar1);
      if (this_00 == (Inven_Item *)0x0) {
        uVar3 = CUser::get_acc_id(param_1);
        uVar2 = LineFunc(0x2533,
                         "virtual int Dispatcher_HatchCreature::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
      else {
        Inven_Item::get_add_info(this_00);
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        iVar4 = CInventory::GetCreatureMgrW(pCVar5);
        user_creature::CCreatureMgr::Hatch(iVar4);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
