# ~DB_SaveInven

`_ZN12DB_SaveInvenD0Ev`

`DB_SaveInven::~DB_SaveInven()`

| 类 | 地址 |
|---|---|
| `DB_SaveInven` | `0x08416a8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08416a8e  _ZN12DB_SaveInvenD0Ev
#           DB_SaveInven::~DB_SaveInven()
# range [0x08416a8e, 0x08416aab]
08416a8e +0x00:  push   %ebp
08416a8f +0x01:  mov    %esp,%ebp
08416a91 +0x03:  sub    $0x18,%esp
08416a94 +0x06:  mov    0x8(%ebp),%eax
08416a97 +0x09:  mov    %eax,(%esp)
08416a9a +0x0c:  call   08416a5e <_ZN12DB_SaveInvenD1Ev>  ; DB_SaveInven::~DB_SaveInven()
08416a9f +0x11:  mov    0x8(%ebp),%eax
08416aa2 +0x14:  mov    %eax,(%esp)
08416aa5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08416aaa +0x1c:  leave
08416aab +0x1d:  ret
```

## 反编译 C

```c
// DB_SaveInven::~DB_SaveInven @ 0x8416a8e

/* DB_SaveInven::~DB_SaveInven() */

void __thiscall DB_SaveInven::~DB_SaveInven(DB_SaveInven *this)

{
  ~DB_SaveInven(this);
  operator_delete(this);
  return;
}
```
