# SendLogin

`_ZN17CGuildServerProxy9SendLoginEijiPchS0_`

`CGuildServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846db2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846db2a  _ZN17CGuildServerProxy9SendLoginEijiPchS0_
#           CGuildServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*)
# range [0x0846db2a, 0x0846dbfd]
0846db2a +0x00:  push   %ebp
0846db2b +0x01:  mov    %esp,%ebp
0846db2d +0x03:  sub    $0x78,%esp
0846db30 +0x06:  mov    0x1c(%ebp),%eax
0846db33 +0x09:  mov    %al,-0x4c(%ebp)
0846db36 +0x0c:  lea    -0x3b(%ebp),%eax
0846db39 +0x0f:  mov    %eax,(%esp)
0846db3c +0x12:  call   0846f24c <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x1c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x1c
0846db41 +0x17:  mov    0xc(%ebp),%eax
0846db44 +0x1a:  mov    %eax,-0x31(%ebp)
0846db47 +0x1d:  mov    0x10(%ebp),%eax
0846db4a +0x20:  mov    %eax,-0x2d(%ebp)
0846db4d +0x23:  mov    0x14(%ebp),%eax
0846db50 +0x26:  mov    %al,-0x29(%ebp)
0846db53 +0x29:  cmpl   $0x0,0x18(%ebp)
0846db57 +0x2d:  je     0846db78 <+0x4e>
0846db59 +0x2f:  movl   $0x10,0x8(%esp)
0846db61 +0x37:  mov    0x18(%ebp),%eax
0846db64 +0x3a:  mov    %eax,0x4(%esp)
0846db68 +0x3e:  lea    -0x3b(%ebp),%eax
0846db6b +0x41:  add    $0x13,%eax
0846db6e +0x44:  mov    %eax,(%esp)
0846db71 +0x47:  call   0807d8d0 <_init+0x1c8>
0846db76 +0x4c:  jmp    0846dbbb <+0x91>
0846db78 +0x4e:  movl   $0x0,0x4(%esp)
0846db80 +0x56:  mov    0x10(%ebp),%eax
0846db83 +0x59:  mov    %eax,(%esp)
0846db86 +0x5c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0846db8b +0x61:  mov    %eax,0x14(%esp)
0846db8f +0x65:  movl   $"CGuildServerProxy::SendLogin! DB ID(%s)",0x10(%esp)
0846db97 +0x6d:  movl   $0x533,0xc(%esp)
0846db9f +0x75:  movl   $&_ZZN17CGuildServerProxy9SendLoginEijiPchS0_E19__PRETTY_FUNCTION__,0x8(%esp)
0846dba7 +0x7d:  movl   $"DF_GuildServerProxy.cpp",0x4(%esp)
0846dbaf +0x85:  movl   $0x1,(%esp)
0846dbb6 +0x8c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846dbbb +0x91:  movzbl -0x4c(%ebp),%eax
0846dbbf +0x95:  mov    %al,-0x18(%ebp)
0846dbc2 +0x98:  movl   $0x6,0x8(%esp)
0846dbca +0xa0:  mov    0x20(%ebp),%eax
0846dbcd +0xa3:  mov    %eax,0x4(%esp)
0846dbd1 +0xa7:  lea    -0x3b(%ebp),%eax
0846dbd4 +0xaa:  add    $0x2c,%eax
0846dbd7 +0xad:  mov    %eax,(%esp)
0846dbda +0xb0:  call   0807d8a0 <_init+0x198>
0846dbdf +0xb5:  movzwl -0x39(%ebp),%eax
0846dbe3 +0xb9:  movzwl %ax,%edx
0846dbe6 +0xbc:  lea    -0x3b(%ebp),%eax
0846dbe9 +0xbf:  mov    %edx,0x8(%esp)
0846dbed +0xc3:  mov    %eax,0x4(%esp)
0846dbf1 +0xc7:  mov    0x8(%ebp),%eax
0846dbf4 +0xca:  mov    %eax,(%esp)
0846dbf7 +0xcd:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0846dbfc +0xd2:  leave
0846dbfd +0xd3:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendLogin @ 0x846db2a

/* CGuildServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*) */

void __thiscall
CGuildServerProxy::SendLogin
          (CGuildServerProxy *this,int param_1,uint param_2,int param_3,char *param_4,uchar param_5,
          char *param_6)

{
  undefined4 uVar1;
  Packet_Monitor_UDP_Login local_3f [2];
  ushort local_3d;
  int local_35;
  uint local_31;
  undefined1 local_2d;
  char acStack_2c [16];
  uchar local_1c;
  undefined1 auStack_13 [15];
  
  Packet_Monitor_UDP_Login::Packet_Monitor_UDP_Login(local_3f);
  local_35 = param_1;
  local_31 = param_2;
  local_2d = (undefined1)param_3;
  if (param_4 == (char *)0x0) {
    uVar1 = NumberToString(param_2,0);
    LogManager::logFormat
              (1,"DF_GuildServerProxy.cpp",
               "void CGuildServerProxy::SendLogin(int, memberIdentificationNumber_t, int, char*, unsigned char, char*)"
               ,0x533,"CGuildServerProxy::SendLogin! DB ID(%s)",uVar1);
  }
  else {
    strncpy(acStack_2c,param_4,0x10);
  }
  local_1c = param_5;
  memcpy(auStack_13,param_6,6);
  SendTcpPacket(this,(char *)local_3f,(uint)local_3d);
  return;
}
```
