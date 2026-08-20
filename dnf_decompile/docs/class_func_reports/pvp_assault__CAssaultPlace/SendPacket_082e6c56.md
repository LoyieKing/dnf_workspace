# SendPacket

`_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM`

`pvp_assault::CAssaultPlace::SendPacket(PacketGuard&, ENUM_ASSAULT_TEAM)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e6c56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6c56  _ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard17ENUM_ASSAULT_TEAM
#           pvp_assault::CAssaultPlace::SendPacket(PacketGuard&, ENUM_ASSAULT_TEAM)
# range [0x082e6c56, 0x082e6cdb]
082e6c56 +0x00:  push   %ebp
082e6c57 +0x01:  mov    %esp,%ebp
082e6c59 +0x03:  sub    $0x28,%esp
082e6c5c +0x06:  movb   $0x1,-0x11(%ebp)
082e6c60 +0x0a:  movl   $0x0,-0x10(%ebp)
082e6c67 +0x11:  jmp    082e6cca <+0x74>
082e6c69 +0x13:  mov    -0x10(%ebp),%eax
082e6c6c +0x16:  shl    $0x5,%eax
082e6c6f +0x19:  add    0x8(%ebp),%eax
082e6c72 +0x1c:  mov    %eax,(%esp)
082e6c75 +0x1f:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e6c7a +0x24:  mov    %eax,-0xc(%ebp)
082e6c7d +0x27:  cmpl   $0x0,-0xc(%ebp)
082e6c81 +0x2b:  je     082e6ca0 <+0x4a>
082e6c83 +0x2d:  mov    -0x10(%ebp),%eax
082e6c86 +0x30:  shl    $0x5,%eax
082e6c89 +0x33:  add    0x8(%ebp),%eax
082e6c8c +0x36:  mov    %eax,(%esp)
082e6c8f +0x39:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e6c94 +0x3e:  cmp    0x10(%ebp),%eax
082e6c97 +0x41:  jne    082e6ca0 <+0x4a>
082e6c99 +0x43:  mov    $0x1,%eax
082e6c9e +0x48:  jmp    082e6ca5 <+0x4f>
082e6ca0 +0x4a:  mov    $0x0,%eax
082e6ca5 +0x4f:  test   %al,%al
082e6ca7 +0x51:  je     082e6cc6 <+0x70>
082e6ca9 +0x53:  mov    0xc(%ebp),%eax
082e6cac +0x56:  mov    %eax,0x4(%esp)
082e6cb0 +0x5a:  mov    -0xc(%ebp),%eax
082e6cb3 +0x5d:  mov    %eax,(%esp)
082e6cb6 +0x60:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082e6cbb +0x65:  xor    $0x1,%eax
082e6cbe +0x68:  test   %al,%al
082e6cc0 +0x6a:  je     082e6cc6 <+0x70>
082e6cc2 +0x6c:  movb   $0x0,-0x11(%ebp)
082e6cc6 +0x70:  addl   $0x1,-0x10(%ebp)
082e6cca +0x74:  cmpl   $0x7,-0x10(%ebp)
082e6cce +0x78:  setle  %al
082e6cd1 +0x7b:  test   %al,%al
082e6cd3 +0x7d:  jne    082e6c69 <+0x13>
082e6cd5 +0x7f:  movzbl -0x11(%ebp),%eax
082e6cd9 +0x83:  leave
082e6cda +0x84:  ret
082e6cdb +0x85:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::SendPacket @ 0x82e6c56

/* pvp_assault::CAssaultPlace::SendPacket(PacketGuard&, ENUM_ASSAULT_TEAM) */

undefined1 __thiscall
pvp_assault::CAssaultPlace::SendPacket(CAssaultPlace *this,PacketGuard *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  CUser *this_00;
  int iVar3;
  undefined1 local_15;
  int local_14;
  
  local_15 = 1;
  local_14 = 0;
  do {
    if (7 < local_14) {
      return local_15;
    }
    this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
    if (this_00 == (CUser *)0x0) {
LAB_082e6ca0:
      bVar1 = false;
    }
    else {
      iVar3 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
      if (iVar3 != param_3) goto LAB_082e6ca0;
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = CUser::Send(this_00,param_1);
      if (cVar2 != '\x01') {
        local_15 = 0;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
