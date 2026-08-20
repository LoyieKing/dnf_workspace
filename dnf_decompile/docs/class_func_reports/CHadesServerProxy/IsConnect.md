# IsConnect

`_ZN17CHadesServerProxy9IsConnectEv`

`CHadesServerProxy::IsConnect()`

| 类 | 地址 |
|---|---|
| `CHadesServerProxy` | `0x084705fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084705fe  _ZN17CHadesServerProxy9IsConnectEv
#           CHadesServerProxy::IsConnect()
# range [0x084705fe, 0x08470627]
084705fe +0x00:  push   %ebp
084705ff +0x01:  mov    %esp,%ebp
08470601 +0x03:  sub    $0x18,%esp
08470604 +0x06:  mov    0x8(%ebp),%eax
08470607 +0x09:  mov    %eax,(%esp)
0847060a +0x0c:  call   0847092c <_GLOBAL__I__ZN17CHadesServerProxyC2EPcii+0x65>  ; global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)+0x65
0847060f +0x11:  cmp    $0x2,%eax
08470612 +0x14:  sete   %al
08470615 +0x17:  test   %al,%al
08470617 +0x19:  je     08470620 <+0x22>
08470619 +0x1b:  mov    $0x1,%eax
0847061e +0x20:  jmp    08470625 <+0x27>
08470620 +0x22:  mov    $0x0,%eax
08470625 +0x27:  leave
08470626 +0x28:  ret
08470627 +0x29:  nop
```

## 反编译 C

```c
// CHadesServerProxy::IsConnect @ 0x84705fe

/* CHadesServerProxy::IsConnect() */

bool __thiscall CHadesServerProxy::IsConnect(CHadesServerProxy *this)

{
  int iVar1;
  
  iVar1 = BaseServerProxy::GetSocketState((BaseServerProxy *)this);
  return iVar1 == 2;
}
```
