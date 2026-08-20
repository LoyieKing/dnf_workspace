# StdCateUpdate

`_ZN8XNuclear6CHades13StdCateUpdateEtt`

`XNuclear::CHades::StdCateUpdate(unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b938c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b938c  _ZN8XNuclear6CHades13StdCateUpdateEtt
#           XNuclear::CHades::StdCateUpdate(unsigned short, unsigned short)
# range [0x084b938c, 0x084b93ed]
084b938c +0x00:  push   %ebp
084b938d +0x01:  mov    %esp,%ebp
084b938f +0x03:  sub    $0x48,%esp
084b9392 +0x06:  mov    0xc(%ebp),%edx
084b9395 +0x09:  mov    0x10(%ebp),%eax
084b9398 +0x0c:  mov    %dx,-0x2c(%ebp)
084b939c +0x10:  mov    %ax,-0x30(%ebp)
084b93a0 +0x14:  mov    0x8(%ebp),%eax
084b93a3 +0x17:  mov    %eax,(%esp)
084b93a6 +0x1a:  call   084b9718 <_ZN8XNuclear6CHades9needLoginEv>  ; XNuclear::CHades::needLogin()
084b93ab +0x1f:  lea    -0x1a(%ebp),%eax
084b93ae +0x22:  mov    %eax,(%esp)
084b93b1 +0x25:  call   084b9a42 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x118>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x118
084b93b6 +0x2a:  mov    0x8(%ebp),%eax
084b93b9 +0x2d:  mov    0x20(%eax),%eax
084b93bc +0x30:  mov    %eax,(%esp)
084b93bf +0x33:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b93c4 +0x38:  mov    %eax,-0x10(%ebp)
084b93c7 +0x3b:  movzwl -0x2c(%ebp),%eax
084b93cb +0x3f:  mov    %ax,-0xc(%ebp)
084b93cf +0x43:  movzwl -0x30(%ebp),%eax
084b93d3 +0x47:  mov    %ax,-0xa(%ebp)
084b93d7 +0x4b:  lea    -0x1a(%ebp),%edx
084b93da +0x4e:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b93df +0x53:  mov    %edx,0x4(%esp)
084b93e3 +0x57:  mov    %eax,(%esp)
084b93e6 +0x5a:  call   08470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>  ; CHadesServerProxy::SendHadesTcpPacket(char*)
084b93eb +0x5f:  leave
084b93ec +0x60:  ret
084b93ed +0x61:  nop
```

## 反编译 C

```c
// XNuclear::CHades::StdCateUpdate @ 0x84b938c

/* XNuclear::CHades::StdCateUpdate(unsigned short, unsigned short) */

void __thiscall XNuclear::CHades::StdCateUpdate(CHades *this,ushort param_1,ushort param_2)

{
  Packet_Hades_StdUpdate local_1e [10];
  undefined4 local_14;
  ushort local_10;
  ushort local_e;
  
  needLogin(this);
  Packet_Hades_StdUpdate::Packet_Hades_StdUpdate(local_1e);
  local_14 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_10 = param_1;
  local_e = param_2;
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_1e);
  return;
}
```
