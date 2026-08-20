# Data

`_ZN5yaSSL4DataC1Ev`

`yaSSL::Data::Data()`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x08746be0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746be0  _ZN5yaSSL4DataC1Ev
#           yaSSL::Data::Data()
# range [0x08746be0, 0x08746c19]
08746be0 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08746be5 +0x05:  add    $0xc25fb3,%ecx
08746beb +0x0b:  push   %ebp
08746bec +0x0c:  mov    %esp,%ebp
08746bee +0x0e:  mov    0x8(%ebp),%eax
08746bf1 +0x11:  mov    -0x11c(%ecx),%edx
08746bf7 +0x17:  movw   $0x0,0x4(%eax)
08746bfd +0x1d:  movl   $0x0,0x8(%eax)
08746c04 +0x24:  movl   $0x0,0xc(%eax)
08746c0b +0x2b:  add    $0x8,%edx
08746c0e +0x2e:  mov    %edx,(%eax)
08746c10 +0x30:  pop    %ebp
08746c11 +0x31:  ret
08746c12 +0x32:  lea    0x0(%esi,%eiz,1),%esi
08746c19 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Data::Data @ 0x8746be0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::Data::Data() */

void __thiscall yaSSL::Data::Data(Data *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936ca7c;
  *(undefined2 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}
```
