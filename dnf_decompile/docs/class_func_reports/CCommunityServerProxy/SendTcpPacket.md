# SendTcpPacket

`_ZN21CCommunityServerProxy13SendTcpPacketEPci`

`CCommunityServerProxy::SendTcpPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c7c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c7c4  _ZN21CCommunityServerProxy13SendTcpPacketEPci
#           CCommunityServerProxy::SendTcpPacket(char*, int)
# range [0x0846c7c4, 0x0846c82b]
0846c7c4 +0x00:  push   %ebp
0846c7c5 +0x01:  mov    %esp,%ebp
0846c7c7 +0x03:  sub    $0x28,%esp
0846c7ca +0x06:  mov    0x8(%ebp),%eax
0846c7cd +0x09:  mov    &_ZL14gUnicodeBuffer+0x268cc(%eax),%eax
0846c7d3 +0x0f:  cmp    $0x2,%eax
0846c7d6 +0x12:  je     0846c810 <+0x4c>
0846c7d8 +0x14:  movl   $0x0,0xc(%esp)
0846c7e0 +0x1c:  movl   $0xd4,0x8(%esp)
0846c7e8 +0x24:  movl   $&_ZZN21CCommunityServerProxy13SendTcpPacketEPciE19__PRETTY_FUNCTION__,0x4(%esp)
0846c7f0 +0x2c:  lea    -0x18(%ebp),%eax
0846c7f3 +0x2f:  mov    %eax,(%esp)
0846c7f6 +0x32:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0846c7fb +0x37:  movl   $"cannot send packet because Community Server is disconnected",0x4(%esp)
0846c803 +0x3f:  lea    -0x18(%ebp),%eax
0846c806 +0x42:  mov    %eax,(%esp)
0846c809 +0x45:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0846c80e +0x4a:  jmp    0846c829 <+0x65>
0846c810 +0x4c:  mov    0x8(%ebp),%eax
0846c813 +0x4f:  mov    0x10(%ebp),%edx
0846c816 +0x52:  mov    %edx,0x8(%esp)
0846c81a +0x56:  mov    0xc(%ebp),%edx
0846c81d +0x59:  mov    %edx,0x4(%esp)
0846c821 +0x5d:  mov    %eax,(%esp)
0846c824 +0x60:  call   082fdfcc <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x27d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x27d
0846c829 +0x65:  leave
0846c82a +0x66:  ret
0846c82b +0x67:  nop
```

## 反编译 C

```c
// CCommunityServerProxy::SendTcpPacket @ 0x846c7c4

/* CCommunityServerProxy::SendTcpPacket(char*, int) */

void __thiscall
CCommunityServerProxy::SendTcpPacket(CCommunityServerProxy *this,char *param_1,int param_2)

{
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x30df8) == 2) {
    CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)this,param_1,param_2);
  }
  else {
    cMyTrace::cMyTrace(local_1c,"void CCommunityServerProxy::SendTcpPacket(char*, int)",0xd4,0);
    cMyTrace::operator()(local_1c,"cannot send packet because Community Server is disconnected");
  }
  return;
}
```
