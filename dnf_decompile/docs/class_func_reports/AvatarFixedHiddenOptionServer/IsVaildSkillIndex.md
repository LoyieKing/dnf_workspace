# IsVaildSkillIndex

`_ZN29AvatarFixedHiddenOptionServer17IsVaildSkillIndexE11ENUM_RARITYi`

`AvatarFixedHiddenOptionServer::IsVaildSkillIndex(ENUM_RARITY, int)`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e392` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e392  _ZN29AvatarFixedHiddenOptionServer17IsVaildSkillIndexE11ENUM_RARITYi
#           AvatarFixedHiddenOptionServer::IsVaildSkillIndex(ENUM_RARITY, int)
# range [0x0817e392, 0x0817e3e7]
0817e392 +0x00:  push   %ebp
0817e393 +0x01:  mov    %esp,%ebp
0817e395 +0x03:  sub    $0x28,%esp
0817e398 +0x06:  mov    0xc(%ebp),%eax
0817e39b +0x09:  cmp    $0x5,%eax
0817e39e +0x0c:  jle    0817e3a7 <+0x15>
0817e3a0 +0x0e:  mov    $0x0,%eax
0817e3a5 +0x13:  jmp    0817e3e5 <+0x53>
0817e3a7 +0x15:  mov    0xc(%ebp),%edx
0817e3aa +0x18:  mov    %edx,%eax
0817e3ac +0x1a:  add    %eax,%eax
0817e3ae +0x1c:  add    %edx,%eax
0817e3b0 +0x1e:  shl    $0x2,%eax
0817e3b3 +0x21:  add    0x8(%ebp),%eax
0817e3b6 +0x24:  add    $0x4,%eax
0817e3b9 +0x27:  mov    %eax,(%esp)
0817e3bc +0x2a:  call   0817f068 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x299>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x299
0817e3c1 +0x2f:  mov    %eax,-0xc(%ebp)
0817e3c4 +0x32:  cmpl   $0x0,-0xc(%ebp)
0817e3c8 +0x36:  jne    0817e3d1 <+0x3f>
0817e3ca +0x38:  mov    $0x0,%eax
0817e3cf +0x3d:  jmp    0817e3e5 <+0x53>
0817e3d1 +0x3f:  mov    0x10(%ebp),%eax
0817e3d4 +0x42:  cmp    -0xc(%ebp),%eax
0817e3d7 +0x45:  jge    0817e3e0 <+0x4e>
0817e3d9 +0x47:  mov    $0x1,%eax
0817e3de +0x4c:  jmp    0817e3e5 <+0x53>
0817e3e0 +0x4e:  mov    $0x0,%eax
0817e3e5 +0x53:  leave
0817e3e6 +0x54:  ret
0817e3e7 +0x55:  nop
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::IsVaildSkillIndex @ 0x817e392

/* AvatarFixedHiddenOptionServer::IsVaildSkillIndex(ENUM_RARITY, int) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::IsVaildSkillIndex
          (AvatarFixedHiddenOptionServer *this,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 6) {
    iVar2 = std::
            vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
            size((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                  *)(this + param_2 * 0xc + 4));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else if (param_3 < iVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
