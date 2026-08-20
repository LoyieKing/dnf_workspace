# ~RC4

`_ZN5yaSSL3RC4D1Ev`

`yaSSL::RC4::~RC4()`

| 类 | 地址 |
|---|---|
| `yaSSL::RC4` | `0x087988d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087988d0  _ZN5yaSSL3RC4D1Ev
#           yaSSL::RC4::~RC4()
# range [0x087988d0, 0x0879891a]
087988d0 +0x00:  push   %ebp
087988d1 +0x01:  mov    %esp,%ebp
087988d3 +0x03:  sub    $0x18,%esp
087988d6 +0x06:  mov    %ebx,-0x8(%ebp)
087988d9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087988de +0x0e:  add    $0xbd42ba,%ebx
087988e4 +0x14:  mov    %esi,-0x4(%ebp)
087988e7 +0x17:  mov    0x8(%ebp),%esi
087988ea +0x1a:  mov    -0x4c4(%ebx),%eax
087988f0 +0x20:  add    $0x8,%eax
087988f3 +0x23:  mov    %eax,(%esi)
087988f5 +0x25:  mov    0x4(%esi),%eax
087988f8 +0x28:  movb   $0x0,0x4(%esp)
087988fd +0x2d:  mov    %eax,(%esp)
08798900 +0x30:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08798905 +0x35:  mov    -0x520(%ebx),%eax
0879890b +0x3b:  add    $0x8,%eax
0879890e +0x3e:  mov    %eax,(%esi)
08798910 +0x40:  mov    -0x8(%ebp),%ebx
08798913 +0x43:  mov    -0x4(%ebp),%esi
08798916 +0x46:  mov    %ebp,%esp
08798918 +0x48:  pop    %ebp
08798919 +0x49:  ret
0879891a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::RC4::~RC4 @ 0x87988d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RC4::~RC4() */

void __thiscall yaSSL::RC4::~RC4(RC4 *this)

{
  *(undefined **)this = PTR_vtable_0936c6d4 + 8;
  operator_delete(*(undefined4 *)(this + 4),0);
  *(undefined **)this = PTR_vtable_0936c678 + 8;
  return;
}
```
