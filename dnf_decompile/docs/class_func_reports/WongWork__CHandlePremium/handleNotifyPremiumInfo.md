# handleNotifyPremiumInfo

`_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii`

`WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHandlePremium` | `0x086af8b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086af8b4  _ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii
#           WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
# range [0x086af8b4, 0x086af96d]
086af8b4 +0x00:  push   %ebp
086af8b5 +0x01:  mov    %esp,%ebp
086af8b7 +0x03:  push   %esi
086af8b8 +0x04:  push   %ebx
086af8b9 +0x05:  sub    $0x20,%esp
086af8bc +0x08:  lea    -0x14(%ebp),%eax
086af8bf +0x0b:  mov    %eax,(%esp)
086af8c2 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086af8c7 +0x13:  movl   $0x42,0x8(%esp)
086af8cf +0x1b:  movl   $0x0,0x4(%esp)
086af8d7 +0x23:  lea    -0x14(%ebp),%eax
086af8da +0x26:  mov    %eax,(%esp)
086af8dd +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086af8e2 +0x2e:  movl   $0x2,0x4(%esp)
086af8ea +0x36:  lea    -0x14(%ebp),%eax
086af8ed +0x39:  mov    %eax,(%esp)
086af8f0 +0x3c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086af8f5 +0x41:  mov    0xc(%ebp),%eax
086af8f8 +0x44:  mov    %eax,0x4(%esp)
086af8fc +0x48:  lea    -0x14(%ebp),%eax
086af8ff +0x4b:  mov    %eax,(%esp)
086af902 +0x4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086af907 +0x53:  mov    0x10(%ebp),%eax
086af90a +0x56:  mov    %eax,0x4(%esp)
086af90e +0x5a:  lea    -0x14(%ebp),%eax
086af911 +0x5d:  mov    %eax,(%esp)
086af914 +0x60:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086af919 +0x65:  movl   $0x1,0x4(%esp)
086af921 +0x6d:  lea    -0x14(%ebp),%eax
086af924 +0x70:  mov    %eax,(%esp)
086af927 +0x73:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086af92c +0x78:  lea    -0x14(%ebp),%eax
086af92f +0x7b:  mov    %eax,0x4(%esp)
086af933 +0x7f:  mov    0x8(%ebp),%eax
086af936 +0x82:  mov    %eax,(%esp)
086af939 +0x85:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086af93e +0x8a:  jmp    086af95b <+0xa7>
086af940 +0x8c:  mov    %edx,%ebx
086af942 +0x8e:  mov    %eax,%esi
086af944 +0x90:  lea    -0x14(%ebp),%eax
086af947 +0x93:  mov    %eax,(%esp)
086af94a +0x96:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086af94f +0x9b:  mov    %esi,%eax
086af951 +0x9d:  mov    %ebx,%edx
086af953 +0x9f:  mov    %eax,(%esp)
086af956 +0xa2:  call   08ae3750 <_Unwind_Resume>
086af95b +0xa7:  lea    -0x14(%ebp),%eax
086af95e +0xaa:  mov    %eax,(%esp)
086af961 +0xad:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086af966 +0xb2:  add    $0x20,%esp
086af969 +0xb5:  pop    %ebx
086af96a +0xb6:  pop    %esi
086af96b +0xb7:  pop    %ebp
086af96c +0xb8:  ret
086af96d +0xb9:  nop
```

## 反编译 C

```c
// WongWork::CHandlePremium::handleNotifyPremiumInfo @ 0x86af8b4

/* WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int) */

void WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser *param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086af8dd to 086af93d has its CatchHandler @ 086af940 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
