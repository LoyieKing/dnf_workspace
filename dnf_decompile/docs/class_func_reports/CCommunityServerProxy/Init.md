# Init

`_ZN21CCommunityServerProxy4InitEv`

`CCommunityServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c660  _ZN21CCommunityServerProxy4InitEv
#           CCommunityServerProxy::Init()
# range [0x0846c660, 0x0846c673]
0846c660 +0x00:  push   %ebp
0846c661 +0x01:  mov    %esp,%ebp
0846c663 +0x03:  sub    $0x18,%esp
0846c666 +0x06:  mov    0x8(%ebp),%eax
0846c669 +0x09:  mov    %eax,(%esp)
0846c66c +0x0c:  call   0846c674 <_ZN21CCommunityServerProxy7InitTcpEv>  ; CCommunityServerProxy::InitTcp()
0846c671 +0x11:  leave
0846c672 +0x12:  ret
0846c673 +0x13:  nop
```

## 反编译 C

```c
// CCommunityServerProxy::Init @ 0x846c660

/* CCommunityServerProxy::Init() */

void __thiscall CCommunityServerProxy::Init(CCommunityServerProxy *this)

{
  InitTcp(this);
  return;
}
```
