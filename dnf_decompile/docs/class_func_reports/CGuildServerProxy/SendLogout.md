# SendLogout

`_ZN17CGuildServerProxy10SendLogoutEjiPcjjjh`

`CGuildServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846dbfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846dbfe  _ZN17CGuildServerProxy10SendLogoutEjiPcjjjh
#           CGuildServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned int, unsigned char)
# range [0x0846dbfe, 0x0846dc7d]
0846dbfe +0x00:  push   %ebp
0846dbff +0x01:  mov    %esp,%ebp
0846dc01 +0x03:  sub    $0x68,%esp
0846dc04 +0x06:  mov    0x24(%ebp),%eax
0846dc07 +0x09:  mov    %al,-0x4c(%ebp)
0846dc0a +0x0c:  cmpl   $0x0,0xc(%ebp)
0846dc0e +0x10:  je     0846dc7a <+0x7c>
0846dc10 +0x12:  lea    -0x43(%ebp),%eax
0846dc13 +0x15:  mov    %eax,(%esp)
0846dc16 +0x18:  call   0846f2d4 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0xa4>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0xa4
0846dc1b +0x1d:  mov    0xc(%ebp),%eax
0846dc1e +0x20:  mov    %eax,-0x39(%ebp)
0846dc21 +0x23:  mov    0x10(%ebp),%eax
0846dc24 +0x26:  mov    %al,-0x35(%ebp)
0846dc27 +0x29:  mov    0x18(%ebp),%eax
0846dc2a +0x2c:  mov    %eax,-0x34(%ebp)
0846dc2d +0x2f:  mov    0x1c(%ebp),%eax
0846dc30 +0x32:  mov    %eax,-0x30(%ebp)
0846dc33 +0x35:  mov    0x20(%ebp),%eax
0846dc36 +0x38:  mov    %eax,-0x2b(%ebp)
0846dc39 +0x3b:  movzbl -0x4c(%ebp),%eax
0846dc3d +0x3f:  mov    %al,-0x2c(%ebp)
0846dc40 +0x42:  cmpl   $0x0,0x14(%ebp)
0846dc44 +0x46:  je     0846dc5b <+0x5d>
0846dc46 +0x48:  mov    0x14(%ebp),%eax
0846dc49 +0x4b:  mov    %eax,0x4(%esp)
0846dc4d +0x4f:  lea    -0x43(%ebp),%eax
0846dc50 +0x52:  add    $0x1c,%eax
0846dc53 +0x55:  mov    %eax,(%esp)
0846dc56 +0x58:  call   0807def0 <_init+0x7e8>
0846dc5b +0x5d:  movzwl -0x41(%ebp),%eax
0846dc5f +0x61:  movzwl %ax,%edx
0846dc62 +0x64:  lea    -0x43(%ebp),%eax
0846dc65 +0x67:  mov    %edx,0x8(%esp)
0846dc69 +0x6b:  mov    %eax,0x4(%esp)
0846dc6d +0x6f:  mov    0x8(%ebp),%eax
0846dc70 +0x72:  mov    %eax,(%esp)
0846dc73 +0x75:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846dc78 +0x7a:  jmp    0846dc7b <+0x7d>
0846dc7a +0x7c:  nop
0846dc7b +0x7d:  leave
0846dc7c +0x7e:  ret
0846dc7d +0x7f:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendLogout @ 0x846dbfe

/* CGuildServerProxy::SendLogout(unsigned int, int, char*, unsigned int, unsigned int, unsigned int,
   unsigned char) */

void __thiscall
CGuildServerProxy::SendLogout
          (CGuildServerProxy *this,uint param_1,int param_2,char *param_3,uint param_4,uint param_5,
          uint param_6,uchar param_7)

{
  Packet_Monitor_UDP_Logout local_47 [2];
  ushort local_45;
  uint local_3d;
  undefined1 local_39;
  uint local_38;
  uint local_34;
  uchar local_30;
  uint local_2f;
  char acStack_2b [39];
  
  if (param_1 != 0) {
    Packet_Monitor_UDP_Logout::Packet_Monitor_UDP_Logout(local_47);
    local_3d = param_1;
    local_39 = (undefined1)param_2;
    local_38 = param_4;
    local_34 = param_5;
    local_2f = param_6;
    local_30 = param_7;
    if (param_3 != (char *)0x0) {
      strcpy(acStack_2b,param_3);
    }
    SendTcpPacket(this,(char *)local_47,(uint)local_45);
  }
  return;
}
```
