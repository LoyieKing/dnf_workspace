# SetModulus

`_ZN8TaoCrypt13DSA_PublicKey10SetModulusERKNS_7IntegerE`

`TaoCrypt::DSA_PublicKey::SetModulus(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757640  _ZN8TaoCrypt13DSA_PublicKey10SetModulusERKNS_7IntegerE
#           TaoCrypt::DSA_PublicKey::SetModulus(TaoCrypt::Integer const&)
# range [0x08757640, 0x0875766a]
08757640 +0x00:  push   %ebp
08757641 +0x01:  mov    %esp,%ebp
08757643 +0x03:  push   %ebx
08757644 +0x04:  sub    $0x14,%esp
08757647 +0x07:  mov    0xc(%ebp),%eax
0875764a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875764f +0x0f:  add    $0xc15549,%ebx
08757655 +0x15:  mov    %eax,0x4(%esp)
08757659 +0x19:  mov    0x8(%ebp),%eax
0875765c +0x1c:  mov    %eax,(%esp)
0875765f +0x1f:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08757664 +0x24:  add    $0x14,%esp
08757667 +0x27:  pop    %ebx
08757668 +0x28:  pop    %ebp
08757669 +0x29:  ret
0875766a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::SetModulus @ 0x8757640

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SetModulus(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PublicKey::SetModulus(DSA_PublicKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)this,param_1);
  return;
}
```
