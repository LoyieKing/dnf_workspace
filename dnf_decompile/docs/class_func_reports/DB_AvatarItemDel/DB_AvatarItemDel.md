# DB_AvatarItemDel

`_ZN16DB_AvatarItemDelC1Ev`

`DB_AvatarItemDel::DB_AvatarItemDel()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemDel` | `0x083ffc42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffc42  _ZN16DB_AvatarItemDelC1Ev
#           DB_AvatarItemDel::DB_AvatarItemDel()
# range [0x083ffc42, 0x083ffc5d]
083ffc42 +0x00:  push   %ebp
083ffc43 +0x01:  mov    %esp,%ebp
083ffc45 +0x03:  sub    $0x18,%esp
083ffc48 +0x06:  mov    0x8(%ebp),%eax
083ffc4b +0x09:  mov    %eax,(%esp)
083ffc4e +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
083ffc53 +0x11:  mov    0x8(%ebp),%eax
083ffc56 +0x14:  movl   $&_ZTV16DB_AvatarItemDel+0x8,(%eax)
083ffc5c +0x1a:  leave
083ffc5d +0x1b:  ret
```

## 反编译 C

```c
// DB_AvatarItemDel::DB_AvatarItemDel @ 0x83ffc42

/* DB_AvatarItemDel::DB_AvatarItemDel() */

void __thiscall DB_AvatarItemDel::DB_AvatarItemDel(DB_AvatarItemDel *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fcf0;
  return;
}
```
