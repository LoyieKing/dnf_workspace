# SendPacket

`_ZN27CDoubleConnCheckServerProxy10SendPacketEPci`

`CDoubleConnCheckServerProxy::SendPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CDoubleConnCheckServerProxy` | `0x0846d4ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d4ee  _ZN27CDoubleConnCheckServerProxy10SendPacketEPci
#           CDoubleConnCheckServerProxy::SendPacket(char*, int)
# range [0x0846d4ee, 0x0846d52d]
0846d4ee +0x00:  push   %ebp
0846d4ef +0x01:  mov    %esp,%ebp
0846d4f1 +0x03:  sub    $0x28,%esp
0846d4f4 +0x06:  mov    0x8(%ebp),%eax
0846d4f7 +0x09:  mov    %eax,(%esp)
0846d4fa +0x0c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0846d4ff +0x11:  mov    0x8(%ebp),%edx
0846d502 +0x14:  mov    0x4(%edx),%edx
0846d505 +0x17:  movzwl %dx,%edx
0846d508 +0x1a:  mov    0x8(%ebp),%ecx
0846d50b +0x1d:  add    $0x8,%ecx
0846d50e +0x20:  mov    %eax,0x10(%esp)
0846d512 +0x24:  mov    %edx,0xc(%esp)
0846d516 +0x28:  mov    0x10(%ebp),%eax
0846d519 +0x2b:  mov    %eax,0x8(%esp)
0846d51d +0x2f:  mov    0xc(%ebp),%eax
0846d520 +0x32:  mov    %eax,0x4(%esp)
0846d524 +0x36:  mov    %ecx,(%esp)
0846d527 +0x39:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
0846d52c +0x3e:  leave
0846d52d +0x3f:  ret
```

## 反编译 C

```c
// CDoubleConnCheckServerProxy::SendPacket @ 0x846d4ee

/* CDoubleConnCheckServerProxy::SendPacket(char*, int) */

void __thiscall
CDoubleConnCheckServerProxy::SendPacket(CDoubleConnCheckServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::string::c_str((string *)this);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 8),param_1,param_2,(ushort)*(undefined4 *)(this + 4),pcVar1);
  return;
}
```
