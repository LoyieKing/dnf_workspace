# processGrowthWeaponEvent

`_ZN13Inter_LoadEtc24processGrowthWeaponEventER5CUser`

`Inter_LoadEtc::processGrowthWeaponEvent(CUser&)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084e834a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e834a  _ZN13Inter_LoadEtc24processGrowthWeaponEventER5CUser
#           Inter_LoadEtc::processGrowthWeaponEvent(CUser&)
# range [0x084e834a, 0x084e83c1]
084e834a +0x00:  push   %ebp
084e834b +0x01:  mov    %esp,%ebp
084e834d +0x03:  sub    $0x28,%esp
084e8350 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e8355 +0x0b:  movl   $0x64,0x4(%esp)
084e835d +0x13:  mov    %eax,(%esp)
084e8360 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e8365 +0x1b:  mov    (%eax),%edx
084e8367 +0x1d:  add    $0x34,%edx
084e836a +0x20:  mov    (%edx),%edx
084e836c +0x22:  movl   $0x0,0x4(%esp)
084e8374 +0x2a:  mov    %eax,(%esp)
084e8377 +0x2d:  call   *%edx
084e8379 +0x2f:  test   %al,%al
084e837b +0x31:  je     084e83bf <+0x75>
084e837d +0x33:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e8382 +0x38:  movl   $0x64,0x4(%esp)
084e838a +0x40:  mov    %eax,(%esp)
084e838d +0x43:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e8392 +0x48:  mov    %eax,-0xc(%ebp)
084e8395 +0x4b:  cmpl   $0x0,-0xc(%ebp)
084e8399 +0x4f:  je     084e83bf <+0x75>
084e839b +0x51:  mov    0xc(%ebp),%eax
084e839e +0x54:  mov    %eax,0x4(%esp)
084e83a2 +0x58:  mov    -0xc(%ebp),%eax
084e83a5 +0x5b:  mov    %eax,(%esp)
084e83a8 +0x5e:  call   080f7050 <_ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser>  ; GrowthEquipEvent::GiftGrowthWeaponBox(CUser&) const
084e83ad +0x63:  mov    0xc(%ebp),%eax
084e83b0 +0x66:  mov    %eax,0x4(%esp)
084e83b4 +0x6a:  mov    -0xc(%ebp),%eax
084e83b7 +0x6d:  mov    %eax,(%esp)
084e83ba +0x70:  call   080f7226 <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser>  ; GrowthEquipEvent::SendGrowthWeaponEventInfo(CUser&)
084e83bf +0x75:  leave
084e83c0 +0x76:  ret
084e83c1 +0x77:  nop
```

## 反编译 C

```c
// Inter_LoadEtc::processGrowthWeaponEvent @ 0x84e834a

/* Inter_LoadEtc::processGrowthWeaponEvent(CUser&) */

void __thiscall Inter_LoadEtc::processGrowthWeaponEvent(Inter_LoadEtc *this,CUser *param_1)

{
  char cVar1;
  int *piVar2;
  GrowthEquipEvent *this_00;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    this_00 = (GrowthEquipEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
    if (this_00 != (GrowthEquipEvent *)0x0) {
      GrowthEquipEvent::GiftGrowthWeaponBox(this_00,param_1);
      GrowthEquipEvent::SendGrowthWeaponEventInfo(this_00,param_1);
    }
  }
  return;
}
```
