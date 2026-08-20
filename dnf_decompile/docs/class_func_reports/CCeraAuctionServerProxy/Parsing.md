# Parsing

`_ZN23CCeraAuctionServerProxy7ParsingEi`

`CCeraAuctionServerProxy::Parsing(int)`

| 类 | 地址 |
|---|---|
| `CCeraAuctionServerProxy` | `0x082f7c0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7c0a  _ZN23CCeraAuctionServerProxy7ParsingEi
#           CCeraAuctionServerProxy::Parsing(int)
# range [0x082f7c0a, 0x082f7c2b]
082f7c0a +0x00:  push   %ebp
082f7c0b +0x01:  mov    %esp,%ebp
082f7c0d +0x03:  sub    $0x18,%esp
082f7c10 +0x06:  mov    0x8(%ebp),%eax
082f7c13 +0x09:  mov    %eax,(%esp)
082f7c16 +0x0c:  call   082f7ed6 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1e7>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1e7
082f7c1b +0x11:  mov    0xc(%ebp),%edx
082f7c1e +0x14:  mov    %edx,0x4(%esp)
082f7c22 +0x18:  mov    %eax,(%esp)
082f7c25 +0x1b:  call   082f7ee2 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1f3>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1f3
082f7c2a +0x20:  leave
082f7c2b +0x21:  ret
```

## 反编译 C

```c
// CCeraAuctionServerProxy::Parsing @ 0x82f7c0a

/* CCeraAuctionServerProxy::Parsing(int) */

void __thiscall CCeraAuctionServerProxy::Parsing(CCeraAuctionServerProxy *this,int param_1)

{
  CNetwork<100000,100000> *this_00;
  
  this_00 = (CNetwork<100000,100000> *)BaseServerProxy::GetTcpHandler((BaseServerProxy *)this);
  CNetwork<100000,100000>::Parsing_AuctionServerPacket(this_00,param_1);
  return;
}
```
