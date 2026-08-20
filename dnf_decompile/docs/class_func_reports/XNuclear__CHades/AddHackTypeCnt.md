# AddHackTypeCnt

`_ZN8XNuclear6CHades14AddHackTypeCntEmmmm`

`XNuclear::CHades::AddHackTypeCnt(unsigned long, unsigned long, unsigned long, unsigned long)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b9328` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9328  _ZN8XNuclear6CHades14AddHackTypeCntEmmmm
#           XNuclear::CHades::AddHackTypeCnt(unsigned long, unsigned long, unsigned long, unsigned long)
# range [0x084b9328, 0x084b9385]
084b9328 +0x00:  push   %ebp
084b9329 +0x01:  mov    %esp,%ebp
084b932b +0x03:  sub    $0x38,%esp
084b932e +0x06:  mov    0x8(%ebp),%eax
084b9331 +0x09:  mov    %eax,(%esp)
084b9334 +0x0c:  call   084b9718 <_ZN8XNuclear6CHades9needLoginEv>  ; XNuclear::CHades::needLogin()
084b9339 +0x11:  lea    -0x22(%ebp),%eax
084b933c +0x14:  mov    %eax,(%esp)
084b933f +0x17:  call   084b998e <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x64>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x64
084b9344 +0x1c:  mov    0x8(%ebp),%eax
084b9347 +0x1f:  mov    0x20(%eax),%eax
084b934a +0x22:  mov    %eax,(%esp)
084b934d +0x25:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b9352 +0x2a:  mov    %eax,-0x18(%ebp)
084b9355 +0x2d:  mov    0xc(%ebp),%eax
084b9358 +0x30:  mov    %ax,-0x14(%ebp)
084b935c +0x34:  mov    0x10(%ebp),%eax
084b935f +0x37:  mov    %ax,-0x12(%ebp)
084b9363 +0x3b:  mov    0x14(%ebp),%eax
084b9366 +0x3e:  mov    %eax,-0x10(%ebp)
084b9369 +0x41:  mov    0x18(%ebp),%eax
084b936c +0x44:  mov    %eax,-0xc(%ebp)
084b936f +0x47:  lea    -0x22(%ebp),%edx
084b9372 +0x4a:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b9377 +0x4f:  mov    %edx,0x4(%esp)
084b937b +0x53:  mov    %eax,(%esp)
084b937e +0x56:  call   08470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>  ; CHadesServerProxy::SendHadesTcpPacket(char*)
084b9383 +0x5b:  leave
084b9384 +0x5c:  ret
084b9385 +0x5d:  nop
```

## 反编译 C

```c
// XNuclear::CHades::AddHackTypeCnt @ 0x84b9328

/* XNuclear::CHades::AddHackTypeCnt(unsigned long, unsigned long, unsigned long, unsigned long) */

void __thiscall
XNuclear::CHades::AddHackTypeCnt
          (CHades *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  Packet_Hades_AddHackType local_26 [10];
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  ulong local_14;
  ulong local_10;
  
  needLogin(this);
  Packet_Hades_AddHackType::Packet_Hades_AddHackType(local_26);
  local_1c = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_18 = (undefined2)param_1;
  local_16 = (undefined2)param_2;
  local_14 = param_3;
  local_10 = param_4;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_26);
  return;
}
```
