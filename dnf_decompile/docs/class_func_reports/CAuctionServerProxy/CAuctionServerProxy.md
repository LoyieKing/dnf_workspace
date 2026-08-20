# CAuctionServerProxy

`_ZN19CAuctionServerProxyC1EPciS0_`

`CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)`

| 类 | 地址 |
|---|---|
| `CAuctionServerProxy` | `0x082f7a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f7a90  _ZN19CAuctionServerProxyC1EPciS0_
#           CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)
# range [0x082f7a90, 0x082f7ad5]
082f7a90 +0x00:  push   %ebp
082f7a91 +0x01:  mov    %esp,%ebp
082f7a93 +0x03:  sub    $0x18,%esp
082f7a96 +0x06:  mov    0x8(%ebp),%eax
082f7a99 +0x09:  mov    0x14(%ebp),%edx
082f7a9c +0x0c:  mov    %edx,0xc(%esp)
082f7aa0 +0x10:  mov    0x10(%ebp),%edx
082f7aa3 +0x13:  mov    %edx,0x8(%esp)
082f7aa7 +0x17:  mov    0xc(%ebp),%edx
082f7aaa +0x1a:  mov    %edx,0x4(%esp)
082f7aae +0x1e:  mov    %eax,(%esp)
082f7ab1 +0x21:  call   082fd350 <_ZN15BaseServerProxyC1EPciS0_>  ; BaseServerProxy::BaseServerProxy(char*, int, char*)
082f7ab6 +0x26:  mov    0x8(%ebp),%eax
082f7ab9 +0x29:  movl   $&_ZTV19CAuctionServerProxy+0x8,(%eax)
082f7abf +0x2f:  mov    0x8(%ebp),%eax
082f7ac2 +0x32:  movb   $0x0,&_ZL14gUnicodeBuffer+0x268e0(%eax)
082f7ac9 +0x39:  mov    0x8(%ebp),%eax
082f7acc +0x3c:  mov    %eax,(%esp)
082f7acf +0x3f:  call   082f7ad6 <_ZN19CAuctionServerProxy4InitEv>  ; CAuctionServerProxy::Init()
082f7ad4 +0x44:  leave
082f7ad5 +0x45:  ret
```

## 反编译 C

```c
// CAuctionServerProxy::CAuctionServerProxy @ 0x82f7a90

/* CAuctionServerProxy::CAuctionServerProxy(char*, int, char*) */

void __thiscall
CAuctionServerProxy::CAuctionServerProxy
          (CAuctionServerProxy *this,char *param_1,int param_2,char *param_3)

{
  BaseServerProxy::BaseServerProxy((BaseServerProxy *)this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_OnDisconnect_08c1ec10;
  this[0x30e0c] = (CAuctionServerProxy)0x0;
  Init(this);
  return;
}
```
