# setPrefix

`_ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi`

`yaSSL::(anonymous namespace)::setPrefix(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `yaSSL::(anonymous namespace)` | `0x0874f210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f210  _ZN5yaSSL12_GLOBAL__N_1L9setPrefixEPhi
#           yaSSL::(anonymous namespace)::setPrefix(unsigned char*, int)
# range [0x0874f210, 0x0874f2cc]
0874f210 +0x00:  push   %ebp
0874f211 +0x01:  xor    %ecx,%ecx
0874f213 +0x03:  mov    %esp,%ebp
0874f215 +0x05:  push   %ebx
0874f216 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f21b +0x0b:  add    $0xc1d97d,%ebx
0874f221 +0x11:  cmp    $0x6,%edx
0874f224 +0x14:  ja     0874f240 <+0x30>
0874f226 +0x16:  mov    -0x667bf0(%ebx,%edx,4),%edx
0874f22d +0x1d:  add    %ebx,%edx
0874f22f +0x1f:  jmp    *%edx
0874f231 +0x21:  lea    0x0(%esi,%eiz,1),%esi
0874f238 +0x28:  movb   $0x41,(%eax)
0874f23b +0x2b:  mov    $0x1,%ecx
0874f240 +0x30:  mov    %ecx,%eax
0874f242 +0x32:  pop    %ebx
0874f243 +0x33:  pop    %ebp
0874f244 +0x34:  ret
0874f245 +0x35:  lea    0x0(%esi),%esi
0874f248 +0x38:  mov    $0x1,%ecx
0874f24d +0x3d:  movl   $0x46464646,(%eax)
0874f253 +0x43:  movw   $0x4646,0x4(%eax)
0874f259 +0x49:  mov    %ecx,%eax
0874f25b +0x4b:  pop    %ebx
0874f25c +0x4c:  pop    %ebp
0874f25d +0x4d:  ret
0874f25e +0x4e:  xchg   %ax,%ax
0874f260 +0x50:  mov    $0x1,%ecx
0874f265 +0x55:  movl   $0x47474747,(%eax)
0874f26b +0x5b:  movw   $0x4747,0x4(%eax)
0874f271 +0x61:  movb   $0x47,0x6(%eax)
0874f275 +0x65:  mov    %ecx,%eax
0874f277 +0x67:  pop    %ebx
0874f278 +0x68:  pop    %ebp
0874f279 +0x69:  ret
0874f27a +0x6a:  lea    0x0(%esi),%esi
0874f280 +0x70:  mov    $0x1,%ecx
0874f285 +0x75:  movw   $0x4242,(%eax)
0874f28a +0x7a:  mov    %ecx,%eax
0874f28c +0x7c:  pop    %ebx
0874f28d +0x7d:  pop    %ebp
0874f28e +0x7e:  ret
0874f28f +0x7f:  nop
0874f290 +0x80:  mov    $0x1,%ecx
0874f295 +0x85:  movw   $0x4343,(%eax)
0874f29a +0x8a:  movb   $0x43,0x2(%eax)
0874f29e +0x8e:  mov    %ecx,%eax
0874f2a0 +0x90:  pop    %ebx
0874f2a1 +0x91:  pop    %ebp
0874f2a2 +0x92:  ret
0874f2a3 +0x93:  nop
0874f2a4 +0x94:  lea    0x0(%esi,%eiz,1),%esi
0874f2a8 +0x98:  mov    $0x1,%ecx
0874f2ad +0x9d:  movl   $0x44444444,(%eax)
0874f2b3 +0xa3:  mov    %ecx,%eax
0874f2b5 +0xa5:  pop    %ebx
0874f2b6 +0xa6:  pop    %ebp
0874f2b7 +0xa7:  ret
0874f2b8 +0xa8:  mov    $0x1,%ecx
0874f2bd +0xad:  movl   $0x45454545,(%eax)
0874f2c3 +0xb3:  movb   $0x45,0x4(%eax)
0874f2c7 +0xb7:  mov    %ecx,%eax
0874f2c9 +0xb9:  pop    %ebx
0874f2ca +0xba:  pop    %ebp
0874f2cb +0xbb:  ret
0874f2cc +0xbc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// setPrefix @ 0x874f210

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::(anonymous namespace)::setPrefix(unsigned char*, int) */

undefined4 __regparm3 yaSSL::(anonymous_namespace)::setPrefix(uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    *param_1 = 'A';
    uVar1 = 1;
    break;
  case 1:
    param_1[0] = 'B';
    param_1[1] = 'B';
    return 1;
  case 2:
    param_1[0] = 'C';
    param_1[1] = 'C';
    param_1[2] = 'C';
    return 1;
  case 3:
    builtin_memcpy(param_1,"DDDD",4);
    return 1;
  case 4:
    builtin_memcpy(param_1,"EEEEE",5);
    return 1;
  case 5:
    builtin_memcpy(param_1,"FFFFFF",6);
    return 1;
  case 6:
    builtin_memcpy(param_1,"GGGGGGG",7);
    return 1;
  }
  return uVar1;
}
```
