# ChangeCipherSpec

`_ZN5yaSSL16ChangeCipherSpecC1Ev`

`yaSSL::ChangeCipherSpec::ChangeCipherSpec()`

| 类 | 地址 |
|---|---|
| `yaSSL::ChangeCipherSpec` | `0x08746b40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746b40  _ZN5yaSSL16ChangeCipherSpecC1Ev
#           yaSSL::ChangeCipherSpec::ChangeCipherSpec()
# range [0x08746b40, 0x08746b69]
08746b40 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08746b45 +0x05:  add    $0xc26053,%ecx
08746b4b +0x0b:  push   %ebp
08746b4c +0x0c:  mov    %esp,%ebp
08746b4e +0x0e:  mov    0x8(%ebp),%eax
08746b51 +0x11:  mov    -0x2fc(%ecx),%edx
08746b57 +0x17:  movl   $0x1,0x4(%eax)
08746b5e +0x1e:  add    $0x8,%edx
08746b61 +0x21:  mov    %edx,(%eax)
08746b63 +0x23:  pop    %ebp
08746b64 +0x24:  ret
08746b65 +0x25:  nop
08746b66 +0x26:  lea    0x0(%esi),%esi
08746b69 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ChangeCipherSpec::ChangeCipherSpec @ 0x8746b40

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ChangeCipherSpec::ChangeCipherSpec() */

void __thiscall yaSSL::ChangeCipherSpec::ChangeCipherSpec(ChangeCipherSpec *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c89c;
  *(undefined4 *)(this + 4) = 1;
  *(undefined **)this = puVar1 + 8;
  return;
}
```
