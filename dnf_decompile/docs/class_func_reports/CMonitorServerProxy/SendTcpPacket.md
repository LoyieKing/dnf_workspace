# SendTcpPacket

`_ZN19CMonitorServerProxy13SendTcpPacketEPci`

`CMonitorServerProxy::SendTcpPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470e44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470e44  _ZN19CMonitorServerProxy13SendTcpPacketEPci
#           CMonitorServerProxy::SendTcpPacket(char*, int)
# range [0x08470e44, 0x08470e87]
08470e44 +0x00:  push   %ebp
08470e45 +0x01:  mov    %esp,%ebp
08470e47 +0x03:  sub    $0x18,%esp
08470e4a +0x06:  mov    0x8(%ebp),%eax
08470e4d +0x09:  mov    %eax,(%esp)
08470e50 +0x0c:  call   0847173c <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x196>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x196
08470e55 +0x11:  mov    %eax,(%esp)
08470e58 +0x14:  call   082fdf4e <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x1ff>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x1ff
08470e5d +0x19:  cmp    $0xffffffff,%eax
08470e60 +0x1c:  sete   %al
08470e63 +0x1f:  test   %al,%al
08470e65 +0x21:  jne    08470e85 <+0x41>
08470e67 +0x23:  mov    0x8(%ebp),%eax
08470e6a +0x26:  lea    0xc(%eax),%edx
08470e6d +0x29:  mov    0x10(%ebp),%eax
08470e70 +0x2c:  mov    %eax,0x8(%esp)
08470e74 +0x30:  mov    0xc(%ebp),%eax
08470e77 +0x33:  mov    %eax,0x4(%esp)
08470e7b +0x37:  mov    %edx,(%esp)
08470e7e +0x3a:  call   082fdfcc <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x27d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x27d
08470e83 +0x3f:  jmp    08470e86 <+0x42>
08470e85 +0x41:  nop
08470e86 +0x42:  leave
08470e87 +0x43:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendTcpPacket @ 0x8470e44

/* CMonitorServerProxy::SendTcpPacket(char*, int) */

void __thiscall
CMonitorServerProxy::SendTcpPacket(CMonitorServerProxy *this,char *param_1,int param_2)

{
  CNetwork<100000,100000> *this_00;
  int iVar1;
  
  this_00 = (CNetwork<100000,100000> *)GetTcpHandler(this);
  iVar1 = CNetwork<100000,100000>::get_socket(this_00);
  if (iVar1 != -1) {
    CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)(this + 0xc),param_1,param_2);
  }
  return;
}
```
