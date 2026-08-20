# GetErrors

`_ZN5yaSSL9GetErrorsEv`

`yaSSL::GetErrors()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087510c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087510c0  _ZN5yaSSL9GetErrorsEv
#           yaSSL::GetErrors()
# range [0x087510c0, 0x08751119]
087510c0 +0x00:  push   %ebp
087510c1 +0x01:  mov    %esp,%ebp
087510c3 +0x03:  push   %ebx
087510c4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087510c9 +0x09:  add    $0xc1bacf,%ebx
087510cf +0x0f:  sub    $0x14,%esp
087510d2 +0x12:  mov    0x124c84(%ebx),%eax
087510d8 +0x18:  test   %eax,%eax
087510da +0x1a:  je     087510e8 <+0x28>
087510dc +0x1c:  add    $0x14,%esp
087510df +0x1f:  pop    %ebx
087510e0 +0x20:  pop    %ebp
087510e1 +0x21:  ret
087510e2 +0x22:  lea    0x0(%esi),%esi
087510e8 +0x28:  movb   $0x0,0x4(%esp)
087510ed +0x2d:  movl   $0x10,(%esp)
087510f4 +0x34:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087510f9 +0x39:  movl   $0x0,(%eax)
087510ff +0x3f:  movl   $0x0,0x4(%eax)
08751106 +0x46:  movl   $0x0,0x8(%eax)
0875110d +0x4d:  mov    %eax,0x124c84(%ebx)
08751113 +0x53:  add    $0x14,%esp
08751116 +0x56:  pop    %ebx
08751117 +0x57:  pop    %ebp
08751118 +0x58:  ret
08751119 +0x59:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::GetErrors @ 0x87510c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::GetErrors() */

void yaSSL::GetErrors(void)

{
  if (errorsInstance != (undefined4 *)0x0) {
    return;
  }
  errorsInstance = operator_new(0x10,0);
  *errorsInstance = 0;
  errorsInstance[1] = 0;
  errorsInstance[2] = 0;
  return;
}
```
