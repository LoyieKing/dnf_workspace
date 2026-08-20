# OnDisconnect

`_ZN23CCeraAuctionServerProxy12OnDisconnectEv`

`CCeraAuctionServerProxy::OnDisconnect()`

| 类 | 地址 |
|---|---|
| `CCeraAuctionServerProxy` | `0x082f7bf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7bf6  _ZN23CCeraAuctionServerProxy12OnDisconnectEv
#           CCeraAuctionServerProxy::OnDisconnect()
# range [0x082f7bf6, 0x082f7c09]
082f7bf6 +0x00:  push   %ebp
082f7bf7 +0x01:  mov    %esp,%ebp
082f7bf9 +0x03:  sub    $0x4,%esp
082f7bfc +0x06:  mov    0x8(%ebp),%eax
082f7bff +0x09:  mov    %eax,(%esp)
082f7c02 +0x0c:  call   082f7be6 <_ZN23CCeraAuctionServerProxy4InitEv>  ; CCeraAuctionServerProxy::Init()
082f7c07 +0x11:  leave
082f7c08 +0x12:  ret
082f7c09 +0x13:  nop
```

## 反编译 C

```c
// CCeraAuctionServerProxy::OnDisconnect @ 0x82f7bf6

/* CCeraAuctionServerProxy::OnDisconnect() */

void __thiscall CCeraAuctionServerProxy::OnDisconnect(CCeraAuctionServerProxy *this)

{
  Init(this);
  return;
}
```
