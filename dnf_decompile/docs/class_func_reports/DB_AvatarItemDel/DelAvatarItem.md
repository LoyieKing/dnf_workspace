# DelAvatarItem

`_ZN16DB_AvatarItemDel13DelAvatarItemER17SIG_AVATAR_DELETE`

`DB_AvatarItemDel::DelAvatarItem(SIG_AVATAR_DELETE&)`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemDel` | `0x083ffd46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffd46  _ZN16DB_AvatarItemDel13DelAvatarItemER17SIG_AVATAR_DELETE
#           DB_AvatarItemDel::DelAvatarItem(SIG_AVATAR_DELETE&)
# range [0x083ffd46, 0x083ffd4f]
083ffd46 +0x00:  push   %ebp
083ffd47 +0x01:  mov    %esp,%ebp
083ffd49 +0x03:  mov    $0x1,%eax
083ffd4e +0x08:  pop    %ebp
083ffd4f +0x09:  ret
```

## 反编译 C

```c
// DB_AvatarItemDel::DelAvatarItem @ 0x83ffd46

/* DB_AvatarItemDel::DelAvatarItem(SIG_AVATAR_DELETE&) */

undefined4 DB_AvatarItemDel::DelAvatarItem(SIG_AVATAR_DELETE *param_1)

{
  return 1;
}
```
