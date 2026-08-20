# ~CNCryptoAnubis

`_ZN14CNCryptoAnubisD0Ev`

`CNCryptoAnubis::~CNCryptoAnubis()`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x0809935a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809935a  _ZN14CNCryptoAnubisD0Ev
#           CNCryptoAnubis::~CNCryptoAnubis()
# range [0x0809935a, 0x08099377]
0809935a +0x00:  push   %ebp
0809935b +0x01:  mov    %esp,%ebp
0809935d +0x03:  sub    $0x18,%esp
08099360 +0x06:  mov    0x8(%ebp),%eax
08099363 +0x09:  mov    %eax,(%esp)
08099366 +0x0c:  call   08099302 <_ZN14CNCryptoAnubisD1Ev>  ; CNCryptoAnubis::~CNCryptoAnubis()
0809936b +0x11:  mov    0x8(%ebp),%eax
0809936e +0x14:  mov    %eax,(%esp)
08099371 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099376 +0x1c:  leave
08099377 +0x1d:  ret
```

## 反编译 C

```c
// CNCryptoAnubis::~CNCryptoAnubis @ 0x809935a

/* CNCryptoAnubis::~CNCryptoAnubis() */

void __thiscall CNCryptoAnubis::~CNCryptoAnubis(CNCryptoAnubis *this)

{
  ~CNCryptoAnubis(this);
  operator_delete(this);
  return;
}
```
