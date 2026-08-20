# ~CNCryptoTwoFish

`_ZN15CNCryptoTwoFishD1Ev`

`CNCryptoTwoFish::~CNCryptoTwoFish()`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d3c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d3c6  _ZN15CNCryptoTwoFishD1Ev
#           CNCryptoTwoFish::~CNCryptoTwoFish()
# range [0x0809d3c6, 0x0809d419]
0809d3c6 +0x00:  push   %ebp
0809d3c7 +0x01:  mov    %esp,%ebp
0809d3c9 +0x03:  sub    $0x28,%esp
0809d3cc +0x06:  mov    0x8(%ebp),%eax
0809d3cf +0x09:  movl   $&_ZTV15CNCryptoTwoFish+0x8,(%eax)
0809d3d5 +0x0f:  mov    0x8(%ebp),%eax
0809d3d8 +0x12:  mov    0x8(%eax),%eax
0809d3db +0x15:  mov    %eax,-0xc(%ebp)
0809d3de +0x18:  cmpl   $0x0,-0xc(%ebp)
0809d3e2 +0x1c:  je     0809d3f9 <+0x33>
0809d3e4 +0x1e:  mov    -0xc(%ebp),%eax
0809d3e7 +0x21:  mov    %eax,(%esp)
0809d3ea +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809d3ef +0x29:  mov    0x8(%ebp),%eax
0809d3f2 +0x2c:  movl   $0x0,0x8(%eax)
0809d3f9 +0x33:  mov    0x8(%ebp),%eax
0809d3fc +0x36:  mov    %eax,(%esp)
0809d3ff +0x39:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809d404 +0x3e:  mov    $0x0,%eax
0809d409 +0x43:  test   %al,%al
0809d40b +0x45:  je     0809d418 <+0x52>
0809d40d +0x47:  mov    0x8(%ebp),%eax
0809d410 +0x4a:  mov    %eax,(%esp)
0809d413 +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809d418 +0x52:  leave
0809d419 +0x53:  ret
```

## 反编译 C

```c
// CNCryptoTwoFish::~CNCryptoTwoFish @ 0x809d3c6

/* WARNING: Removing unreachable block (ram,0x0809d40d) */
/* CNCryptoTwoFish::~CNCryptoTwoFish() */

void __thiscall CNCryptoTwoFish::~CNCryptoTwoFish(CNCryptoTwoFish *this)

{
  *(undefined ***)this = &PTR__CNCryptoTwoFish_08b13b08;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
