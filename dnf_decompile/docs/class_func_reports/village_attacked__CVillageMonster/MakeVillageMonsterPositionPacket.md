# MakeVillageMonsterPositionPacket

`_ZN16village_attacked15CVillageMonster32MakeVillageMonsterPositionPacketER11PacketGuard`

`village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b36e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b36e6  _ZN16village_attacked15CVillageMonster32MakeVillageMonsterPositionPacketER11PacketGuard
#           village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket(PacketGuard&)
# range [0x086b36e6, 0x086b3751]
086b36e6 +0x00:  push   %ebp
086b36e7 +0x01:  mov    %esp,%ebp
086b36e9 +0x03:  sub    $0x18,%esp
086b36ec +0x06:  mov    0x8(%ebp),%eax
086b36ef +0x09:  movzbl 0x10(%eax),%eax
086b36f3 +0x0d:  xor    $0x1,%eax
086b36f6 +0x10:  test   %al,%al
086b36f8 +0x12:  je     086b3701 <+0x1b>
086b36fa +0x14:  mov    $0x0,%eax
086b36ff +0x19:  jmp    086b374f <+0x69>
086b3701 +0x1b:  mov    0x8(%ebp),%eax
086b3704 +0x1e:  movzwl (%eax),%eax
086b3707 +0x21:  movzwl %ax,%edx
086b370a +0x24:  mov    0xc(%ebp),%eax
086b370d +0x27:  mov    %edx,0x4(%esp)
086b3711 +0x2b:  mov    %eax,(%esp)
086b3714 +0x2e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b3719 +0x33:  mov    0x8(%ebp),%eax
086b371c +0x36:  mov    0x4(%eax),%edx
086b371f +0x39:  mov    0xc(%ebp),%eax
086b3722 +0x3c:  mov    %edx,0x4(%esp)
086b3726 +0x40:  mov    %eax,(%esp)
086b3729 +0x43:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b372e +0x48:  mov    0x8(%ebp),%eax
086b3731 +0x4b:  mov    0x8(%eax),%edx
086b3734 +0x4e:  mov    0xc(%ebp),%eax
086b3737 +0x51:  mov    %edx,0x4(%esp)
086b373b +0x55:  mov    %eax,(%esp)
086b373e +0x58:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b3743 +0x5d:  mov    0x8(%ebp),%eax
086b3746 +0x60:  movb   $0x0,0x10(%eax)
086b374a +0x64:  mov    $0x1,%eax
086b374f +0x69:  leave
086b3750 +0x6a:  ret
086b3751 +0x6b:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket @ 0x86b36e6

/* village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket(PacketGuard&) */

bool __thiscall
village_attacked::CVillageMonster::MakeVillageMonsterPositionPacket
          (CVillageMonster *this,PacketGuard *param_1)

{
  CVillageMonster CVar1;
  
  CVar1 = this[0x10];
  if (CVar1 == (CVillageMonster)0x1) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)this);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 8));
    this[0x10] = (CVillageMonster)0x0;
  }
  return CVar1 == (CVillageMonster)0x1;
}
```
