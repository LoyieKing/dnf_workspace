# SendGuildMasterDelegate

`_ZN17CGuildServerProxy23SendGuildMasterDelegateEjjiPc`

`CGuildServerProxy::SendGuildMasterDelegate(unsigned int, unsigned int, int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e2ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e2ac  _ZN17CGuildServerProxy23SendGuildMasterDelegateEjjiPc
#           CGuildServerProxy::SendGuildMasterDelegate(unsigned int, unsigned int, int, char*)
# range [0x0846e2ac, 0x0846e303]
0846e2ac +0x00:  push   %ebp
0846e2ad +0x01:  mov    %esp,%ebp
0846e2af +0x03:  sub    $0x48,%esp
0846e2b2 +0x06:  lea    -0x38(%ebp),%eax
0846e2b5 +0x09:  mov    %eax,(%esp)
0846e2b8 +0x0c:  call   0846f968 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x738>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x738
0846e2bd +0x11:  mov    0xc(%ebp),%eax
0846e2c0 +0x14:  mov    %eax,-0x2e(%ebp)
0846e2c3 +0x17:  mov    0x10(%ebp),%eax
0846e2c6 +0x1a:  mov    %eax,-0x2a(%ebp)
0846e2c9 +0x1d:  mov    0x14(%ebp),%eax
0846e2cc +0x20:  mov    %eax,0x8(%esp)
0846e2d0 +0x24:  mov    0x18(%ebp),%eax
0846e2d3 +0x27:  mov    %eax,0x4(%esp)
0846e2d7 +0x2b:  lea    -0x38(%ebp),%eax
0846e2da +0x2e:  add    $0x12,%eax
0846e2dd +0x31:  mov    %eax,(%esp)
0846e2e0 +0x34:  call   0807d8a0 <_init+0x198>
0846e2e5 +0x39:  movzwl -0x36(%ebp),%eax
0846e2e9 +0x3d:  movzwl %ax,%edx
0846e2ec +0x40:  lea    -0x38(%ebp),%eax
0846e2ef +0x43:  mov    %edx,0x8(%esp)
0846e2f3 +0x47:  mov    %eax,0x4(%esp)
0846e2f7 +0x4b:  mov    0x8(%ebp),%eax
0846e2fa +0x4e:  mov    %eax,(%esp)
0846e2fd +0x51:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846e302 +0x56:  leave
0846e303 +0x57:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendGuildMasterDelegate @ 0x846e2ac

/* CGuildServerProxy::SendGuildMasterDelegate(unsigned int, unsigned int, int, char*) */

void __thiscall
CGuildServerProxy::SendGuildMasterDelegate
          (CGuildServerProxy *this,uint param_1,uint param_2,int param_3,char *param_4)

{
  Packet_Guild_Request_Guild_Master_Delegate local_3c [2];
  ushort local_3a;
  uint local_32;
  uint local_2e;
  undefined1 auStack_2a [38];
  
  Packet_Guild_Request_Guild_Master_Delegate::Packet_Guild_Request_Guild_Master_Delegate(local_3c);
  local_32 = param_1;
  local_2e = param_2;
  memcpy(auStack_2a,param_4,param_3);
  SendPacket(this,(char *)local_3c,(uint)local_3a);
  return;
}
```
