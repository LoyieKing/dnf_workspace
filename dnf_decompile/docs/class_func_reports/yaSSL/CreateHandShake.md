# CreateHandShake

`_ZN5yaSSL15CreateHandShakeEv`

`yaSSL::CreateHandShake()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747790  _ZN5yaSSL15CreateHandShakeEv
#           yaSSL::CreateHandShake()
# range [0x08747790, 0x087477ca]
08747790 +0x00:  push   %ebp
08747791 +0x01:  mov    %esp,%ebp
08747793 +0x03:  push   %ebx
08747794 +0x04:  sub    $0x14,%esp
08747797 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
0874779c +0x0c:  add    $0xc253fc,%ebx
087477a2 +0x12:  movb   $0x0,0x4(%esp)
087477a7 +0x17:  movl   $0xc,(%esp)
087477ae +0x1e:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087477b3 +0x23:  mov    -0x3d0(%ebx),%edx
087477b9 +0x29:  add    $0x8,%edx
087477bc +0x2c:  mov    %edx,(%eax)
087477be +0x2e:  add    $0x14,%esp
087477c1 +0x31:  pop    %ebx
087477c2 +0x32:  pop    %ebp
087477c3 +0x33:  ret
087477c4 +0x34:  lea    0x0(%esi),%esi
087477ca +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CreateHandShake @ 0x8747790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateHandShake() */

void yaSSL::CreateHandShake(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc,0);
  *puVar1 = PTR_vtable_0936c7c8 + 8;
  return;
}
```
