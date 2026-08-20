# ~CItemUpgrade_Separate

`_ZN8WongWork21CItemUpgrade_SeparateD1Ev`

`WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate()`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811e0be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811e0be  _ZN8WongWork21CItemUpgrade_SeparateD1Ev
#           WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate()
# range [0x0811e0be, 0x0811e137]
0811e0be +0x00:  push   %ebp
0811e0bf +0x01:  mov    %esp,%ebp
0811e0c1 +0x03:  push   %esi
0811e0c2 +0x04:  push   %ebx
0811e0c3 +0x05:  sub    $0x10,%esp
0811e0c6 +0x08:  mov    0x8(%ebp),%eax
0811e0c9 +0x0b:  movl   $&_ZTVN8WongWork21CItemUpgrade_SeparateE+0x8,(%eax)
0811e0cf +0x11:  mov    0x8(%ebp),%eax
0811e0d2 +0x14:  mov    0x18c(%eax),%eax
0811e0d8 +0x1a:  test   %eax,%eax
0811e0da +0x1c:  je     0811e0ed <+0x2f>
0811e0dc +0x1e:  mov    0x8(%ebp),%eax
0811e0df +0x21:  mov    0x18c(%eax),%eax
0811e0e5 +0x27:  mov    %eax,(%esp)
0811e0e8 +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811e0ed +0x2f:  mov    0x8(%ebp),%eax
0811e0f0 +0x32:  movl   $0x0,0x18c(%eax)
0811e0fa +0x3c:  mov    0x8(%ebp),%eax
0811e0fd +0x3f:  add    $0x4,%eax
0811e100 +0x42:  mov    %eax,(%esp)
0811e103 +0x45:  call   0811eeda <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x1d5>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x1d5
0811e108 +0x4a:  jmp    0811e125 <+0x67>
0811e10a +0x4c:  mov    %edx,%ebx
0811e10c +0x4e:  mov    %eax,%esi
0811e10e +0x50:  mov    0x8(%ebp),%eax
0811e111 +0x53:  mov    %eax,(%esp)
0811e114 +0x56:  call   080fc842 <_ZN8WongWork12IItemUpgradeD1Ev>  ; WongWork::IItemUpgrade::~IItemUpgrade()
0811e119 +0x5b:  mov    %esi,%eax
0811e11b +0x5d:  mov    %ebx,%edx
0811e11d +0x5f:  mov    %eax,(%esp)
0811e120 +0x62:  call   08ae3750 <_Unwind_Resume>
0811e125 +0x67:  mov    0x8(%ebp),%eax
0811e128 +0x6a:  mov    %eax,(%esp)
0811e12b +0x6d:  call   080fc842 <_ZN8WongWork12IItemUpgradeD1Ev>  ; WongWork::IItemUpgrade::~IItemUpgrade()
0811e130 +0x72:  add    $0x10,%esp
0811e133 +0x75:  pop    %ebx
0811e134 +0x76:  pop    %esi
0811e135 +0x77:  pop    %ebp
0811e136 +0x78:  ret
0811e137 +0x79:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate @ 0x811e0be

/* WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate() */

void __thiscall WongWork::CItemUpgrade_Separate::~CItemUpgrade_Separate(CItemUpgrade_Separate *this)

{
  *(undefined ***)this = &PTR_ProcUpgrade_08b56950;
  if (*(int *)(this + 0x18c) != 0) {
    operator_delete(*(void **)(this + 0x18c));
  }
  *(undefined4 *)(this + 0x18c) = 0;
                    /* try { // try from 0811e103 to 0811e107 has its CatchHandler @ 0811e10a */
  GenuineDamageUpgradeTable::~GenuineDamageUpgradeTable((GenuineDamageUpgradeTable *)(this + 4));
  IItemUpgrade::~IItemUpgrade((IItemUpgrade *)this);
  return;
}
```
