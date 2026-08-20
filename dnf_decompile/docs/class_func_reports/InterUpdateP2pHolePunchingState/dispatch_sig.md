# dispatch_sig

`_ZN31InterUpdateP2pHolePunchingState12dispatch_sigEP5CUserPci`

`InterUpdateP2pHolePunchingState::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterUpdateP2pHolePunchingState` | `0x08161952` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08161952  _ZN31InterUpdateP2pHolePunchingState12dispatch_sigEP5CUserPci
#           InterUpdateP2pHolePunchingState::dispatch_sig(CUser*, char*, int)
# range [0x08161952, 0x08161a89]
08161952 +0x000:  push   %ebp
08161953 +0x001:  mov    %esp,%ebp
08161955 +0x003:  push   %esi
08161956 +0x004:  push   %ebx
08161957 +0x005:  sub    $0x60,%esp
0816195a +0x008:  mov    0x10(%ebp),%eax
0816195d +0x00b:  mov    %eax,-0xc(%ebp)
08161960 +0x00e:  lea    -0x49(%ebp),%eax
08161963 +0x011:  mov    %eax,(%esp)
08161966 +0x014:  call   08161dae <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x1c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x1c
0816196b +0x019:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08161970 +0x01e:  mov    %eax,(%esp)
08161973 +0x021:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
08161978 +0x026:  mov    %ax,-0x3f(%ebp)
0816197c +0x02a:  mov    -0xc(%ebp),%eax
0816197f +0x02d:  movzbl 0xd(%eax),%eax
08161983 +0x031:  mov    %al,-0x3d(%ebp)
08161986 +0x034:  mov    -0xc(%ebp),%eax
08161989 +0x037:  mov    0xe(%eax),%eax
0816198c +0x03a:  mov    %eax,-0x3c(%ebp)
0816198f +0x03d:  mov    -0xc(%ebp),%eax
08161992 +0x040:  mov    0x12(%eax),%eax
08161995 +0x043:  mov    %eax,-0x38(%ebp)
08161998 +0x046:  mov    0xc(%ebp),%eax
0816199b +0x049:  add    $0xe0,%eax
081619a0 +0x04e:  movl   $0x10,0x8(%esp)
081619a8 +0x056:  lea    -0x49(%ebp),%edx
081619ab +0x059:  add    $0x25,%edx
081619ae +0x05c:  mov    %edx,0x4(%esp)
081619b2 +0x060:  mov    %eax,(%esp)
081619b5 +0x063:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
081619ba +0x068:  lea    -0xd(%ebp),%eax
081619bd +0x06b:  mov    %eax,(%esp)
081619c0 +0x06e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
081619c5 +0x073:  lea    -0xd(%ebp),%eax
081619c8 +0x076:  mov    %eax,0x8(%esp)
081619cc +0x07a:  lea    -0x49(%ebp),%eax
081619cf +0x07d:  add    $0x25,%eax
081619d2 +0x080:  mov    %eax,0x4(%esp)
081619d6 +0x084:  lea    -0x14(%ebp),%eax
081619d9 +0x087:  mov    %eax,(%esp)
081619dc +0x08a:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
081619e1 +0x08f:  call   08162679 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x8e7>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x8e7
081619e6 +0x094:  lea    -0x14(%ebp),%edx
081619e9 +0x097:  mov    %edx,0xc(%esp)
081619ed +0x09b:  movl   $0x10,0x8(%esp)
081619f5 +0x0a3:  lea    -0x49(%ebp),%edx
081619f8 +0x0a6:  add    $0x15,%edx
081619fb +0x0a9:  mov    %edx,0x4(%esp)
081619ff +0x0ad:  mov    %eax,(%esp)
08161a02 +0x0b0:  call   08170f3a <_ZN19RestrictGeolocation14getCountryCodeEPcjSs>  ; RestrictGeolocation::getCountryCode(char*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08161a07 +0x0b5:  jmp    08161a1e <+0xcc>
08161a09 +0x0b7:  mov    %edx,%ebx
08161a0b +0x0b9:  mov    %eax,%esi
08161a0d +0x0bb:  lea    -0x14(%ebp),%eax
08161a10 +0x0be:  mov    %eax,(%esp)
08161a13 +0x0c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08161a18 +0x0c6:  mov    %esi,%eax
08161a1a +0x0c8:  mov    %ebx,%edx
08161a1c +0x0ca:  jmp    08161a2b <+0xd9>
08161a1e +0x0cc:  lea    -0x14(%ebp),%eax
08161a21 +0x0cf:  mov    %eax,(%esp)
08161a24 +0x0d2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08161a29 +0x0d7:  jmp    08161a46 <+0xf4>
08161a2b +0x0d9:  mov    %edx,%ebx
08161a2d +0x0db:  mov    %eax,%esi
08161a2f +0x0dd:  lea    -0xd(%ebp),%eax
08161a32 +0x0e0:  mov    %eax,(%esp)
08161a35 +0x0e3:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08161a3a +0x0e8:  mov    %esi,%eax
08161a3c +0x0ea:  mov    %ebx,%edx
08161a3e +0x0ec:  mov    %eax,(%esp)
08161a41 +0x0ef:  call   08ae3750 <_Unwind_Resume>
08161a46 +0x0f4:  lea    -0xd(%ebp),%eax
08161a49 +0x0f7:  mov    %eax,(%esp)
08161a4c +0x0fa:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08161a51 +0x0ff:  lea    -0x49(%ebp),%ebx
08161a54 +0x102:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
08161a59 +0x107:  movl   $0x0,0x4(%esp)
08161a61 +0x10f:  mov    %eax,(%esp)
08161a64 +0x112:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
08161a69 +0x117:  movl   $0x35,0x8(%esp)
08161a71 +0x11f:  mov    %ebx,0x4(%esp)
08161a75 +0x123:  mov    %eax,(%esp)
08161a78 +0x126:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08161a7d +0x12b:  mov    $0x0,%eax
08161a82 +0x130:  add    $0x60,%esp
08161a85 +0x133:  pop    %ebx
08161a86 +0x134:  pop    %esi
08161a87 +0x135:  pop    %ebp
08161a88 +0x136:  ret
08161a89 +0x137:  nop
```

## 反编译 C

```c
// InterUpdateP2pHolePunchingState::dispatch_sig @ 0x8161952

/* InterUpdateP2pHolePunchingState::dispatch_sig(CUser*, char*, int) */

undefined4 InterUpdateP2pHolePunchingState::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CEnvironment *this;
  RestrictGeolocation *this_00;
  CStatisticServerProxy *this_01;
  Packet_GameServer2Statisctics2DBServer local_4d [10];
  undefined2 local_43;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  char acStack_38 [16];
  char acStack_28 [16];
  string local_18 [7];
  allocator<char> local_11;
  int local_10;
  
  local_10 = param_3;
  Packet_GameServer2Statisctics2DBServer::Packet_GameServer2Statisctics2DBServer(local_4d);
  this = (CEnvironment *)G_CEnvironment();
  local_43 = CEnvironment::get_server_group(this);
  local_41 = *(undefined1 *)(local_10 + 0xd);
  local_40 = *(undefined4 *)(local_10 + 0xe);
  local_3c = *(undefined4 *)(local_10 + 0x12);
  CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(param_2 + 0xe0),acStack_28,0x10);
  std::allocator<char>::allocator();
                    /* try { // try from 081619dc to 081619e0 has its CatchHandler @ 08161a2b */
  std::string::string(local_18,acStack_28,(allocator *)&local_11);
                    /* try { // try from 081619e1 to 08161a06 has its CatchHandler @ 08161a09 */
  this_00 = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
  RestrictGeolocation::getCountryCode(this_00,acStack_38,0x10,(string)local_18);
                    /* try { // try from 08161a24 to 08161a28 has its CatchHandler @ 08161a2b */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
  this_01 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_01,(char *)local_4d,0x35);
  return 0;
}
```
