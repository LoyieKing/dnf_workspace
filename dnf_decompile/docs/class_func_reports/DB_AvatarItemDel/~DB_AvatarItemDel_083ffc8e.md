# ~DB_AvatarItemDel

`_ZN16DB_AvatarItemDelD0Ev`

`DB_AvatarItemDel::~DB_AvatarItemDel()`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemDel` | `0x083ffc8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffc8e  _ZN16DB_AvatarItemDelD0Ev
#           DB_AvatarItemDel::~DB_AvatarItemDel()
# range [0x083ffc8e, 0x083ffcab]
083ffc8e +0x00:  push   %ebp
083ffc8f +0x01:  mov    %esp,%ebp
083ffc91 +0x03:  sub    $0x18,%esp
083ffc94 +0x06:  mov    0x8(%ebp),%eax
083ffc97 +0x09:  mov    %eax,(%esp)
083ffc9a +0x0c:  call   083ffc5e <_ZN16DB_AvatarItemDelD1Ev>  ; DB_AvatarItemDel::~DB_AvatarItemDel()
083ffc9f +0x11:  mov    0x8(%ebp),%eax
083ffca2 +0x14:  mov    %eax,(%esp)
083ffca5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
083ffcaa +0x1c:  leave
083ffcab +0x1d:  ret
```

## 反编译 C

```c
// DB_AvatarItemDel::~DB_AvatarItemDel @ 0x83ffc8e

/* DB_AvatarItemDel::~DB_AvatarItemDel() */

void __thiscall DB_AvatarItemDel::~DB_AvatarItemDel(DB_AvatarItemDel *this)

{
  ~DB_AvatarItemDel(this);
  operator_delete(this);
  return;
}
```
