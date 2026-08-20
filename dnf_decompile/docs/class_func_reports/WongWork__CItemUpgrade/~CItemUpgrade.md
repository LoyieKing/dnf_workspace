# ~CItemUpgrade

`_ZN8WongWork12CItemUpgradeD1Ev`

`WongWork::CItemUpgrade::~CItemUpgrade()`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x085462c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085462c6  _ZN8WongWork12CItemUpgradeD1Ev
#           WongWork::CItemUpgrade::~CItemUpgrade()
# range [0x085462c6, 0x08546341]
085462c6 +0x00:  push   %ebp
085462c7 +0x01:  mov    %esp,%ebp
085462c9 +0x03:  push   %esi
085462ca +0x04:  push   %ebx
085462cb +0x05:  sub    $0x10,%esp
085462ce +0x08:  mov    0x8(%ebp),%eax
085462d1 +0x0b:  movl   $&_ZTVN8WongWork12CItemUpgradeE+0x8,(%eax)
085462d7 +0x11:  mov    0x8(%ebp),%eax
085462da +0x14:  mov    0x4e8(%eax),%eax
085462e0 +0x1a:  test   %eax,%eax
085462e2 +0x1c:  je     085462f5 <+0x2f>
085462e4 +0x1e:  mov    0x8(%ebp),%eax
085462e7 +0x21:  mov    0x4e8(%eax),%eax
085462ed +0x27:  mov    %eax,(%esp)
085462f0 +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085462f5 +0x2f:  mov    0x8(%ebp),%eax
085462f8 +0x32:  movl   $0x0,0x4e8(%eax)
08546302 +0x3c:  mov    0x8(%ebp),%eax
08546305 +0x3f:  mov    %eax,(%esp)
08546308 +0x42:  call   080fc842 <_ZN8WongWork12IItemUpgradeD1Ev>  ; WongWork::IItemUpgrade::~IItemUpgrade()
0854630d +0x47:  jmp    0854632d <+0x67>
0854630f +0x49:  mov    %edx,%ebx
08546311 +0x4b:  mov    %eax,%esi
08546313 +0x4d:  mov    0x8(%ebp),%eax
08546316 +0x50:  add    $0x4,%eax
08546319 +0x53:  mov    %eax,(%esp)
0854631c +0x56:  call   0854b4aa <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x332>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x332
08546321 +0x5b:  mov    %esi,%eax
08546323 +0x5d:  mov    %ebx,%edx
08546325 +0x5f:  mov    %eax,(%esp)
08546328 +0x62:  call   08ae3750 <_Unwind_Resume>
0854632d +0x67:  mov    0x8(%ebp),%eax
08546330 +0x6a:  add    $0x4,%eax
08546333 +0x6d:  mov    %eax,(%esp)
08546336 +0x70:  call   0854b4aa <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x332>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x332
0854633b +0x75:  add    $0x10,%esp
0854633e +0x78:  pop    %ebx
0854633f +0x79:  pop    %esi
08546340 +0x7a:  pop    %ebp
08546341 +0x7b:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::~CItemUpgrade @ 0x85462c6

/* WongWork::CItemUpgrade::~CItemUpgrade() */

void __thiscall WongWork::CItemUpgrade::~CItemUpgrade(CItemUpgrade *this)

{
  *(undefined ***)this = &PTR_ProcUpgrade_08c9d318;
  if (*(int *)(this + 0x4e8) != 0) {
    operator_delete(*(void **)(this + 0x4e8));
  }
  *(undefined4 *)(this + 0x4e8) = 0;
                    /* try { // try from 08546308 to 0854630c has its CatchHandler @ 0854630f */
  IItemUpgrade::~IItemUpgrade((IItemUpgrade *)this);
  CItemUpgradeTable::~CItemUpgradeTable((CItemUpgradeTable *)(this + 4));
  return;
}
```
