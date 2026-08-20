# yy_try_NUL_trans

`_ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi`

`__slang_filter__FlexLexer::yy_try_NUL_trans(int)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x080940fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080940fc  _ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi
#           __slang_filter__FlexLexer::yy_try_NUL_trans(int)
# range [0x080940fc, 0x080941b9]
080940fc +0x00:  push   %ebp
080940fd +0x01:  mov    %esp,%ebp
080940ff +0x03:  push   %esi
08094100 +0x04:  push   %ebx
08094101 +0x05:  mov    0x8(%ebp),%eax
08094104 +0x08:  mov    0x30(%eax),%esi
08094107 +0x0b:  mov    $0x1,%ebx
0809410c +0x10:  mov    0xc(%ebp),%eax
0809410f +0x13:  movzwl &_ZL9yy_accept(%eax,%eax,1),%eax
08094117 +0x1b:  test   %ax,%ax
0809411a +0x1e:  je     08094153 <+0x57>
0809411c +0x20:  mov    0x8(%ebp),%eax
0809411f +0x23:  mov    0xc(%ebp),%edx
08094122 +0x26:  mov    %edx,0x4c(%eax)
08094125 +0x29:  mov    0x8(%ebp),%eax
08094128 +0x2c:  mov    %esi,0x50(%eax)
0809412b +0x2f:  jmp    08094154 <+0x58>
0809412d +0x31:  mov    0xc(%ebp),%eax
08094130 +0x34:  movzwl &_ZL6yy_def(%eax,%eax,1),%eax
08094138 +0x3c:  cwtl
08094139 +0x3d:  mov    %eax,0xc(%ebp)
0809413c +0x40:  cmpl   $0x2708,0xc(%ebp)
08094143 +0x47:  jle    08094154 <+0x58>
08094145 +0x49:  movzbl %bl,%eax
08094148 +0x4c:  mov    &_ZL7yy_meta(,%eax,4),%eax
0809414f +0x53:  mov    %eax,%ebx
08094151 +0x55:  jmp    08094154 <+0x58>
08094153 +0x57:  nop
08094154 +0x58:  mov    0xc(%ebp),%eax
08094157 +0x5b:  movzwl &_ZL7yy_base(%eax,%eax,1),%eax
0809415f +0x63:  movswl %ax,%edx
08094162 +0x66:  movzbl %bl,%eax
08094165 +0x69:  lea    (%edx,%eax,1),%eax
08094168 +0x6c:  movzwl &_ZL6yy_chk(%eax,%eax,1),%eax
08094170 +0x74:  cwtl
08094171 +0x75:  cmp    0xc(%ebp),%eax
08094174 +0x78:  setne  %al
08094177 +0x7b:  test   %al,%al
08094179 +0x7d:  jne    0809412d <+0x31>
0809417b +0x7f:  mov    0xc(%ebp),%eax
0809417e +0x82:  movzwl &_ZL7yy_base(%eax,%eax,1),%eax
08094186 +0x8a:  movswl %ax,%edx
08094189 +0x8d:  movzbl %bl,%eax
0809418c +0x90:  lea    (%edx,%eax,1),%eax
0809418f +0x93:  movzwl &_ZL6yy_nxt(%eax,%eax,1),%eax
08094197 +0x9b:  cwtl
08094198 +0x9c:  mov    %eax,0xc(%ebp)
0809419b +0x9f:  cmpl   $0x2708,0xc(%ebp)
080941a2 +0xa6:  sete   %al
080941a5 +0xa9:  movzbl %al,%ebx
080941a8 +0xac:  test   %ebx,%ebx
080941aa +0xae:  jne    080941b1 <+0xb5>
080941ac +0xb0:  mov    0xc(%ebp),%eax
080941af +0xb3:  jmp    080941b6 <+0xba>
080941b1 +0xb5:  mov    $0x0,%eax
080941b6 +0xba:  pop    %ebx
080941b7 +0xbb:  pop    %esi
080941b8 +0xbc:  pop    %ebp
080941b9 +0xbd:  ret
```

## 反编译 C

```c
// __slang_filter__FlexLexer::yy_try_NUL_trans @ 0x80940fc

/* __slang_filter__FlexLexer::yy_try_NUL_trans(int) */

int __thiscall
__slang_filter__FlexLexer::yy_try_NUL_trans(__slang_filter__FlexLexer *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  if (*(short *)(yy_accept + param_1 * 2) != 0) {
    *(int *)(this + 0x4c) = param_1;
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x30);
  }
  while (*(short *)(yy_chk + ((int)*(short *)(yy_base + param_1 * 2) + (uVar2 & 0xff)) * 2) !=
         param_1) {
    param_1 = (int)*(short *)(yy_def + param_1 * 2);
    if (0x2708 < param_1) {
      uVar2 = *(uint *)(yy_meta + (uVar2 & 0xff) * 4);
    }
  }
  iVar1 = (int)*(short *)(yy_nxt + ((int)*(short *)(yy_base + param_1 * 2) + (uVar2 & 0xff)) * 2);
  if (iVar1 == 0x2708) {
    iVar1 = 0;
  }
  return iVar1;
}
```
