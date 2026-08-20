# SignatureLength

`_ZNK8TaoCrypt13DSA_PublicKey15SignatureLengthEv`

`TaoCrypt::DSA_PublicKey::SignatureLength() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757460` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757460  _ZNK8TaoCrypt13DSA_PublicKey15SignatureLengthEv
#           TaoCrypt::DSA_PublicKey::SignatureLength() const
# range [0x08757460, 0x0875748e]
08757460 +0x00:  push   %ebp
08757461 +0x01:  mov    %esp,%ebp
08757463 +0x03:  push   %ebx
08757464 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08757469 +0x09:  add    $0xc1572f,%ebx
0875746f +0x0f:  sub    $0x14,%esp
08757472 +0x12:  mov    0x8(%ebp),%eax
08757475 +0x15:  mov    %eax,(%esp)
08757478 +0x18:  call   087573e0 <_ZNK8TaoCrypt13DSA_PublicKey16GetSubGroupOrderEv>  ; TaoCrypt::DSA_PublicKey::GetSubGroupOrder() const
0875747d +0x1d:  mov    %eax,(%esp)
08757480 +0x20:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08757485 +0x25:  add    $0x14,%esp
08757488 +0x28:  pop    %ebx
08757489 +0x29:  pop    %ebp
0875748a +0x2a:  add    %eax,%eax
0875748c +0x2c:  ret
0875748d +0x2d:  nop
0875748e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::SignatureLength @ 0x8757460

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SignatureLength() const */

int __thiscall TaoCrypt::DSA_PublicKey::SignatureLength(DSA_PublicKey *this)

{
  Integer *this_00;
  int iVar1;
  
  this_00 = (Integer *)GetSubGroupOrder(this);
  iVar1 = Integer::ByteCount(this_00);
  return iVar1 * 2;
}
```
