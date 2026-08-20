# _sendPremiumPacket

`_ZN8WongWork9CCeraShop18_sendPremiumPacketEP5CUseriii`

`WongWork::CCeraShop::_sendPremiumPacket(CUser*, int, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x083277dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083277dc  _ZN8WongWork9CCeraShop18_sendPremiumPacketEP5CUseriii
#           WongWork::CCeraShop::_sendPremiumPacket(CUser*, int, int, int)
# range [0x083277dc, 0x08327893]
083277dc +0x00:  push   %ebp
083277dd +0x01:  mov    %esp,%ebp
083277df +0x03:  push   %esi
083277e0 +0x04:  push   %ebx
083277e1 +0x05:  sub    $0x20,%esp
083277e4 +0x08:  lea    -0x14(%ebp),%eax
083277e7 +0x0b:  mov    %eax,(%esp)
083277ea +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
083277ef +0x13:  movl   $0x42,0x8(%esp)
083277f7 +0x1b:  movl   $0x0,0x4(%esp)
083277ff +0x23:  lea    -0x14(%ebp),%eax
08327802 +0x26:  mov    %eax,(%esp)
08327805 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0832780a +0x2e:  mov    0x10(%ebp),%eax
0832780d +0x31:  mov    %eax,0x4(%esp)
08327811 +0x35:  lea    -0x14(%ebp),%eax
08327814 +0x38:  mov    %eax,(%esp)
08327817 +0x3b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0832781c +0x40:  mov    0x14(%ebp),%eax
0832781f +0x43:  mov    %eax,0x4(%esp)
08327823 +0x47:  lea    -0x14(%ebp),%eax
08327826 +0x4a:  mov    %eax,(%esp)
08327829 +0x4d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0832782e +0x52:  mov    0x18(%ebp),%eax
08327831 +0x55:  mov    %eax,0x4(%esp)
08327835 +0x59:  lea    -0x14(%ebp),%eax
08327838 +0x5c:  mov    %eax,(%esp)
0832783b +0x5f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08327840 +0x64:  movl   $0x1,0x4(%esp)
08327848 +0x6c:  lea    -0x14(%ebp),%eax
0832784b +0x6f:  mov    %eax,(%esp)
0832784e +0x72:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08327853 +0x77:  lea    -0x14(%ebp),%eax
08327856 +0x7a:  mov    %eax,0x4(%esp)
0832785a +0x7e:  mov    0xc(%ebp),%eax
0832785d +0x81:  mov    %eax,(%esp)
08327860 +0x84:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08327865 +0x89:  jmp    08327882 <+0xa6>
08327867 +0x8b:  mov    %edx,%ebx
08327869 +0x8d:  mov    %eax,%esi
0832786b +0x8f:  lea    -0x14(%ebp),%eax
0832786e +0x92:  mov    %eax,(%esp)
08327871 +0x95:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08327876 +0x9a:  mov    %esi,%eax
08327878 +0x9c:  mov    %ebx,%edx
0832787a +0x9e:  mov    %eax,(%esp)
0832787d +0xa1:  call   08ae3750 <_Unwind_Resume>
08327882 +0xa6:  lea    -0x14(%ebp),%eax
08327885 +0xa9:  mov    %eax,(%esp)
08327888 +0xac:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0832788d +0xb1:  add    $0x20,%esp
08327890 +0xb4:  pop    %ebx
08327891 +0xb5:  pop    %esi
08327892 +0xb6:  pop    %ebp
08327893 +0xb7:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_sendPremiumPacket @ 0x83277dc

/* WongWork::CCeraShop::_sendPremiumPacket(CUser*, int, int, int) */

void __thiscall
WongWork::CCeraShop::_sendPremiumPacket
          (CCeraShop *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08327805 to 08327864 has its CatchHandler @ 08327867 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
