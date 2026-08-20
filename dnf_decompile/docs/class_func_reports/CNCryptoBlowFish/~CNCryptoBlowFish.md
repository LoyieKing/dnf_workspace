# ~CNCryptoBlowFish

`_ZN16CNCryptoBlowFishD1Ev`

`CNCryptoBlowFish::~CNCryptoBlowFish()`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x080998f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080998f8  _ZN16CNCryptoBlowFishD1Ev
#           CNCryptoBlowFish::~CNCryptoBlowFish()
# range [0x080998f8, 0x08099949]
080998f8 +0x00:  push   %ebp
080998f9 +0x01:  mov    %esp,%ebp
080998fb +0x03:  sub    $0x18,%esp
080998fe +0x06:  mov    0x8(%ebp),%eax
08099901 +0x09:  movl   $&_ZTV16CNCryptoBlowFish+0x8,(%eax)
08099907 +0x0f:  mov    0x8(%ebp),%eax
0809990a +0x12:  mov    0x8(%eax),%eax
0809990d +0x15:  test   %eax,%eax
0809990f +0x17:  je     08099929 <+0x31>
08099911 +0x19:  mov    0x8(%ebp),%eax
08099914 +0x1c:  mov    0x8(%eax),%eax
08099917 +0x1f:  mov    %eax,(%esp)
0809991a +0x22:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809991f +0x27:  mov    0x8(%ebp),%eax
08099922 +0x2a:  movl   $0x0,0x8(%eax)
08099929 +0x31:  mov    0x8(%ebp),%eax
0809992c +0x34:  mov    %eax,(%esp)
0809992f +0x37:  call   0809df08 <_ZN12ICryptoGraphD1Ev>  ; ICryptoGraph::~ICryptoGraph()
08099934 +0x3c:  mov    $0x0,%eax
08099939 +0x41:  test   %al,%al
0809993b +0x43:  je     08099948 <+0x50>
0809993d +0x45:  mov    0x8(%ebp),%eax
08099940 +0x48:  mov    %eax,(%esp)
08099943 +0x4b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08099948 +0x50:  leave
08099949 +0x51:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::~CNCryptoBlowFish @ 0x80998f8

/* WARNING: Removing unreachable block (ram,0x0809993d) */
/* CNCryptoBlowFish::~CNCryptoBlowFish() */

void __thiscall CNCryptoBlowFish::~CNCryptoBlowFish(CNCryptoBlowFish *this)

{
  *(undefined ***)this = &PTR__CNCryptoBlowFish_08b136e8;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}
```
