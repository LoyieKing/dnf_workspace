# Disconnect

`_ZN17CGuildServerProxy10DisconnectEv`

`CGuildServerProxy::Disconnect()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846da84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846da84  _ZN17CGuildServerProxy10DisconnectEv
#           CGuildServerProxy::Disconnect()
# range [0x0846da84, 0x0846da99]
0846da84 +0x00:  push   %ebp
0846da85 +0x01:  mov    %esp,%ebp
0846da87 +0x03:  sub    $0x18,%esp
0846da8a +0x06:  mov    0x8(%ebp),%eax
0846da8d +0x09:  add    $0x24,%eax
0846da90 +0x0c:  mov    %eax,(%esp)
0846da93 +0x0f:  call   082fdf58 <_GLOBAL__I__ZN15BaseServerProxyC2EPciS0_+0x209>  ; global constructors keyed to BaseServerProxy::BaseServerProxy(char*, int, char*)+0x209
0846da98 +0x14:  leave
0846da99 +0x15:  ret
```

## 反编译 C

```c
// CGuildServerProxy::Disconnect @ 0x846da84

/* CGuildServerProxy::Disconnect() */

void __thiscall CGuildServerProxy::Disconnect(CGuildServerProxy *this)

{
  CNetwork<100000,100000>::disconnect((CNetwork<100000,100000> *)(this + 0x24));
  return;
}
```
