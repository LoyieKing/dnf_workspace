# SendPacket

`_ZN18CSchoolServerProxy10SendPacketEPci`

`CSchoolServerProxy::SendPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CSchoolServerProxy` | `0x08471ed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471ed2  _ZN18CSchoolServerProxy10SendPacketEPci
#           CSchoolServerProxy::SendPacket(char*, int)
# range [0x08471ed2, 0x08471f11]
08471ed2 +0x00:  push   %ebp
08471ed3 +0x01:  mov    %esp,%ebp
08471ed5 +0x03:  sub    $0x28,%esp
08471ed8 +0x06:  mov    0x8(%ebp),%eax
08471edb +0x09:  mov    %eax,(%esp)
08471ede +0x0c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08471ee3 +0x11:  mov    0x8(%ebp),%edx
08471ee6 +0x14:  mov    0x4(%edx),%edx
08471ee9 +0x17:  movzwl %dx,%edx
08471eec +0x1a:  mov    0x8(%ebp),%ecx
08471eef +0x1d:  add    $0x8,%ecx
08471ef2 +0x20:  mov    %eax,0x10(%esp)
08471ef6 +0x24:  mov    %edx,0xc(%esp)
08471efa +0x28:  mov    0x10(%ebp),%eax
08471efd +0x2b:  mov    %eax,0x8(%esp)
08471f01 +0x2f:  mov    0xc(%ebp),%eax
08471f04 +0x32:  mov    %eax,0x4(%esp)
08471f08 +0x36:  mov    %ecx,(%esp)
08471f0b +0x39:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
08471f10 +0x3e:  leave
08471f11 +0x3f:  ret
```

## 反编译 C

```c
// CSchoolServerProxy::SendPacket @ 0x8471ed2

/* CSchoolServerProxy::SendPacket(char*, int) */

void __thiscall CSchoolServerProxy::SendPacket(CSchoolServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)std::string::c_str((string *)this);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 8),param_1,param_2,(ushort)*(undefined4 *)(this + 4),pcVar1);
  return;
}
```
