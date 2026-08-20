# GetSkillIndex

`_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITY`

`AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY)`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e1ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e1ec  _ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITY
#           AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY)
# range [0x0817e1ec, 0x0817e23d]
0817e1ec +0x00:  push   %ebp
0817e1ed +0x01:  mov    %esp,%ebp
0817e1ef +0x03:  sub    $0x28,%esp
0817e1f2 +0x06:  mov    0xc(%ebp),%eax
0817e1f5 +0x09:  mov    %eax,0x4(%esp)
0817e1f9 +0x0d:  mov    0x8(%ebp),%eax
0817e1fc +0x10:  mov    %eax,(%esp)
0817e1ff +0x13:  call   0817e334 <_ZN29AvatarFixedHiddenOptionServer14GetRandomInputE11ENUM_RARITY>  ; AvatarFixedHiddenOptionServer::GetRandomInput(ENUM_RARITY)
0817e204 +0x18:  mov    %eax,-0x10(%ebp)
0817e207 +0x1b:  cmpl   $0xffffffff,-0x10(%ebp)
0817e20b +0x1f:  jne    0817e214 <+0x28>
0817e20d +0x21:  mov    $0xffffffff,%eax
0817e212 +0x26:  jmp    0817e23b <+0x4f>
0817e214 +0x28:  mov    -0x10(%ebp),%eax
0817e217 +0x2b:  mov    %eax,(%esp)
0817e21a +0x2e:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0817e21f +0x33:  mov    %eax,-0xc(%ebp)
0817e222 +0x36:  mov    -0xc(%ebp),%eax
0817e225 +0x39:  mov    %eax,0x8(%esp)
0817e229 +0x3d:  mov    0xc(%ebp),%eax
0817e22c +0x40:  mov    %eax,0x4(%esp)
0817e230 +0x44:  mov    0x8(%ebp),%eax
0817e233 +0x47:  mov    %eax,(%esp)
0817e236 +0x4a:  call   0817e23e <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi>  ; AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY, int)
0817e23b +0x4f:  leave
0817e23c +0x50:  ret
0817e23d +0x51:  nop
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::GetSkillIndex @ 0x817e1ec

/* AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::GetSkillIndex(AvatarFixedHiddenOptionServer *this,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetRandomInput(this,param_2);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = get_rand_int(iVar1);
    uVar2 = GetSkillIndex(this,param_2,uVar2);
  }
  return uVar2;
}
```
