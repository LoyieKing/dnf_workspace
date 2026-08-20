# ~DB_StatComposition

`_ZN18DB_StatCompositionD1Ev`

`DB_StatComposition::~DB_StatComposition()`

| 类 | 地址 |
|---|---|
| `DB_StatComposition` | `0x08417b9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417b9e  _ZN18DB_StatCompositionD1Ev
#           DB_StatComposition::~DB_StatComposition()
# range [0x08417b9e, 0x08417bcd]
08417b9e +0x00:  push   %ebp
08417b9f +0x01:  mov    %esp,%ebp
08417ba1 +0x03:  sub    $0x18,%esp
08417ba4 +0x06:  mov    0x8(%ebp),%eax
08417ba7 +0x09:  movl   $&_ZTV18DB_StatComposition+0x8,(%eax)
08417bad +0x0f:  mov    0x8(%ebp),%eax
08417bb0 +0x12:  mov    %eax,(%esp)
08417bb3 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08417bb8 +0x1a:  mov    $0x0,%eax
08417bbd +0x1f:  test   %al,%al
08417bbf +0x21:  je     08417bcc <+0x2e>
08417bc1 +0x23:  mov    0x8(%ebp),%eax
08417bc4 +0x26:  mov    %eax,(%esp)
08417bc7 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417bcc +0x2e:  leave
08417bcd +0x2f:  ret
```

## 反编译 C

```c
// DB_StatComposition::~DB_StatComposition @ 0x8417b9e

/* WARNING: Removing unreachable block (ram,0x08417bc1) */
/* DB_StatComposition::~DB_StatComposition() */

void __thiscall DB_StatComposition::~DB_StatComposition(DB_StatComposition *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa50;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
