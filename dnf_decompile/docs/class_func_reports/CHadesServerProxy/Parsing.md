# Parsing

`_ZN17CHadesServerProxy7ParsingEi`

`CHadesServerProxy::Parsing(int)`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x08470794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08470794  _ZN17CHadesServerProxy7ParsingEi
#           CHadesServerProxy::Parsing(int)
# range [0x08470794, 0x084707b5]
08470794 +0x00:  push   %ebp
08470795 +0x01:  mov    %esp,%ebp
08470797 +0x03:  sub    $0x18,%esp
0847079a +0x06:  mov    0x8(%ebp),%eax
0847079d +0x09:  mov    %eax,(%esp)
084707a0 +0x0c:  call   082f7ed6 <_GLOBAL__I__ZN19CAuctionServerProxyC2EPciS0_+0x1e7>  ; global constructors keyed to CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)+0x1e7
084707a5 +0x11:  mov    0xc(%ebp),%edx
084707a8 +0x14:  mov    %edx,0x4(%esp)
084707ac +0x18:  mov    %eax,(%esp)
084707af +0x1b:  call   0846d050 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x323>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x323
084707b4 +0x20:  leave
084707b5 +0x21:  ret
```

## 反编译 C

```c
// CHadesServerProxy::Parsing @ 0x8470794

/* CHadesServerProxy::Parsing(int) */

void __thiscall CHadesServerProxy::Parsing(CHadesServerProxy *this,int param_1)

{
  CNetwork<100000,100000> *this_00;
  
  this_00 = (CNetwork<100000,100000> *)BaseServerProxy::GetTcpHandler((BaseServerProxy *)this);
  CNetwork<100000,100000>::Parsing_ServerPacket(this_00,param_1);
  return;
}
```
