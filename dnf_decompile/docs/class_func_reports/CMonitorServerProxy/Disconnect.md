# Disconnect

`_ZN19CMonitorServerProxy10DisconnectEv`

`CMonitorServerProxy::Disconnect()`

| 类 | 地址 |
|---|---|
| `CMonitorServerProxy` | `0x08470bee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470bee  _ZN19CMonitorServerProxy10DisconnectEv
#           CMonitorServerProxy::Disconnect()
# range [0x08470bee, 0x08470c03]
08470bee +0x00:  push   %ebp
08470bef +0x01:  mov    %esp,%ebp
08470bf1 +0x03:  sub    $0x18,%esp
08470bf4 +0x06:  mov    0x8(%ebp),%eax
08470bf7 +0x09:  add    $0xc,%eax
08470bfa +0x0c:  mov    %eax,(%esp)
08470bfd +0x0f:  call   082fdf58 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x209>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x209
08470c02 +0x14:  leave
08470c03 +0x15:  ret
```

## 反编译 C

```c
// CMonitorServerProxy::Disconnect @ 0x8470bee

/* CMonitorServerProxy::Disconnect() */

void __thiscall CMonitorServerProxy::Disconnect(CMonitorServerProxy *this)

{
  CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)(this + 0xc));
  return;
}
```
