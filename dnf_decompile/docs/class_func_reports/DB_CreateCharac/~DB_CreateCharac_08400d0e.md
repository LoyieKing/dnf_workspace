# ~DB_CreateCharac

`_ZN15DB_CreateCharacD0Ev`

`DB_CreateCharac::~DB_CreateCharac()`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08400d0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08400d0e  _ZN15DB_CreateCharacD0Ev
#           DB_CreateCharac::~DB_CreateCharac()
# range [0x08400d0e, 0x08400d2b]
08400d0e +0x00:  push   %ebp
08400d0f +0x01:  mov    %esp,%ebp
08400d11 +0x03:  sub    $0x18,%esp
08400d14 +0x06:  mov    0x8(%ebp),%eax
08400d17 +0x09:  mov    %eax,(%esp)
08400d1a +0x0c:  call   08400cde <_ZN15DB_CreateCharacD1Ev>  ; DB_CreateCharac::~DB_CreateCharac()
08400d1f +0x11:  mov    0x8(%ebp),%eax
08400d22 +0x14:  mov    %eax,(%esp)
08400d25 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08400d2a +0x1c:  leave
08400d2b +0x1d:  ret
```

## 反编译 C

```c
// DB_CreateCharac::~DB_CreateCharac @ 0x8400d0e

/* DB_CreateCharac::~DB_CreateCharac() */

void __thiscall DB_CreateCharac::~DB_CreateCharac(DB_CreateCharac *this)

{
  ~DB_CreateCharac(this);
  operator_delete(this);
  return;
}
```
