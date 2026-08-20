# SendLogin

`_ZN27CDoubleConnCheckServerProxy9SendLoginEjii`

`CDoubleConnCheckServerProxy::SendLogin(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `CDoubleConnCheckServerProxy` | `0x0846d412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d412  _ZN27CDoubleConnCheckServerProxy9SendLoginEjii
#           CDoubleConnCheckServerProxy::SendLogin(unsigned int, int, int)
# range [0x0846d412, 0x0846d47b]
0846d412 +0x00:  push   %ebp
0846d413 +0x01:  mov    %esp,%ebp
0846d415 +0x03:  push   %ebx
0846d416 +0x04:  sub    $0x34,%esp
0846d419 +0x07:  lea    -0x18(%ebp),%eax
0846d41c +0x0a:  mov    %eax,(%esp)
0846d41f +0x0d:  call   0846d58a <_GLOBAL__I__ZN27CDoubleConnCheckServerProxyC2ESsi+0x1c>  ; global constructors keyed to CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x1c
0846d424 +0x12:  mov    0xc(%ebp),%eax
0846d427 +0x15:  mov    %eax,-0x12(%ebp)
0846d42a +0x18:  mov    0xc(%ebp),%eax
0846d42d +0x1b:  mov    %eax,-0xe(%ebp)
0846d430 +0x1e:  mov    0x10(%ebp),%eax
0846d433 +0x21:  mov    %al,-0xa(%ebp)
0846d436 +0x24:  mov    0x14(%ebp),%eax
0846d439 +0x27:  mov    %al,-0x9(%ebp)
0846d43c +0x2a:  mov    0x8(%ebp),%eax
0846d43f +0x2d:  mov    %eax,(%esp)
0846d442 +0x30:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0846d447 +0x35:  mov    0x8(%ebp),%edx
0846d44a +0x38:  mov    0x4(%edx),%edx
0846d44d +0x3b:  movzwl %dx,%ecx
0846d450 +0x3e:  lea    -0x18(%ebp),%edx
0846d453 +0x41:  mov    0x8(%ebp),%ebx
0846d456 +0x44:  add    $0x8,%ebx
0846d459 +0x47:  mov    %eax,0x10(%esp)
0846d45d +0x4b:  mov    %ecx,0xc(%esp)
0846d461 +0x4f:  movl   $0x10,0x8(%esp)
0846d469 +0x57:  mov    %edx,0x4(%esp)
0846d46d +0x5b:  mov    %ebx,(%esp)
0846d470 +0x5e:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
0846d475 +0x63:  add    $0x34,%esp
0846d478 +0x66:  pop    %ebx
0846d479 +0x67:  pop    %ebp
0846d47a +0x68:  ret
0846d47b +0x69:  nop
```

## 反编译 C

```c
// CDoubleConnCheckServerProxy::SendLogin @ 0x846d412

/* CDoubleConnCheckServerProxy::SendLogin(unsigned int, int, int) */

void __thiscall
CDoubleConnCheckServerProxy::SendLogin
          (CDoubleConnCheckServerProxy *this,uint param_1,int param_2,int param_3)

{
  char *pcVar1;
  Packet_DoubleCheck_UDP_Login local_1c [6];
  uint local_16;
  uint local_12;
  undefined1 local_e;
  undefined1 local_d;
  
  Packet_DoubleCheck_UDP_Login::Packet_DoubleCheck_UDP_Login(local_1c);
  local_16 = param_1;
  local_12 = param_1;
  local_e = (undefined1)param_2;
  local_d = (undefined1)param_3;
  pcVar1 = (char *)std::string::c_str((string *)this);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 8),(char *)local_1c,0x10,(ushort)*(undefined4 *)(this + 4),
             pcVar1);
  return;
}
```
