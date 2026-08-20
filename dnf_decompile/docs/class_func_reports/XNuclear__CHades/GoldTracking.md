# GoldTracking

`_ZN8XNuclear6CHades12GoldTrackingEhjPcjj`

`XNuclear::CHades::GoldTracking(unsigned char, unsigned int, char*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b949a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b949a  _ZN8XNuclear6CHades12GoldTrackingEhjPcjj
#           XNuclear::CHades::GoldTracking(unsigned char, unsigned int, char*, unsigned int, unsigned int)
# range [0x084b949a, 0x084b953d]
084b949a +0x00:  push   %ebp
084b949b +0x01:  mov    %esp,%ebp
084b949d +0x03:  sub    $0x58,%esp
084b94a0 +0x06:  mov    0xc(%ebp),%eax
084b94a3 +0x09:  mov    %al,-0x3c(%ebp)
084b94a6 +0x0c:  mov    0x8(%ebp),%eax
084b94a9 +0x0f:  mov    %eax,(%esp)
084b94ac +0x12:  call   084b9718 <_ZN8XNuclear6CHades9needLoginEv>  ; XNuclear::CHades::needLogin()
084b94b1 +0x17:  lea    -0x31(%ebp),%eax
084b94b4 +0x1a:  mov    %eax,(%esp)
084b94b7 +0x1d:  call   084b99fa <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0xd0>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0xd0
084b94bc +0x22:  mov    0x8(%ebp),%eax
084b94bf +0x25:  mov    0x20(%eax),%eax
084b94c2 +0x28:  mov    %eax,(%esp)
084b94c5 +0x2b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b94ca +0x30:  mov    %eax,-0x27(%ebp)
084b94cd +0x33:  mov    0x10(%ebp),%eax
084b94d0 +0x36:  mov    %eax,-0x23(%ebp)
084b94d3 +0x39:  movl   $0x10,0x8(%esp)
084b94db +0x41:  movl   $0x0,0x4(%esp)
084b94e3 +0x49:  lea    -0x31(%ebp),%eax
084b94e6 +0x4c:  add    $0x12,%eax
084b94e9 +0x4f:  mov    %eax,(%esp)
084b94ec +0x52:  call   0807dcc0 <_init+0x5b8>
084b94f1 +0x57:  cmpl   $0x0,0x14(%ebp)
084b94f5 +0x5b:  je     084b9514 <+0x7a>
084b94f7 +0x5d:  movl   $0x10,0x8(%esp)
084b94ff +0x65:  mov    0x14(%ebp),%eax
084b9502 +0x68:  mov    %eax,0x4(%esp)
084b9506 +0x6c:  lea    -0x31(%ebp),%eax
084b9509 +0x6f:  add    $0x12,%eax
084b950c +0x72:  mov    %eax,(%esp)
084b950f +0x75:  call   0807d8d0 <_init+0x1c8>
084b9514 +0x7a:  mov    0x18(%ebp),%eax
084b9517 +0x7d:  mov    %eax,-0xf(%ebp)
084b951a +0x80:  mov    0x1c(%ebp),%eax
084b951d +0x83:  mov    %ax,-0xb(%ebp)
084b9521 +0x87:  movzbl -0x3c(%ebp),%eax
084b9525 +0x8b:  mov    %al,-0x9(%ebp)
084b9528 +0x8e:  lea    -0x31(%ebp),%edx
084b952b +0x91:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b9530 +0x96:  mov    %edx,0x4(%esp)
084b9534 +0x9a:  mov    %eax,(%esp)
084b9537 +0x9d:  call   08470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>  ; CHadesServerProxy::SendHadesTcpPacket(char*)
084b953c +0xa2:  leave
084b953d +0xa3:  ret
```

## 反编译 C

```c
// XNuclear::CHades::GoldTracking @ 0x84b949a

/* XNuclear::CHades::GoldTracking(unsigned char, unsigned int, char*, unsigned int, unsigned int) */

void __thiscall
XNuclear::CHades::GoldTracking
          (CHades *this,uchar param_1,uint param_2,char *param_3,uint param_4,uint param_5)

{
  Packet_Hades_GoldTracking local_35 [10];
  undefined4 local_2b;
  uint local_27;
  char acStack_23 [16];
  uint local_13;
  undefined2 local_f;
  uchar local_d;
  
  needLogin(this);
  Packet_Hades_GoldTracking::Packet_Hades_GoldTracking(local_35);
  local_2b = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_27 = param_2;
  memset(acStack_23,0,0x10);
  if (param_3 != (char *)0x0) {
    strncpy(acStack_23,param_3,0x10);
  }
  local_13 = param_4;
  local_f = (undefined2)param_5;
  local_d = param_1;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_35);
  return;
}
```
