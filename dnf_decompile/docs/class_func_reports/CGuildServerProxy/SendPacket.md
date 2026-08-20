# SendPacket

`_ZN17CGuildServerProxy10SendPacketEPci`

`CGuildServerProxy::SendPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846dc7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846dc7e  _ZN17CGuildServerProxy10SendPacketEPci
#           CGuildServerProxy::SendPacket(char*, int)
# range [0x0846dc7e, 0x0846dccd]
0846dc7e +0x00:  push   %ebp
0846dc7f +0x01:  mov    %esp,%ebp
0846dc81 +0x03:  sub    $0x28,%esp
0846dc84 +0x06:  mov    0x8(%ebp),%eax
0846dc87 +0x09:  mov    0x4(%eax),%eax
0846dc8a +0x0c:  test   %eax,%eax
0846dc8c +0x0e:  je     0846dccb <+0x4d>
0846dc8e +0x10:  mov    0x8(%ebp),%eax
0846dc91 +0x13:  mov    %eax,(%esp)
0846dc94 +0x16:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0846dc99 +0x1b:  mov    0x8(%ebp),%edx
0846dc9c +0x1e:  mov    0x4(%edx),%edx
0846dc9f +0x21:  movzwl %dx,%edx
0846dca2 +0x24:  mov    0x8(%ebp),%ecx
0846dca5 +0x27:  add    $&_ZL14gUnicodeBuffer+0x268f0,%ecx
0846dcab +0x2d:  mov    %eax,0x10(%esp)
0846dcaf +0x31:  mov    %edx,0xc(%esp)
0846dcb3 +0x35:  mov    0x10(%ebp),%eax
0846dcb6 +0x38:  mov    %eax,0x8(%esp)
0846dcba +0x3c:  mov    0xc(%ebp),%eax
0846dcbd +0x3f:  mov    %eax,0x4(%esp)
0846dcc1 +0x43:  mov    %ecx,(%esp)
0846dcc4 +0x46:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
0846dcc9 +0x4b:  jmp    0846dccc <+0x4e>
0846dccb +0x4d:  nop
0846dccc +0x4e:  leave
0846dccd +0x4f:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendPacket @ 0x846dc7e

/* CGuildServerProxy::SendPacket(char*, int) */

void __thiscall CGuildServerProxy::SendPacket(CGuildServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(this + 4) != 0) {
    pcVar1 = (char *)std::string::c_str((string *)this);
    CUdpHandler::SendToServer
              ((CUdpHandler *)(this + 0x30e1c),param_1,param_2,(ushort)*(undefined4 *)(this + 4),
               pcVar1);
  }
  return;
}
```
