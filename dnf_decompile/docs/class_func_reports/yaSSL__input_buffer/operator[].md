# operator[]

`_ZN5yaSSL12input_bufferixEj`

`yaSSL::input_buffer::operator[](unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796e20  _ZN5yaSSL12input_bufferixEj
#           yaSSL::input_buffer::operator[](unsigned int)
# range [0x08796e20, 0x08796e69]
08796e20 +0x00:  push   %ebp
08796e21 +0x01:  mov    %esp,%ebp
08796e23 +0x03:  sub    $0x18,%esp
08796e26 +0x06:  mov    %esi,-0x4(%ebp)
08796e29 +0x09:  mov    0x8(%ebp),%esi
08796e2c +0x0c:  mov    %ebx,-0x8(%ebp)
08796e2f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08796e34 +0x14:  add    $0xbd5d64,%ebx
08796e3a +0x1a:  mov    (%esi),%eax
08796e3c +0x1c:  mov    %eax,0x8(%esp)
08796e40 +0x20:  mov    0x4(%esi),%eax
08796e43 +0x23:  mov    %esi,(%esp)
08796e46 +0x26:  mov    %eax,0x4(%esp)
08796e4a +0x2a:  call   08796ce0 <_ZN5yaSSL5Check5checkEjj>  ; yaSSL::Check::check(unsigned int, unsigned int)
08796e4f +0x2f:  mov    0x4(%esi),%edx
08796e52 +0x32:  mov    0x8(%esi),%eax
08796e55 +0x35:  add    %edx,%eax
08796e57 +0x37:  add    $0x1,%edx
08796e5a +0x3a:  mov    %edx,0x4(%esi)
08796e5d +0x3d:  mov    -0x8(%ebp),%ebx
08796e60 +0x40:  mov    -0x4(%ebp),%esi
08796e63 +0x43:  mov    %ebp,%esp
08796e65 +0x45:  pop    %ebp
08796e66 +0x46:  ret
08796e67 +0x47:  nop
08796e68 +0x48:  nop
08796e69 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::input_buffer::operator[] @ 0x8796e20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::operator[](unsigned int) */

int yaSSL::input_buffer::operator[](uint param_1)

{
  int iVar1;
  
  Check::check(param_1,*(uint *)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  return *(int *)(param_1 + 8) + iVar1;
}
```
