# SendMessageToGuild

`_ZN17CGuildServerProxy18SendMessageToGuildEjiPc`

`CGuildServerProxy::SendMessageToGuild(unsigned int, int, char*)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e1f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e1f4  _ZN17CGuildServerProxy18SendMessageToGuildEjiPc
#           CGuildServerProxy::SendMessageToGuild(unsigned int, int, char*)
# range [0x0846e1f4, 0x0846e253]
0846e1f4 +0x00:  push   %ebp
0846e1f5 +0x01:  mov    %esp,%ebp
0846e1f7 +0x03:  sub    $0x98,%esp
0846e1fd +0x09:  lea    -0x7c(%ebp),%eax
0846e200 +0x0c:  mov    %eax,(%esp)
0846e203 +0x0f:  call   0846f524 <_GLOBAL__I__ZN17CGuildServerProxyC2ESsii+0x2f4>  ; global constructors keyed to CGuildServerProxy::CGuildServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, int)+0x2f4
0846e208 +0x14:  mov    0xc(%ebp),%eax
0846e20b +0x17:  mov    %eax,-0x72(%ebp)
0846e20e +0x1a:  movb   $0x2,-0x6e(%ebp)
0846e212 +0x1e:  cmpl   $0x64,0x10(%ebp)
0846e216 +0x22:  jg     0846e234 <+0x40>
0846e218 +0x24:  mov    0x10(%ebp),%eax
0846e21b +0x27:  mov    %eax,0x8(%esp)
0846e21f +0x2b:  mov    0x14(%ebp),%eax
0846e222 +0x2e:  mov    %eax,0x4(%esp)
0846e226 +0x32:  lea    -0x7c(%ebp),%eax
0846e229 +0x35:  add    $0xf,%eax
0846e22c +0x38:  mov    %eax,(%esp)
0846e22f +0x3b:  call   0807d8a0 <_init+0x198>
0846e234 +0x40:  movzwl -0x7a(%ebp),%eax
0846e238 +0x44:  movzwl %ax,%edx
0846e23b +0x47:  lea    -0x7c(%ebp),%eax
0846e23e +0x4a:  mov    %edx,0x8(%esp)
0846e242 +0x4e:  mov    %eax,0x4(%esp)
0846e246 +0x52:  mov    0x8(%ebp),%eax
0846e249 +0x55:  mov    %eax,(%esp)
0846e24c +0x58:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
0846e251 +0x5d:  leave
0846e252 +0x5e:  ret
0846e253 +0x5f:  nop
```

## 反编译 C

```c
// CGuildServerProxy::SendMessageToGuild @ 0x846e1f4

/* CGuildServerProxy::SendMessageToGuild(unsigned int, int, char*) */

void __thiscall
CGuildServerProxy::SendMessageToGuild
          (CGuildServerProxy *this,uint param_1,int param_2,char *param_3)

{
  Packet_Web_Notify_Message_To_Guild local_80 [2];
  ushort local_7e;
  uint local_76;
  undefined1 local_72;
  undefined1 auStack_71 [109];
  
  Packet_Web_Notify_Message_To_Guild::Packet_Web_Notify_Message_To_Guild(local_80);
  local_76 = param_1;
  local_72 = 2;
  if (param_2 < 0x65) {
    memcpy(auStack_71,param_3,param_2);
  }
  SendPacket(this,(char *)local_80,(uint)local_7e);
  return;
}
```
