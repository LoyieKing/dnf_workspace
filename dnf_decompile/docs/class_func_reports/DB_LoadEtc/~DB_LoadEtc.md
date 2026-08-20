# ~DB_LoadEtc

`_ZN10DB_LoadEtcD1Ev`

`DB_LoadEtc::~DB_LoadEtc()`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08403ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403ba0  _ZN10DB_LoadEtcD1Ev
#           DB_LoadEtc::~DB_LoadEtc()
# range [0x08403ba0, 0x08403bcf]
08403ba0 +0x00:  push   %ebp
08403ba1 +0x01:  mov    %esp,%ebp
08403ba3 +0x03:  sub    $0x18,%esp
08403ba6 +0x06:  mov    0x8(%ebp),%eax
08403ba9 +0x09:  movl   $&_ZTV10DB_LoadEtc+0x8,(%eax)
08403baf +0x0f:  mov    0x8(%ebp),%eax
08403bb2 +0x12:  mov    %eax,(%esp)
08403bb5 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08403bba +0x1a:  mov    $0x0,%eax
08403bbf +0x1f:  test   %al,%al
08403bc1 +0x21:  je     08403bce <+0x2e>
08403bc3 +0x23:  mov    0x8(%ebp),%eax
08403bc6 +0x26:  mov    %eax,(%esp)
08403bc9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08403bce +0x2e:  leave
08403bcf +0x2f:  ret
```

## 反编译 C

```c
// DB_LoadEtc::~DB_LoadEtc @ 0x8403ba0

/* WARNING: Removing unreachable block (ram,0x08403bc3) */
/* DB_LoadEtc::~DB_LoadEtc() */

void __thiscall DB_LoadEtc::~DB_LoadEtc(DB_LoadEtc *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc00;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
