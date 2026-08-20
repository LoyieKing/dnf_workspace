# CreateAlert

`_ZN5yaSSL11CreateAlertEv`

`yaSSL::CreateAlert()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087477d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087477d0  _ZN5yaSSL11CreateAlertEv
#           yaSSL::CreateAlert()
# range [0x087477d0, 0x0874780a]
087477d0 +0x00:  push   %ebp
087477d1 +0x01:  mov    %esp,%ebp
087477d3 +0x03:  push   %ebx
087477d4 +0x04:  sub    $0x14,%esp
087477d7 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
087477dc +0x0c:  add    $0xc253bc,%ebx
087477e2 +0x12:  movb   $0x0,0x4(%esp)
087477e7 +0x17:  movl   $0xc,(%esp)
087477ee +0x1e:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087477f3 +0x23:  mov    -0x2e0(%ebx),%edx
087477f9 +0x29:  add    $0x8,%edx
087477fc +0x2c:  mov    %edx,(%eax)
087477fe +0x2e:  add    $0x14,%esp
08747801 +0x31:  pop    %ebx
08747802 +0x32:  pop    %ebp
08747803 +0x33:  ret
08747804 +0x34:  lea    0x0(%esi),%esi
0874780a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CreateAlert @ 0x87477d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateAlert() */

void yaSSL::CreateAlert(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc,0);
  *puVar1 = PTR_vtable_0936c8b8 + 8;
  return;
}
```
