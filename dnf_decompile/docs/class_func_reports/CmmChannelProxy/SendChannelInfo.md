# SendChannelInfo

`_ZN15CmmChannelProxy15SendChannelInfoEv`

`CmmChannelProxy::SendChannelInfo()`

| 类 | 地址 |
|---|---|
| `CmmChannelProxy` | `0x0810619e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810619e  _ZN15CmmChannelProxy15SendChannelInfoEv
#           CmmChannelProxy::SendChannelInfo()
# range [0x0810619e, 0x08106277]
0810619e +0x00:  push   %ebp
0810619f +0x01:  mov    %esp,%ebp
081061a1 +0x03:  push   %esi
081061a2 +0x04:  push   %ebx
081061a3 +0x05:  sub    $0x60,%esp
081061a6 +0x08:  lea    -0x3b(%ebp),%eax
081061a9 +0x0b:  mov    %eax,(%esp)
081061ac +0x0e:  call   08106bfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x7e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x7e
081061b1 +0x13:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081061b6 +0x18:  mov    0x198(%eax),%eax
081061bc +0x1e:  mov    %eax,-0x30(%ebp)
081061bf +0x21:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081061c4 +0x26:  mov    %eax,(%esp)
081061c7 +0x29:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
081061cc +0x2e:  mov    %eax,-0x2c(%ebp)
081061cf +0x31:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081061d4 +0x36:  mov    0x1b0(%eax),%eax
081061da +0x3c:  mov    %eax,-0x28(%ebp)
081061dd +0x3f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081061e2 +0x44:  mov    0x3c0(%eax),%eax
081061e8 +0x4a:  mov    %eax,-0x24(%ebp)
081061eb +0x4d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081061f0 +0x52:  add    $0x134,%eax
081061f5 +0x57:  mov    %eax,(%esp)
081061f8 +0x5a:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
081061fd +0x5f:  mov    %eax,-0x20(%ebp)
08106200 +0x62:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08106205 +0x67:  add    $0x1b4,%eax
0810620a +0x6c:  mov    %eax,0x4(%esp)
0810620e +0x70:  lea    -0x3b(%ebp),%eax
08106211 +0x73:  add    $0x1f,%eax
08106214 +0x76:  mov    %eax,(%esp)
08106217 +0x79:  call   0807def0 <_init+0x7e8>
0810621c +0x7e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08106221 +0x83:  mov    0x1c8(%eax),%eax
08106227 +0x89:  mov    %eax,-0xc(%ebp)
0810622a +0x8c:  mov    0x8(%ebp),%eax
0810622d +0x8f:  mov    %eax,(%esp)
08106230 +0x92:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08106235 +0x97:  mov    %eax,%ebx
08106237 +0x99:  mov    0x8(%ebp),%eax
0810623a +0x9c:  mov    0x4(%eax),%eax
0810623d +0x9f:  movzwl %ax,%esi
08106240 +0xa2:  lea    -0x3b(%ebp),%eax
08106243 +0xa5:  mov    %eax,(%esp)
08106246 +0xa8:  call   08106bcc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x4e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x4e
0810624b +0xad:  mov    0x8(%ebp),%edx
0810624e +0xb0:  add    $0x10,%edx
08106251 +0xb3:  mov    %ebx,0x10(%esp)
08106255 +0xb7:  mov    %esi,0xc(%esp)
08106259 +0xbb:  mov    %eax,0x8(%esp)
0810625d +0xbf:  lea    -0x3b(%ebp),%eax
08106260 +0xc2:  mov    %eax,0x4(%esp)
08106264 +0xc6:  mov    %edx,(%esp)
08106267 +0xc9:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
0810626c +0xce:  mov    $0x1,%eax
08106271 +0xd3:  add    $0x60,%esp
08106274 +0xd6:  pop    %ebx
08106275 +0xd7:  pop    %esi
08106276 +0xd8:  pop    %ebp
08106277 +0xd9:  ret
```

## 反编译 C

```c
// CmmChannelProxy::SendChannelInfo @ 0x810619e

/* CmmChannelProxy::SendChannelInfo() */

undefined4 __thiscall CmmChannelProxy::SendChannelInfo(CmmChannelProxy *this)

{
  undefined4 uVar1;
  int iVar2;
  CEnvironment *this_00;
  char *pcVar3;
  tagCS_UPDATE_CHANNEL_INFO local_3f [11];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char acStack_20 [16];
  undefined4 local_10;
  
  tagCS_UPDATE_CHANNEL_INFO::tagCS_UPDATE_CHANNEL_INFO(local_3f);
  iVar2 = G_CEnvironment();
  local_34 = *(undefined4 *)(iVar2 + 0x198);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_30 = CEnvironment::get_server_group(this_00);
  iVar2 = G_CEnvironment();
  local_2c = *(undefined4 *)(iVar2 + 0x1b0);
  iVar2 = G_CEnvironment();
  local_28 = *(undefined4 *)(iVar2 + 0x3c0);
  iVar2 = G_GameWorld();
  local_24 = std::
             map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
             ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                     *)(iVar2 + 0x134));
  iVar2 = G_CEnvironment();
  strcpy(acStack_20,(char *)(iVar2 + 0x1b4));
  iVar2 = G_CEnvironment();
  local_10 = *(undefined4 *)(iVar2 + 0x1c8);
  pcVar3 = (char *)std::string::c_str((string *)this);
  uVar1 = *(undefined4 *)(this + 4);
  iVar2 = tagPacketHeader::getSize((tagPacketHeader *)local_3f);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 0x10),(char *)local_3f,iVar2,(ushort)uVar1,pcVar3);
  return 1;
}
```
