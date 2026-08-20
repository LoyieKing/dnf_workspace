# RC4

`_ZN5yaSSL3RC4C1Ev`

`yaSSL::RC4::RC4()`

| 类 | 地址 |
|---|---|
| `yaSSL::RC4` | `0x08798690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798690  _ZN5yaSSL3RC4C1Ev
#           yaSSL::RC4::RC4()
# range [0x08798690, 0x087986da]
08798690 +0x00:  push   %ebp
08798691 +0x01:  mov    %esp,%ebp
08798693 +0x03:  sub    $0x18,%esp
08798696 +0x06:  mov    %ebx,-0x8(%ebp)
08798699 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0879869e +0x0e:  add    $0xbd44fa,%ebx
087986a4 +0x14:  mov    %esi,-0x4(%ebp)
087986a7 +0x17:  mov    0x8(%ebp),%esi
087986aa +0x1a:  mov    -0x4c4(%ebx),%eax
087986b0 +0x20:  add    $0x8,%eax
087986b3 +0x23:  mov    %eax,(%esi)
087986b5 +0x25:  movb   $0x0,0x4(%esp)
087986ba +0x2a:  movl   $0x204,(%esp)
087986c1 +0x31:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087986c6 +0x36:  mov    %eax,0x4(%esi)
087986c9 +0x39:  mov    -0x8(%ebp),%ebx
087986cc +0x3c:  mov    -0x4(%ebp),%esi
087986cf +0x3f:  mov    %ebp,%esp
087986d1 +0x41:  pop    %ebp
087986d2 +0x42:  ret
087986d3 +0x43:  nop
087986d4 +0x44:  lea    0x0(%esi),%esi
087986da +0x4a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::RC4::RC4 @ 0x8798690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::RC4() */

void __thiscall yaSSL::RC4::RC4(RC4 *this)

{
  void *pvVar1;
  
  *(undefined **)this = PTR_vtable_0936c6d4 + 8;
  pvVar1 = operator_new(0x204,0);
  *(void **)(this + 4) = pvVar1;
  return;
}
```
