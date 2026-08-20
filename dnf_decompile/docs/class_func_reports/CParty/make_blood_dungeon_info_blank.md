# make_blood_dungeon_info_blank

`_ZN6CParty29make_blood_dungeon_info_blankER11PacketGuard`

`CParty::make_blood_dungeon_info_blank(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859e480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859e480  _ZN6CParty29make_blood_dungeon_info_blankER11PacketGuard
#           CParty::make_blood_dungeon_info_blank(PacketGuard&)
# range [0x0859e480, 0x0859e527]
0859e480 +0x00:  push   %ebp
0859e481 +0x01:  mov    %esp,%ebp
0859e483 +0x03:  sub    $0x28,%esp
0859e486 +0x06:  mov    0x8(%ebp),%eax
0859e489 +0x09:  mov    %eax,(%esp)
0859e48c +0x0c:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859e491 +0x11:  mov    0xc(%ebp),%edx
0859e494 +0x14:  mov    %eax,0x4(%esp)
0859e498 +0x18:  mov    %edx,(%esp)
0859e49b +0x1b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859e4a0 +0x20:  movl   $0x0,-0xc(%ebp)
0859e4a7 +0x27:  jmp    0859e507 <+0x87>
0859e4a9 +0x29:  mov    -0xc(%ebp),%eax
0859e4ac +0x2c:  mov    %eax,0x4(%esp)
0859e4b0 +0x30:  mov    0x8(%ebp),%eax
0859e4b3 +0x33:  mov    %eax,(%esp)
0859e4b6 +0x36:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859e4bb +0x3b:  test   %al,%al
0859e4bd +0x3d:  je     0859e503 <+0x83>
0859e4bf +0x3f:  mov    -0xc(%ebp),%edx
0859e4c2 +0x42:  mov    0x8(%ebp),%ecx
0859e4c5 +0x45:  mov    %edx,%eax
0859e4c7 +0x47:  add    %eax,%eax
0859e4c9 +0x49:  add    %edx,%eax
0859e4cb +0x4b:  shl    $0x3,%eax
0859e4ce +0x4e:  lea    (%ecx,%eax,1),%eax
0859e4d1 +0x51:  add    $0x78,%eax
0859e4d4 +0x54:  mov    (%eax),%eax
0859e4d6 +0x56:  mov    %eax,(%esp)
0859e4d9 +0x59:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0859e4de +0x5e:  movzwl %ax,%edx
0859e4e1 +0x61:  mov    0xc(%ebp),%eax
0859e4e4 +0x64:  mov    %edx,0x4(%esp)
0859e4e8 +0x68:  mov    %eax,(%esp)
0859e4eb +0x6b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859e4f0 +0x70:  mov    0xc(%ebp),%eax
0859e4f3 +0x73:  movl   $0x0,0x4(%esp)
0859e4fb +0x7b:  mov    %eax,(%esp)
0859e4fe +0x7e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859e503 +0x83:  addl   $0x1,-0xc(%ebp)
0859e507 +0x87:  cmpl   $0x3,-0xc(%ebp)
0859e50b +0x8b:  setle  %al
0859e50e +0x8e:  test   %al,%al
0859e510 +0x90:  jne    0859e4a9 <+0x29>
0859e512 +0x92:  mov    0xc(%ebp),%eax
0859e515 +0x95:  movl   $0x0,0x4(%esp)
0859e51d +0x9d:  mov    %eax,(%esp)
0859e520 +0xa0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859e525 +0xa5:  leave
0859e526 +0xa6:  ret
0859e527 +0xa7:  nop
```

## 反编译 C

```c
// CParty::make_blood_dungeon_info_blank @ 0x859e480

/* CParty::make_blood_dungeon_info_blank(PacketGuard&) */

void __thiscall CParty::make_blood_dungeon_info_blank(CParty *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  
  iVar2 = get_member_count(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar2);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 != '\0') {
      uVar3 = CUser::get_unique_id(*(CUser **)(this + local_10 * 0x18 + 0x78));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar3 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    }
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
  return;
}
```
