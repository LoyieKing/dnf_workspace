# DSA_PublicKey

`_ZN8TaoCrypt13DSA_PublicKeyC1ERKS0_`

`TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::DSA_PublicKey const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757490  _ZN8TaoCrypt13DSA_PublicKeyC1ERKS0_
#           TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::DSA_PublicKey const&)
# range [0x08757490, 0x087574ff]
08757490 +0x00:  push   %ebp
08757491 +0x01:  mov    %esp,%ebp
08757493 +0x03:  sub    $0x28,%esp
08757496 +0x06:  mov    %ebx,-0xc(%ebp)
08757499 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875749e +0x0e:  add    $0xc156fa,%ebx
087574a4 +0x14:  mov    %esi,-0x8(%ebp)
087574a7 +0x17:  mov    0x8(%ebp),%esi
087574aa +0x1a:  mov    %edi,-0x4(%ebp)
087574ad +0x1d:  mov    0xc(%ebp),%edi
087574b0 +0x20:  mov    %esi,(%esp)
087574b3 +0x23:  mov    %edi,0x4(%esp)
087574b7 +0x27:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087574bc +0x2c:  lea    0x10(%edi),%eax
087574bf +0x2f:  mov    %eax,0x4(%esp)
087574c3 +0x33:  lea    0x10(%esi),%eax
087574c6 +0x36:  mov    %eax,(%esp)
087574c9 +0x39:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087574ce +0x3e:  lea    0x20(%edi),%eax
087574d1 +0x41:  add    $0x30,%edi
087574d4 +0x44:  mov    %eax,0x4(%esp)
087574d8 +0x48:  lea    0x20(%esi),%eax
087574db +0x4b:  add    $0x30,%esi
087574de +0x4e:  mov    %eax,(%esp)
087574e1 +0x51:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087574e6 +0x56:  mov    %edi,0x4(%esp)
087574ea +0x5a:  mov    %esi,(%esp)
087574ed +0x5d:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087574f2 +0x62:  mov    -0xc(%ebp),%ebx
087574f5 +0x65:  mov    -0x8(%ebp),%esi
087574f8 +0x68:  mov    -0x4(%ebp),%edi
087574fb +0x6b:  mov    %ebp,%esp
087574fd +0x6d:  pop    %ebp
087574fe +0x6e:  ret
087574ff +0x6f:  nop
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::DSA_PublicKey @ 0x8757490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::DSA_PublicKey(TaoCrypt::DSA_PublicKey const&) */

void __thiscall TaoCrypt::DSA_PublicKey::DSA_PublicKey(DSA_PublicKey *this,DSA_PublicKey *param_1)

{
  Integer::Integer((Integer *)this,(Integer *)param_1);
  Integer::Integer((Integer *)(this + 0x10),(Integer *)(param_1 + 0x10));
  Integer::Integer((Integer *)(this + 0x20),(Integer *)(param_1 + 0x20));
  Integer::Integer((Integer *)(this + 0x30),(Integer *)(param_1 + 0x30));
  return;
}
```
