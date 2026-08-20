# ServerKeyExchange

`_ZN5yaSSL17ServerKeyExchangeC1Ev`

`yaSSL::ServerKeyExchange::ServerKeyExchange()`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x08746f40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746f40  _ZN5yaSSL17ServerKeyExchangeC1Ev
#           yaSSL::ServerKeyExchange::ServerKeyExchange()
# range [0x08746f40, 0x08746f69]
08746f40 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08746f45 +0x05:  add    $0xc25c53,%ecx
08746f4b +0x0b:  push   %ebp
08746f4c +0x0c:  mov    %esp,%ebp
08746f4e +0x0e:  mov    0x8(%ebp),%eax
08746f51 +0x11:  mov    -0x440(%ecx),%edx
08746f57 +0x17:  movl   $0x0,0x8(%eax)
08746f5e +0x1e:  add    $0x8,%edx
08746f61 +0x21:  mov    %edx,(%eax)
08746f63 +0x23:  pop    %ebp
08746f64 +0x24:  ret
08746f65 +0x25:  nop
08746f66 +0x26:  lea    0x0(%esi),%esi
08746f69 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::ServerKeyExchange @ 0x8746f40

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ServerKeyExchange::ServerKeyExchange() */

void __thiscall yaSSL::ServerKeyExchange::ServerKeyExchange(ServerKeyExchange *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c758;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}
```
