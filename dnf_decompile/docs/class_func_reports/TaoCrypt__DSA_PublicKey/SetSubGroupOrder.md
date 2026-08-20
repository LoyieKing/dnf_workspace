# SetSubGroupOrder

`_ZN8TaoCrypt13DSA_PublicKey16SetSubGroupOrderERKNS_7IntegerE`

`TaoCrypt::DSA_PublicKey::SetSubGroupOrder(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757610  _ZN8TaoCrypt13DSA_PublicKey16SetSubGroupOrderERKNS_7IntegerE
#           TaoCrypt::DSA_PublicKey::SetSubGroupOrder(TaoCrypt::Integer const&)
# range [0x08757610, 0x0875763e]
08757610 +0x00:  push   %ebp
08757611 +0x01:  mov    %esp,%ebp
08757613 +0x03:  push   %ebx
08757614 +0x04:  sub    $0x14,%esp
08757617 +0x07:  mov    0xc(%ebp),%eax
0875761a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875761f +0x0f:  add    $0xc15579,%ebx
08757625 +0x15:  mov    %eax,0x4(%esp)
08757629 +0x19:  mov    0x8(%ebp),%eax
0875762c +0x1c:  add    $0x10,%eax
0875762f +0x1f:  mov    %eax,(%esp)
08757632 +0x22:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08757637 +0x27:  add    $0x14,%esp
0875763a +0x2a:  pop    %ebx
0875763b +0x2b:  pop    %ebp
0875763c +0x2c:  ret
0875763d +0x2d:  nop
0875763e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::SetSubGroupOrder @ 0x8757610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SetSubGroupOrder(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PublicKey::SetSubGroupOrder(DSA_PublicKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x10),param_1);
  return;
}
```
