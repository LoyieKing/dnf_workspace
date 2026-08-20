# GoldPlus

`_ZN8XNuclear6CHades8GoldPlusEjNS_24ENUM_GOLD_CONTROL_REASONE`

`XNuclear::CHades::GoldPlus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b93fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b93fa  _ZN8XNuclear6CHades8GoldPlusEjNS_24ENUM_GOLD_CONTROL_REASONE
#           XNuclear::CHades::GoldPlus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)
# range [0x084b93fa, 0x084b9449]
084b93fa +0x00:  push   %ebp
084b93fb +0x01:  mov    %esp,%ebp
084b93fd +0x03:  sub    $0x38,%esp
084b9400 +0x06:  mov    0x8(%ebp),%eax
084b9403 +0x09:  mov    %eax,(%esp)
084b9406 +0x0c:  call   084b9718 <_ZN8XNuclear6CHades9needLoginEv>  ; XNuclear::CHades::needLogin()
084b940b +0x11:  lea    -0x1c(%ebp),%eax
084b940e +0x14:  mov    %eax,(%esp)
084b9411 +0x17:  call   084b99b2 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x88>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x88
084b9416 +0x1c:  mov    0x8(%ebp),%eax
084b9419 +0x1f:  mov    0x20(%eax),%eax
084b941c +0x22:  mov    %eax,(%esp)
084b941f +0x25:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b9424 +0x2a:  mov    %eax,-0x12(%ebp)
084b9427 +0x2d:  mov    0xc(%ebp),%eax
084b942a +0x30:  mov    %eax,-0xe(%ebp)
084b942d +0x33:  mov    0x10(%ebp),%eax
084b9430 +0x36:  mov    %ax,-0xa(%ebp)
084b9434 +0x3a:  lea    -0x1c(%ebp),%edx
084b9437 +0x3d:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b943c +0x42:  mov    %edx,0x4(%esp)
084b9440 +0x46:  mov    %eax,(%esp)
084b9443 +0x49:  call   08470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>  ; CHadesServerProxy::SendHadesTcpPacket(char*)
084b9448 +0x4e:  leave
084b9449 +0x4f:  ret
```

## 反编译 C

```c
// XNuclear::CHades::GoldPlus @ 0x84b93fa

/* XNuclear::CHades::GoldPlus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON) */

void __thiscall XNuclear::CHades::GoldPlus(CHades *this,undefined4 param_1,undefined2 param_3)

{
  Packet_Hades_Gold_Plus local_20 [10];
  undefined4 local_16;
  undefined4 local_12;
  undefined2 local_e;
  
  needLogin(this);
  Packet_Hades_Gold_Plus::Packet_Hades_Gold_Plus(local_20);
  local_16 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_12 = param_1;
  local_e = param_3;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_20);
  return;
}
```
