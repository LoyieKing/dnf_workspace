# SendFileStatistic

`_ZN21CStatisticServerProxy17SendFileStatisticEPKcS1_`

`CStatisticServerProxy::SendFileStatistic(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `CStatisticServerProxy` | `0x084720b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084720b4  _ZN21CStatisticServerProxy17SendFileStatisticEPKcS1_
#           CStatisticServerProxy::SendFileStatistic(char const*, char const*)
# range [0x084720b4, 0x08472121]
084720b4 +0x00:  push   %ebp
084720b5 +0x01:  mov    %esp,%ebp
084720b7 +0x03:  sub    $0x928,%esp
084720bd +0x09:  lea    -0x912(%ebp),%eax
084720c3 +0x0f:  mov    %eax,(%esp)
084720c6 +0x12:  call   0847217e <_GLOBAL__I__ZN21CStatisticServerProxyC2ESsi+0x1c>  ; global constructors keyed to CStatisticServerProxy::CStatisticServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x1c
084720cb +0x17:  mov    0x10(%ebp),%eax
084720ce +0x1a:  mov    %eax,0x4(%esp)
084720d2 +0x1e:  lea    -0x912(%ebp),%eax
084720d8 +0x24:  add    $0xa,%eax
084720db +0x27:  mov    %eax,(%esp)
084720de +0x2a:  call   0807def0 <_init+0x7e8>
084720e3 +0x2f:  mov    0xc(%ebp),%eax
084720e6 +0x32:  mov    %eax,0x4(%esp)
084720ea +0x36:  lea    -0x912(%ebp),%eax
084720f0 +0x3c:  add    $0x10a,%eax
084720f5 +0x41:  mov    %eax,(%esp)
084720f8 +0x44:  call   0807def0 <_init+0x7e8>
084720fd +0x49:  movzwl -0x910(%ebp),%eax
08472104 +0x50:  movzwl %ax,%edx
08472107 +0x53:  lea    -0x912(%ebp),%eax
0847210d +0x59:  mov    %edx,0x8(%esp)
08472111 +0x5d:  mov    %eax,0x4(%esp)
08472115 +0x61:  mov    0x8(%ebp),%eax
08472118 +0x64:  mov    %eax,(%esp)
0847211b +0x67:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
08472120 +0x6c:  leave
08472121 +0x6d:  ret
```

## 反编译 C

```c
// CStatisticServerProxy::SendFileStatistic @ 0x84720b4

/* CStatisticServerProxy::SendFileStatistic(char const*, char const*) */

void __thiscall
CStatisticServerProxy::SendFileStatistic(CStatisticServerProxy *this,char *param_1,char *param_2)

{
  Packet_File_Statistic local_916 [2];
  ushort local_914;
  char acStack_90c [256];
  char acStack_80c [2056];
  
  Packet_File_Statistic::Packet_File_Statistic(local_916);
  strcpy(acStack_90c,param_2);
  strcpy(acStack_80c,param_1);
  SendPacket(this,(char *)local_916,(uint)local_914);
  return;
}
```
