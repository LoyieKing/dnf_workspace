# SendPacket

`_ZN21CStatisticServerProxy10SendPacketEPci`

`CStatisticServerProxy::SendPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CStatisticServerProxy` | `0x08472044` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08472044  _ZN21CStatisticServerProxy10SendPacketEPci
#           CStatisticServerProxy::SendPacket(char*, int)
# range [0x08472044, 0x08472091]
08472044 +0x00:  push   %ebp
08472045 +0x01:  mov    %esp,%ebp
08472047 +0x03:  sub    $0x28,%esp
0847204a +0x06:  mov    0x8(%ebp),%eax
0847204d +0x09:  mov    0x4(%eax),%eax
08472050 +0x0c:  test   %eax,%eax
08472052 +0x0e:  je     0847208e <+0x4a>
08472054 +0x10:  mov    0x8(%ebp),%eax
08472057 +0x13:  mov    %eax,(%esp)
0847205a +0x16:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0847205f +0x1b:  mov    0x8(%ebp),%edx
08472062 +0x1e:  mov    0x4(%edx),%edx
08472065 +0x21:  movzwl %dx,%edx
08472068 +0x24:  mov    0x8(%ebp),%ecx
0847206b +0x27:  add    $0x8,%ecx
0847206e +0x2a:  mov    %eax,0x10(%esp)
08472072 +0x2e:  mov    %edx,0xc(%esp)
08472076 +0x32:  mov    0x10(%ebp),%eax
08472079 +0x35:  mov    %eax,0x8(%esp)
0847207d +0x39:  mov    0xc(%ebp),%eax
08472080 +0x3c:  mov    %eax,0x4(%esp)
08472084 +0x40:  mov    %ecx,(%esp)
08472087 +0x43:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
0847208c +0x48:  jmp    0847208f <+0x4b>
0847208e +0x4a:  nop
0847208f +0x4b:  leave
08472090 +0x4c:  ret
08472091 +0x4d:  nop
```

## 反编译 C

```c
// CStatisticServerProxy::SendPacket @ 0x8472044

/* CStatisticServerProxy::SendPacket(char*, int) */

void __thiscall
CStatisticServerProxy::SendPacket(CStatisticServerProxy *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(this + 4) != 0) {
    pcVar1 = (char *)std::string::c_str((string *)this);
    CUdpHandler::SendToServer
              ((CUdpHandler *)(this + 8),param_1,param_2,(ushort)*(undefined4 *)(this + 4),pcVar1);
  }
  return;
}
```
