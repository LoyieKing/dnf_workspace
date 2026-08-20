# Send_Login

`_ZN8XNuclear6CHades10Send_LoginEv`

`XNuclear::CHades::Send_Login()`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b9200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b9200  _ZN8XNuclear6CHades10Send_LoginEv
#           XNuclear::CHades::Send_Login()
# range [0x084b9200, 0x084b92e9]
084b9200 +0x00:  push   %ebp
084b9201 +0x01:  mov    %esp,%ebp
084b9203 +0x03:  sub    $0x98,%esp
084b9209 +0x09:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b920e +0x0e:  mov    %eax,(%esp)
084b9211 +0x11:  call   084b9ab2 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x188>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x188
084b9216 +0x16:  mov    0x8(%ebp),%edx
084b9219 +0x19:  mov    %eax,0x24(%edx)
084b921c +0x1c:  lea    -0x7c(%ebp),%eax
084b921f +0x1f:  mov    %eax,(%esp)
084b9222 +0x22:  call   084b9946 <_GLOBAL__I__ZN8XNuclear6CHades4InitEP5CUser+0x1c>  ; global constructors keyed to XNuclear::CHades::Init(CUser*)+0x1c
084b9227 +0x27:  mov    0x8(%ebp),%eax
084b922a +0x2a:  mov    0x20(%eax),%eax
084b922d +0x2d:  mov    %eax,(%esp)
084b9230 +0x30:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084b9235 +0x35:  mov    %eax,-0x72(%ebp)
084b9238 +0x38:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084b923d +0x3d:  mov    %eax,(%esp)
084b9240 +0x40:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084b9245 +0x45:  mov    %al,-0x1d(%ebp)
084b9248 +0x48:  movl   $0x0,-0x18(%ebp)
084b924f +0x4f:  movl   $0x0,-0x14(%ebp)
084b9256 +0x56:  movl   $0x0,-0x10(%ebp)
084b925d +0x5d:  movl   $0x0,-0xc(%ebp)
084b9264 +0x64:  lea    -0x18(%ebp),%eax
084b9267 +0x67:  mov    %eax,0x4(%esp)
084b926b +0x6b:  mov    0x8(%ebp),%eax
084b926e +0x6e:  mov    %eax,(%esp)
084b9271 +0x71:  call   084b9774 <_ZN8XNuclear6CHades5GetIPEPc>  ; XNuclear::CHades::GetIP(char*)
084b9276 +0x76:  lea    -0x18(%ebp),%eax
084b9279 +0x79:  mov    %eax,0x4(%esp)
084b927d +0x7d:  lea    -0x7c(%ebp),%eax
084b9280 +0x80:  add    $0xe,%eax
084b9283 +0x83:  mov    %eax,(%esp)
084b9286 +0x86:  call   0807def0 <_init+0x7e8>
084b928b +0x8b:  mov    0x8(%ebp),%eax
084b928e +0x8e:  mov    0x20(%eax),%eax
084b9291 +0x91:  add    $0xe0,%eax
084b9296 +0x96:  mov    %eax,(%esp)
084b9299 +0x99:  call   08288050 <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0x102>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0x102
084b929e +0x9e:  movl   $0x41,0x8(%esp)
084b92a6 +0xa6:  mov    %eax,0x4(%esp)
084b92aa +0xaa:  lea    -0x7c(%ebp),%eax
084b92ad +0xad:  add    $0x1e,%eax
084b92b0 +0xb0:  mov    %eax,(%esp)
084b92b3 +0xb3:  call   0807d8d0 <_init+0x1c8>
084b92b8 +0xb8:  mov    0x8(%ebp),%eax
084b92bb +0xbb:  mov    0x20(%eax),%eax
084b92be +0xbe:  mov    %eax,(%esp)
084b92c1 +0xc1:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084b92c6 +0xc6:  mov    %eax,-0x1c(%ebp)
084b92c9 +0xc9:  lea    -0x7c(%ebp),%edx
084b92cc +0xcc:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
084b92d1 +0xd1:  mov    %edx,0x4(%esp)
084b92d5 +0xd5:  mov    %eax,(%esp)
084b92d8 +0xd8:  call   08470752 <_ZN17CHadesServerProxy18SendHadesTcpPacketEPc>  ; CHadesServerProxy::SendHadesTcpPacket(char*)
084b92dd +0xdd:  mov    0x8(%ebp),%eax
084b92e0 +0xe0:  mov    %eax,(%esp)
084b92e3 +0xe3:  call   084b97fe <_ZN8XNuclear6CHades15Send_UserStatusEv>  ; XNuclear::CHades::Send_UserStatus()
084b92e8 +0xe8:  leave
084b92e9 +0xe9:  ret
```

## 反编译 C

```c
// XNuclear::CHades::Send_Login @ 0x84b9200

/* XNuclear::CHades::Send_Login() */

void __thiscall XNuclear::CHades::Send_Login(CHades *this)

{
  undefined4 uVar1;
  CEnvironment *this_00;
  char *__src;
  Packet_Hades_Login local_80 [10];
  undefined4 local_76;
  char acStack_72 [16];
  char acStack_62 [65];
  undefined1 local_21;
  undefined4 local_20;
  char local_1c [24];
  
  uVar1 = CHadesServerProxy::GetHadesSocketConnSec(GlobalData::s_hades_proxy);
  *(undefined4 *)(this + 0x24) = uVar1;
  Packet_Hades_Login::Packet_Hades_Login(local_80);
  local_76 = CUser::get_acc_id(*(CUser **)(this + 0x20));
  this_00 = (CEnvironment *)G_CEnvironment();
  local_21 = CEnvironment::get_channel_no(this_00);
  local_1c[0] = '\0';
  local_1c[1] = '\0';
  local_1c[2] = '\0';
  local_1c[3] = '\0';
  local_1c[4] = '\0';
  local_1c[5] = '\0';
  local_1c[6] = '\0';
  local_1c[7] = '\0';
  local_1c[8] = '\0';
  local_1c[9] = '\0';
  local_1c[10] = '\0';
  local_1c[0xb] = '\0';
  local_1c[0xc] = '\0';
  local_1c[0xd] = '\0';
  local_1c[0xe] = '\0';
  local_1c[0xf] = '\0';
  GetIP(this,local_1c);
  strcpy(acStack_72,local_1c);
  __src = (char *)CNetwork<4096,450000>::get_mac_addr
                            ((CNetwork<4096,450000> *)(*(int *)(this + 0x20) + 0xe0));
  strncpy(acStack_62,__src,0x41);
  local_20 = CUser::GetUID(*(CUser **)(this + 0x20));
  CHadesServerProxy::SendHadesTcpPacket(GlobalData::s_hades_proxy,(char *)local_80);
  Send_UserStatus(this);
  return;
}
```
