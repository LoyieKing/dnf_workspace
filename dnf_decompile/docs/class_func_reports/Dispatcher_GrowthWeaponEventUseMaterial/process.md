# process

`_ZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GrowthWeaponEventUseMaterial::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthWeaponEventUseMaterial` | `0x081e81a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e81a4  _ZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GrowthWeaponEventUseMaterial::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e81a4, 0x081e82f9]
081e81a4 +0x000:  push   %ebp
081e81a5 +0x001:  mov    %esp,%ebp
081e81a7 +0x003:  push   %esi
081e81a8 +0x004:  push   %ebx
081e81a9 +0x005:  sub    $0x30,%esp
081e81ac +0x008:  mov    0x14(%ebp),%eax
081e81af +0x00b:  mov    %eax,-0x14(%ebp)
081e81b2 +0x00e:  mov    0x10(%ebp),%eax
081e81b5 +0x011:  mov    %eax,0x8(%esp)
081e81b9 +0x015:  mov    0xc(%ebp),%eax
081e81bc +0x018:  mov    %eax,0x4(%esp)
081e81c0 +0x01c:  mov    0x8(%ebp),%eax
081e81c3 +0x01f:  mov    %eax,(%esp)
081e81c6 +0x022:  call   081e82fa <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_GrowthWeaponEventUseMaterial::check_error(CUser*, MSG_BASE&)
081e81cb +0x027:  mov    -0x14(%ebp),%edx
081e81ce +0x02a:  mov    %eax,0x4(%edx)
081e81d1 +0x02d:  mov    -0x14(%ebp),%eax
081e81d4 +0x030:  mov    0x4(%eax),%eax
081e81d7 +0x033:  test   %eax,%eax
081e81d9 +0x035:  jle    081e81e5 <+0x41>
081e81db +0x037:  mov    $0x0,%eax
081e81e0 +0x03c:  jmp    081e82f3 <+0x14f>
081e81e5 +0x041:  mov    -0x14(%ebp),%eax
081e81e8 +0x044:  mov    0x4(%eax),%eax
081e81eb +0x047:  test   %eax,%eax
081e81ed +0x049:  jns    081e821a <+0x76>
081e81ef +0x04b:  mov    -0x14(%ebp),%eax
081e81f2 +0x04e:  mov    0x4(%eax),%eax
081e81f5 +0x051:  movl   $0x0,0xc(%esp)
081e81fd +0x059:  mov    %eax,0x8(%esp)
081e8201 +0x05d:  movl   $&_ZZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e8209 +0x065:  movl   $0x647c,(%esp)
081e8210 +0x06c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e8215 +0x071:  jmp    081e82f3 <+0x14f>
081e821a +0x076:  mov    0x10(%ebp),%eax
081e821d +0x079:  mov    %eax,-0x10(%ebp)
081e8220 +0x07c:  mov    -0x10(%ebp),%eax
081e8223 +0x07f:  mov    0x11(%eax),%esi
081e8226 +0x082:  mov    -0x10(%ebp),%eax
081e8229 +0x085:  mov    0xd(%eax),%eax
081e822c +0x088:  mov    %eax,(%esp)
081e822f +0x08b:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081e8234 +0x090:  mov    %eax,%ebx
081e8236 +0x092:  mov    0xc(%ebp),%eax
081e8239 +0x095:  mov    %eax,(%esp)
081e823c +0x098:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e8241 +0x09d:  movl   $0x1,0x14(%esp)
081e8249 +0x0a5:  movl   $0x36,0x10(%esp)
081e8251 +0x0ad:  movl   $0x1,0xc(%esp)
081e8259 +0x0b5:  mov    %esi,0x8(%esp)
081e825d +0x0b9:  mov    %ebx,0x4(%esp)
081e8261 +0x0bd:  mov    %eax,(%esp)
081e8264 +0x0c0:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e8269 +0x0c5:  xor    $0x1,%eax
081e826c +0x0c8:  test   %al,%al
081e826e +0x0ca:  je     081e8281 <+0xdd>
081e8270 +0x0cc:  mov    -0x14(%ebp),%eax
081e8273 +0x0cf:  movl   $0x11,0x4(%eax)
081e827a +0x0d6:  mov    $0x0,%eax
081e827f +0x0db:  jmp    081e82f3 <+0x14f>
081e8281 +0x0dd:  mov    0xc(%ebp),%eax
081e8284 +0x0e0:  mov    %eax,(%esp)
081e8287 +0x0e3:  call   08691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>  ; CUser::getGrowthWeaponEventdata()
081e828c +0x0e8:  add    $0x10,%eax
081e828f +0x0eb:  mov    %eax,-0xc(%ebp)
081e8292 +0x0ee:  mov    -0xc(%ebp),%eax
081e8295 +0x0f1:  movzwl (%eax),%eax
081e8298 +0x0f4:  lea    0x1(%eax),%edx
081e829b +0x0f7:  mov    -0xc(%ebp),%eax
081e829e +0x0fa:  mov    %dx,(%eax)
081e82a1 +0x0fd:  mov    -0xc(%ebp),%eax
081e82a4 +0x100:  movzwl (%eax),%eax
081e82a7 +0x103:  movswl %ax,%ebx
081e82aa +0x106:  mov    0xc(%ebp),%eax
081e82ad +0x109:  mov    %eax,(%esp)
081e82b0 +0x10c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e82b5 +0x111:  movl   $0x0,0x8(%esp)
081e82bd +0x119:  mov    %ebx,0x4(%esp)
081e82c1 +0x11d:  mov    %eax,(%esp)
081e82c4 +0x120:  call   084497ea <_ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi>  ; DB_EventUpdateGrowthWeaponTimepiece::makeRequest(unsigned int, short, int)
081e82c9 +0x125:  mov    -0xc(%ebp),%eax
081e82cc +0x128:  movzwl (%eax),%edx
081e82cf +0x12b:  mov    -0x14(%ebp),%eax
081e82d2 +0x12e:  mov    %dx,0x10(%eax)
081e82d6 +0x132:  mov    -0x10(%ebp),%eax
081e82d9 +0x135:  mov    0xd(%eax),%edx
081e82dc +0x138:  mov    -0x14(%ebp),%eax
081e82df +0x13b:  mov    %edx,0x8(%eax)
081e82e2 +0x13e:  mov    -0x10(%ebp),%eax
081e82e5 +0x141:  mov    0x11(%eax),%edx
081e82e8 +0x144:  mov    -0x14(%ebp),%eax
081e82eb +0x147:  mov    %edx,0xc(%eax)
081e82ee +0x14a:  mov    $0x0,%eax
081e82f3 +0x14f:  add    $0x30,%esp
081e82f6 +0x152:  pop    %ebx
081e82f7 +0x153:  pop    %esi
081e82f8 +0x154:  pop    %ebp
081e82f9 +0x155:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthWeaponEventUseMaterial::process @ 0x81e81a4

/* Dispatcher_GrowthWeaponEventUseMaterial::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventUseMaterial::process
          (Dispatcher_GrowthWeaponEventUseMaterial *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = LineFunc(0x647c,
                       "virtual int Dispatcher_GrowthWeaponEventUseMaterial::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x11);
      uVar4 = GetInvenTypeFromItemSpace(*(undefined4 *)(param_2 + 0xd));
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar2 = CInventory::delete_item(pCVar5,uVar4,uVar3,1,0x36,1);
      if (cVar2 == '\x01') {
        iVar6 = CUser::getGrowthWeaponEventdata(param_1);
        psVar7 = (short *)(iVar6 + 0x10);
        *psVar7 = *psVar7 + 1;
        sVar1 = *psVar7;
        uVar8 = CUser::get_acc_id(param_1);
        DB_EventUpdateGrowthWeaponTimepiece::makeRequest(uVar8,sVar1,0);
        *(short *)(param_3 + 0x10) = *psVar7;
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0xd);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x11);
        uVar3 = 0;
      }
      else {
        *(undefined4 *)(param_3 + 4) = 0x11;
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
