# ~CNCryptoAnubis

`_ZN14CNCryptoAnubisD1Ev`

`CNCryptoAnubis::~CNCryptoAnubis()`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x08099302` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099302  _ZN14CNCryptoAnubisD1Ev
#           CNCryptoAnubis::~CNCryptoAnubis()
# range [0x08099302, 0x08099359]
08099302 +0x00:  push   %ebp
08099303 +0x01:  mov    %esp,%ebp
08099305 +0x03:  sub    $0x28,%esp
08099308 +0x06:  mov    0x8(%ebp),%eax
0809930b +0x09:  movl   $&_ZTV14CNCryptoAnubis+0x8,(%eax)
08099311 +0x0f:  mov    0x8(%ebp),%eax
08099314 +0x12:  mov    0x8(%eax),%eax
08099317 +0x15:  test   %eax,%eax
08099319 +0x17:  je     08099339 <+0x37>
0809931b +0x19:  mov    0x8(%ebp),%eax
0809931e +0x1c:  mov    0x8(%eax),%eax
08099321 +0x1f:  mov    %eax,-0xc(%ebp)
08099324 +0x22:  mov    -0xc(%ebp),%eax
08099327 +0x25:  mov    %eax,(%esp)
0809932a +0x28:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809932f +0x2d:  mov    0x8(%ebp),%eax
08099332 +0x30:  movl   $0x0,0x8(%eax)
08099339 +0x37:  mov    0x8(%ebp),%eax
0809933c +0x3a:  mov    %eax,(%esp)
0809933f +0x3d:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
08099344 +0x42:  mov    $0x0,%eax
08099349 +0x47:  test   %al,%al
0809934b +0x49:  je     08099358 <+0x56>
0809934d +0x4b:  mov    0x8(%ebp),%eax
08099350 +0x4e:  mov    %eax,(%esp)
08099353 +0x51:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099358 +0x56:  leave
08099359 +0x57:  ret
```

## 反编译 C

```c
// CNCryptoAnubis::~CNCryptoAnubis @ 0x8099302

/* WARNING: Removing unreachable block (ram,0x0809934d) */
/* CNCryptoAnubis::~CNCryptoAnubis() */

void __thiscall CNCryptoAnubis::~CNCryptoAnubis(CNCryptoAnubis *this)

{
  *(undefined ***)this = &PTR__CNCryptoAnubis_08b13688;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
