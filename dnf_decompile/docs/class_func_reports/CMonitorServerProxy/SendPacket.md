# SendPacket

`_ZN19CMonitorServerProxy10SendPacketEPci`

`CMonitorServerProxy::SendPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470df4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470df4  _ZN19CMonitorServerProxy10SendPacketEPci
#           CMonitorServerProxy::SendPacket(char*, int)
# range [0x08470df4, 0x08470e43]
08470df4 +0x00:  push   %ebp
08470df5 +0x01:  mov    %esp,%ebp
08470df7 +0x03:  sub    $0x28,%esp
08470dfa +0x06:  mov    0x8(%ebp),%eax
08470dfd +0x09:  mov    0x4(%eax),%eax
08470e00 +0x0c:  test   %eax,%eax
08470e02 +0x0e:  je     08470e41 <+0x4d>
08470e04 +0x10:  mov    0x8(%ebp),%eax
08470e07 +0x13:  mov    %eax,(%esp)
08470e0a +0x16:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08470e0f +0x1b:  mov    0x8(%ebp),%edx
08470e12 +0x1e:  mov    0x4(%edx),%edx
08470e15 +0x21:  movzwl %dx,%edx
08470e18 +0x24:  mov    0x8(%ebp),%ecx
08470e1b +0x27:  add    $&_ZL14gUnicodeBuffer+0x268d8,%ecx
08470e21 +0x2d:  mov    %eax,0x10(%esp)
08470e25 +0x31:  mov    %edx,0xc(%esp)
08470e29 +0x35:  mov    0x10(%ebp),%eax
08470e2c +0x38:  mov    %eax,0x8(%esp)
08470e30 +0x3c:  mov    0xc(%ebp),%eax
08470e33 +0x3f:  mov    %eax,0x4(%esp)
08470e37 +0x43:  mov    %ecx,(%esp)
08470e3a +0x46:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
08470e3f +0x4b:  jmp    08470e42 <+0x4e>
08470e41 +0x4d:  nop
08470e42 +0x4e:  leave
08470e43 +0x4f:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendPacket @ 0x8470df4

/* CMonitorServerProxy::SendPacket(char*, int) */

void __thiscall CMonitorServerProxy::SendPacket(CMonitorServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(this + 4) != 0) {
    pcVar1 = (char *)std::string::c_str((string *)this);
    CUdpHandler::SendToServer
              ((CUdpHandler *)(this + 0x30e04),param_1,param_2,(ushort)*(undefined4 *)(this + 4),
               pcVar1);
  }
  return;
}
```
