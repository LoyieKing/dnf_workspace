# process

`_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GrowthWeaponEventChangeInfinity::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthWeaponEventChangeInfinity` | `0x081e7db4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e7db4  _ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GrowthWeaponEventChangeInfinity::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e7db4, 0x081e7f2d]
081e7db4 +0x000:  push   %ebp
081e7db5 +0x001:  mov    %esp,%ebp
081e7db7 +0x003:  push   %esi
081e7db8 +0x004:  push   %ebx
081e7db9 +0x005:  sub    $0x30,%esp
081e7dbc +0x008:  mov    0x14(%ebp),%eax
081e7dbf +0x00b:  mov    %eax,-0x18(%ebp)
081e7dc2 +0x00e:  mov    0x10(%ebp),%eax
081e7dc5 +0x011:  mov    %eax,0x8(%esp)
081e7dc9 +0x015:  mov    0xc(%ebp),%eax
081e7dcc +0x018:  mov    %eax,0x4(%esp)
081e7dd0 +0x01c:  mov    0x8(%ebp),%eax
081e7dd3 +0x01f:  mov    %eax,(%esp)
081e7dd6 +0x022:  call   081e7f2e <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_GrowthWeaponEventChangeInfinity::check_error(CUser*, MSG_BASE&)
081e7ddb +0x027:  mov    -0x18(%ebp),%edx
081e7dde +0x02a:  mov    %eax,0x4(%edx)
081e7de1 +0x02d:  mov    -0x18(%ebp),%eax
081e7de4 +0x030:  mov    0x4(%eax),%eax
081e7de7 +0x033:  test   %eax,%eax
081e7de9 +0x035:  jle    081e7df5 <+0x41>
081e7deb +0x037:  mov    $0x0,%eax
081e7df0 +0x03c:  jmp    081e7f26 <+0x172>
081e7df5 +0x041:  mov    -0x18(%ebp),%eax
081e7df8 +0x044:  mov    0x4(%eax),%eax
081e7dfb +0x047:  test   %eax,%eax
081e7dfd +0x049:  jns    081e7e2a <+0x76>
081e7dff +0x04b:  mov    -0x18(%ebp),%eax
081e7e02 +0x04e:  mov    0x4(%eax),%eax
081e7e05 +0x051:  movl   $0x0,0xc(%esp)
081e7e0d +0x059:  mov    %eax,0x8(%esp)
081e7e11 +0x05d:  movl   $&_ZZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e7e19 +0x065:  movl   $0x640f,(%esp)
081e7e20 +0x06c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e7e25 +0x071:  jmp    081e7f26 <+0x172>
081e7e2a +0x076:  mov    0x10(%ebp),%eax
081e7e2d +0x079:  mov    %eax,-0x14(%ebp)
081e7e30 +0x07c:  mov    -0x14(%ebp),%eax
081e7e33 +0x07f:  mov    0x11(%eax),%esi
081e7e36 +0x082:  mov    -0x14(%ebp),%eax
081e7e39 +0x085:  mov    0xd(%eax),%eax
081e7e3c +0x088:  mov    %eax,(%esp)
081e7e3f +0x08b:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081e7e44 +0x090:  mov    %eax,%ebx
081e7e46 +0x092:  mov    0xc(%ebp),%eax
081e7e49 +0x095:  mov    %eax,(%esp)
081e7e4c +0x098:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e7e51 +0x09d:  mov    %esi,0x8(%esp)
081e7e55 +0x0a1:  mov    %ebx,0x4(%esp)
081e7e59 +0x0a5:  mov    %eax,(%esp)
081e7e5c +0x0a8:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
081e7e61 +0x0ad:  mov    %eax,-0x10(%ebp)
081e7e64 +0x0b0:  cmpl   $0x0,-0x10(%ebp)
081e7e68 +0x0b4:  jne    081e7e7e <+0xca>
081e7e6a +0x0b6:  mov    -0x18(%ebp),%eax
081e7e6d +0x0b9:  movl   $0x15,0x4(%eax)
081e7e74 +0x0c0:  mov    $0x0,%eax
081e7e79 +0x0c5:  jmp    081e7f26 <+0x172>
081e7e7e +0x0ca:  mov    -0x10(%ebp),%eax
081e7e81 +0x0cd:  mov    0x2(%eax),%eax
081e7e84 +0x0d0:  test   %eax,%eax
081e7e86 +0x0d2:  jne    081e7e9c <+0xe8>
081e7e88 +0x0d4:  mov    -0x18(%ebp),%eax
081e7e8b +0x0d7:  movl   $0x15,0x4(%eax)
081e7e92 +0x0de:  mov    $0x0,%eax
081e7e97 +0x0e3:  jmp    081e7f26 <+0x172>
081e7e9c +0x0e8:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e7ea1 +0x0ed:  movl   $0x64,0x4(%esp)
081e7ea9 +0x0f5:  mov    %eax,(%esp)
081e7eac +0x0f8:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e7eb1 +0x0fd:  mov    (%eax),%edx
081e7eb3 +0x0ff:  add    $0x34,%edx
081e7eb6 +0x102:  mov    (%edx),%edx
081e7eb8 +0x104:  movl   $0x0,0x4(%esp)
081e7ec0 +0x10c:  mov    %eax,(%esp)
081e7ec3 +0x10f:  call   *%edx
081e7ec5 +0x111:  test   %al,%al
081e7ec7 +0x113:  je     081e7f21 <+0x16d>
081e7ec9 +0x115:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e7ece +0x11a:  movl   $0x64,0x4(%esp)
081e7ed6 +0x122:  mov    %eax,(%esp)
081e7ed9 +0x125:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e7ede +0x12a:  mov    %eax,-0xc(%ebp)
081e7ee1 +0x12d:  cmpl   $0x0,-0xc(%ebp)
081e7ee5 +0x131:  je     081e7f21 <+0x16d>
081e7ee7 +0x133:  mov    -0x14(%ebp),%eax
081e7eea +0x136:  mov    0x11(%eax),%edx
081e7eed +0x139:  mov    -0x14(%ebp),%eax
081e7ef0 +0x13c:  mov    0xd(%eax),%eax
081e7ef3 +0x13f:  mov    %edx,0x10(%esp)
081e7ef7 +0x143:  mov    %eax,0xc(%esp)
081e7efb +0x147:  mov    -0x10(%ebp),%eax
081e7efe +0x14a:  mov    %eax,0x8(%esp)
081e7f02 +0x14e:  mov    0xc(%ebp),%eax
081e7f05 +0x151:  mov    %eax,0x4(%esp)
081e7f09 +0x155:  mov    -0xc(%ebp),%eax
081e7f0c +0x158:  mov    %eax,(%esp)
081e7f0f +0x15b:  call   080f74b2 <_ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii>  ; GrowthEquipEvent::SendInfinityGrowthWeapon(CUser*, Inven_Item const*, int, int) const
081e7f14 +0x160:  mov    -0x18(%ebp),%edx
081e7f17 +0x163:  mov    %eax,0x4(%edx)
081e7f1a +0x166:  mov    $0x0,%eax
081e7f1f +0x16b:  jmp    081e7f26 <+0x172>
081e7f21 +0x16d:  mov    $0x0,%eax
081e7f26 +0x172:  add    $0x30,%esp
081e7f29 +0x175:  pop    %ebx
081e7f2a +0x176:  pop    %esi
081e7f2b +0x177:  pop    %ebp
081e7f2c +0x178:  ret
081e7f2d +0x179:  nop
```

## 反编译 C

```c
// Dispatcher_GrowthWeaponEventChangeInfinity::process @ 0x81e7db4

/* Dispatcher_GrowthWeaponEventChangeInfinity::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventChangeInfinity::process
          (Dispatcher_GrowthWeaponEventChangeInfinity *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CInventory *this_00;
  Inven_Item *pIVar5;
  int *piVar6;
  GrowthEquipEvent *this_01;
  
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = LineFunc(0x640f,
                       "virtual int Dispatcher_GrowthWeaponEventChangeInfinity::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x11);
      iVar4 = GetInvenTypeFromItemSpace(*(undefined4 *)(param_2 + 0xd));
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      pIVar5 = (Inven_Item *)CInventory::GetInvenRef(this_00,iVar4,iVar1);
      if (pIVar5 == (Inven_Item *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x15;
        uVar3 = 0;
      }
      else if (*(int *)(pIVar5 + 2) == 0) {
        *(undefined4 *)(param_3 + 4) = 0x15;
        uVar3 = 0;
      }
      else {
        piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
        cVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,0);
        if ((cVar2 != '\0') &&
           (this_01 = (GrowthEquipEvent *)
                      CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100),
           this_01 != (GrowthEquipEvent *)0x0)) {
          uVar3 = GrowthEquipEvent::SendInfinityGrowthWeapon
                            (this_01,param_1,pIVar5,*(int *)(param_2 + 0xd),*(int *)(param_2 + 0x11)
                            );
          *(undefined4 *)(param_3 + 4) = uVar3;
          return 0;
        }
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
