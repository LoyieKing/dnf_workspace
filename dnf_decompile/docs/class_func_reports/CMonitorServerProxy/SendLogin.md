# SendLogin

`_ZN19CMonitorServerProxy9SendLoginEijiPchS0_`

`CMonitorServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*)`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470c94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470c94  _ZN19CMonitorServerProxy9SendLoginEijiPchS0_
#           CMonitorServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*)
# range [0x08470c94, 0x08470d67]
08470c94 +0x00:  push   %ebp
08470c95 +0x01:  mov    %esp,%ebp
08470c97 +0x03:  sub    $0x78,%esp
08470c9a +0x06:  mov    0x1c(%ebp),%eax
08470c9d +0x09:  mov    %al,-0x4c(%ebp)
08470ca0 +0x0c:  lea    -0x3b(%ebp),%eax
08470ca3 +0x0f:  mov    %eax,(%esp)
08470ca6 +0x12:  call   0846f24c <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x1c>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x1c
08470cab +0x17:  mov    0xc(%ebp),%eax
08470cae +0x1a:  mov    %eax,-0x31(%ebp)
08470cb1 +0x1d:  mov    0x10(%ebp),%eax
08470cb4 +0x20:  mov    %eax,-0x2d(%ebp)
08470cb7 +0x23:  mov    0x14(%ebp),%eax
08470cba +0x26:  mov    %al,-0x29(%ebp)
08470cbd +0x29:  cmpl   $0x0,0x18(%ebp)
08470cc1 +0x2d:  je     08470ce2 <+0x4e>
08470cc3 +0x2f:  movl   $0x10,0x8(%esp)
08470ccb +0x37:  mov    0x18(%ebp),%eax
08470cce +0x3a:  mov    %eax,0x4(%esp)
08470cd2 +0x3e:  lea    -0x3b(%ebp),%eax
08470cd5 +0x41:  add    $0x13,%eax
08470cd8 +0x44:  mov    %eax,(%esp)
08470cdb +0x47:  call   0807d8d0 <_init+0x1c8>
08470ce0 +0x4c:  jmp    08470d25 <+0x91>
08470ce2 +0x4e:  movl   $0x0,0x4(%esp)
08470cea +0x56:  mov    0x10(%ebp),%eax
08470ced +0x59:  mov    %eax,(%esp)
08470cf0 +0x5c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08470cf5 +0x61:  mov    %eax,0x14(%esp)
08470cf9 +0x65:  movl   $"CMonitorServerProxy::SendLogin! DB ID(%s)",0x10(%esp)
08470d01 +0x6d:  movl   $0x4f3,0xc(%esp)
08470d09 +0x75:  movl   $&_ZZN19CMonitorServerProxy9SendLoginEijiPchS0_E19__PRETTY_FUNCTION__,0x8(%esp)
08470d11 +0x7d:  movl   $"DF_MonitorServerProxy.cpp",0x4(%esp)
08470d19 +0x85:  movl   $0x1,(%esp)
08470d20 +0x8c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08470d25 +0x91:  movzbl -0x4c(%ebp),%eax
08470d29 +0x95:  mov    %al,-0x18(%ebp)
08470d2c +0x98:  movl   $0x6,0x8(%esp)
08470d34 +0xa0:  mov    0x20(%ebp),%eax
08470d37 +0xa3:  mov    %eax,0x4(%esp)
08470d3b +0xa7:  lea    -0x3b(%ebp),%eax
08470d3e +0xaa:  add    $0x2c,%eax
08470d41 +0xad:  mov    %eax,(%esp)
08470d44 +0xb0:  call   0807d8a0 <_init+0x198>
08470d49 +0xb5:  movzwl -0x39(%ebp),%eax
08470d4d +0xb9:  movzwl %ax,%edx
08470d50 +0xbc:  lea    -0x3b(%ebp),%eax
08470d53 +0xbf:  mov    %edx,0x8(%esp)
08470d57 +0xc3:  mov    %eax,0x4(%esp)
08470d5b +0xc7:  mov    0x8(%ebp),%eax
08470d5e +0xca:  mov    %eax,(%esp)
08470d61 +0xcd:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08470d66 +0xd2:  leave
08470d67 +0xd3:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::SendLogin @ 0x8470c94

/* CMonitorServerProxy::SendLogin(int, unsigned int, int, char*, unsigned char, char*) */

void __thiscall
CMonitorServerProxy::SendLogin
          (CMonitorServerProxy *this,int param_1,uint param_2,int param_3,char *param_4,
          uchar param_5,char *param_6)

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
              (1,"DF_MonitorServerProxy.cpp",
               "void CMonitorServerProxy::SendLogin(int, memberIdentificationNumber_t, int, char*, unsigned char, char*)"
               ,0x4f3,"CMonitorServerProxy::SendLogin! DB ID(%s)",uVar1);
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
