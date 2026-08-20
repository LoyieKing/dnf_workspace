# ~DB_AvatarExtendPeriod

`_ZN21DB_AvatarExtendPeriodD1Ev`

`DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod()`

| 类 | 地址 |
|---|---|
| `DB_AvatarExtendPeriod` | `0x083ffad4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffad4  _ZN21DB_AvatarExtendPeriodD1Ev
#           DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod()
# range [0x083ffad4, 0x083ffb03]
083ffad4 +0x00:  push   %ebp
083ffad5 +0x01:  mov    %esp,%ebp
083ffad7 +0x03:  sub    $0x18,%esp
083ffada +0x06:  mov    0x8(%ebp),%eax
083ffadd +0x09:  movl   $&_ZTV21DB_AvatarExtendPeriod+0x8,(%eax)
083ffae3 +0x0f:  mov    0x8(%ebp),%eax
083ffae6 +0x12:  mov    %eax,(%esp)
083ffae9 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
083ffaee +0x1a:  mov    $0x0,%eax
083ffaf3 +0x1f:  test   %al,%al
083ffaf5 +0x21:  je     083ffb02 <+0x2e>
083ffaf7 +0x23:  mov    0x8(%ebp),%eax
083ffafa +0x26:  mov    %eax,(%esp)
083ffafd +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ffb02 +0x2e:  leave
083ffb03 +0x2f:  ret
```

## 反编译 C

```c
// DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod @ 0x83ffad4

/* WARNING: Removing unreachable block (ram,0x083ffaf7) */
/* DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod() */

void __thiscall DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod(DB_AvatarExtendPeriod *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fd08;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
