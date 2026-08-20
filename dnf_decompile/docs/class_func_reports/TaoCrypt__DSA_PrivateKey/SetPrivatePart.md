# SetPrivatePart

`_ZN8TaoCrypt14DSA_PrivateKey14SetPrivatePartERKNS_7IntegerE`

`TaoCrypt::DSA_PrivateKey::SetPrivatePart(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PrivateKey` | `0x08757580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757580  _ZN8TaoCrypt14DSA_PrivateKey14SetPrivatePartERKNS_7IntegerE
#           TaoCrypt::DSA_PrivateKey::SetPrivatePart(TaoCrypt::Integer const&)
# range [0x08757580, 0x087575ae]
08757580 +0x00:  push   %ebp
08757581 +0x01:  mov    %esp,%ebp
08757583 +0x03:  push   %ebx
08757584 +0x04:  sub    $0x14,%esp
08757587 +0x07:  mov    0xc(%ebp),%eax
0875758a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875758f +0x0f:  add    $0xc15609,%ebx
08757595 +0x15:  mov    %eax,0x4(%esp)
08757599 +0x19:  mov    0x8(%ebp),%eax
0875759c +0x1c:  add    $0x40,%eax
0875759f +0x1f:  mov    %eax,(%esp)
087575a2 +0x22:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087575a7 +0x27:  add    $0x14,%esp
087575aa +0x2a:  pop    %ebx
087575ab +0x2b:  pop    %ebp
087575ac +0x2c:  ret
087575ad +0x2d:  nop
087575ae +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::DSA_PrivateKey::SetPrivatePart @ 0x8757580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PrivateKey::SetPrivatePart(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PrivateKey::SetPrivatePart(DSA_PrivateKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x40),param_1);
  return;
}
```
