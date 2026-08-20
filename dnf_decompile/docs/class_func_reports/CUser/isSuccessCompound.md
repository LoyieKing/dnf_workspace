# isSuccessCompound

`_ZN5CUser17isSuccessCompoundEi`

`CUser::isSuccessCompound(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08671fde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08671fde  _ZN5CUser17isSuccessCompoundEi
#           CUser::isSuccessCompound(int)
# range [0x08671fde, 0x08672041]
08671fde +0x00:  push   %ebp
08671fdf +0x01:  mov    %esp,%ebp
08671fe1 +0x03:  sub    $0x18,%esp
08671fe4 +0x06:  mov    0x8(%ebp),%eax
08671fe7 +0x09:  mov    %eax,(%esp)
08671fea +0x0c:  call   0869318a <_ZN5CUser20getRecipeProbabilityEv>  ; CUser::getRecipeProbability()
08671fef +0x11:  cmp    $0x1,%eax
08671ff2 +0x14:  sete   %al
08671ff5 +0x17:  test   %al,%al
08671ff7 +0x19:  je     08672000 <+0x22>
08671ff9 +0x1b:  mov    $0x1,%eax
08671ffe +0x20:  jmp    0867203f <+0x61>
08672000 +0x22:  mov    0x8(%ebp),%eax
08672003 +0x25:  mov    %eax,(%esp)
08672006 +0x28:  call   0869318a <_ZN5CUser20getRecipeProbabilityEv>  ; CUser::getRecipeProbability()
0867200b +0x2d:  cmp    $0x2,%eax
0867200e +0x30:  sete   %al
08672011 +0x33:  test   %al,%al
08672013 +0x35:  je     0867201c <+0x3e>
08672015 +0x37:  mov    $0x0,%eax
0867201a +0x3c:  jmp    0867203f <+0x61>
0867201c +0x3e:  cmpl   $0x0,0xc(%ebp)
08672020 +0x42:  je     08672033 <+0x55>
08672022 +0x44:  movl   $0x64,(%esp)
08672029 +0x4b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0867202e +0x50:  cmp    0xc(%ebp),%eax
08672031 +0x53:  jge    0867203a <+0x5c>
08672033 +0x55:  mov    $0x1,%eax
08672038 +0x5a:  jmp    0867203f <+0x61>
0867203a +0x5c:  mov    $0x0,%eax
0867203f +0x61:  leave
08672040 +0x62:  ret
08672041 +0x63:  nop
```

## 反编译 C

```c
// CUser::isSuccessCompound @ 0x8671fde

/* CUser::isSuccessCompound(int) */

undefined4 __thiscall CUser::isSuccessCompound(CUser *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getRecipeProbability(this);
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else {
    iVar1 = getRecipeProbability(this);
    if (iVar1 == 2) {
      uVar2 = 0;
    }
    else {
      if ((param_1 != 0) && (iVar1 = get_rand_int(100), param_1 <= iVar1)) {
        return 0;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
