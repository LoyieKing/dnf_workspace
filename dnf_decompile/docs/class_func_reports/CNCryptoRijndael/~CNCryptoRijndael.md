# ~CNCryptoRijndael

`_ZN16CNCryptoRijndaelD1Ev`

`CNCryptoRijndael::~CNCryptoRijndael()`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c03e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c03e  _ZN16CNCryptoRijndaelD1Ev
#           CNCryptoRijndael::~CNCryptoRijndael()
# range [0x0809c03e, 0x0809c0c7]
0809c03e +0x00:  push   %ebp
0809c03f +0x01:  mov    %esp,%ebp
0809c041 +0x03:  push   %esi
0809c042 +0x04:  push   %ebx
0809c043 +0x05:  sub    $0x10,%esp
0809c046 +0x08:  mov    0x8(%ebp),%eax
0809c049 +0x0b:  movl   $&_ZTV16CNCryptoRijndael+0x8,(%eax)
0809c04f +0x11:  mov    0x8(%ebp),%eax
0809c052 +0x14:  mov    0x8(%eax),%eax
0809c055 +0x17:  test   %eax,%eax
0809c057 +0x19:  je     0809c0a2 <+0x64>
0809c059 +0x1b:  mov    0x8(%ebp),%eax
0809c05c +0x1e:  mov    0x8(%eax),%eax
0809c05f +0x21:  test   %eax,%eax
0809c061 +0x23:  je     0809c07b <+0x3d>
0809c063 +0x25:  mov    0x8(%ebp),%eax
0809c066 +0x28:  mov    0x8(%eax),%eax
0809c069 +0x2b:  mov    (%eax),%eax
0809c06b +0x2d:  add    $0x4,%eax
0809c06e +0x30:  mov    (%eax),%edx
0809c070 +0x32:  mov    0x8(%ebp),%eax
0809c073 +0x35:  mov    0x8(%eax),%eax
0809c076 +0x38:  mov    %eax,(%esp)
0809c079 +0x3b:  call   *%edx
0809c07b +0x3d:  mov    0x8(%ebp),%eax
0809c07e +0x40:  movl   $0x0,0x8(%eax)
0809c085 +0x47:  jmp    0809c0a2 <+0x64>
0809c087 +0x49:  mov    %edx,%ebx
0809c089 +0x4b:  mov    %eax,%esi
0809c08b +0x4d:  mov    0x8(%ebp),%eax
0809c08e +0x50:  mov    %eax,(%esp)
0809c091 +0x53:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809c096 +0x58:  mov    %esi,%eax
0809c098 +0x5a:  mov    %ebx,%edx
0809c09a +0x5c:  mov    %eax,(%esp)
0809c09d +0x5f:  call   08ae3750 <_Unwind_Resume>
0809c0a2 +0x64:  mov    0x8(%ebp),%eax
0809c0a5 +0x67:  mov    %eax,(%esp)
0809c0a8 +0x6a:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
0809c0ad +0x6f:  mov    $0x0,%eax
0809c0b2 +0x74:  test   %al,%al
0809c0b4 +0x76:  je     0809c0c1 <+0x83>
0809c0b6 +0x78:  mov    0x8(%ebp),%eax
0809c0b9 +0x7b:  mov    %eax,(%esp)
0809c0bc +0x7e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809c0c1 +0x83:  add    $0x10,%esp
0809c0c4 +0x86:  pop    %ebx
0809c0c5 +0x87:  pop    %esi
0809c0c6 +0x88:  pop    %ebp
0809c0c7 +0x89:  ret
```

## 反编译 C

```c
// CNCryptoRijndael::~CNCryptoRijndael @ 0x809c03e

/* WARNING: Removing unreachable block (ram,0x0809c0b6) */
/* CNCryptoRijndael::~CNCryptoRijndael() */

void __thiscall CNCryptoRijndael::~CNCryptoRijndael(CNCryptoRijndael *this)

{
  *(undefined ***)this = &PTR__CNCryptoRijndael_08b13988;
  if (*(int *)(this + 8) != 0) {
    if (*(int *)(this + 8) != 0) {
                    /* try { // try from 0809c079 to 0809c07a has its CatchHandler @ 0809c087 */
      (**(code **)(**(int **)(this + 8) + 4))(*(undefined4 *)(this + 8));
    }
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
