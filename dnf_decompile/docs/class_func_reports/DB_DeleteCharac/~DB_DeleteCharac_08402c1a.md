# ~DB_DeleteCharac

`_ZN15DB_DeleteCharacD0Ev`

`DB_DeleteCharac::~DB_DeleteCharac()`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x08402c1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08402c1a  _ZN15DB_DeleteCharacD0Ev
#           DB_DeleteCharac::~DB_DeleteCharac()
# range [0x08402c1a, 0x08402c37]
08402c1a +0x00:  push   %ebp
08402c1b +0x01:  mov    %esp,%ebp
08402c1d +0x03:  sub    $0x18,%esp
08402c20 +0x06:  mov    0x8(%ebp),%eax
08402c23 +0x09:  mov    %eax,(%esp)
08402c26 +0x0c:  call   08402bea <_ZN15DB_DeleteCharacD1Ev>  ; DB_DeleteCharac::~DB_DeleteCharac()
08402c2b +0x11:  mov    0x8(%ebp),%eax
08402c2e +0x14:  mov    %eax,(%esp)
08402c31 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08402c36 +0x1c:  leave
08402c37 +0x1d:  ret
```

## 反编译 C

```c
// DB_DeleteCharac::~DB_DeleteCharac @ 0x8402c1a

/* DB_DeleteCharac::~DB_DeleteCharac() */

void __thiscall DB_DeleteCharac::~DB_DeleteCharac(DB_DeleteCharac *this)

{
  ~DB_DeleteCharac(this);
  operator_delete(this);
  return;
}
```
