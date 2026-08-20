# SendLogout

`_ZN19CMonitorServerProxy10SendLogoutEjiPcjjjhh`

`CMonitorServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned int, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470d68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470d68  _ZN19CMonitorServerProxy10SendLogoutEjiPcjjjhh
#           CMonitorServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned int, unsigned char, unsigned char)
# range [0x08470d68, 0x08470df3]
08470d68 +0x00:  push   %ebp
08470d69 +0x01:  mov    %esp,%ebp
08470d6b +0x03:  sub    $0x68,%esp
08470d6e +0x06:  mov    0x24(%ebp),%edx
08470d71 +0x09:  mov    0x28(%ebp),%eax
08470d74 +0x0c:  mov    %dl,-0x4c(%ebp)
08470d77 +0x0f:  mov    %al,-0x50(%ebp)
08470d7a +0x12:  cmpl   $0x0,0xc(%ebp)
08470d7e +0x16:  je     08470df1 <+0x89>
08470d80 +0x18:  lea    -0x43(%ebp),%eax
08470d83 +0x1b:  mov    %eax,(%esp)
08470d86 +0x1e:  call   0846f2d4 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa4>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa4
08470d8b +0x23:  mov    0xc(%ebp),%eax
08470d8e +0x26:  mov    %eax,-0x39(%ebp)
08470d91 +0x29:  mov    0x10(%ebp),%eax
08470d94 +0x2c:  mov    %al,-0x35(%ebp)
08470d97 +0x2f:  mov    0x18(%ebp),%eax
08470d9a +0x32:  mov    %eax,-0x34(%ebp)
08470d9d +0x35:  mov    0x1c(%ebp),%eax
08470da0 +0x38:  mov    %eax,-0x30(%ebp)
08470da3 +0x3b:  mov    0x20(%ebp),%eax
08470da6 +0x3e:  mov    %eax,-0x2b(%ebp)
08470da9 +0x41:  movzbl -0x4c(%ebp),%eax
08470dad +0x45:  mov    %al,-0x2c(%ebp)
08470db0 +0x48:  movzbl -0x50(%ebp),%eax
08470db4 +0x4c:  mov    %al,-0x9(%ebp)
08470db7 +0x4f:  cmpl   $0x0,0x14(%ebp)
08470dbb +0x53:  je     08470dd2 <+0x6a>
08470dbd +0x55:  mov    0x14(%ebp),%eax
08470dc0 +0x58:  mov    %eax,0x4(%esp)
08470dc4 +0x5c:  lea    -0x43(%ebp),%eax
08470dc7 +0x5f:  add    $0x1c,%eax
08470dca +0x62:  mov    %eax,(%esp)
08470dcd +0x65:  call   0807def0 <_init+0x7e8>
08470dd2 +0x6a:  movzwl -0x41(%ebp),%eax
08470dd6 +0x6e:  movzwl %ax,%edx
08470dd9 +0x71:  lea    -0x43(%ebp),%eax
08470ddc +0x74:  mov    %edx,0x8(%esp)
08470de0 +0x78:  mov    %eax,0x4(%esp)
08470de4 +0x7c:  mov    0x8(%ebp),%eax
08470de7 +0x7f:  mov    %eax,(%esp)
08470dea +0x82:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08470def +0x87:  jmp    08470df2 <+0x8a>
08470df1 +0x89:  nop
08470df2 +0x8a:  leave
08470df3 +0x8b:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendLogout @ 0x8470d68

/* CMonitorServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned
   int, unsigned char, unsigned char) */

void __thiscall
CMonitorServerProxy::SendLogout
          (CMonitorServerProxy *this,uint param_1,int param_2,char *param_3,uint param_4,
          uint param_5,uint param_6,uchar param_7,uchar param_8)

{
  Packet_Monitor_UDP_Logout local_47 [2];
  ushort local_45;
  uint local_3d;
  undefined1 local_39;
  uint local_38;
  uint local_34;
  uchar local_30;
  uint local_2f;
  char acStack_2b [30];
  uchar local_d;
  
  if (param_1 != 0) {
    Packet_Monitor_UDP_Logout::Packet_Monitor_UDP_Logout(local_47);
    local_3d = param_1;
    local_39 = (undefined1)param_2;
    local_38 = param_4;
    local_34 = param_5;
    local_2f = param_6;
    local_30 = param_7;
    local_d = param_8;
    if (param_3 != (char *)0x0) {
      strcpy(acStack_2b,param_3);
    }
    SendTcpPacket(this,(char *)local_47,(uint)local_45);
  }
  return;
}
```
