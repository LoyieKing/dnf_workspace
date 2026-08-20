# BloodCrazyMonsterSpawnPacket

`_ZN13CBattle_Field28BloodCrazyMonsterSpawnPacketEv`

`CBattle_Field::BloodCrazyMonsterSpawnPacket()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08305d0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08305d0c  _ZN13CBattle_Field28BloodCrazyMonsterSpawnPacketEv
#           CBattle_Field::BloodCrazyMonsterSpawnPacket()
# range [0x08305d0c, 0x08305dc3]
08305d0c +0x00:  push   %ebp
08305d0d +0x01:  mov    %esp,%ebp
08305d0f +0x03:  push   %esi
08305d10 +0x04:  push   %ebx
08305d11 +0x05:  sub    $0x20,%esp
08305d14 +0x08:  lea    -0x14(%ebp),%eax
08305d17 +0x0b:  mov    %eax,(%esp)
08305d1a +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08305d1f +0x13:  movl   $0xd5,0x8(%esp)
08305d27 +0x1b:  movl   $0x0,0x4(%esp)
08305d2f +0x23:  lea    -0x14(%ebp),%eax
08305d32 +0x26:  mov    %eax,(%esp)
08305d35 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08305d3a +0x2e:  mov    0x8(%ebp),%eax
08305d3d +0x31:  mov    0x2a4(%eax),%eax
08305d43 +0x37:  mov    %eax,0x4(%esp)
08305d47 +0x3b:  lea    -0x14(%ebp),%eax
08305d4a +0x3e:  mov    %eax,(%esp)
08305d4d +0x41:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08305d52 +0x46:  mov    0x8(%ebp),%eax
08305d55 +0x49:  movzbl 0x2aa(%eax),%eax
08305d5c +0x50:  movsbl %al,%eax
08305d5f +0x53:  mov    %eax,0x4(%esp)
08305d63 +0x57:  lea    -0x14(%ebp),%eax
08305d66 +0x5a:  mov    %eax,(%esp)
08305d69 +0x5d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08305d6e +0x62:  movl   $0x1,0x4(%esp)
08305d76 +0x6a:  lea    -0x14(%ebp),%eax
08305d79 +0x6d:  mov    %eax,(%esp)
08305d7c +0x70:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08305d81 +0x75:  mov    0x8(%ebp),%eax
08305d84 +0x78:  mov    (%eax),%eax
08305d86 +0x7a:  lea    -0x14(%ebp),%edx
08305d89 +0x7d:  mov    %edx,0x4(%esp)
08305d8d +0x81:  mov    %eax,(%esp)
08305d90 +0x84:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
08305d95 +0x89:  jmp    08305db2 <+0xa6>
08305d97 +0x8b:  mov    %edx,%ebx
08305d99 +0x8d:  mov    %eax,%esi
08305d9b +0x8f:  lea    -0x14(%ebp),%eax
08305d9e +0x92:  mov    %eax,(%esp)
08305da1 +0x95:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08305da6 +0x9a:  mov    %esi,%eax
08305da8 +0x9c:  mov    %ebx,%edx
08305daa +0x9e:  mov    %eax,(%esp)
08305dad +0xa1:  call   08ae3750 <_Unwind_Resume>
08305db2 +0xa6:  lea    -0x14(%ebp),%eax
08305db5 +0xa9:  mov    %eax,(%esp)
08305db8 +0xac:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08305dbd +0xb1:  add    $0x20,%esp
08305dc0 +0xb4:  pop    %ebx
08305dc1 +0xb5:  pop    %esi
08305dc2 +0xb6:  pop    %ebp
08305dc3 +0xb7:  ret
```

## 反编译 C

```c
// CBattle_Field::BloodCrazyMonsterSpawnPacket @ 0x8305d0c

/* CBattle_Field::BloodCrazyMonsterSpawnPacket() */

void __thiscall CBattle_Field::BloodCrazyMonsterSpawnPacket(CBattle_Field *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08305d35 to 08305d94 has its CatchHandler @ 08305d97 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xd5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(this + 0x2a4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)this[0x2aa]);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CParty::send_to_party(*(CParty **)this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
