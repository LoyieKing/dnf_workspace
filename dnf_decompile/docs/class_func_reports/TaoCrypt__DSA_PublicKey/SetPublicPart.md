# SetPublicPart

`_ZN8TaoCrypt13DSA_PublicKey13SetPublicPartERKNS_7IntegerE`

`TaoCrypt::DSA_PublicKey::SetPublicPart(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x087575b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087575b0  _ZN8TaoCrypt13DSA_PublicKey13SetPublicPartERKNS_7IntegerE
#           TaoCrypt::DSA_PublicKey::SetPublicPart(TaoCrypt::Integer const&)
# range [0x087575b0, 0x087575de]
087575b0 +0x00:  push   %ebp
087575b1 +0x01:  mov    %esp,%ebp
087575b3 +0x03:  push   %ebx
087575b4 +0x04:  sub    $0x14,%esp
087575b7 +0x07:  mov    0xc(%ebp),%eax
087575ba +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087575bf +0x0f:  add    $0xc155d9,%ebx
087575c5 +0x15:  mov    %eax,0x4(%esp)
087575c9 +0x19:  mov    0x8(%ebp),%eax
087575cc +0x1c:  add    $0x30,%eax
087575cf +0x1f:  mov    %eax,(%esp)
087575d2 +0x22:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087575d7 +0x27:  add    $0x14,%esp
087575da +0x2a:  pop    %ebx
087575db +0x2b:  pop    %ebp
087575dc +0x2c:  ret
087575dd +0x2d:  nop
087575de +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::SetPublicPart @ 0x87575b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SetPublicPart(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PublicKey::SetPublicPart(DSA_PublicKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x30),param_1);
  return;
}
```
