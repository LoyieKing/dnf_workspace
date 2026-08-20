# SendPacket

`_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard`

`village_attacked::CVillageMonsterArea::SendPacket(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3b9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3b9c  _ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard
#           village_attacked::CVillageMonsterArea::SendPacket(PacketGuard&)
# range [0x086b3b9c, 0x086b3bd3]
086b3b9c +0x00:  push   %ebp
086b3b9d +0x01:  mov    %esp,%ebp
086b3b9f +0x03:  push   %esi
086b3ba0 +0x04:  push   %ebx
086b3ba1 +0x05:  sub    $0x10,%esp
086b3ba4 +0x08:  mov    0x8(%ebp),%eax
086b3ba7 +0x0b:  mov    0x2c(%eax),%esi
086b3baa +0x0e:  mov    0x8(%ebp),%eax
086b3bad +0x11:  mov    0x28(%eax),%ebx
086b3bb0 +0x14:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086b3bb5 +0x19:  mov    0xc(%ebp),%edx
086b3bb8 +0x1c:  mov    %edx,0xc(%esp)
086b3bbc +0x20:  mov    %esi,0x8(%esp)
086b3bc0 +0x24:  mov    %ebx,0x4(%esp)
086b3bc4 +0x28:  mov    %eax,(%esp)
086b3bc7 +0x2b:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
086b3bcc +0x30:  add    $0x10,%esp
086b3bcf +0x33:  pop    %ebx
086b3bd0 +0x34:  pop    %esi
086b3bd1 +0x35:  pop    %ebp
086b3bd2 +0x36:  ret
086b3bd3 +0x37:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::SendPacket @ 0x86b3b9c

/* village_attacked::CVillageMonsterArea::SendPacket(PacketGuard&) */

void __thiscall
village_attacked::CVillageMonsterArea::SendPacket(CVillageMonsterArea *this,PacketGuard *param_1)

{
  int iVar1;
  int iVar2;
  GameWorld *this_00;
  
  iVar1 = *(int *)(this + 0x2c);
  iVar2 = *(int *)(this + 0x28);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_to_area(this_00,iVar2,iVar1,param_1);
  return;
}
```
