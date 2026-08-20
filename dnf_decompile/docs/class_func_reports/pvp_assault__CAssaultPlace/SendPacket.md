# SendPacket

`_ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard`

`pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e6bf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6bf6  _ZN11pvp_assault13CAssaultPlace10SendPacketER11PacketGuard
#           pvp_assault::CAssaultPlace::SendPacket(PacketGuard&)
# range [0x082e6bf6, 0x082e6c55]
082e6bf6 +0x00:  push   %ebp
082e6bf7 +0x01:  mov    %esp,%ebp
082e6bf9 +0x03:  sub    $0x28,%esp
082e6bfc +0x06:  movb   $0x1,-0x11(%ebp)
082e6c00 +0x0a:  movl   $0x0,-0x10(%ebp)
082e6c07 +0x11:  jmp    082e6c44 <+0x4e>
082e6c09 +0x13:  mov    -0x10(%ebp),%eax
082e6c0c +0x16:  shl    $0x5,%eax
082e6c0f +0x19:  add    0x8(%ebp),%eax
082e6c12 +0x1c:  mov    %eax,(%esp)
082e6c15 +0x1f:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e6c1a +0x24:  mov    %eax,-0xc(%ebp)
082e6c1d +0x27:  cmpl   $0x0,-0xc(%ebp)
082e6c21 +0x2b:  je     082e6c40 <+0x4a>
082e6c23 +0x2d:  mov    0xc(%ebp),%eax
082e6c26 +0x30:  mov    %eax,0x4(%esp)
082e6c2a +0x34:  mov    -0xc(%ebp),%eax
082e6c2d +0x37:  mov    %eax,(%esp)
082e6c30 +0x3a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082e6c35 +0x3f:  xor    $0x1,%eax
082e6c38 +0x42:  test   %al,%al
082e6c3a +0x44:  je     082e6c40 <+0x4a>
082e6c3c +0x46:  movb   $0x0,-0x11(%ebp)
082e6c40 +0x4a:  addl   $0x1,-0x10(%ebp)
082e6c44 +0x4e:  cmpl   $0x7,-0x10(%ebp)
082e6c48 +0x52:  setle  %al
082e6c4b +0x55:  test   %al,%al
082e6c4d +0x57:  jne    082e6c09 <+0x13>
082e6c4f +0x59:  movzbl -0x11(%ebp),%eax
082e6c53 +0x5d:  leave
082e6c54 +0x5e:  ret
082e6c55 +0x5f:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::SendPacket @ 0x82e6bf6

/* pvp_assault::CAssaultPlace::SendPacket(PacketGuard&) */

undefined1 __thiscall
pvp_assault::CAssaultPlace::SendPacket(CAssaultPlace *this,PacketGuard *param_1)

{
  char cVar1;
  CUser *this_00;
  undefined1 local_15;
  int local_14;
  
  local_15 = 1;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
    if (this_00 != (CUser *)0x0) {
      cVar1 = CUser::Send(this_00,param_1);
      if (cVar1 != '\x01') {
        local_15 = 0;
      }
    }
  }
  return local_15;
}
```
