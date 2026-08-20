# OnChangeState

`_ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE`

`village_attacked::CVillageMonster::OnChangeState(village_attacked::ENUM_VILLAGE_MONSTER_STATE)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonster` | `0x086b35a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b35a0  _ZN16village_attacked15CVillageMonster13OnChangeStateENS_26ENUM_VILLAGE_MONSTER_STATEE
#           village_attacked::CVillageMonster::OnChangeState(village_attacked::ENUM_VILLAGE_MONSTER_STATE)
# range [0x086b35a0, 0x086b3665]
086b35a0 +0x00:  push   %ebp
086b35a1 +0x01:  mov    %esp,%ebp
086b35a3 +0x03:  push   %esi
086b35a4 +0x04:  push   %ebx
086b35a5 +0x05:  sub    $0x20,%esp
086b35a8 +0x08:  mov    0x8(%ebp),%eax
086b35ab +0x0b:  mov    0xc(%ebp),%edx
086b35ae +0x0e:  mov    %edx,0x14(%eax)
086b35b1 +0x11:  lea    -0x14(%ebp),%eax
086b35b4 +0x14:  mov    %eax,(%esp)
086b35b7 +0x17:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086b35bc +0x1c:  lea    -0x14(%ebp),%eax
086b35bf +0x1f:  mov    %eax,(%esp)
086b35c2 +0x22:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086b35c7 +0x27:  movl   $0xf0,0x8(%esp)
086b35cf +0x2f:  movl   $0x0,0x4(%esp)
086b35d7 +0x37:  lea    -0x14(%ebp),%eax
086b35da +0x3a:  mov    %eax,(%esp)
086b35dd +0x3d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086b35e2 +0x42:  mov    0x8(%ebp),%eax
086b35e5 +0x45:  mov    0x14(%eax),%eax
086b35e8 +0x48:  mov    %eax,0x4(%esp)
086b35ec +0x4c:  lea    -0x14(%ebp),%eax
086b35ef +0x4f:  mov    %eax,(%esp)
086b35f2 +0x52:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086b35f7 +0x57:  mov    0x8(%ebp),%eax
086b35fa +0x5a:  movzwl (%eax),%eax
086b35fd +0x5d:  movzwl %ax,%eax
086b3600 +0x60:  mov    %eax,0x4(%esp)
086b3604 +0x64:  lea    -0x14(%ebp),%eax
086b3607 +0x67:  mov    %eax,(%esp)
086b360a +0x6a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086b360f +0x6f:  movl   $0x1,0x4(%esp)
086b3617 +0x77:  lea    -0x14(%ebp),%eax
086b361a +0x7a:  mov    %eax,(%esp)
086b361d +0x7d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086b3622 +0x82:  mov    0x8(%ebp),%eax
086b3625 +0x85:  mov    0x1c(%eax),%eax
086b3628 +0x88:  lea    -0x14(%ebp),%edx
086b362b +0x8b:  mov    %edx,0x4(%esp)
086b362f +0x8f:  mov    %eax,(%esp)
086b3632 +0x92:  call   086b3b9c <_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard>  ; village_attacked::CVillageMonsterArea::SendPacket(PacketGuard&)
086b3637 +0x97:  jmp    086b3654 <+0xb4>
086b3639 +0x99:  mov    %edx,%ebx
086b363b +0x9b:  mov    %eax,%esi
086b363d +0x9d:  lea    -0x14(%ebp),%eax
086b3640 +0xa0:  mov    %eax,(%esp)
086b3643 +0xa3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b3648 +0xa8:  mov    %esi,%eax
086b364a +0xaa:  mov    %ebx,%edx
086b364c +0xac:  mov    %eax,(%esp)
086b364f +0xaf:  call   08ae3750 <_Unwind_Resume>
086b3654 +0xb4:  lea    -0x14(%ebp),%eax
086b3657 +0xb7:  mov    %eax,(%esp)
086b365a +0xba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086b365f +0xbf:  add    $0x20,%esp
086b3662 +0xc2:  pop    %ebx
086b3663 +0xc3:  pop    %esi
086b3664 +0xc4:  pop    %ebp
086b3665 +0xc5:  ret
```

## 反编译 C

```c
// village_attacked::CVillageMonster::OnChangeState @ 0x86b35a0

/* village_attacked::CVillageMonster::OnChangeState(village_attacked::ENUM_VILLAGE_MONSTER_STATE) */

void __thiscall
village_attacked::CVillageMonster::OnChangeState(CVillageMonster *this,undefined4 param_2)

{
  PacketGuard local_18 [12];
  
  *(undefined4 *)(this + 0x14) = param_2;
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086b35c2 to 086b3636 has its CatchHandler @ 086b3639 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xf0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,*(int *)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(uint)*(ushort *)this);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CVillageMonsterArea::SendPacket(*(CVillageMonsterArea **)(this + 0x1c),local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
