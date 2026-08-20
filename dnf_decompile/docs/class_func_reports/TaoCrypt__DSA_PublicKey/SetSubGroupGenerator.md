# SetSubGroupGenerator

`_ZN8TaoCrypt13DSA_PublicKey20SetSubGroupGeneratorERKNS_7IntegerE`

`TaoCrypt::DSA_PublicKey::SetSubGroupGenerator(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x087575e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087575e0  _ZN8TaoCrypt13DSA_PublicKey20SetSubGroupGeneratorERKNS_7IntegerE
#           TaoCrypt::DSA_PublicKey::SetSubGroupGenerator(TaoCrypt::Integer const&)
# range [0x087575e0, 0x0875760e]
087575e0 +0x00:  push   %ebp
087575e1 +0x01:  mov    %esp,%ebp
087575e3 +0x03:  push   %ebx
087575e4 +0x04:  sub    $0x14,%esp
087575e7 +0x07:  mov    0xc(%ebp),%eax
087575ea +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087575ef +0x0f:  add    $0xc155a9,%ebx
087575f5 +0x15:  mov    %eax,0x4(%esp)
087575f9 +0x19:  mov    0x8(%ebp),%eax
087575fc +0x1c:  add    $0x20,%eax
087575ff +0x1f:  mov    %eax,(%esp)
08757602 +0x22:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08757607 +0x27:  add    $0x14,%esp
0875760a +0x2a:  pop    %ebx
0875760b +0x2b:  pop    %ebp
0875760c +0x2c:  ret
0875760d +0x2d:  nop
0875760e +0x2e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::SetSubGroupGenerator @ 0x87575e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::SetSubGroupGenerator(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::DSA_PublicKey::SetSubGroupGenerator(DSA_PublicKey *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x20),param_1);
  return;
}
```
