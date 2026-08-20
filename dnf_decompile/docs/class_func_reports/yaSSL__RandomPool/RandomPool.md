# RandomPool

`_ZN5yaSSL10RandomPoolC1Ev`

`yaSSL::RandomPool::RandomPool()`

| 类 | 地址 |
|---|---|
| `yaSSL::RandomPool` | `0x08799040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799040  _ZN5yaSSL10RandomPoolC1Ev
#           yaSSL::RandomPool::RandomPool()
# range [0x08799040, 0x08799089]
08799040 +0x00:  push   %ebp
08799041 +0x01:  mov    %esp,%ebp
08799043 +0x03:  sub    $0x18,%esp
08799046 +0x06:  mov    %ebx,-0x8(%ebp)
08799049 +0x09:  mov    %esi,-0x4(%ebp)
0879904c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08799051 +0x11:  add    $0xbd3b47,%ebx
08799057 +0x17:  movb   $0x0,0x4(%esp)
0879905c +0x1c:  movl   $0x10c,(%esp)
08799063 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08799068 +0x28:  mov    %eax,%esi
0879906a +0x2a:  mov    %eax,(%esp)
0879906d +0x2d:  call   08767980 <_ZN8TaoCrypt21RandomNumberGeneratorC1Ev>  ; TaoCrypt::RandomNumberGenerator::RandomNumberGenerator()
08799072 +0x32:  mov    0x8(%ebp),%eax
08799075 +0x35:  mov    %esi,(%eax)
08799077 +0x37:  mov    -0x8(%ebp),%ebx
0879907a +0x3a:  mov    -0x4(%ebp),%esi
0879907d +0x3d:  mov    %ebp,%esp
0879907f +0x3f:  pop    %ebp
08799080 +0x40:  ret
08799081 +0x41:  nop
08799082 +0x42:  lea    0x0(%esi,%eiz,1),%esi
08799089 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::RandomPool::RandomPool @ 0x8799040

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RandomPool::RandomPool() */

void __thiscall yaSSL::RandomPool::RandomPool(RandomPool *this)

{
  RandomNumberGenerator *this_00;
  
  this_00 = operator_new(0x10c,0);
  TaoCrypt::RandomNumberGenerator::RandomNumberGenerator(this_00);
  *(RandomNumberGenerator **)this = this_00;
  return;
}
```
