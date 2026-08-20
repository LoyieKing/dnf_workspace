# Parsing

`_ZN21CCommunityServerProxy7ParsingEi`

`CCommunityServerProxy::Parsing(int)`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c9ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c9ec  _ZN21CCommunityServerProxy7ParsingEi
#           CCommunityServerProxy::Parsing(int)
# range [0x0846c9ec, 0x0846ca05]
0846c9ec +0x00:  push   %ebp
0846c9ed +0x01:  mov    %esp,%ebp
0846c9ef +0x03:  sub    $0x18,%esp
0846c9f2 +0x06:  mov    0x8(%ebp),%eax
0846c9f5 +0x09:  mov    0xc(%ebp),%edx
0846c9f8 +0x0c:  mov    %edx,0x4(%esp)
0846c9fc +0x10:  mov    %eax,(%esp)
0846c9ff +0x13:  call   0846d050 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x323>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x323
0846ca04 +0x18:  leave
0846ca05 +0x19:  ret
```

## 反编译 C

```c
// CCommunityServerProxy::Parsing @ 0x846c9ec

/* CCommunityServerProxy::Parsing(int) */

void __thiscall CCommunityServerProxy::Parsing(CCommunityServerProxy *this,int param_1)

{
  CNetwork<100000,100000>::Parsing_ServerPacket((CNetwork<100000,100000> *)this,param_1);
  return;
}
```
