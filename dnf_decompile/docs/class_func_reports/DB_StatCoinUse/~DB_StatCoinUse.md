# ~DB_StatCoinUse

`_ZN14DB_StatCoinUseD1Ev`

`DB_StatCoinUse::~DB_StatCoinUse()`

| 类 | 地址 |
|---|---|
| `DB_StatCoinUse` | `0x08417b20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417b20  _ZN14DB_StatCoinUseD1Ev
#           DB_StatCoinUse::~DB_StatCoinUse()
# range [0x08417b20, 0x08417b4f]
08417b20 +0x00:  push   %ebp
08417b21 +0x01:  mov    %esp,%ebp
08417b23 +0x03:  sub    $0x18,%esp
08417b26 +0x06:  mov    0x8(%ebp),%eax
08417b29 +0x09:  movl   $&_ZTV14DB_StatCoinUse+0x8,(%eax)
08417b2f +0x0f:  mov    0x8(%ebp),%eax
08417b32 +0x12:  mov    %eax,(%esp)
08417b35 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08417b3a +0x1a:  mov    $0x0,%eax
08417b3f +0x1f:  test   %al,%al
08417b41 +0x21:  je     08417b4e <+0x2e>
08417b43 +0x23:  mov    0x8(%ebp),%eax
08417b46 +0x26:  mov    %eax,(%esp)
08417b49 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417b4e +0x2e:  leave
08417b4f +0x2f:  ret
```

## 反编译 C

```c
// DB_StatCoinUse::~DB_StatCoinUse @ 0x8417b20

/* WARNING: Removing unreachable block (ram,0x08417b43) */
/* DB_StatCoinUse::~DB_StatCoinUse() */

void __thiscall DB_StatCoinUse::~DB_StatCoinUse(DB_StatCoinUse *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa68;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
