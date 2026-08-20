# Send_UserStatus

`_ZN8XNuclear6CHades15Send_UserStatusEv`

`XNuclear::CHades::Send_UserStatus()`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b97fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b97fe  _ZN8XNuclear6CHades15Send_UserStatusEv
#           XNuclear::CHades::Send_UserStatus()
# range [0x084b97fe, 0x084b98e9]
084b97fe +0x00:  push   %ebp
084b97ff +0x01:  mov    %esp,%ebp
084b9801 +0x03:  sub    $0x38,%esp
084b9804 +0x06:  lea    -0x1a(%ebp),%eax
084b9807 +0x09:  mov    %eax,(%esp)
084b980a +0x0c:  call   084b9a1e <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0xf4>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0xf4
084b980f +0x11:  mov    0x8(%ebp),%eax
084b9812 +0x14:  mov    0x20(%eax),%eax
084b9815 +0x17:  mov    %eax,(%esp)
084b9818 +0x1a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b981d +0x1f:  mov    %eax,-0x10(%ebp)
084b9820 +0x22:  movl   $0x0,-0xc(%ebp)
084b9827 +0x29:  mov    0x8(%ebp),%eax
084b982a +0x2c:  mov    0x20(%eax),%eax
084b982d +0x2f:  mov    %eax,(%esp)
084b9830 +0x32:  call   084b9aa2 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x178>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x178
084b9835 +0x37:  movzbl %al,%eax
084b9838 +0x3a:  and    $0x1,%eax
084b983b +0x3d:  test   %al,%al
084b983d +0x3f:  jne    084b986f <+0x71>
084b983f +0x41:  mov    0x8(%ebp),%eax
084b9842 +0x44:  mov    0x20(%eax),%eax
084b9845 +0x47:  mov    %eax,(%esp)
084b9848 +0x4a:  call   084b9aa2 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x178>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x178
084b984d +0x4f:  movzbl %al,%eax
084b9850 +0x52:  and    $0x2,%eax
084b9853 +0x55:  test   %eax,%eax
084b9855 +0x57:  jne    084b986f <+0x71>
084b9857 +0x59:  mov    0x8(%ebp),%eax
084b985a +0x5c:  mov    0x20(%eax),%eax
084b985d +0x5f:  mov    %eax,(%esp)
084b9860 +0x62:  call   084b9aa2 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x178>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x178
084b9865 +0x67:  movzbl %al,%eax
084b9868 +0x6a:  and    $0x20,%eax
084b986b +0x6d:  test   %eax,%eax
084b986d +0x6f:  je     084b9876 <+0x78>
084b986f +0x71:  mov    $0x1,%eax
084b9874 +0x76:  jmp    084b987b <+0x7d>
084b9876 +0x78:  mov    $0x0,%eax
084b987b +0x7d:  test   %al,%al
084b987d +0x7f:  je     084b9888 <+0x8a>
084b987f +0x81:  mov    -0xc(%ebp),%eax
084b9882 +0x84:  or     $0x1,%eax
084b9885 +0x87:  mov    %eax,-0xc(%ebp)
084b9888 +0x8a:  mov    0x8(%ebp),%eax
084b988b +0x8d:  mov    0x20(%eax),%eax
084b988e +0x90:  mov    %eax,(%esp)
084b9891 +0x93:  call   084b9aa2 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x178>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x178
084b9896 +0x98:  movzbl %al,%eax
084b9899 +0x9b:  and    $0x8,%eax
084b989c +0x9e:  test   %eax,%eax
084b989e +0xa0:  setne  %al
084b98a1 +0xa3:  test   %al,%al
084b98a3 +0xa5:  je     084b98ae <+0xb0>
084b98a5 +0xa7:  mov    -0xc(%ebp),%eax
084b98a8 +0xaa:  or     $0x2,%eax
084b98ab +0xad:  mov    %eax,-0xc(%ebp)
084b98ae +0xb0:  mov    0x8(%ebp),%eax
084b98b1 +0xb3:  mov    0x20(%eax),%eax
084b98b4 +0xb6:  mov    %eax,(%esp)
084b98b7 +0xb9:  call   084b9aa2 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x178>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x178
084b98bc +0xbe:  movzbl %al,%eax
084b98bf +0xc1:  and    $0x10,%eax
084b98c2 +0xc4:  test   %eax,%eax
084b98c4 +0xc6:  setne  %al
084b98c7 +0xc9:  test   %al,%al
084b98c9 +0xcb:  je     084b98d4 <+0xd6>
084b98cb +0xcd:  mov    -0xc(%ebp),%eax
084b98ce +0xd0:  or     $0x4,%eax
084b98d1 +0xd3:  mov    %eax,-0xc(%ebp)
084b98d4 +0xd6:  lea    -0x1a(%ebp),%edx
084b98d7 +0xd9:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b98dc +0xde:  mov    %edx,0x4(%esp)
084b98e0 +0xe2:  mov    %eax,(%esp)
084b98e3 +0xe5:  call   08470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>  ; CHadesServerProxy::SendHadesTcpPacket(char*)
084b98e8 +0xea:  leave
084b98e9 +0xeb:  ret
```

## 反编译 C

```c
// XNuclear::CHades::Send_UserStatus @ 0x84b97fe

/* XNuclear::CHades::Send_UserStatus() */

void __thiscall XNuclear::CHades::Send_UserStatus(CHades *this)

{
  bool bVar1;
  uint uVar2;
  Packet_Hades_UserStatus local_1e [10];
  undefined4 local_14;
  uint local_10;
  
  Packet_Hades_UserStatus::Packet_Hades_UserStatus(local_1e);
  local_14 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  local_10 = 0;
  uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
  if ((uVar2 & 1) == 0) {
    uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
    if ((uVar2 & 2) == 0) {
      uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
      if ((uVar2 & 0x20) == 0) {
        bVar1 = false;
        goto LAB_084b987b;
      }
    }
  }
  bVar1 = true;
LAB_084b987b:
  if (bVar1) {
    local_10 = local_10 | 1;
  }
  uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
  if ((uVar2 & 8) != 0) {
    local_10 = local_10 | 2;
  }
  uVar2 = CUser::getSecuType(*(CUser **)(this + 0x20));
  if ((uVar2 & 0x10) != 0) {
    local_10 = local_10 | 4;
  }
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_1e);
  return;
}
```
