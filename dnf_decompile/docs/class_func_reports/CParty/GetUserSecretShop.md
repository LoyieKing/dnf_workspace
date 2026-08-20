# GetUserSecretShop

`_ZN6CParty17GetUserSecretShopEP5CUser`

`CParty::GetUserSecretShop(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b9e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b9e80  _ZN6CParty17GetUserSecretShopEP5CUser
#           CParty::GetUserSecretShop(CUser*)
# range [0x085b9e80, 0x085b9ecb]
085b9e80 +0x00:  push   %ebp
085b9e81 +0x01:  mov    %esp,%ebp
085b9e83 +0x03:  sub    $0x28,%esp
085b9e86 +0x06:  mov    0xc(%ebp),%eax
085b9e89 +0x09:  mov    %eax,0x4(%esp)
085b9e8d +0x0d:  mov    0x8(%ebp),%eax
085b9e90 +0x10:  mov    %eax,(%esp)
085b9e93 +0x13:  call   085b9e20 <_ZN6CParty15GetUserPositionEP5CUser>  ; CParty::GetUserPosition(CUser*)
085b9e98 +0x18:  mov    %eax,-0xc(%ebp)
085b9e9b +0x1b:  cmpl   $0x0,-0xc(%ebp)
085b9e9f +0x1f:  js     085b9ec4 <+0x44>
085b9ea1 +0x21:  cmpl   $0x3,-0xc(%ebp)
085b9ea5 +0x25:  jg     085b9ec4 <+0x44>
085b9ea7 +0x27:  mov    -0xc(%ebp),%eax
085b9eaa +0x2a:  shl    $0x2,%eax
085b9ead +0x2d:  lea    0x0(,%eax,8),%edx
085b9eb4 +0x34:  sub    %eax,%edx
085b9eb6 +0x36:  lea    0x2a0(%edx),%eax
085b9ebc +0x3c:  add    0x8(%ebp),%eax
085b9ebf +0x3f:  add    $0x8,%eax
085b9ec2 +0x42:  jmp    085b9ec9 <+0x49>
085b9ec4 +0x44:  mov    $0x0,%eax
085b9ec9 +0x49:  leave
085b9eca +0x4a:  ret
085b9ecb +0x4b:  nop
```

## 反编译 C

```c
// CParty::GetUserSecretShop @ 0x85b9e80

/* CParty::GetUserSecretShop(CUser*) */

CParty * __thiscall CParty::GetUserSecretShop(CParty *this,CUser *param_1)

{
  int iVar1;
  CParty *pCVar2;
  
  iVar1 = GetUserPosition(this,param_1);
  if ((iVar1 < 0) || (3 < iVar1)) {
    pCVar2 = (CParty *)0x0;
  }
  else {
    pCVar2 = this + iVar1 * 0x1c + 0x2a8;
  }
  return pCVar2;
}
```
