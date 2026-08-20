# OnDisconnect

`_ZN19CAuctionServerProxy12OnDisconnectEv`

`CAuctionServerProxy::OnDisconnect()`

| 类 | 地址 |
|---|---|
| `CAuctionServerProxy` | `0x082f7ae6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7ae6  _ZN19CAuctionServerProxy12OnDisconnectEv
#           CAuctionServerProxy::OnDisconnect()
# range [0x082f7ae6, 0x082f7af9]
082f7ae6 +0x00:  push   %ebp
082f7ae7 +0x01:  mov    %esp,%ebp
082f7ae9 +0x03:  sub    $0x4,%esp
082f7aec +0x06:  mov    0x8(%ebp),%eax
082f7aef +0x09:  mov    %eax,(%esp)
082f7af2 +0x0c:  call   082f7ad6 <_ZN19CAuctionServerProxy4InitEv>  ; CAuctionServerProxy::Init()
082f7af7 +0x11:  leave
082f7af8 +0x12:  ret
082f7af9 +0x13:  nop
```

## 反编译 C

```c
// CAuctionServerProxy::OnDisconnect @ 0x82f7ae6

/* CAuctionServerProxy::OnDisconnect() */

void __thiscall CAuctionServerProxy::OnDisconnect(CAuctionServerProxy *this)

{
  Init(this);
  return;
}
```
