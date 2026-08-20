# MakeSelectPacket

`_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard`

`CTournamentDungeonReward::MakeSelectPacket(PacketGuard*)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284fa4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284fa4  _ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard
#           CTournamentDungeonReward::MakeSelectPacket(PacketGuard*)
# range [0x08284fa4, 0x0828502d]
08284fa4 +0x00:  push   %ebp
08284fa5 +0x01:  mov    %esp,%ebp
08284fa7 +0x03:  push   %ebx
08284fa8 +0x04:  sub    $0x24,%esp
08284fab +0x07:  movl   $0x0,-0x10(%ebp)
08284fb2 +0x0e:  jmp    0828501c <+0x78>
08284fb4 +0x10:  mov    0xc(%ebp),%eax
08284fb7 +0x13:  movl   $0x2,0x4(%esp)
08284fbf +0x1b:  mov    %eax,(%esp)
08284fc2 +0x1e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08284fc7 +0x23:  movl   $0x0,-0xc(%ebp)
08284fce +0x2a:  jmp    0828500d <+0x69>
08284fd0 +0x2c:  mov    -0x10(%ebp),%edx
08284fd3 +0x2f:  mov    -0xc(%ebp),%ecx
08284fd6 +0x32:  mov    0x8(%ebp),%ebx
08284fd9 +0x35:  mov    %ecx,%eax
08284fdb +0x37:  add    %eax,%eax
08284fdd +0x39:  add    %ecx,%eax
08284fdf +0x3b:  lea    0x0(,%eax,4),%ecx
08284fe6 +0x42:  mov    %edx,%eax
08284fe8 +0x44:  add    %eax,%eax
08284fea +0x46:  add    %edx,%eax
08284fec +0x48:  shl    $0x3,%eax
08284fef +0x4b:  lea    (%ecx,%eax,1),%eax
08284ff2 +0x4e:  movzbl 0x10(%eax,%ebx,1),%eax
08284ff7 +0x53:  movsbl %al,%edx
08284ffa +0x56:  mov    0xc(%ebp),%eax
08284ffd +0x59:  mov    %edx,0x4(%esp)
08285001 +0x5d:  mov    %eax,(%esp)
08285004 +0x60:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08285009 +0x65:  addl   $0x1,-0xc(%ebp)
0828500d +0x69:  cmpl   $0x1,-0xc(%ebp)
08285011 +0x6d:  setle  %al
08285014 +0x70:  test   %al,%al
08285016 +0x72:  jne    08284fd0 <+0x2c>
08285018 +0x74:  addl   $0x1,-0x10(%ebp)
0828501c +0x78:  cmpl   $0x1,-0x10(%ebp)
08285020 +0x7c:  setle  %al
08285023 +0x7f:  test   %al,%al
08285025 +0x81:  jne    08284fb4 <+0x10>
08285027 +0x83:  add    $0x24,%esp
0828502a +0x86:  pop    %ebx
0828502b +0x87:  pop    %ebp
0828502c +0x88:  ret
0828502d +0x89:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::MakeSelectPacket @ 0x8284fa4

/* CTournamentDungeonReward::MakeSelectPacket(PacketGuard*) */

void __thiscall
CTournamentDungeonReward::MakeSelectPacket(CTournamentDungeonReward *this,PacketGuard *param_1)

{
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,2);
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)param_1,
                 (int)(char)this[local_10 * 0xc + local_14 * 0x18 + 0x10]);
    }
  }
  return;
}
```
