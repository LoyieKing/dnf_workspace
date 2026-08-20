# ~DB_CreateCharac

`_ZN15DB_CreateCharacD1Ev`

`DB_CreateCharac::~DB_CreateCharac()`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08400cde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08400cde  _ZN15DB_CreateCharacD1Ev
#           DB_CreateCharac::~DB_CreateCharac()
# range [0x08400cde, 0x08400d0d]
08400cde +0x00:  push   %ebp
08400cdf +0x01:  mov    %esp,%ebp
08400ce1 +0x03:  sub    $0x18,%esp
08400ce4 +0x06:  mov    0x8(%ebp),%eax
08400ce7 +0x09:  movl   $&_ZTV15DB_CreateCharac+0x8,(%eax)
08400ced +0x0f:  mov    0x8(%ebp),%eax
08400cf0 +0x12:  mov    %eax,(%esp)
08400cf3 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08400cf8 +0x1a:  mov    $0x0,%eax
08400cfd +0x1f:  test   %al,%al
08400cff +0x21:  je     08400d0c <+0x2e>
08400d01 +0x23:  mov    0x8(%ebp),%eax
08400d04 +0x26:  mov    %eax,(%esp)
08400d07 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08400d0c +0x2e:  leave
08400d0d +0x2f:  ret
```

## 反编译 C

```c
// DB_CreateCharac::~DB_CreateCharac @ 0x8400cde

/* WARNING: Removing unreachable block (ram,0x08400d01) */
/* DB_CreateCharac::~DB_CreateCharac() */

void __thiscall DB_CreateCharac::~DB_CreateCharac(DB_CreateCharac *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc78;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
