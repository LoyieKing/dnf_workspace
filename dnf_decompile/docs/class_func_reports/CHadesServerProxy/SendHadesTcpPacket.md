# SendHadesTcpPacket

`_ZN17CHadesServerProxy18SendHadesTcpPacketEPc`

`CHadesServerProxy::SendHadesTcpPacket(char*)`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x08470752` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470752  _ZN17CHadesServerProxy18SendHadesTcpPacketEPc
#           CHadesServerProxy::SendHadesTcpPacket(char*)
# range [0x08470752, 0x08470793]
08470752 +0x00:  push   %ebp
08470753 +0x01:  mov    %esp,%ebp
08470755 +0x03:  sub    $0x18,%esp
08470758 +0x06:  mov    0x8(%ebp),%eax
0847075b +0x09:  mov    %eax,(%esp)
0847075e +0x0c:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
08470763 +0x11:  cmp    $0x2,%eax
08470766 +0x14:  sete   %al
08470769 +0x17:  test   %al,%al
0847076b +0x19:  je     0847078d <+0x3b>
0847076d +0x1b:  mov    0xc(%ebp),%eax
08470770 +0x1e:  movzwl 0x2(%eax),%eax
08470774 +0x22:  movzwl %ax,%edx
08470777 +0x25:  mov    0x8(%ebp),%eax
0847077a +0x28:  mov    %edx,0x8(%esp)
0847077e +0x2c:  mov    0xc(%ebp),%edx
08470781 +0x2f:  mov    %edx,0x4(%esp)
08470785 +0x33:  mov    %eax,(%esp)
08470788 +0x36:  call   082fd830 <_ZN15BaseServerProxy13SendTcpPacketEPci>  ; BaseServerProxy::SendTcpPacket(char*, int)
0847078d +0x3b:  mov    $0x1,%eax
08470792 +0x40:  leave
08470793 +0x41:  ret
```

## 反编译 C

```c
// CHadesServerProxy::SendHadesTcpPacket @ 0x8470752

/* CHadesServerProxy::SendHadesTcpPacket(char*) */

undefined4 __thiscall CHadesServerProxy::SendHadesTcpPacket(CHadesServerProxy *this,char *param_1)

{
  int iVar1;
  
  iVar1 = BaseServerProxy::GetSocketState((BaseServerProxy *)this);
  if (iVar1 == 2) {
    BaseServerProxy::SendTcpPacket((BaseServerProxy *)this,param_1,(uint)*(ushort *)(param_1 + 2));
  }
  return 1;
}
```
