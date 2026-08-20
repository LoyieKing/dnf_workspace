# GoldMinus

`_ZN8XNuclear6CHades9GoldMinusEjNS_24ENUM_GOLD_CONTROL_REASONE`

`XNuclear::CHades::GoldMinus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b944a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b944a  _ZN8XNuclear6CHades9GoldMinusEjNS_24ENUM_GOLD_CONTROL_REASONE
#           XNuclear::CHades::GoldMinus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)
# range [0x084b944a, 0x084b9499]
084b944a +0x00:  push   %ebp
084b944b +0x01:  mov    %esp,%ebp
084b944d +0x03:  sub    $0x38,%esp
084b9450 +0x06:  mov    0x8(%ebp),%eax
084b9453 +0x09:  mov    %eax,(%esp)
084b9456 +0x0c:  call   084b9718 <_ZN8XNuclear6CHades9needLoginEv>  ; XNuclear::CHades::needLogin()
084b945b +0x11:  lea    -0x1c(%ebp),%eax
084b945e +0x14:  mov    %eax,(%esp)
084b9461 +0x17:  call   084b99d6 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0xac>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0xac
084b9466 +0x1c:  mov    0x8(%ebp),%eax
084b9469 +0x1f:  mov    0x20(%eax),%eax
084b946c +0x22:  mov    %eax,(%esp)
084b946f +0x25:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b9474 +0x2a:  mov    %eax,-0x12(%ebp)
084b9477 +0x2d:  mov    0xc(%ebp),%eax
084b947a +0x30:  mov    %eax,-0xe(%ebp)
084b947d +0x33:  mov    0x10(%ebp),%eax
084b9480 +0x36:  mov    %ax,-0xa(%ebp)
084b9484 +0x3a:  lea    -0x1c(%ebp),%edx
084b9487 +0x3d:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b948c +0x42:  mov    %edx,0x4(%esp)
084b9490 +0x46:  mov    %eax,(%esp)
084b9493 +0x49:  call   08470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>  ; CHadesServerProxy::SendHadesTcpPacket(char*)
084b9498 +0x4e:  leave
084b9499 +0x4f:  ret
```

## 反编译 C

```c
// XNuclear::CHades::GoldMinus @ 0x84b944a

/* XNuclear::CHades::GoldMinus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON) */

void __thiscall XNuclear::CHades::GoldMinus(CHades *this,undefined4 param_1,undefined2 param_3)

{
  Packet_Hades_Gold_Minus local_20 [10];
  undefined4 local_16;
  undefined4 local_12;
  undefined2 local_e;
  
  needLogin(this);
  Packet_Hades_Gold_Minus::Packet_Hades_Gold_Minus(local_20);
  local_16 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_12 = param_1;
  local_e = param_3;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_20);
  return;
}
```
