# SendLogout

`_ZN21CCommunityServerProxy10SendLogoutEjj`

`CCommunityServerProxy::SendLogout(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846cb44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846cb44  _ZN21CCommunityServerProxy10SendLogoutEjj
#           CCommunityServerProxy::SendLogout(unsigned int, unsigned int)
# range [0x0846cb44, 0x0846cb7f]
0846cb44 +0x00:  push   %ebp
0846cb45 +0x01:  mov    %esp,%ebp
0846cb47 +0x03:  sub    $0x38,%esp
0846cb4a +0x06:  lea    -0x1a(%ebp),%eax
0846cb4d +0x09:  mov    %eax,(%esp)
0846cb50 +0x0c:  call   0846cec4 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x197>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x197
0846cb55 +0x11:  mov    0xc(%ebp),%eax
0846cb58 +0x14:  mov    %eax,-0x10(%ebp)
0846cb5b +0x17:  mov    0x10(%ebp),%eax
0846cb5e +0x1a:  mov    %eax,-0xc(%ebp)
0846cb61 +0x1d:  movzwl -0x18(%ebp),%eax
0846cb65 +0x21:  movzwl %ax,%edx
0846cb68 +0x24:  lea    -0x1a(%ebp),%eax
0846cb6b +0x27:  mov    %edx,0x8(%esp)
0846cb6f +0x2b:  mov    %eax,0x4(%esp)
0846cb73 +0x2f:  mov    0x8(%ebp),%eax
0846cb76 +0x32:  mov    %eax,(%esp)
0846cb79 +0x35:  call   0846c7c4 <_ZN21CCommunityServerProxy13SendTcpPacketEPci>  ; CCommunityServerProxy::SendTcpPacket(char*, int)
0846cb7e +0x3a:  leave
0846cb7f +0x3b:  ret
```

## 反编译 C

```c
// CCommunityServerProxy::SendLogout @ 0x846cb44

/* CCommunityServerProxy::SendLogout(unsigned int, unsigned int) */

void __thiscall
CCommunityServerProxy::SendLogout(CCommunityServerProxy *this,uint param_1,uint param_2)

{
  Packet_Community_Logout local_1e [2];
  ushort local_1c;
  uint local_14;
  uint local_10;
  
  Packet_Community_Logout::Packet_Community_Logout(local_1e);
  local_14 = param_1;
  local_10 = param_2;
  SendTcpPacket(this,(char *)local_1e,(uint)local_1c);
  return;
}
```
