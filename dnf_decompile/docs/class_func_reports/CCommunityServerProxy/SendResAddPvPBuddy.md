# SendResAddPvPBuddy

`_ZN21CCommunityServerProxy18SendResAddPvPBuddyEjjcPci`

`CCommunityServerProxy::SendResAddPvPBuddy(unsigned int, unsigned int, char, char*, int)`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846cc22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846cc22  _ZN21CCommunityServerProxy18SendResAddPvPBuddyEjjcPci
#           CCommunityServerProxy::SendResAddPvPBuddy(unsigned int, unsigned int, char, char*, int)
# range [0x0846cc22, 0x0846cc87]
0846cc22 +0x00:  push   %ebp
0846cc23 +0x01:  mov    %esp,%ebp
0846cc25 +0x03:  sub    $0x68,%esp
0846cc28 +0x06:  mov    0x14(%ebp),%eax
0846cc2b +0x09:  mov    %al,-0x4c(%ebp)
0846cc2e +0x0c:  lea    -0x39(%ebp),%eax
0846cc31 +0x0f:  mov    %eax,(%esp)
0846cc34 +0x12:  call   0846cf90 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x263>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x263
0846cc39 +0x17:  mov    0xc(%ebp),%eax
0846cc3c +0x1a:  mov    %eax,-0x2f(%ebp)
0846cc3f +0x1d:  mov    0x10(%ebp),%eax
0846cc42 +0x20:  mov    %eax,-0x2b(%ebp)
0846cc45 +0x23:  movzbl -0x4c(%ebp),%eax
0846cc49 +0x27:  mov    %al,-0x27(%ebp)
0846cc4c +0x2a:  mov    0x1c(%ebp),%eax
0846cc4f +0x2d:  mov    %eax,0x8(%esp)
0846cc53 +0x31:  mov    0x18(%ebp),%eax
0846cc56 +0x34:  mov    %eax,0x4(%esp)
0846cc5a +0x38:  lea    -0x39(%ebp),%eax
0846cc5d +0x3b:  add    $0x13,%eax
0846cc60 +0x3e:  mov    %eax,(%esp)
0846cc63 +0x41:  call   0807d8a0 <_init+0x198>
0846cc68 +0x46:  movzwl -0x37(%ebp),%eax
0846cc6c +0x4a:  movzwl %ax,%edx
0846cc6f +0x4d:  lea    -0x39(%ebp),%eax
0846cc72 +0x50:  mov    %edx,0x8(%esp)
0846cc76 +0x54:  mov    %eax,0x4(%esp)
0846cc7a +0x58:  mov    0x8(%ebp),%eax
0846cc7d +0x5b:  mov    %eax,(%esp)
0846cc80 +0x5e:  call   0846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>  ; CCommunityServerProxy::SendTcpPacket(char*, int)
0846cc85 +0x63:  leave
0846cc86 +0x64:  ret
0846cc87 +0x65:  nop
```

## 反编译 C

```c
// CCommunityServerProxy::SendResAddPvPBuddy @ 0x846cc22

/* CCommunityServerProxy::SendResAddPvPBuddy(unsigned int, unsigned int, char, char*, int) */

void __thiscall
CCommunityServerProxy::SendResAddPvPBuddy
          (CCommunityServerProxy *this,uint param_1,uint param_2,char param_3,char *param_4,
          int param_5)

{
  Packet_Response_Add_PvP_Buddy local_3d [2];
  ushort local_3b;
  uint local_33;
  uint local_2f;
  char local_2b;
  undefined1 auStack_2a [38];
  
  Packet_Response_Add_PvP_Buddy::Packet_Response_Add_PvP_Buddy(local_3d);
  local_33 = param_1;
  local_2f = param_2;
  local_2b = param_3;
  memcpy(auStack_2a,param_4,param_5);
  SendTcpPacket(this,(char *)local_3d,(uint)local_3b);
  return;
}
```
