# SendLogout

`_ZN27CDoubleConnCheckServerProxy10SendLogoutEjii`

`CDoubleConnCheckServerProxy::SendLogout(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `CDoubleConnCheckServerProxy` | `0x0846d47c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d47c  _ZN27CDoubleConnCheckServerProxy10SendLogoutEjii
#           CDoubleConnCheckServerProxy::SendLogout(unsigned int, int, int)
# range [0x0846d47c, 0x0846d4ed]
0846d47c +0x00:  push   %ebp
0846d47d +0x01:  mov    %esp,%ebp
0846d47f +0x03:  push   %ebx
0846d480 +0x04:  sub    $0x34,%esp
0846d483 +0x07:  cmpl   $0x0,0xc(%ebp)
0846d487 +0x0b:  je     0846d4e7 <+0x6b>
0846d489 +0x0d:  lea    -0x18(%ebp),%eax
0846d48c +0x10:  mov    %eax,(%esp)
0846d48f +0x13:  call   0846d5c6 <_GLOBAL__I__ZN27CDoubleConnCheckServerProxyC2ESsi+0x58>  ; global constructors keyed to CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x58
0846d494 +0x18:  mov    0xc(%ebp),%eax
0846d497 +0x1b:  mov    %eax,-0x12(%ebp)
0846d49a +0x1e:  mov    0xc(%ebp),%eax
0846d49d +0x21:  mov    %eax,-0xe(%ebp)
0846d4a0 +0x24:  mov    0x10(%ebp),%eax
0846d4a3 +0x27:  mov    %al,-0xa(%ebp)
0846d4a6 +0x2a:  mov    0x14(%ebp),%eax
0846d4a9 +0x2d:  mov    %al,-0x9(%ebp)
0846d4ac +0x30:  mov    0x8(%ebp),%eax
0846d4af +0x33:  mov    %eax,(%esp)
0846d4b2 +0x36:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0846d4b7 +0x3b:  mov    0x8(%ebp),%edx
0846d4ba +0x3e:  mov    0x4(%edx),%edx
0846d4bd +0x41:  movzwl %dx,%ecx
0846d4c0 +0x44:  lea    -0x18(%ebp),%edx
0846d4c3 +0x47:  mov    0x8(%ebp),%ebx
0846d4c6 +0x4a:  add    $0x8,%ebx
0846d4c9 +0x4d:  mov    %eax,0x10(%esp)
0846d4cd +0x51:  mov    %ecx,0xc(%esp)
0846d4d1 +0x55:  movl   $0x10,0x8(%esp)
0846d4d9 +0x5d:  mov    %edx,0x4(%esp)
0846d4dd +0x61:  mov    %ebx,(%esp)
0846d4e0 +0x64:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
0846d4e5 +0x69:  jmp    0846d4e8 <+0x6c>
0846d4e7 +0x6b:  nop
0846d4e8 +0x6c:  add    $0x34,%esp
0846d4eb +0x6f:  pop    %ebx
0846d4ec +0x70:  pop    %ebp
0846d4ed +0x71:  ret
```

## 反编译 C

```c
// CDoubleConnCheckServerProxy::SendLogout @ 0x846d47c

/* CDoubleConnCheckServerProxy::SendLogout(unsigned int, int, int) */

void __thiscall
CDoubleConnCheckServerProxy::SendLogout
          (CDoubleConnCheckServerProxy *this,uint param_1,int param_2,int param_3)

{
  char *pcVar1;
  Packet_DoubleCheck_UDP_Logout local_1c [6];
  uint local_16;
  uint local_12;
  undefined1 local_e;
  undefined1 local_d;
  
  if (param_1 != 0) {
    Packet_DoubleCheck_UDP_Logout::Packet_DoubleCheck_UDP_Logout(local_1c);
    local_16 = param_1;
    local_12 = param_1;
    local_e = (undefined1)param_2;
    local_d = (undefined1)param_3;
    pcVar1 = (char *)std::string::c_str((string *)this);
    CUdpHandler::SendToServer
              ((CUdpHandler *)(this + 8),(char *)local_1c,0x10,(ushort)*(undefined4 *)(this + 4),
               pcVar1);
  }
  return;
}
```
