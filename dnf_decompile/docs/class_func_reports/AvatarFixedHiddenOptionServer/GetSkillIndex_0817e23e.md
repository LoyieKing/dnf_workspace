# GetSkillIndex

`_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi`

`AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY, int)`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e23e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e23e  _ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi
#           AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY, int)
# range [0x0817e23e, 0x0817e333]
0817e23e +0x00:  push   %ebp
0817e23f +0x01:  mov    %esp,%ebp
0817e241 +0x03:  sub    $0x28,%esp
0817e244 +0x06:  mov    0xc(%ebp),%edx
0817e247 +0x09:  mov    %edx,%eax
0817e249 +0x0b:  add    %eax,%eax
0817e24b +0x0d:  add    %edx,%eax
0817e24d +0x0f:  shl    $0x2,%eax
0817e250 +0x12:  add    $0x50,%eax
0817e253 +0x15:  add    0x8(%ebp),%eax
0817e256 +0x18:  mov    %eax,(%esp)
0817e259 +0x1b:  call   0817ef6e <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x19f>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x19f
0817e25e +0x20:  mov    (%eax),%edx
0817e260 +0x22:  mov    0x10(%ebp),%eax
0817e263 +0x25:  cmp    %eax,%edx
0817e265 +0x27:  jle    0817e26e <+0x30>
0817e267 +0x29:  mov    0x10(%ebp),%eax
0817e26a +0x2c:  test   %eax,%eax
0817e26c +0x2e:  jns    0817e275 <+0x37>
0817e26e +0x30:  mov    $0x1,%eax
0817e273 +0x35:  jmp    0817e27a <+0x3c>
0817e275 +0x37:  mov    $0x0,%eax
0817e27a +0x3c:  test   %al,%al
0817e27c +0x3e:  je     0817e288 <+0x4a>
0817e27e +0x40:  mov    $0xffffffff,%eax
0817e283 +0x45:  jmp    0817e332 <+0xf4>
0817e288 +0x4a:  mov    0xc(%ebp),%edx
0817e28b +0x4d:  mov    %edx,%eax
0817e28d +0x4f:  add    %eax,%eax
0817e28f +0x51:  add    %edx,%eax
0817e291 +0x53:  shl    $0x2,%eax
0817e294 +0x56:  add    $0x50,%eax
0817e297 +0x59:  mov    %eax,%edx
0817e299 +0x5b:  add    0x8(%ebp),%edx
0817e29c +0x5e:  lea    -0x14(%ebp),%eax
0817e29f +0x61:  mov    %edx,0x4(%esp)
0817e2a3 +0x65:  mov    %eax,(%esp)
0817e2a6 +0x68:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0817e2ab +0x6d:  sub    $0x4,%esp
0817e2ae +0x70:  mov    0xc(%ebp),%edx
0817e2b1 +0x73:  mov    %edx,%eax
0817e2b3 +0x75:  add    %eax,%eax
0817e2b5 +0x77:  add    %edx,%eax
0817e2b7 +0x79:  shl    $0x2,%eax
0817e2ba +0x7c:  add    $0x50,%eax
0817e2bd +0x7f:  mov    %eax,%edx
0817e2bf +0x81:  add    0x8(%ebp),%edx
0817e2c2 +0x84:  lea    -0x10(%ebp),%eax
0817e2c5 +0x87:  mov    %edx,0x4(%esp)
0817e2c9 +0x8b:  mov    %eax,(%esp)
0817e2cc +0x8e:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0817e2d1 +0x93:  sub    $0x4,%esp
0817e2d4 +0x96:  lea    -0x18(%ebp),%eax
0817e2d7 +0x99:  lea    0x10(%ebp),%edx
0817e2da +0x9c:  mov    %edx,0xc(%esp)
0817e2de +0xa0:  mov    -0x14(%ebp),%edx
0817e2e1 +0xa3:  mov    %edx,0x8(%esp)
0817e2e5 +0xa7:  mov    -0x10(%ebp),%edx
0817e2e8 +0xaa:  mov    %edx,0x4(%esp)
0817e2ec +0xae:  mov    %eax,(%esp)
0817e2ef +0xb1:  call   0817efb9 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x1ea>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x1ea
0817e2f4 +0xb6:  sub    $0x4,%esp
0817e2f7 +0xb9:  mov    0xc(%ebp),%edx
0817e2fa +0xbc:  mov    %edx,%eax
0817e2fc +0xbe:  add    %eax,%eax
0817e2fe +0xc0:  add    %edx,%eax
0817e300 +0xc2:  shl    $0x2,%eax
0817e303 +0xc5:  add    $0x50,%eax
0817e306 +0xc8:  mov    %eax,%edx
0817e308 +0xca:  add    0x8(%ebp),%edx
0817e30b +0xcd:  lea    -0xc(%ebp),%eax
0817e30e +0xd0:  mov    %edx,0x4(%esp)
0817e312 +0xd4:  mov    %eax,(%esp)
0817e315 +0xd7:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0817e31a +0xdc:  sub    $0x4,%esp
0817e31d +0xdf:  lea    -0xc(%ebp),%eax
0817e320 +0xe2:  mov    %eax,0x4(%esp)
0817e324 +0xe6:  lea    -0x18(%ebp),%eax
0817e327 +0xe9:  mov    %eax,(%esp)
0817e32a +0xec:  call   0808e87b <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x6eb>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x6eb
0817e32f +0xf1:  add    $0x1,%eax
0817e332 +0xf4:  leave
0817e333 +0xf5:  ret
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::GetSkillIndex @ 0x817e23e

/* AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY, int) */

int __thiscall
AvatarFixedHiddenOptionServer::GetSkillIndex(undefined4 this,undefined4 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  piVar2 = (int *)std::vector<int,std::allocator<int>>::back();
  if ((param_3 < *piVar2) && (-1 < param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = -1;
  }
  else {
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::upper_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
              (local_1c,local_14,local_18,&param_3);
    std::vector<int,std::allocator<int>>::begin();
    iVar3 = __gnu_cxx::operator-(local_1c,local_10);
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}
```
