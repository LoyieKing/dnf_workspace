# SendTcpPacket

`_ZN18CPCRoomServerProxy13SendTcpPacketEPci`

`CPCRoomServerProxy::SendTcpPacket(char*, int)`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x08471a32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471a32  _ZN18CPCRoomServerProxy13SendTcpPacketEPci
#           CPCRoomServerProxy::SendTcpPacket(char*, int)
# range [0x08471a32, 0x08471a99]
08471a32 +0x00:  push   %ebp
08471a33 +0x01:  mov    %esp,%ebp
08471a35 +0x03:  sub    $0x28,%esp
08471a38 +0x06:  mov    0x8(%ebp),%eax
08471a3b +0x09:  mov    &_ZL14gUnicodeBuffer+0x268d4(%eax),%eax
08471a41 +0x0f:  cmp    $0x2,%eax
08471a44 +0x12:  je     08471a7e <+0x4c>
08471a46 +0x14:  movl   $0x0,0xc(%esp)
08471a4e +0x1c:  movl   $0x138,0x8(%esp)
08471a56 +0x24:  movl   $&_ZZN18CPCRoomServerProxy13SendTcpPacketEPciE12__FUNCTION__,0x4(%esp)
08471a5e +0x2c:  lea    -0x18(%ebp),%eax
08471a61 +0x2f:  mov    %eax,(%esp)
08471a64 +0x32:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08471a69 +0x37:  movl   $"cannot send packet because PCRoom Server is disconnected",0x4(%esp)
08471a71 +0x3f:  lea    -0x18(%ebp),%eax
08471a74 +0x42:  mov    %eax,(%esp)
08471a77 +0x45:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08471a7c +0x4a:  jmp    08471a97 <+0x65>
08471a7e +0x4c:  mov    0x8(%ebp),%eax
08471a81 +0x4f:  mov    0x10(%ebp),%edx
08471a84 +0x52:  mov    %edx,0x8(%esp)
08471a88 +0x56:  mov    0xc(%ebp),%edx
08471a8b +0x59:  mov    %edx,0x4(%esp)
08471a8f +0x5d:  mov    %eax,(%esp)
08471a92 +0x60:  call   082fdfcc <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x27d>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x27d
08471a97 +0x65:  leave
08471a98 +0x66:  ret
08471a99 +0x67:  nop
```

## 反编译 C

```c
// CPCRoomServerProxy::SendTcpPacket @ 0x8471a32

/* CPCRoomServerProxy::SendTcpPacket(char*, int) */

void __thiscall
CPCRoomServerProxy::SendTcpPacket(CPCRoomServerProxy *this,char *param_1,int param_2)

{
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x30e00) == 2) {
    CNetwork<100000,100000>::send_packet((CNetwork<100000,100000> *)this,param_1,param_2);
  }
  else {
    cMyTrace::cMyTrace(local_1c,"SendTcpPacket",0x138,0);
    cMyTrace::operator()(local_1c,"cannot send packet because PCRoom Server is disconnected");
  }
  return;
}
```
