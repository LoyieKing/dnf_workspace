# CheckLimitMiniumAge

`_ZN5CUser19CheckLimitMiniumAgeEiRi`

`CUser::CheckLimitMiniumAge(int, int&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864fc3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864fc3e  _ZN5CUser19CheckLimitMiniumAgeEiRi
#           CUser::CheckLimitMiniumAge(int, int&)
# range [0x0864fc3e, 0x0864fcc5]
0864fc3e +0x00:  push   %ebp
0864fc3f +0x01:  mov    %esp,%ebp
0864fc41 +0x03:  sub    $0x18,%esp
0864fc44 +0x06:  mov    0x8(%ebp),%eax
0864fc47 +0x09:  mov    %eax,(%esp)
0864fc4a +0x0c:  call   080fdf88 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2b4>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2b4
0864fc4f +0x11:  lea    -0x1(%eax),%edx
0864fc52 +0x14:  mov    0xc(%ebp),%eax
0864fc55 +0x17:  cmp    %eax,%edx
0864fc57 +0x19:  setb   %al
0864fc5a +0x1c:  test   %al,%al
0864fc5c +0x1e:  je     0864fc78 <+0x3a>
0864fc5e +0x20:  mov    0x8(%ebp),%eax
0864fc61 +0x23:  mov    %eax,(%esp)
0864fc64 +0x26:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0864fc69 +0x2b:  movzwl %ax,%edx
0864fc6c +0x2e:  mov    0x10(%ebp),%eax
0864fc6f +0x31:  mov    %edx,(%eax)
0864fc71 +0x33:  mov    $0x0,%eax
0864fc76 +0x38:  jmp    0864fcc3 <+0x85>
0864fc78 +0x3a:  mov    0x8(%ebp),%eax
0864fc7b +0x3d:  mov    %eax,(%esp)
0864fc7e +0x40:  call   080fdf88 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2b4>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2b4
0864fc83 +0x45:  lea    -0x1(%eax),%edx
0864fc86 +0x48:  mov    0xc(%ebp),%eax
0864fc89 +0x4b:  cmp    %eax,%edx
0864fc8b +0x4d:  sete   %al
0864fc8e +0x50:  test   %al,%al
0864fc90 +0x52:  je     0864fcbe <+0x80>
0864fc92 +0x54:  mov    0x8(%ebp),%eax
0864fc95 +0x57:  mov    %eax,(%esp)
0864fc98 +0x5a:  call   0867ec66 <_ZN5CUser14IsOverBirthDayEv>  ; CUser::IsOverBirthDay()
0864fc9d +0x5f:  xor    $0x1,%eax
0864fca0 +0x62:  test   %al,%al
0864fca2 +0x64:  je     0864fcbe <+0x80>
0864fca4 +0x66:  mov    0x8(%ebp),%eax
0864fca7 +0x69:  mov    %eax,(%esp)
0864fcaa +0x6c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0864fcaf +0x71:  movzwl %ax,%edx
0864fcb2 +0x74:  mov    0x10(%ebp),%eax
0864fcb5 +0x77:  mov    %edx,(%eax)
0864fcb7 +0x79:  mov    $0x0,%eax
0864fcbc +0x7e:  jmp    0864fcc3 <+0x85>
0864fcbe +0x80:  mov    $0x1,%eax
0864fcc3 +0x85:  leave
0864fcc4 +0x86:  ret
0864fcc5 +0x87:  nop
```

## 反编译 C

```c
// CUser::CheckLimitMiniumAge @ 0x864fc3e

/* CUser::CheckLimitMiniumAge(int, int&) */

undefined4 __thiscall CUser::CheckLimitMiniumAge(CUser *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = GetAge(this);
  if (iVar2 - 1U < (uint)param_1) {
    uVar3 = get_unique_id(this);
    *param_2 = uVar3 & 0xffff;
    uVar4 = 0;
  }
  else {
    iVar2 = GetAge(this);
    if ((iVar2 + -1 == param_1) && (cVar1 = IsOverBirthDay(this), cVar1 != '\x01')) {
      uVar3 = get_unique_id(this);
      *param_2 = uVar3 & 0xffff;
      return 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
