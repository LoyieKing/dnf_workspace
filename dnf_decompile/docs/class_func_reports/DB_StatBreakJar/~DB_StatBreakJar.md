# ~DB_StatBreakJar

`_ZN15DB_StatBreakJarD1Ev`

`DB_StatBreakJar::~DB_StatBreakJar()`

| 类 | 地址 |
|---|---|
| `DB_StatBreakJar` | `0x08417a2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417a2e  _ZN15DB_StatBreakJarD1Ev
#           DB_StatBreakJar::~DB_StatBreakJar()
# range [0x08417a2e, 0x08417a5d]
08417a2e +0x00:  push   %ebp
08417a2f +0x01:  mov    %esp,%ebp
08417a31 +0x03:  sub    $0x18,%esp
08417a34 +0x06:  mov    0x8(%ebp),%eax
08417a37 +0x09:  movl   $&_ZTV15DB_StatBreakJar+0x8,(%eax)
08417a3d +0x0f:  mov    0x8(%ebp),%eax
08417a40 +0x12:  mov    %eax,(%esp)
08417a43 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08417a48 +0x1a:  mov    $0x0,%eax
08417a4d +0x1f:  test   %al,%al
08417a4f +0x21:  je     08417a5c <+0x2e>
08417a51 +0x23:  mov    0x8(%ebp),%eax
08417a54 +0x26:  mov    %eax,(%esp)
08417a57 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417a5c +0x2e:  leave
08417a5d +0x2f:  ret
```

## 反编译 C

```c
// DB_StatBreakJar::~DB_StatBreakJar @ 0x8417a2e

/* WARNING: Removing unreachable block (ram,0x08417a51) */
/* DB_StatBreakJar::~DB_StatBreakJar() */

void __thiscall DB_StatBreakJar::~DB_StatBreakJar(DB_StatBreakJar *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa80;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
