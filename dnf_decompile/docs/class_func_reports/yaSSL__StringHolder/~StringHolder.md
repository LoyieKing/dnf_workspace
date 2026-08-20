# ~StringHolder

`_ZN5yaSSL12StringHolderD1Ev`

`yaSSL::StringHolder::~StringHolder()`

| 类 | 地址 |
|---|---|
| `yaSSL::StringHolder` | `0x08750c20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750c20  _ZN5yaSSL12StringHolderD1Ev
#           yaSSL::StringHolder::~StringHolder()
# range [0x08750c20, 0x08750c4c]
08750c20 +0x00:  push   %ebp
08750c21 +0x01:  mov    %esp,%ebp
08750c23 +0x03:  push   %ebx
08750c24 +0x04:  sub    $0x14,%esp
08750c27 +0x07:  mov    0x8(%ebp),%eax
08750c2a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08750c2f +0x0f:  add    $0xc1bf69,%ebx
08750c35 +0x15:  movb   $0x0,0x4(%esp)
08750c3a +0x1a:  mov    0x8(%eax),%eax
08750c3d +0x1d:  mov    %eax,(%esp)
08750c40 +0x20:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08750c45 +0x25:  add    $0x14,%esp
08750c48 +0x28:  pop    %ebx
08750c49 +0x29:  pop    %ebp
08750c4a +0x2a:  ret
08750c4b +0x2b:  nop
08750c4c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::StringHolder::~StringHolder @ 0x8750c20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::StringHolder::~StringHolder() */

void __thiscall yaSSL::StringHolder::~StringHolder(StringHolder *this)

{
  operator_delete__(*(undefined4 *)(this + 8),0);
  return;
}
```
