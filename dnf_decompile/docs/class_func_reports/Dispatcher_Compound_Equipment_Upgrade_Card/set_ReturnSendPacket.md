# set_ReturnSendPacket

`_ZNK42Dispatcher_Compound_Equipment_Upgrade_Card20set_ReturnSendPacketER11PacketGuardti`

`Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket(PacketGuard&, unsigned short, int) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_Equipment_Upgrade_Card` | `0x08228a2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08228a2e  _ZNK42Dispatcher_Compound_Equipment_Upgrade_Card20set_ReturnSendPacketER11PacketGuardti
#           Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket(PacketGuard&, unsigned short, int) const
# range [0x08228a2e, 0x08228a75]
08228a2e +0x00:  push   %ebp
08228a2f +0x01:  mov    %esp,%ebp
08228a31 +0x03:  sub    $0x28,%esp
08228a34 +0x06:  mov    0x10(%ebp),%eax
08228a37 +0x09:  mov    %ax,-0xc(%ebp)
08228a3b +0x0d:  mov    0xc(%ebp),%eax
08228a3e +0x10:  movl   $0x0,0x4(%esp)
08228a46 +0x18:  mov    %eax,(%esp)
08228a49 +0x1b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08228a4e +0x20:  movzwl -0xc(%ebp),%edx
08228a52 +0x24:  mov    0xc(%ebp),%eax
08228a55 +0x27:  mov    %edx,0x4(%esp)
08228a59 +0x2b:  mov    %eax,(%esp)
08228a5c +0x2e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08228a61 +0x33:  mov    0xc(%ebp),%eax
08228a64 +0x36:  mov    0x14(%ebp),%edx
08228a67 +0x39:  mov    %edx,0x4(%esp)
08228a6b +0x3d:  mov    %eax,(%esp)
08228a6e +0x40:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08228a73 +0x45:  leave
08228a74 +0x46:  ret
08228a75 +0x47:  nop
```

## 反编译 C

```c
// Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket @ 0x8228a2e

/* Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket(PacketGuard&, unsigned short,
   int) const */

void __thiscall
Dispatcher_Compound_Equipment_Upgrade_Card::set_ReturnSendPacket
          (Dispatcher_Compound_Equipment_Upgrade_Card *this,PacketGuard *param_1,ushort param_2,
          int param_3)

{
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,param_3);
  return;
}
```
