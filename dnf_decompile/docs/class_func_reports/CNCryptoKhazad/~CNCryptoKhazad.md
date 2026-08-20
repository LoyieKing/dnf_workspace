# ~CNCryptoKhazad

`_ZN14CNCryptoKhazadD1Ev`

`CNCryptoKhazad::~CNCryptoKhazad()`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809aaf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809aaf2  _ZN14CNCryptoKhazadD1Ev
#           CNCryptoKhazad::~CNCryptoKhazad()
# range [0x0809aaf2, 0x0809ab45]
0809aaf2 +0x00:  push   %ebp
0809aaf3 +0x01:  mov    %esp,%ebp
0809aaf5 +0x03:  sub    $0x28,%esp
0809aaf8 +0x06:  mov    0x8(%ebp),%eax
0809aafb +0x09:  movl   $&_ZTV14CNCryptoKhazad+0x8,(%eax)
0809ab01 +0x0f:  mov    0x8(%ebp),%eax
0809ab04 +0x12:  mov    0x8(%eax),%eax
0809ab07 +0x15:  mov    %eax,-0xc(%ebp)
0809ab0a +0x18:  cmpl   $0x0,-0xc(%ebp)
0809ab0e +0x1c:  je     0809ab25 <+0x33>
0809ab10 +0x1e:  mov    -0xc(%ebp),%eax
0809ab13 +0x21:  mov    %eax,(%esp)
0809ab16 +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809ab1b +0x29:  mov    0x8(%ebp),%eax
0809ab1e +0x2c:  movl   $0x0,0x8(%eax)
0809ab25 +0x33:  mov    0x8(%ebp),%eax
0809ab28 +0x36:  mov    %eax,(%esp)
0809ab2b +0x39:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809ab30 +0x3e:  mov    $0x0,%eax
0809ab35 +0x43:  test   %al,%al
0809ab37 +0x45:  je     0809ab44 <+0x52>
0809ab39 +0x47:  mov    0x8(%ebp),%eax
0809ab3c +0x4a:  mov    %eax,(%esp)
0809ab3f +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809ab44 +0x52:  leave
0809ab45 +0x53:  ret
```

## 反编译 C

```c
// CNCryptoKhazad::~CNCryptoKhazad @ 0x809aaf2

/* WARNING: Removing unreachable block (ram,0x0809ab39) */
/* CNCryptoKhazad::~CNCryptoKhazad() */

void __thiscall CNCryptoKhazad::~CNCryptoKhazad(CNCryptoKhazad *this)

{
  *(undefined ***)this = &PTR__CNCryptoKhazad_08b13808;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
