# CreateFortezzaServerKEA

`_ZN5yaSSL23CreateFortezzaServerKEAEv`

`yaSSL::CreateFortezzaServerKEA()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087474d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087474d0  _ZN5yaSSL23CreateFortezzaServerKEAEv
#           yaSSL::CreateFortezzaServerKEA()
# range [0x087474d0, 0x0874750a]
087474d0 +0x00:  push   %ebp
087474d1 +0x01:  mov    %esp,%ebp
087474d3 +0x03:  push   %ebx
087474d4 +0x04:  sub    $0x14,%esp
087474d7 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
087474dc +0x0c:  add    $0xc256bc,%ebx
087474e2 +0x12:  movb   $0x0,0x4(%esp)
087474e7 +0x17:  movl   $0x84,(%esp)
087474ee +0x1e:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087474f3 +0x23:  mov    -0x3c4(%ebx),%edx
087474f9 +0x29:  add    $0x8,%edx
087474fc +0x2c:  mov    %edx,(%eax)
087474fe +0x2e:  add    $0x14,%esp
08747501 +0x31:  pop    %ebx
08747502 +0x32:  pop    %ebp
08747503 +0x33:  ret
08747504 +0x34:  lea    0x0(%esi),%esi
0874750a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CreateFortezzaServerKEA @ 0x87474d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateFortezzaServerKEA() */

void yaSSL::CreateFortezzaServerKEA(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x84,0);
  *puVar1 = PTR_vtable_0936c7d4 + 8;
  return;
}
```
