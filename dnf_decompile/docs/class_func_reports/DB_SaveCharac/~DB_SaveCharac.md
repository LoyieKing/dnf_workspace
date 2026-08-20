# ~DB_SaveCharac

`_ZN13DB_SaveCharacD1Ev`

`DB_SaveCharac::~DB_SaveCharac()`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x08415c4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08415c4a  _ZN13DB_SaveCharacD1Ev
#           DB_SaveCharac::~DB_SaveCharac()
# range [0x08415c4a, 0x08415c79]
08415c4a +0x00:  push   %ebp
08415c4b +0x01:  mov    %esp,%ebp
08415c4d +0x03:  sub    $0x18,%esp
08415c50 +0x06:  mov    0x8(%ebp),%eax
08415c53 +0x09:  movl   $&_ZTV13DB_SaveCharac+0x8,(%eax)
08415c59 +0x0f:  mov    0x8(%ebp),%eax
08415c5c +0x12:  mov    %eax,(%esp)
08415c5f +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08415c64 +0x1a:  mov    $0x0,%eax
08415c69 +0x1f:  test   %al,%al
08415c6b +0x21:  je     08415c78 <+0x2e>
08415c6d +0x23:  mov    0x8(%ebp),%eax
08415c70 +0x26:  mov    %eax,(%esp)
08415c73 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08415c78 +0x2e:  leave
08415c79 +0x2f:  ret
```

## 反编译 C

```c
// DB_SaveCharac::~DB_SaveCharac @ 0x8415c4a

/* WARNING: Removing unreachable block (ram,0x08415c6d) */
/* DB_SaveCharac::~DB_SaveCharac() */

void __thiscall DB_SaveCharac::~DB_SaveCharac(DB_SaveCharac *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5faf8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
