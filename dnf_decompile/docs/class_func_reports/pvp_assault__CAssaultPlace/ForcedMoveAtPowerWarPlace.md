# ForcedMoveAtPowerWarPlace

`_ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser`

`pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ed6a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed6a6  _ZN11pvp_assault13CAssaultPlace25ForcedMoveAtPowerWarPlaceEP5CUser
#           pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace(CUser*)
# range [0x082ed6a6, 0x082ed751]
082ed6a6 +0x00:  push   %ebp
082ed6a7 +0x01:  mov    %esp,%ebp
082ed6a9 +0x03:  sub    $0x38,%esp
082ed6ac +0x06:  mov    &_ZN10GlobalData15s_power_managerE,%eax
082ed6b1 +0x0b:  mov    %eax,(%esp)
082ed6b4 +0x0e:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
082ed6b9 +0x13:  test   %al,%al
082ed6bb +0x15:  je     082ed6d3 <+0x2d>
082ed6bd +0x17:  mov    0x8(%ebp),%eax
082ed6c0 +0x1a:  mov    %eax,(%esp)
082ed6c3 +0x1d:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082ed6c8 +0x22:  cmp    $0x7,%al
082ed6ca +0x24:  jne    082ed6d3 <+0x2d>
082ed6cc +0x26:  mov    $0x1,%eax
082ed6d1 +0x2b:  jmp    082ed6d8 <+0x32>
082ed6d3 +0x2d:  mov    $0x0,%eax
082ed6d8 +0x32:  test   %al,%al
082ed6da +0x34:  je     082ed74f <+0xa9>
082ed6dc +0x36:  mov    0x8(%ebp),%eax
082ed6df +0x39:  mov    %eax,-0x20(%ebp)
082ed6e2 +0x3c:  mov    0x8(%ebp),%eax
082ed6e5 +0x3f:  mov    %eax,(%esp)
082ed6e8 +0x42:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ed6ed +0x47:  cmp    $0x1,%al
082ed6ef +0x49:  sete   %al
082ed6f2 +0x4c:  test   %al,%al
082ed6f4 +0x4e:  je     082ed714 <+0x6e>
082ed6f6 +0x50:  movl   $0x7,-0x1c(%ebp)
082ed6fd +0x57:  movl   $0x0,-0x18(%ebp)
082ed704 +0x5e:  movl   $0x255,-0x14(%ebp)
082ed70b +0x65:  movl   $0x12c,-0x10(%ebp)
082ed712 +0x6c:  jmp    082ed744 <+0x9e>
082ed714 +0x6e:  mov    0x8(%ebp),%eax
082ed717 +0x71:  mov    %eax,(%esp)
082ed71a +0x74:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ed71f +0x79:  cmp    $0x2,%al
082ed721 +0x7b:  sete   %al
082ed724 +0x7e:  test   %al,%al
082ed726 +0x80:  je     082ed744 <+0x9e>
082ed728 +0x82:  movl   $0x7,-0x1c(%ebp)
082ed72f +0x89:  movl   $0x4,-0x18(%ebp)
082ed736 +0x90:  movl   $0x139,-0x14(%ebp)
082ed73d +0x97:  movl   $0x13a,-0x10(%ebp)
082ed744 +0x9e:  lea    -0x28(%ebp),%eax
082ed747 +0xa1:  mov    %eax,(%esp)
082ed74a +0xa4:  call   082e567c <_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv>  ; pvp_assault::CForcedMoveCharacter::ForcedMove()
082ed74f +0xa9:  leave
082ed750 +0xaa:  ret
082ed751 +0xab:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace @ 0x82ed6a6

/* pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace(CUser*) */

void pvp_assault::CAssaultPlace::ForcedMoveAtPowerWarPlace(CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CForcedMoveCharacter local_2c [8];
  CUser *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar2 = CPowerManager::IsPowerWarEventOn();
  if (cVar2 != '\0') {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      bVar1 = true;
      goto LAB_082ed6d8;
    }
  }
  bVar1 = false;
LAB_082ed6d8:
  if (bVar1) {
    local_24 = param_1;
    cVar2 = CUser::getPowerSide(param_1);
    if (cVar2 == '\x01') {
      local_20 = 7;
      local_1c = 0;
      local_18 = 0x255;
      local_14 = 300;
    }
    else {
      cVar2 = CUser::getPowerSide(param_1);
      if (cVar2 == '\x02') {
        local_20 = 7;
        local_1c = 4;
        local_18 = 0x139;
        local_14 = 0x13a;
      }
    }
    CForcedMoveCharacter::ForcedMove(local_2c);
  }
  return;
}
```
