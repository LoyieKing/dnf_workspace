# ~DB_AvatarItemDel

`_ZN16DB_AvatarItemDelD1Ev`

`DB_AvatarItemDel::~DB_AvatarItemDel()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemDel` | `0x083ffc5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffc5e  _ZN16DB_AvatarItemDelD1Ev
#           DB_AvatarItemDel::~DB_AvatarItemDel()
# range [0x083ffc5e, 0x083ffc8d]
083ffc5e +0x00:  push   %ebp
083ffc5f +0x01:  mov    %esp,%ebp
083ffc61 +0x03:  sub    $0x18,%esp
083ffc64 +0x06:  mov    0x8(%ebp),%eax
083ffc67 +0x09:  movl   $&_ZTV16DB_AvatarItemDel+0x8,(%eax)
083ffc6d +0x0f:  mov    0x8(%ebp),%eax
083ffc70 +0x12:  mov    %eax,(%esp)
083ffc73 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
083ffc78 +0x1a:  mov    $0x0,%eax
083ffc7d +0x1f:  test   %al,%al
083ffc7f +0x21:  je     083ffc8c <+0x2e>
083ffc81 +0x23:  mov    0x8(%ebp),%eax
083ffc84 +0x26:  mov    %eax,(%esp)
083ffc87 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ffc8c +0x2e:  leave
083ffc8d +0x2f:  ret
```

## 反编译 C

```c
// DB_AvatarItemDel::~DB_AvatarItemDel @ 0x83ffc5e

/* WARNING: Removing unreachable block (ram,0x083ffc81) */
/* DB_AvatarItemDel::~DB_AvatarItemDel() */

void __thiscall DB_AvatarItemDel::~DB_AvatarItemDel(DB_AvatarItemDel *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fcf0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
