# SendNotiPacketMessage

`_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE`

`CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086886ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086886ce  _ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE
#           CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE)
# range [0x086886ce, 0x086887c3]
086886ce +0x00:  push   %ebp
086886cf +0x01:  mov    %esp,%ebp
086886d1 +0x03:  push   %esi
086886d2 +0x04:  push   %ebx
086886d3 +0x05:  sub    $0x20,%esp
086886d6 +0x08:  lea    -0x14(%ebp),%eax
086886d9 +0x0b:  mov    %eax,(%esp)
086886dc +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086886e1 +0x13:  movl   $0xc,0x8(%esp)
086886e9 +0x1b:  movl   $0x0,0x4(%esp)
086886f1 +0x23:  lea    -0x14(%ebp),%eax
086886f4 +0x26:  mov    %eax,(%esp)
086886f7 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086886fc +0x2e:  mov    0x10(%ebp),%eax
086886ff +0x31:  mov    %eax,0x4(%esp)
08688703 +0x35:  lea    -0x14(%ebp),%eax
08688706 +0x38:  mov    %eax,(%esp)
08688709 +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868870e +0x40:  movl   $0x0,0x4(%esp)
08688716 +0x48:  lea    -0x14(%ebp),%eax
08688719 +0x4b:  mov    %eax,(%esp)
0868871c +0x4e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08688721 +0x53:  movl   $0x0,0x4(%esp)
08688729 +0x5b:  lea    -0x14(%ebp),%eax
0868872c +0x5e:  mov    %eax,(%esp)
0868872f +0x61:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08688734 +0x66:  mov    0xc(%ebp),%eax
08688737 +0x69:  mov    %eax,(%esp)
0868873a +0x6c:  call   0807e3b0 <_init+0xca8>
0868873f +0x71:  mov    %eax,0x4(%esp)
08688743 +0x75:  lea    -0x14(%ebp),%eax
08688746 +0x78:  mov    %eax,(%esp)
08688749 +0x7b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868874e +0x80:  mov    0xc(%ebp),%eax
08688751 +0x83:  mov    %eax,(%esp)
08688754 +0x86:  call   0807e3b0 <_init+0xca8>
08688759 +0x8b:  mov    %eax,0x8(%esp)
0868875d +0x8f:  mov    0xc(%ebp),%eax
08688760 +0x92:  mov    %eax,0x4(%esp)
08688764 +0x96:  lea    -0x14(%ebp),%eax
08688767 +0x99:  mov    %eax,(%esp)
0868876a +0x9c:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0868876f +0xa1:  movl   $0x1,0x4(%esp)
08688777 +0xa9:  lea    -0x14(%ebp),%eax
0868877a +0xac:  mov    %eax,(%esp)
0868877d +0xaf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08688782 +0xb4:  lea    -0x14(%ebp),%eax
08688785 +0xb7:  mov    %eax,0x4(%esp)
08688789 +0xbb:  mov    0x8(%ebp),%eax
0868878c +0xbe:  mov    %eax,(%esp)
0868878f +0xc1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08688794 +0xc6:  jmp    086887b1 <+0xe3>
08688796 +0xc8:  mov    %edx,%ebx
08688798 +0xca:  mov    %eax,%esi
0868879a +0xcc:  lea    -0x14(%ebp),%eax
0868879d +0xcf:  mov    %eax,(%esp)
086887a0 +0xd2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086887a5 +0xd7:  mov    %esi,%eax
086887a7 +0xd9:  mov    %ebx,%edx
086887a9 +0xdb:  mov    %eax,(%esp)
086887ac +0xde:  call   08ae3750 <_Unwind_Resume>
086887b1 +0xe3:  lea    -0x14(%ebp),%eax
086887b4 +0xe6:  mov    %eax,(%esp)
086887b7 +0xe9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086887bc +0xee:  add    $0x20,%esp
086887bf +0xf1:  pop    %ebx
086887c0 +0xf2:  pop    %esi
086887c1 +0xf3:  pop    %ebp
086887c2 +0xf4:  ret
086887c3 +0xf5:  nop
```

## 反编译 C

```c
// CUser::SendNotiPacketMessage @ 0x86886ce

/* CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE) */

void __thiscall CUser::SendNotiPacketMessage(CUser *this,char *param_1,int param_3)

{
  size_t sVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086886f7 to 08688793 has its CatchHandler @ 08688796 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  sVar1 = strlen(param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_1);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_1,sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
