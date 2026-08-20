# CCeraAuctionServerProxy

`_ZN23CCeraAuctionServerProxyC1EPciS0_`

`CCeraAuctionServerProxy::CCeraAuctionServerProxy(char*, int, char*)`

| 类 | 地址 |
|---|---|
| `CCeraAuctionServerProxy` | `0x082f7ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7ba0  _ZN23CCeraAuctionServerProxyC1EPciS0_
#           CCeraAuctionServerProxy::CCeraAuctionServerProxy(char*, int, char*)
# range [0x082f7ba0, 0x082f7be5]
082f7ba0 +0x00:  push   %ebp
082f7ba1 +0x01:  mov    %esp,%ebp
082f7ba3 +0x03:  sub    $0x18,%esp
082f7ba6 +0x06:  mov    0x8(%ebp),%eax
082f7ba9 +0x09:  mov    0x14(%ebp),%edx
082f7bac +0x0c:  mov    %edx,0xc(%esp)
082f7bb0 +0x10:  mov    0x10(%ebp),%edx
082f7bb3 +0x13:  mov    %edx,0x8(%esp)
082f7bb7 +0x17:  mov    0xc(%ebp),%edx
082f7bba +0x1a:  mov    %edx,0x4(%esp)
082f7bbe +0x1e:  mov    %eax,(%esp)
082f7bc1 +0x21:  call   082fd350 <_ZN15BaseServerProxyC1EPciS0_>  ; BaseServerProxy::BaseServerProxy(char*, int, char*)
082f7bc6 +0x26:  mov    0x8(%ebp),%eax
082f7bc9 +0x29:  movl   $&_ZTV23CCeraAuctionServerProxy+0x8,(%eax)
082f7bcf +0x2f:  mov    0x8(%ebp),%eax
082f7bd2 +0x32:  movb   $0x0,&_ZL14gUnicodeBuffer+0x268e0(%eax)
082f7bd9 +0x39:  mov    0x8(%ebp),%eax
082f7bdc +0x3c:  mov    %eax,(%esp)
082f7bdf +0x3f:  call   082f7be6 <_ZN23CCeraAuctionServerProxy4InitEv>  ; CCeraAuctionServerProxy::Init()
082f7be4 +0x44:  leave
082f7be5 +0x45:  ret
```

## 反编译 C

```c
// CCeraAuctionServerProxy::CCeraAuctionServerProxy @ 0x82f7ba0

/* CCeraAuctionServerProxy::CCeraAuctionServerProxy(char*, int, char*) */

void __thiscall
CCeraAuctionServerProxy::CCeraAuctionServerProxy
          (CCeraAuctionServerProxy *this,char *param_1,int param_2,char *param_3)

{
  BaseServerProxy::BaseServerProxy((BaseServerProxy *)this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_OnDisconnect_08c1ebf8;
  this[0x30e0c] = (CCeraAuctionServerProxy)0x0;
  Init(this);
  return;
}
```
