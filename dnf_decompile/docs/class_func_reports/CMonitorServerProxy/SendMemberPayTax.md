# SendMemberPayTax

`_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii`

`CMonitorServerProxy::SendMemberPayTax(bool, unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470fb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470fb4  _ZN19CMonitorServerProxy16SendMemberPayTaxEbjii
#           CMonitorServerProxy::SendMemberPayTax(bool, unsigned int, int, int)
# range [0x08470fb4, 0x08471019]
08470fb4 +0x00:  push   %ebp
08470fb5 +0x01:  mov    %esp,%ebp
08470fb7 +0x03:  sub    $0x48,%esp
08470fba +0x06:  mov    0xc(%ebp),%eax
08470fbd +0x09:  mov    %al,-0x2c(%ebp)
08470fc0 +0x0c:  movzbl -0x2c(%ebp),%eax
08470fc4 +0x10:  xor    $0x1,%eax
08470fc7 +0x13:  test   %al,%al
08470fc9 +0x15:  jne    08471013 <+0x5f>
08470fcb +0x17:  cmpl   $0x0,0x14(%ebp)
08470fcf +0x1b:  jne    08470fd7 <+0x23>
08470fd1 +0x1d:  cmpl   $0x0,0x18(%ebp)
08470fd5 +0x21:  je     08471016 <+0x62>
08470fd7 +0x23:  lea    -0x1e(%ebp),%eax
08470fda +0x26:  mov    %eax,(%esp)
08470fdd +0x29:  call   084715c2 <_GLOBAL__I__ZN19CMonitorServerProxyC2ESsii+0x1c>  ; global constructors keyed to CMonitorServerProxy::CMonitorServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x1c
08470fe2 +0x2e:  mov    0x10(%ebp),%eax
08470fe5 +0x31:  mov    %eax,-0x14(%ebp)
08470fe8 +0x34:  mov    0x14(%ebp),%eax
08470feb +0x37:  mov    %eax,-0x10(%ebp)
08470fee +0x3a:  mov    0x18(%ebp),%eax
08470ff1 +0x3d:  mov    %eax,-0xc(%ebp)
08470ff4 +0x40:  movzwl -0x1c(%ebp),%eax
08470ff8 +0x44:  movzwl %ax,%edx
08470ffb +0x47:  lea    -0x1e(%ebp),%eax
08470ffe +0x4a:  mov    %edx,0x8(%esp)
08471002 +0x4e:  mov    %eax,0x4(%esp)
08471006 +0x52:  mov    0x8(%ebp),%eax
08471009 +0x55:  mov    %eax,(%esp)
0847100c +0x58:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
08471011 +0x5d:  jmp    08471017 <+0x63>
08471013 +0x5f:  nop
08471014 +0x60:  jmp    08471017 <+0x63>
08471016 +0x62:  nop
08471017 +0x63:  leave
08471018 +0x64:  ret
08471019 +0x65:  nop
```

## 反编译 C

```c
// CMonitorServerProxy::SendMemberPayTax @ 0x8470fb4

/* CMonitorServerProxy::SendMemberPayTax(bool, unsigned int, int, int) */

void __thiscall
CMonitorServerProxy::SendMemberPayTax
          (CMonitorServerProxy *this,bool param_1,uint param_2,int param_3,int param_4)

{
  Packet_Monitor_Member_Pay_Tax local_22 [2];
  ushort local_20;
  uint local_18;
  int local_14;
  int local_10;
  
  if ((param_1) && ((param_3 != 0 || (param_4 != 0)))) {
    Packet_Monitor_Member_Pay_Tax::Packet_Monitor_Member_Pay_Tax(local_22);
    local_18 = param_2;
    local_14 = param_3;
    local_10 = param_4;
    SendPacket(this,(char *)local_22,(uint)local_20);
  }
  return;
}
```
