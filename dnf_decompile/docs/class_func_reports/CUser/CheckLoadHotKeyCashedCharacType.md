# CheckLoadHotKeyCashedCharacType

`_ZN5CUser31CheckLoadHotKeyCashedCharacTypeEii`

`CUser::CheckLoadHotKeyCashedCharacType(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692e9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692e9c  _ZN5CUser31CheckLoadHotKeyCashedCharacTypeEii
#           CUser::CheckLoadHotKeyCashedCharacType(int, int)
# range [0x08692e9c, 0x08692ef1]
08692e9c +0x00:  push   %ebp
08692e9d +0x01:  mov    %esp,%ebp
08692e9f +0x03:  push   %ebx
08692ea0 +0x04:  sub    $0x14,%esp
08692ea3 +0x07:  cmpl   $0xffffffff,0xc(%ebp)
08692ea7 +0x0b:  jne    08692eb0 <+0x14>
08692ea9 +0x0d:  mov    $0x1,%eax
08692eae +0x12:  jmp    08692eeb <+0x4f>
08692eb0 +0x14:  mov    0xc(%ebp),%eax
08692eb3 +0x17:  mov    %eax,0x4(%esp)
08692eb7 +0x1b:  mov    0x8(%ebp),%eax
08692eba +0x1e:  mov    %eax,(%esp)
08692ebd +0x21:  call   08692ef2 <_ZN5CUser19GetCharacHotKeyTypeEi>  ; CUser::GetCharacHotKeyType(int)
08692ec2 +0x26:  mov    %eax,%ebx
08692ec4 +0x28:  mov    0x10(%ebp),%eax
08692ec7 +0x2b:  mov    %eax,0x4(%esp)
08692ecb +0x2f:  mov    0x8(%ebp),%eax
08692ece +0x32:  mov    %eax,(%esp)
08692ed1 +0x35:  call   08692ef2 <_ZN5CUser19GetCharacHotKeyTypeEi>  ; CUser::GetCharacHotKeyType(int)
08692ed6 +0x3a:  cmp    %eax,%ebx
08692ed8 +0x3c:  sete   %al
08692edb +0x3f:  test   %al,%al
08692edd +0x41:  je     08692ee6 <+0x4a>
08692edf +0x43:  mov    $0x0,%eax
08692ee4 +0x48:  jmp    08692eeb <+0x4f>
08692ee6 +0x4a:  mov    $0x1,%eax
08692eeb +0x4f:  add    $0x14,%esp
08692eee +0x52:  pop    %ebx
08692eef +0x53:  pop    %ebp
08692ef0 +0x54:  ret
08692ef1 +0x55:  nop
```

## 反编译 C

```c
// CUser::CheckLoadHotKeyCashedCharacType @ 0x8692e9c

/* CUser::CheckLoadHotKeyCashedCharacType(int, int) */

undefined4 __thiscall CUser::CheckLoadHotKeyCashedCharacType(CUser *this,int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == -1) {
    uVar1 = 1;
  }
  else {
    iVar2 = GetCharacHotKeyType(this,param_1);
    iVar3 = GetCharacHotKeyType(this,param_2);
    if (iVar2 == iVar3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
