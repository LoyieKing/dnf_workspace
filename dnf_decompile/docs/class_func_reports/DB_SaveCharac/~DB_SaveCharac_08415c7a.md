# ~DB_SaveCharac

`_ZN13DB_SaveCharacD0Ev`

`DB_SaveCharac::~DB_SaveCharac()`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x08415c7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08415c7a  _ZN13DB_SaveCharacD0Ev
#           DB_SaveCharac::~DB_SaveCharac()
# range [0x08415c7a, 0x08415c97]
08415c7a +0x00:  push   %ebp
08415c7b +0x01:  mov    %esp,%ebp
08415c7d +0x03:  sub    $0x18,%esp
08415c80 +0x06:  mov    0x8(%ebp),%eax
08415c83 +0x09:  mov    %eax,(%esp)
08415c86 +0x0c:  call   08415c4a <_ZN13DB_SaveCharacD1Ev>  ; DB_SaveCharac::~DB_SaveCharac()
08415c8b +0x11:  mov    0x8(%ebp),%eax
08415c8e +0x14:  mov    %eax,(%esp)
08415c91 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08415c96 +0x1c:  leave
08415c97 +0x1d:  ret
```

## 反编译 C

```c
// DB_SaveCharac::~DB_SaveCharac @ 0x8415c7a

/* DB_SaveCharac::~DB_SaveCharac() */

void __thiscall DB_SaveCharac::~DB_SaveCharac(DB_SaveCharac *this)

{
  ~DB_SaveCharac(this);
  operator_delete(this);
  return;
}
```
