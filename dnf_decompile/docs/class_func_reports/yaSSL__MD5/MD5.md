# MD5

`_ZN5yaSSL3MD5C1ERKS0_`

`yaSSL::MD5::MD5(yaSSL::MD5 const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::MD5` | `0x08799fb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799fb0  _ZN5yaSSL3MD5C1ERKS0_
#           yaSSL::MD5::MD5(yaSSL::MD5 const&)
# range [0x08799fb0, 0x0879a00e]
08799fb0 +0x00:  push   %ebp
08799fb1 +0x01:  mov    %esp,%ebp
08799fb3 +0x03:  sub    $0x28,%esp
08799fb6 +0x06:  mov    %ebx,-0xc(%ebp)
08799fb9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08799fbe +0x0e:  add    $0xbd2bda,%ebx
08799fc4 +0x14:  mov    %esi,-0x8(%ebp)
08799fc7 +0x17:  mov    0x8(%ebp),%esi
08799fca +0x1a:  mov    %edi,-0x4(%ebp)
08799fcd +0x1d:  mov    -0x4f4(%ebx),%eax
08799fd3 +0x23:  add    $0x8,%eax
08799fd6 +0x26:  mov    %eax,(%esi)
08799fd8 +0x28:  movb   $0x0,0x4(%esp)
08799fdd +0x2d:  movl   $0x70,(%esp)
08799fe4 +0x34:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08799fe9 +0x39:  mov    %eax,%edi
08799feb +0x3b:  mov    0xc(%ebp),%eax
08799fee +0x3e:  mov    0x4(%eax),%eax
08799ff1 +0x41:  mov    %edi,(%esp)
08799ff4 +0x44:  mov    %eax,0x4(%esp)
08799ff8 +0x48:  call   08767250 <_ZN8TaoCrypt3MD5C1ERKS0_>  ; TaoCrypt::MD5::MD5(TaoCrypt::MD5 const&)
08799ffd +0x4d:  mov    %edi,0x4(%esi)
0879a000 +0x50:  mov    -0xc(%ebp),%ebx
0879a003 +0x53:  mov    -0x8(%ebp),%esi
0879a006 +0x56:  mov    -0x4(%ebp),%edi
0879a009 +0x59:  mov    %ebp,%esp
0879a00b +0x5b:  pop    %ebp
0879a00c +0x5c:  ret
0879a00d +0x5d:  nop
0879a00e +0x5e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::MD5::MD5 @ 0x8799fb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::MD5(yaSSL::MD5 const&) */

void __thiscall yaSSL::MD5::MD5(MD5 *this,MD5 *param_1)

{
  MD5 *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c6a4 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::MD5::MD5(this_00,*(MD5 **)(param_1 + 4));
  *(MD5 **)(this + 4) = this_00;
  return;
}
```
