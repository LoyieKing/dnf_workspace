# ~DB_UpdateGrowType

`_ZN17DB_UpdateGrowTypeD1Ev`

`DB_UpdateGrowType::~DB_UpdateGrowType()`

| 类 | 地址 |
|---|---|
| `DB_UpdateGrowType` | `0x0841814c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841814c  _ZN17DB_UpdateGrowTypeD1Ev
#           DB_UpdateGrowType::~DB_UpdateGrowType()
# range [0x0841814c, 0x0841817b]
0841814c +0x00:  push   %ebp
0841814d +0x01:  mov    %esp,%ebp
0841814f +0x03:  sub    $0x18,%esp
08418152 +0x06:  mov    0x8(%ebp),%eax
08418155 +0x09:  movl   $&_ZTV17DB_UpdateGrowType+0x8,(%eax)
0841815b +0x0f:  mov    0x8(%ebp),%eax
0841815e +0x12:  mov    %eax,(%esp)
08418161 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08418166 +0x1a:  mov    $0x0,%eax
0841816b +0x1f:  test   %al,%al
0841816d +0x21:  je     0841817a <+0x2e>
0841816f +0x23:  mov    0x8(%ebp),%eax
08418172 +0x26:  mov    %eax,(%esp)
08418175 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0841817a +0x2e:  leave
0841817b +0x2f:  ret
```

## 反编译 C

```c
// DB_UpdateGrowType::~DB_UpdateGrowType @ 0x841814c

/* WARNING: Removing unreachable block (ram,0x0841816f) */
/* DB_UpdateGrowType::~DB_UpdateGrowType() */

void __thiscall DB_UpdateGrowType::~DB_UpdateGrowType(DB_UpdateGrowType *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f9d8;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
