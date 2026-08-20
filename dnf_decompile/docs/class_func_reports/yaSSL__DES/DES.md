# DES

`_ZN5yaSSL3DESC1Ev`

`yaSSL::DES::DES()`

| 类 | 地址 |
|---|---|
| `yaSSL::DES` | `0x08798790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798790  _ZN5yaSSL3DESC1Ev
#           yaSSL::DES::DES()
# range [0x08798790, 0x0879883a]
08798790 +0x00:  push   %ebp
08798791 +0x01:  mov    %esp,%ebp
08798793 +0x03:  push   %esi
08798794 +0x04:  push   %ebx
08798795 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
0879879a +0x0a:  add    $0xbd43fe,%ebx
087987a0 +0x10:  sub    $0x10,%esp
087987a3 +0x13:  mov    0x8(%ebp),%esi
087987a6 +0x16:  mov    -0x5c4(%ebx),%eax
087987ac +0x1c:  add    $0x8,%eax
087987af +0x1f:  mov    %eax,(%esi)
087987b1 +0x21:  movb   $0x0,0x4(%esp)
087987b6 +0x26:  movl   $0x170,(%esp)
087987bd +0x2d:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087987c2 +0x32:  lea    0x10(%eax),%edx
087987c5 +0x35:  mov    %edx,0x8(%eax)
087987c8 +0x38:  lea    0x20(%eax),%edx
087987cb +0x3b:  mov    %edx,0xc(%eax)
087987ce +0x3e:  mov    -0x90(%ebx),%edx
087987d4 +0x44:  lea    0xc8(%eax),%ecx
087987da +0x4a:  mov    %ecx,0xc0(%eax)
087987e0 +0x50:  lea    0xd8(%eax),%ecx
087987e6 +0x56:  movl   $0x8,0x4(%eax)
087987ed +0x5d:  movl   $0x0,0x30(%eax)
087987f4 +0x64:  add    $0x8,%edx
087987f7 +0x67:  movl   $0x1,0x34(%eax)
087987fe +0x6e:  mov    %edx,(%eax)
08798800 +0x70:  movl   $0x8,0xbc(%eax)
0879880a +0x7a:  mov    %ecx,0xc4(%eax)
08798810 +0x80:  movl   $0x1,0xe8(%eax)
0879881a +0x8a:  movl   $0x1,0xec(%eax)
08798824 +0x94:  mov    %edx,0xb8(%eax)
0879882a +0x9a:  mov    %eax,0x4(%esi)
0879882d +0x9d:  add    $0x10,%esp
08798830 +0xa0:  pop    %ebx
08798831 +0xa1:  pop    %esi
08798832 +0xa2:  pop    %ebp
08798833 +0xa3:  ret
08798834 +0xa4:  lea    0x0(%esi),%esi
0879883a +0xaa:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::DES::DES @ 0x8798790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::DES() */

void __thiscall yaSSL::DES::DES(DES *this)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c5d4 + 8;
  puVar2 = operator_new(0x170,0);
  puVar2[2] = puVar2 + 4;
  puVar2[3] = puVar2 + 8;
  puVar1 = PTR_vtable_0936cb08;
  puVar2[0x30] = puVar2 + 0x32;
  puVar2[1] = 8;
  puVar2[0xc] = 0;
  puVar2[0xd] = 1;
  *puVar2 = puVar1 + 8;
  puVar2[0x2f] = 8;
  puVar2[0x31] = puVar2 + 0x36;
  puVar2[0x3a] = 1;
  puVar2[0x3b] = 1;
  puVar2[0x2e] = puVar1 + 8;
  *(undefined4 **)(this + 4) = puVar2;
  return;
}
```
