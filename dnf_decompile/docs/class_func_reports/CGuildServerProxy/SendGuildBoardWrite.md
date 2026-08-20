# SendGuildBoardWrite

`_ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj`

`CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846f01a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846f01a  _ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj
#           CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned int)
# range [0x0846f01a, 0x0846f0af]
0846f01a +0x00:  push   %ebp
0846f01b +0x01:  mov    %esp,%ebp
0846f01d +0x03:  sub    $0xb8,%esp
0846f023 +0x09:  mov    0x1c(%ebp),%eax
0846f026 +0x0c:  mov    %al,-0x9c(%ebp)
0846f02c +0x12:  lea    -0x98(%ebp),%eax
0846f032 +0x18:  mov    %eax,(%esp)
0846f035 +0x1b:  call   0846fbde <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x9ae>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x9ae
0846f03a +0x20:  mov    0x10(%ebp),%eax
0846f03d +0x23:  mov    %eax,-0x8a(%ebp)
0846f043 +0x29:  mov    0x14(%ebp),%eax
0846f046 +0x2c:  mov    %eax,-0x86(%ebp)
0846f04c +0x32:  mov    0x18(%ebp),%eax
0846f04f +0x35:  mov    %al,-0x82(%ebp)
0846f055 +0x3b:  movzbl -0x9c(%ebp),%eax
0846f05c +0x42:  mov    %al,-0x81(%ebp)
0846f062 +0x48:  mov    0x20(%ebp),%eax
0846f065 +0x4b:  mov    %eax,-0x8e(%ebp)
0846f06b +0x51:  movl   $0x78,0x8(%esp)
0846f073 +0x59:  mov    0xc(%ebp),%eax
0846f076 +0x5c:  mov    %eax,0x4(%esp)
0846f07a +0x60:  lea    -0x98(%ebp),%eax
0846f080 +0x66:  add    $0x18,%eax
0846f083 +0x69:  mov    %eax,(%esp)
0846f086 +0x6c:  call   0807d8a0 <_init+0x198>
0846f08b +0x71:  movzwl -0x96(%ebp),%eax
0846f092 +0x78:  movzwl %ax,%edx
0846f095 +0x7b:  lea    -0x98(%ebp),%eax
0846f09b +0x81:  mov    %edx,0x8(%esp)
0846f09f +0x85:  mov    %eax,0x4(%esp)
0846f0a3 +0x89:  mov    0x8(%ebp),%eax
0846f0a6 +0x8c:  mov    %eax,(%esp)
0846f0a9 +0x8f:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846f0ae +0x94:  leave
0846f0af +0x95:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildBoardWrite @ 0x846f01a

/* CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned
   int) */

void __thiscall
CGuildServerProxy::SendGuildBoardWrite
          (CGuildServerProxy *this,char *param_1,uint param_2,uint param_3,int param_4,char param_5,
          uint param_6)

{
  Packet_Guild_Request_Guild_Board_Write local_9c [2];
  ushort local_9a;
  uint local_92;
  uint local_8e;
  uint local_8a;
  undefined1 local_86;
  char local_85;
  undefined1 auStack_84 [128];
  
  Packet_Guild_Request_Guild_Board_Write::Packet_Guild_Request_Guild_Board_Write(local_9c);
  local_8e = param_2;
  local_8a = param_3;
  local_86 = (undefined1)param_4;
  local_92 = param_6;
  local_85 = param_5;
  memcpy(auStack_84,param_1,0x78);
  SendTcpPacket(this,(char *)local_9c,(uint)local_9a);
  return;
}
```
