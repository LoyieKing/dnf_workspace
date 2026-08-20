# ~CNCryptoMulti2

`_ZN14CNCryptoMulti2D1Ev`

`CNCryptoMulti2::~CNCryptoMulti2()`

| 类 | 地址 |
|---|---|
| `CNCryptoMulti2` | `0x0809b096` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b096  _ZN14CNCryptoMulti2D1Ev
#           CNCryptoMulti2::~CNCryptoMulti2()
# range [0x0809b096, 0x0809b0e9]
0809b096 +0x00:  push   %ebp
0809b097 +0x01:  mov    %esp,%ebp
0809b099 +0x03:  sub    $0x28,%esp
0809b09c +0x06:  mov    0x8(%ebp),%eax
0809b09f +0x09:  movl   $&_ZTV14CNCryptoMulti2+0x8,(%eax)
0809b0a5 +0x0f:  mov    0x8(%ebp),%eax
0809b0a8 +0x12:  mov    0x8(%eax),%eax
0809b0ab +0x15:  mov    %eax,-0xc(%ebp)
0809b0ae +0x18:  cmpl   $0x0,-0xc(%ebp)
0809b0b2 +0x1c:  je     0809b0c9 <+0x33>
0809b0b4 +0x1e:  mov    -0xc(%ebp),%eax
0809b0b7 +0x21:  mov    %eax,(%esp)
0809b0ba +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809b0bf +0x29:  mov    0x8(%ebp),%eax
0809b0c2 +0x2c:  movl   $0x0,0x8(%eax)
0809b0c9 +0x33:  mov    0x8(%ebp),%eax
0809b0cc +0x36:  mov    %eax,(%esp)
0809b0cf +0x39:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809b0d4 +0x3e:  mov    $0x0,%eax
0809b0d9 +0x43:  test   %al,%al
0809b0db +0x45:  je     0809b0e8 <+0x52>
0809b0dd +0x47:  mov    0x8(%ebp),%eax
0809b0e0 +0x4a:  mov    %eax,(%esp)
0809b0e3 +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809b0e8 +0x52:  leave
0809b0e9 +0x53:  ret
```

## 反编译 C

```c
// CNCryptoMulti2::~CNCryptoMulti2 @ 0x809b096

/* WARNING: Removing unreachable block (ram,0x0809b0dd) */
/* CNCryptoMulti2::~CNCryptoMulti2() */

void __thiscall CNCryptoMulti2::~CNCryptoMulti2(CNCryptoMulti2 *this)

{
  *(undefined ***)this = &PTR__CNCryptoMulti2_08b13868;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
