# GetAuraAvatarOption

`_ZNK5CUser19GetAuraAvatarOptionER18stAuraAvatarOption`

`CUser::GetAuraAvatarOption(stAuraAvatarOption&) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ddc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ddc2  _ZNK5CUser19GetAuraAvatarOptionER18stAuraAvatarOption
#           CUser::GetAuraAvatarOption(stAuraAvatarOption&) const
# range [0x0868ddc2, 0x0868de09]
0868ddc2 +0x00:  push   %ebp
0868ddc3 +0x01:  mov    %esp,%ebp
0868ddc5 +0x03:  sub    $0x18,%esp
0868ddc8 +0x06:  mov    0x8(%ebp),%eax
0868ddcb +0x09:  mov    %eax,(%esp)
0868ddce +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868ddd3 +0x11:  test   %eax,%eax
0868ddd5 +0x13:  sete   %al
0868ddd8 +0x16:  test   %al,%al
0868ddda +0x18:  jne    0868de06 <+0x44>
0868dddc +0x1a:  mov    0x8(%ebp),%eax
0868dddf +0x1d:  mov    %eax,(%esp)
0868dde2 +0x20:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868dde7 +0x25:  mov    0xc(%ebp),%edx
0868ddea +0x28:  mov    0x1281(%eax),%ecx
0868ddf0 +0x2e:  mov    %ecx,(%edx)
0868ddf2 +0x30:  mov    0x1285(%eax),%ecx
0868ddf8 +0x36:  mov    %ecx,0x4(%edx)
0868ddfb +0x39:  mov    0x1289(%eax),%eax
0868de01 +0x3f:  mov    %eax,0x8(%edx)
0868de04 +0x42:  jmp    0868de07 <+0x45>
0868de06 +0x44:  nop
0868de07 +0x45:  leave
0868de08 +0x46:  ret
0868de09 +0x47:  nop
```

## 反编译 C

```c
// CUser::GetAuraAvatarOption @ 0x868ddc2

/* CUser::GetAuraAvatarOption(stAuraAvatarOption&) const */

void __thiscall CUser::GetAuraAvatarOption(CUser *this,stAuraAvatarOption *param_1)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x1281);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x1285);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x1289);
  }
  return;
}
```
