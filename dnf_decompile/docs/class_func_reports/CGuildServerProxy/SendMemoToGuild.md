# SendMemoToGuild

`_ZN17CGuildServerProxy15SendMemoToGuildEjiiPc`

`CGuildServerProxy::SendMemoToGuild(unsigned int, int, int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e254` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e254  _ZN17CGuildServerProxy15SendMemoToGuildEjiiPc
#           CGuildServerProxy::SendMemoToGuild(unsigned int, int, int, char*)
# range [0x0846e254, 0x0846e2ab]
0846e254 +0x00:  push   %ebp
0846e255 +0x01:  mov    %esp,%ebp
0846e257 +0x03:  sub    $0x48,%esp
0846e25a +0x06:  lea    -0x2f(%ebp),%eax
0846e25d +0x09:  mov    %eax,(%esp)
0846e260 +0x0c:  call   0846f4ce <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x29e>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x29e
0846e265 +0x11:  mov    0x10(%ebp),%eax
0846e268 +0x14:  mov    %eax,-0x21(%ebp)
0846e26b +0x17:  mov    0xc(%ebp),%eax
0846e26e +0x1a:  mov    %eax,-0x25(%ebp)
0846e271 +0x1d:  mov    0x14(%ebp),%eax
0846e274 +0x20:  mov    %eax,0x8(%esp)
0846e278 +0x24:  mov    0x18(%ebp),%eax
0846e27b +0x27:  mov    %eax,0x4(%esp)
0846e27f +0x2b:  lea    -0x2f(%ebp),%eax
0846e282 +0x2e:  add    $0x12,%eax
0846e285 +0x31:  mov    %eax,(%esp)
0846e288 +0x34:  call   0807d8a0 <_init+0x198>
0846e28d +0x39:  movzwl -0x2d(%ebp),%eax
0846e291 +0x3d:  movzwl %ax,%edx
0846e294 +0x40:  lea    -0x2f(%ebp),%eax
0846e297 +0x43:  mov    %edx,0x8(%esp)
0846e29b +0x47:  mov    %eax,0x4(%esp)
0846e29f +0x4b:  mov    0x8(%ebp),%eax
0846e2a2 +0x4e:  mov    %eax,(%esp)
0846e2a5 +0x51:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846e2aa +0x56:  leave
0846e2ab +0x57:  ret
```

## 反编译 C

```c
// CGuildServerProxy::SendMemoToGuild @ 0x846e254

/* CGuildServerProxy::SendMemoToGuild(unsigned int, int, int, char*) */

void __thiscall
CGuildServerProxy::SendMemoToGuild
          (CGuildServerProxy *this,uint param_1,int param_2,int param_3,char *param_4)

{
  Packet_Guild_Write_Guild_Member_Memo local_33 [2];
  ushort local_31;
  uint local_29;
  int local_25;
  undefined1 auStack_21 [29];
  
  Packet_Guild_Write_Guild_Member_Memo::Packet_Guild_Write_Guild_Member_Memo(local_33);
  local_25 = param_2;
  local_29 = param_1;
  memcpy(auStack_21,param_4,param_3);
  SendPacket(this,(char *)local_33,(uint)local_31);
  return;
}
```
