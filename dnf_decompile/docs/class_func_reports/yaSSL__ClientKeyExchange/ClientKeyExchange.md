# ClientKeyExchange

`_ZN5yaSSL17ClientKeyExchangeC1Ev`

`yaSSL::ClientKeyExchange::ClientKeyExchange()`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x087470b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087470b0  _ZN5yaSSL17ClientKeyExchangeC1Ev
#           yaSSL::ClientKeyExchange::ClientKeyExchange()
# range [0x087470b0, 0x087470d9]
087470b0 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
087470b5 +0x05:  add    $0xc25ae3,%ecx
087470bb +0x0b:  push   %ebp
087470bc +0x0c:  mov    %esp,%ebp
087470be +0x0e:  mov    0x8(%ebp),%eax
087470c1 +0x11:  mov    -0x38(%ecx),%edx
087470c7 +0x17:  movl   $0x0,0x8(%eax)
087470ce +0x1e:  add    $0x8,%edx
087470d1 +0x21:  mov    %edx,(%eax)
087470d3 +0x23:  pop    %ebp
087470d4 +0x24:  ret
087470d5 +0x25:  nop
087470d6 +0x26:  lea    0x0(%esi),%esi
087470d9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::ClientKeyExchange @ 0x87470b0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ClientKeyExchange::ClientKeyExchange() */

void __thiscall yaSSL::ClientKeyExchange::ClientKeyExchange(ClientKeyExchange *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936cb60;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}
```
