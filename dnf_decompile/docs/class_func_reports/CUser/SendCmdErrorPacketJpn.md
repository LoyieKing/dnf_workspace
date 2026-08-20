# SendCmdErrorPacketJpn

`_ZN5CUser21SendCmdErrorPacketJpnE14ENUM_CMDPACKETt`

`CUser::SendCmdErrorPacketJpn(ENUM_CMDPACKET, unsigned short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692824` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692824  _ZN5CUser21SendCmdErrorPacketJpnE14ENUM_CMDPACKETt
#           CUser::SendCmdErrorPacketJpn(ENUM_CMDPACKET, unsigned short)
# range [0x08692824, 0x086928c1]
08692824 +0x00:  push   %ebp
08692825 +0x01:  mov    %esp,%ebp
08692827 +0x03:  push   %esi
08692828 +0x04:  push   %ebx
08692829 +0x05:  sub    $0x30,%esp
0869282c +0x08:  mov    0x10(%ebp),%eax
0869282f +0x0b:  mov    %ax,-0x1c(%ebp)
08692833 +0x0f:  lea    -0x14(%ebp),%eax
08692836 +0x12:  mov    %eax,(%esp)
08692839 +0x15:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0869283e +0x1a:  movl   $0x0,0x8(%esp)
08692846 +0x22:  mov    0xc(%ebp),%eax
08692849 +0x25:  mov    %eax,0x4(%esp)
0869284d +0x29:  lea    -0x14(%ebp),%eax
08692850 +0x2c:  mov    %eax,(%esp)
08692853 +0x2f:  call   08197812 <_ZN4ARAD10DISPATCHER25make_cmd_packetheader_jpnER11PacketGuard14ENUM_CMDPACKETb>  ; ARAD::DISPATCHER::make_cmd_packetheader_jpn(PacketGuard&, ENUM_CMDPACKET, bool)
08692858 +0x34:  movzwl -0x1c(%ebp),%eax
0869285c +0x38:  mov    %eax,0x4(%esp)
08692860 +0x3c:  lea    -0x14(%ebp),%eax
08692863 +0x3f:  mov    %eax,(%esp)
08692866 +0x42:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0869286b +0x47:  movl   $0x1,0x4(%esp)
08692873 +0x4f:  lea    -0x14(%ebp),%eax
08692876 +0x52:  mov    %eax,(%esp)
08692879 +0x55:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0869287e +0x5a:  lea    -0x14(%ebp),%eax
08692881 +0x5d:  mov    %eax,0x4(%esp)
08692885 +0x61:  mov    0x8(%ebp),%eax
08692888 +0x64:  mov    %eax,(%esp)
0869288b +0x67:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08692890 +0x6c:  mov    %eax,%ebx
08692892 +0x6e:  lea    -0x14(%ebp),%eax
08692895 +0x71:  mov    %eax,(%esp)
08692898 +0x74:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0869289d +0x79:  mov    %ebx,%eax
0869289f +0x7b:  add    $0x30,%esp
086928a2 +0x7e:  pop    %ebx
086928a3 +0x7f:  pop    %esi
086928a4 +0x80:  pop    %ebp
086928a5 +0x81:  ret
086928a6 +0x82:  mov    %edx,%ebx
086928a8 +0x84:  mov    %eax,%esi
086928aa +0x86:  lea    -0x14(%ebp),%eax
086928ad +0x89:  mov    %eax,(%esp)
086928b0 +0x8c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086928b5 +0x91:  mov    %esi,%eax
086928b7 +0x93:  mov    %ebx,%edx
086928b9 +0x95:  mov    %eax,(%esp)
086928bc +0x98:  call   08ae3750 <_Unwind_Resume>
086928c1 +0x9d:  nop
```

## 反编译 C

```c
// CUser::SendCmdErrorPacketJpn @ 0x8692824

/* CUser::SendCmdErrorPacketJpn(ENUM_CMDPACKET, unsigned short) */

undefined4 __thiscall CUser::SendCmdErrorPacketJpn(CUser *this,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08692853 to 0869288f has its CatchHandler @ 086928a6 */
  ARAD::DISPATCHER::make_cmd_packetheader_jpn(local_18,param_2,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  uVar1 = Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return uVar1;
}
```
