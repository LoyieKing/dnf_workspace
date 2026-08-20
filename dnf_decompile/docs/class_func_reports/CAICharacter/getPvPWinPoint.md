# getPvPWinPoint

`_ZNK12CAICharacter14getPvPWinPointEv`

`CAICharacter::getPvPWinPoint() const`

| 类 | 地址 |
|---|---|
| `CAICharacter` | `0x0834a240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a240  _ZNK12CAICharacter14getPvPWinPointEv
#           CAICharacter::getPvPWinPoint() const
# range [0x0834a240, 0x0834a28b]
0834a240 +0x00:  push   %ebp
0834a241 +0x01:  mov    %esp,%ebp
0834a243 +0x03:  push   %ebx
0834a244 +0x04:  sub    $0x14,%esp
0834a247 +0x07:  mov    0x8(%ebp),%eax
0834a24a +0x0a:  mov    0x1c(%eax),%edx
0834a24d +0x0d:  mov    0x8(%ebp),%eax
0834a250 +0x10:  mov    0x20(%eax),%eax
0834a253 +0x13:  cmp    %eax,%edx
0834a255 +0x15:  jne    0834a25f <+0x1f>
0834a257 +0x17:  mov    0x8(%ebp),%eax
0834a25a +0x1a:  mov    0x1c(%eax),%eax
0834a25d +0x1d:  jmp    0834a285 <+0x45>
0834a25f +0x1f:  mov    0x8(%ebp),%eax
0834a262 +0x22:  mov    0x1c(%eax),%ebx
0834a265 +0x25:  mov    0x8(%ebp),%eax
0834a268 +0x28:  mov    0x20(%eax),%edx
0834a26b +0x2b:  mov    0x8(%ebp),%eax
0834a26e +0x2e:  mov    0x1c(%eax),%eax
0834a271 +0x31:  mov    %edx,%ecx
0834a273 +0x33:  sub    %eax,%ecx
0834a275 +0x35:  mov    %ecx,%eax
0834a277 +0x37:  add    $0x1,%eax
0834a27a +0x3a:  mov    %eax,(%esp)
0834a27d +0x3d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834a282 +0x42:  lea    (%ebx,%eax,1),%eax
0834a285 +0x45:  add    $0x14,%esp
0834a288 +0x48:  pop    %ebx
0834a289 +0x49:  pop    %ebp
0834a28a +0x4a:  ret
0834a28b +0x4b:  nop
```

## 反编译 C

```c
// CAICharacter::getPvPWinPoint @ 0x834a240

/* CAICharacter::getPvPWinPoint() const */

int __thiscall CAICharacter::getPvPWinPoint(CAICharacter *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x20)) {
    iVar2 = *(int *)(this + 0x1c);
  }
  else {
    iVar2 = *(int *)(this + 0x1c);
    iVar1 = get_rand_int((*(int *)(this + 0x20) - *(int *)(this + 0x1c)) + 1);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}
```
