# get_recipe

`_ZNK10expert_job16CCharacExpertJob10get_recipeEi`

`expert_job::CCharacExpertJob::get_recipe(int) const`

| 类 | 地址 |
|---|---|
| `expert_job::CCharacExpertJob` | `0x0832b306` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b306  _ZNK10expert_job16CCharacExpertJob10get_recipeEi
#           expert_job::CCharacExpertJob::get_recipe(int) const
# range [0x0832b306, 0x0832b36b]
0832b306 +0x00:  push   %ebp
0832b307 +0x01:  mov    %esp,%ebp
0832b309 +0x03:  push   %ebx
0832b30a +0x04:  sub    $0x10,%esp
0832b30d +0x07:  mov    0xc(%ebp),%eax
0832b310 +0x0a:  mov    %eax,%edx
0832b312 +0x0c:  sar    $0x1f,%edx
0832b315 +0x0f:  shr    $0x1d,%edx
0832b318 +0x12:  lea    (%edx,%eax,1),%eax
0832b31b +0x15:  sar    $0x3,%eax
0832b31e +0x18:  mov    %eax,-0xc(%ebp)
0832b321 +0x1b:  mov    0xc(%ebp),%eax
0832b324 +0x1e:  mov    %eax,%edx
0832b326 +0x20:  sar    $0x1f,%edx
0832b329 +0x23:  shr    $0x1d,%edx
0832b32c +0x26:  add    %edx,%eax
0832b32e +0x28:  and    $0x7,%eax
0832b331 +0x2b:  sub    %edx,%eax
0832b333 +0x2d:  mov    %eax,-0x8(%ebp)
0832b336 +0x30:  cmpl   $0x0,-0xc(%ebp)
0832b33a +0x34:  js     0832b342 <+0x3c>
0832b33c +0x36:  cmpl   $0x1d,-0xc(%ebp)
0832b340 +0x3a:  jle    0832b349 <+0x43>
0832b342 +0x3c:  mov    $0x0,%eax
0832b347 +0x41:  jmp    0832b365 <+0x5f>
0832b349 +0x43:  mov    -0xc(%ebp),%eax
0832b34c +0x46:  mov    0x8(%ebp),%edx
0832b34f +0x49:  movzbl 0x10(%edx,%eax,1),%eax
0832b354 +0x4e:  movsbl %al,%edx
0832b357 +0x51:  mov    -0x8(%ebp),%eax
0832b35a +0x54:  mov    %edx,%ebx
0832b35c +0x56:  mov    %eax,%ecx
0832b35e +0x58:  sar    %cl,%ebx
0832b360 +0x5a:  mov    %ebx,%eax
0832b362 +0x5c:  and    $0x1,%eax
0832b365 +0x5f:  add    $0x10,%esp
0832b368 +0x62:  pop    %ebx
0832b369 +0x63:  pop    %ebp
0832b36a +0x64:  ret
0832b36b +0x65:  nop
```

## 反编译 C

```c
// expert_job::CCharacExpertJob::get_recipe @ 0x832b306

/* expert_job::CCharacExpertJob::get_recipe(int) const */

uint __thiscall expert_job::CCharacExpertJob::get_recipe(CCharacExpertJob *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)(((uint)(param_1 >> 0x1f) >> 0x1d) + param_1) >> 3;
  if ((iVar1 < 0) || (0x1d < iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(char)this[iVar1 + 0x10] >> ((byte)(param_1 % 8) & 0x1f) & 1;
  }
  return uVar2;
}
```
