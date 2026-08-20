# _IsBroadcastRunaway

`_ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser`

`pvp_assault::CAssaultPlace::_IsBroadcastRunaway(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eab1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eab1a  _ZN11pvp_assault13CAssaultPlace19_IsBroadcastRunawayEP5CUser
#           pvp_assault::CAssaultPlace::_IsBroadcastRunaway(CUser*)
# range [0x082eab1a, 0x082eab79]
082eab1a +0x00:  push   %ebp
082eab1b +0x01:  mov    %esp,%ebp
082eab1d +0x03:  sub    $0x18,%esp
082eab20 +0x06:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082eab25 +0x0b:  mov    %eax,(%esp)
082eab28 +0x0e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082eab2d +0x13:  test   %al,%al
082eab2f +0x15:  je     082eab47 <+0x2d>
082eab31 +0x17:  mov    0xc(%ebp),%eax
082eab34 +0x1a:  mov    %eax,(%esp)
082eab37 +0x1d:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082eab3c +0x22:  cmp    $0x7,%al
082eab3e +0x24:  jne    082eab47 <+0x2d>
082eab40 +0x26:  mov    $0x1,%eax
082eab45 +0x2b:  jmp    082eab4c <+0x32>
082eab47 +0x2d:  mov    $0x0,%eax
082eab4c +0x32:  test   %al,%al
082eab4e +0x34:  je     082eab57 <+0x3d>
082eab50 +0x36:  mov    $0x0,%eax
082eab55 +0x3b:  jmp    082eab77 <+0x5d>
082eab57 +0x3d:  mov    0xc(%ebp),%eax
082eab5a +0x40:  mov    %eax,(%esp)
082eab5d +0x43:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082eab62 +0x48:  test   %eax,%eax
082eab64 +0x4a:  setne  %al
082eab67 +0x4d:  test   %al,%al
082eab69 +0x4f:  je     082eab72 <+0x58>
082eab6b +0x51:  mov    $0x1,%eax
082eab70 +0x56:  jmp    082eab77 <+0x5d>
082eab72 +0x58:  mov    $0x0,%eax
082eab77 +0x5d:  leave
082eab78 +0x5e:  ret
082eab79 +0x5f:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_IsBroadcastRunaway @ 0x82eab1a

/* pvp_assault::CAssaultPlace::_IsBroadcastRunaway(CUser*) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_IsBroadcastRunaway(CAssaultPlace *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      bVar1 = true;
      goto LAB_082eab4c;
    }
  }
  bVar1 = false;
LAB_082eab4c:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
