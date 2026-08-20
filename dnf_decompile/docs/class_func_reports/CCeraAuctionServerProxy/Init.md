# Init

`_ZN23CCeraAuctionServerProxy4InitEv`

`CCeraAuctionServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `CCeraAuctionServerProxy` | `0x082f7be6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7be6  _ZN23CCeraAuctionServerProxy4InitEv
#           CCeraAuctionServerProxy::Init()
# range [0x082f7be6, 0x082f7bf5]
082f7be6 +0x00:  push   %ebp
082f7be7 +0x01:  mov    %esp,%ebp
082f7be9 +0x03:  mov    0x8(%ebp),%eax
082f7bec +0x06:  movb   $0x0,&_ZL14gUnicodeBuffer+0x268e0(%eax)
082f7bf3 +0x0d:  pop    %ebp
082f7bf4 +0x0e:  ret
082f7bf5 +0x0f:  nop
```

## 反编译 C

```c
// CCeraAuctionServerProxy::Init @ 0x82f7be6

/* CCeraAuctionServerProxy::Init() */

void __thiscall CCeraAuctionServerProxy::Init(CCeraAuctionServerProxy *this)

{
  this[0x30e0c] = (CCeraAuctionServerProxy)0x0;
  return;
}
```
