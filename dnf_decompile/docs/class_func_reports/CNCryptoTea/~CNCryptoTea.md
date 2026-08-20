# ~CNCryptoTea

`_ZN11CNCryptoTeaD1Ev`

`CNCryptoTea::~CNCryptoTea()`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809cf76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809cf76  _ZN11CNCryptoTeaD1Ev
#           CNCryptoTea::~CNCryptoTea()
# range [0x0809cf76, 0x0809cfff]
0809cf76 +0x00:  push   %ebp
0809cf77 +0x01:  mov    %esp,%ebp
0809cf79 +0x03:  push   %esi
0809cf7a +0x04:  push   %ebx
0809cf7b +0x05:  sub    $0x10,%esp
0809cf7e +0x08:  mov    0x8(%ebp),%eax
0809cf81 +0x0b:  movl   $&_ZTV11CNCryptoTea+0x8,(%eax)
0809cf87 +0x11:  mov    0x8(%ebp),%eax
0809cf8a +0x14:  mov    0x8(%eax),%eax
0809cf8d +0x17:  test   %eax,%eax
0809cf8f +0x19:  je     0809cfda <+0x64>
0809cf91 +0x1b:  mov    0x8(%ebp),%eax
0809cf94 +0x1e:  mov    0x8(%eax),%eax
0809cf97 +0x21:  test   %eax,%eax
0809cf99 +0x23:  je     0809cfb3 <+0x3d>
0809cf9b +0x25:  mov    0x8(%ebp),%eax
0809cf9e +0x28:  mov    0x8(%eax),%eax
0809cfa1 +0x2b:  mov    (%eax),%eax
0809cfa3 +0x2d:  add    $0x4,%eax
0809cfa6 +0x30:  mov    (%eax),%edx
0809cfa8 +0x32:  mov    0x8(%ebp),%eax
0809cfab +0x35:  mov    0x8(%eax),%eax
0809cfae +0x38:  mov    %eax,(%esp)
0809cfb1 +0x3b:  call   *%edx
0809cfb3 +0x3d:  mov    0x8(%ebp),%eax
0809cfb6 +0x40:  movl   $0x0,0x8(%eax)
0809cfbd +0x47:  jmp    0809cfda <+0x64>
0809cfbf +0x49:  mov    %edx,%ebx
0809cfc1 +0x4b:  mov    %eax,%esi
0809cfc3 +0x4d:  mov    0x8(%ebp),%eax
0809cfc6 +0x50:  mov    %eax,(%esp)
0809cfc9 +0x53:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809cfce +0x58:  mov    %esi,%eax
0809cfd0 +0x5a:  mov    %ebx,%edx
0809cfd2 +0x5c:  mov    %eax,(%esp)
0809cfd5 +0x5f:  call   08ae3750 <_Unwind_Resume>
0809cfda +0x64:  mov    0x8(%ebp),%eax
0809cfdd +0x67:  mov    %eax,(%esp)
0809cfe0 +0x6a:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809cfe5 +0x6f:  mov    $0x0,%eax
0809cfea +0x74:  test   %al,%al
0809cfec +0x76:  je     0809cff9 <+0x83>
0809cfee +0x78:  mov    0x8(%ebp),%eax
0809cff1 +0x7b:  mov    %eax,(%esp)
0809cff4 +0x7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809cff9 +0x83:  add    $0x10,%esp
0809cffc +0x86:  pop    %ebx
0809cffd +0x87:  pop    %esi
0809cffe +0x88:  pop    %ebp
0809cfff +0x89:  ret
```

## 反编译 C

```c
// CNCryptoTea::~CNCryptoTea @ 0x809cf76

/* WARNING: Removing unreachable block (ram,0x0809cfee) */
/* CNCryptoTea::~CNCryptoTea() */

void __thiscall CNCryptoTea::~CNCryptoTea(CNCryptoTea *this)

{
  *(undefined ***)this = &PTR__CNCryptoTea_08b13aa8;
  if (*(int *)(this + 8) != 0) {
    if (*(int *)(this + 8) != 0) {
                    /* try { // try from 0809cfb1 to 0809cfb2 has its CatchHandler @ 0809cfbf */
      (**(code **)(**(int **)(this + 8) + 4))(*(undefined4 *)(this + 8));
    }
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
