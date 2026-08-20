# ~DB_LoadInventory

`_ZN16DB_LoadInventoryD1Ev`

`DB_LoadInventory::~DB_LoadInventory()`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840a620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840a620  _ZN16DB_LoadInventoryD1Ev
#           DB_LoadInventory::~DB_LoadInventory()
# range [0x0840a620, 0x0840a64f]
0840a620 +0x00:  push   %ebp
0840a621 +0x01:  mov    %esp,%ebp
0840a623 +0x03:  sub    $0x18,%esp
0840a626 +0x06:  mov    0x8(%ebp),%eax
0840a629 +0x09:  movl   $&_ZTV16DB_LoadInventory+0x8,(%eax)
0840a62f +0x0f:  mov    0x8(%ebp),%eax
0840a632 +0x12:  mov    %eax,(%esp)
0840a635 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
0840a63a +0x1a:  mov    $0x0,%eax
0840a63f +0x1f:  test   %al,%al
0840a641 +0x21:  je     0840a64e <+0x2e>
0840a643 +0x23:  mov    0x8(%ebp),%eax
0840a646 +0x26:  mov    %eax,(%esp)
0840a649 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0840a64e +0x2e:  leave
0840a64f +0x2f:  ret
```

## 反编译 C

```c
// DB_LoadInventory::~DB_LoadInventory @ 0x840a620

/* WARNING: Removing unreachable block (ram,0x0840a643) */
/* DB_LoadInventory::~DB_LoadInventory() */

void __thiscall DB_LoadInventory::~DB_LoadInventory(DB_LoadInventory *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fba0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
