# Send_Logout

`_ZN8XNuclear6CHades11Send_LogoutEv`

`XNuclear::CHades::Send_Logout()`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b92ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b92ea  _ZN8XNuclear6CHades11Send_LogoutEv
#           XNuclear::CHades::Send_Logout()
# range [0x084b92ea, 0x084b9321]
084b92ea +0x00:  push   %ebp
084b92eb +0x01:  mov    %esp,%ebp
084b92ed +0x03:  sub    $0x28,%esp
084b92f0 +0x06:  lea    -0x16(%ebp),%eax
084b92f3 +0x09:  mov    %eax,(%esp)
084b92f6 +0x0c:  call   084b996a <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x40>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x40
084b92fb +0x11:  mov    0x8(%ebp),%eax
084b92fe +0x14:  mov    0x20(%eax),%eax
084b9301 +0x17:  mov    %eax,(%esp)
084b9304 +0x1a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b9309 +0x1f:  mov    %eax,-0xc(%ebp)
084b930c +0x22:  lea    -0x16(%ebp),%edx
084b930f +0x25:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b9314 +0x2a:  mov    %edx,0x4(%esp)
084b9318 +0x2e:  mov    %eax,(%esp)
084b931b +0x31:  call   08470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>  ; CHadesServerProxy::SendHadesTcpPacket(char*)
084b9320 +0x36:  leave
084b9321 +0x37:  ret
```

## 反编译 C

```c
// XNuclear::CHades::Send_Logout @ 0x84b92ea

/* XNuclear::CHades::Send_Logout() */

void __thiscall XNuclear::CHades::Send_Logout(CHades *this)

{
  Packet_Hades_Logout local_1a [10];
  undefined4 local_10;
  
  Packet_Hades_Logout::Packet_Hades_Logout(local_1a);
  local_10 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_1a);
  return;
}
```
