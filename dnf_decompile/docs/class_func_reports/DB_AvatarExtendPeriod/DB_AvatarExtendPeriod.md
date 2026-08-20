# DB_AvatarExtendPeriod

`_ZN21DB_AvatarExtendPeriodC1Ev`

`DB_AvatarExtendPeriod::DB_AvatarExtendPeriod()`

| 类 | 地址 |
|---|---|
| `DB_AvatarExtendPeriod` | `0x083ffab8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffab8  _ZN21DB_AvatarExtendPeriodC1Ev
#           DB_AvatarExtendPeriod::DB_AvatarExtendPeriod()
# range [0x083ffab8, 0x083ffad3]
083ffab8 +0x00:  push   %ebp
083ffab9 +0x01:  mov    %esp,%ebp
083ffabb +0x03:  sub    $0x18,%esp
083ffabe +0x06:  mov    0x8(%ebp),%eax
083ffac1 +0x09:  mov    %eax,(%esp)
083ffac4 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
083ffac9 +0x11:  mov    0x8(%ebp),%eax
083ffacc +0x14:  movl   $&_ZTV21DB_AvatarExtendPeriod+0x8,(%eax)
083ffad2 +0x1a:  leave
083ffad3 +0x1b:  ret
```

## 反编译 C

```c
// DB_AvatarExtendPeriod::DB_AvatarExtendPeriod @ 0x83ffab8

/* DB_AvatarExtendPeriod::DB_AvatarExtendPeriod() */

void __thiscall DB_AvatarExtendPeriod::DB_AvatarExtendPeriod(DB_AvatarExtendPeriod *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fd08;
  return;
}
```
