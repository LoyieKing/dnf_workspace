# Parsing

`_ZN17CGuildServerProxy7ParsingEi`

`CGuildServerProxy::Parsing(int)`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846e6f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846e6f6  _ZN17CGuildServerProxy7ParsingEi
#           CGuildServerProxy::Parsing(int)
# range [0x0846e6f6, 0x0846e713]
0846e6f6 +0x00:  push   %ebp
0846e6f7 +0x01:  mov    %esp,%ebp
0846e6f9 +0x03:  sub    $0x18,%esp
0846e6fc +0x06:  mov    0x8(%ebp),%eax
0846e6ff +0x09:  lea    0x24(%eax),%edx
0846e702 +0x0c:  mov    0xc(%ebp),%eax
0846e705 +0x0f:  mov    %eax,0x4(%esp)
0846e709 +0x13:  mov    %edx,(%esp)
0846e70c +0x16:  call   0846d050 <_GLOBAL__I__ZN21CCommunityServerProxyC2EPci+0x323>  ; global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)+0x323
0846e711 +0x1b:  leave
0846e712 +0x1c:  ret
0846e713 +0x1d:  nop
```

## 反编译 C

```c
// CGuildServerProxy::Parsing @ 0x846e6f6

/* CGuildServerProxy::Parsing(int) */

void __thiscall CGuildServerProxy::Parsing(CGuildServerProxy *this,int param_1)

{
  CNetwork<100000,100000>::Parsing_ServerPacket((CNetwork<100000,100000> *)(this + 0x24),param_1);
  return;
}
```
