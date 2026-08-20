# ~CNCryptoCast5

`_ZN13CNCryptoCast5D1Ev`

`CNCryptoCast5::~CNCryptoCast5()`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x08099faa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099faa  _ZN13CNCryptoCast5D1Ev
#           CNCryptoCast5::~CNCryptoCast5()
# range [0x08099faa, 0x08099ffd]
08099faa +0x00:  push   %ebp
08099fab +0x01:  mov    %esp,%ebp
08099fad +0x03:  sub    $0x28,%esp
08099fb0 +0x06:  mov    0x8(%ebp),%eax
08099fb3 +0x09:  movl   $&_ZTV13CNCryptoCast5+0x8,(%eax)
08099fb9 +0x0f:  mov    0x8(%ebp),%eax
08099fbc +0x12:  mov    0x8(%eax),%eax
08099fbf +0x15:  mov    %eax,-0xc(%ebp)
08099fc2 +0x18:  cmpl   $0x0,-0xc(%ebp)
08099fc6 +0x1c:  je     08099fdd <+0x33>
08099fc8 +0x1e:  mov    -0xc(%ebp),%eax
08099fcb +0x21:  mov    %eax,(%esp)
08099fce +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099fd3 +0x29:  mov    0x8(%ebp),%eax
08099fd6 +0x2c:  movl   $0x0,0x8(%eax)
08099fdd +0x33:  mov    0x8(%ebp),%eax
08099fe0 +0x36:  mov    %eax,(%esp)
08099fe3 +0x39:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
08099fe8 +0x3e:  mov    $0x0,%eax
08099fed +0x43:  test   %al,%al
08099fef +0x45:  je     08099ffc <+0x52>
08099ff1 +0x47:  mov    0x8(%ebp),%eax
08099ff4 +0x4a:  mov    %eax,(%esp)
08099ff7 +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099ffc +0x52:  leave
08099ffd +0x53:  ret
```

## 反编译 C

```c
// CNCryptoCast5::~CNCryptoCast5 @ 0x8099faa

/* WARNING: Removing unreachable block (ram,0x08099ff1) */
/* CNCryptoCast5::~CNCryptoCast5() */

void __thiscall CNCryptoCast5::~CNCryptoCast5(CNCryptoCast5 *this)

{
  *(undefined ***)this = &PTR__CNCryptoCast5_08b13748;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
