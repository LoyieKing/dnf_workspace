# SetBirth

`_ZN5CUser8SetBirthEPKc`

`CUser::SetBirth(char const*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ecf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ecf0  _ZN5CUser8SetBirthEPKc
#           CUser::SetBirth(char const*)
# range [0x0867ecf0, 0x0867ed67]
0867ecf0 +0x00:  push   %ebp
0867ecf1 +0x01:  mov    %esp,%ebp
0867ecf3 +0x03:  sub    $0x28,%esp
0867ecf6 +0x06:  movw   $0x0,-0xb(%ebp)
0867ecfc +0x0c:  movb   $0x0,-0x9(%ebp)
0867ed00 +0x10:  mov    0xc(%ebp),%eax
0867ed03 +0x13:  add    $0x2,%eax
0867ed06 +0x16:  movl   $0x2,0x8(%esp)
0867ed0e +0x1e:  mov    %eax,0x4(%esp)
0867ed12 +0x22:  lea    -0xb(%ebp),%eax
0867ed15 +0x25:  mov    %eax,(%esp)
0867ed18 +0x28:  call   0807d8d0 <_init+0x1c8>
0867ed1d +0x2d:  lea    -0xb(%ebp),%eax
0867ed20 +0x30:  mov    %eax,(%esp)
0867ed23 +0x33:  call   0807e6f0 <_init+0xfe8>
0867ed28 +0x38:  mov    %eax,%edx
0867ed2a +0x3a:  mov    0x8(%ebp),%eax
0867ed2d +0x3d:  mov    %dl,0x711d5(%eax)
0867ed33 +0x43:  mov    0xc(%ebp),%eax
0867ed36 +0x46:  add    $0x4,%eax
0867ed39 +0x49:  movl   $0x2,0x8(%esp)
0867ed41 +0x51:  mov    %eax,0x4(%esp)
0867ed45 +0x55:  lea    -0xb(%ebp),%eax
0867ed48 +0x58:  mov    %eax,(%esp)
0867ed4b +0x5b:  call   0807d8d0 <_init+0x1c8>
0867ed50 +0x60:  lea    -0xb(%ebp),%eax
0867ed53 +0x63:  mov    %eax,(%esp)
0867ed56 +0x66:  call   0807e6f0 <_init+0xfe8>
0867ed5b +0x6b:  mov    %eax,%edx
0867ed5d +0x6d:  mov    0x8(%ebp),%eax
0867ed60 +0x70:  mov    %dl,0x711d4(%eax)
0867ed66 +0x76:  leave
0867ed67 +0x77:  ret
```

## 反编译 C

```c
// CUser::SetBirth @ 0x867ecf0

/* CUser::SetBirth(char const*) */

void __thiscall CUser::SetBirth(CUser *this,char *param_1)

{
  int iVar1;
  char local_f [11];
  
  local_f[0] = '\0';
  local_f[1] = '\0';
  local_f[2] = 0;
  strncpy(local_f,param_1 + 2,2);
  iVar1 = atoi(local_f);
  this[0x711d5] = SUB41(iVar1,0);
  strncpy(local_f,param_1 + 4,2);
  iVar1 = atoi(local_f);
  this[0x711d4] = SUB41(iVar1,0);
  return;
}
```
