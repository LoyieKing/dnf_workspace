# MakeVillageMonsterListPacket

`_ZN16village_attacked15CVillageMonster28MakeVillageMonsterListPacketER11PacketGuard`

`village_attacked::CVillageMonster::MakeVillageMonsterListPacket(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b3666` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3666  _ZN16village_attacked15CVillageMonster28MakeVillageMonsterListPacketER11PacketGuard
#           village_attacked::CVillageMonster::MakeVillageMonsterListPacket(PacketGuard&)
# range [0x086b3666, 0x086b36e5]
086b3666 +0x00:  push   %ebp
086b3667 +0x01:  mov    %esp,%ebp
086b3669 +0x03:  sub    $0x18,%esp
086b366c +0x06:  mov    0x8(%ebp),%eax
086b366f +0x09:  movzwl (%eax),%eax
086b3672 +0x0c:  movzwl %ax,%edx
086b3675 +0x0f:  mov    0xc(%ebp),%eax
086b3678 +0x12:  mov    %edx,0x4(%esp)
086b367c +0x16:  mov    %eax,(%esp)
086b367f +0x19:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b3684 +0x1e:  mov    0x8(%ebp),%eax
086b3687 +0x21:  movzwl 0x2(%eax),%eax
086b368b +0x25:  movzwl %ax,%edx
086b368e +0x28:  mov    0xc(%ebp),%eax
086b3691 +0x2b:  mov    %edx,0x4(%esp)
086b3695 +0x2f:  mov    %eax,(%esp)
086b3698 +0x32:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b369d +0x37:  mov    0x8(%ebp),%eax
086b36a0 +0x3a:  mov    0x14(%eax),%eax
086b36a3 +0x3d:  mov    %eax,%edx
086b36a5 +0x3f:  mov    0xc(%ebp),%eax
086b36a8 +0x42:  mov    %edx,0x4(%esp)
086b36ac +0x46:  mov    %eax,(%esp)
086b36af +0x49:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b36b4 +0x4e:  mov    0x8(%ebp),%eax
086b36b7 +0x51:  mov    0x4(%eax),%edx
086b36ba +0x54:  mov    0xc(%ebp),%eax
086b36bd +0x57:  mov    %edx,0x4(%esp)
086b36c1 +0x5b:  mov    %eax,(%esp)
086b36c4 +0x5e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b36c9 +0x63:  mov    0x8(%ebp),%eax
086b36cc +0x66:  mov    0x8(%eax),%edx
086b36cf +0x69:  mov    0xc(%ebp),%eax
086b36d2 +0x6c:  mov    %edx,0x4(%esp)
086b36d6 +0x70:  mov    %eax,(%esp)
086b36d9 +0x73:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b36de +0x78:  mov    $0x1,%eax
086b36e3 +0x7d:  leave
086b36e4 +0x7e:  ret
086b36e5 +0x7f:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonster::MakeVillageMonsterListPacket @ 0x86b3666

/* village_attacked::CVillageMonster::MakeVillageMonsterListPacket(PacketGuard&) */

undefined4 __thiscall
village_attacked::CVillageMonster::MakeVillageMonsterListPacket
          (CVillageMonster *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + 2));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 8));
  return 1;
}
```
