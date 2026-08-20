# Initialize

`_ZN8TaoCrypt13DSA_PublicKey10InitializeERKNS_7IntegerES3_S3_S3_`

`TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757670  _ZN8TaoCrypt13DSA_PublicKey10InitializeERKNS_7IntegerES3_S3_S3_
#           TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x08757670, 0x087576da]
08757670 +0x00:  push   %ebp
08757671 +0x01:  mov    %esp,%ebp
08757673 +0x03:  sub    $0x18,%esp
08757676 +0x06:  mov    %ebx,-0x8(%ebp)
08757679 +0x09:  mov    0xc(%ebp),%eax
0875767c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08757681 +0x11:  add    $0xc15517,%ebx
08757687 +0x17:  mov    %esi,-0x4(%ebp)
0875768a +0x1a:  mov    0x8(%ebp),%esi
0875768d +0x1d:  mov    %eax,0x4(%esp)
08757691 +0x21:  mov    %esi,(%esp)
08757694 +0x24:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08757699 +0x29:  mov    0x10(%ebp),%eax
0875769c +0x2c:  mov    %eax,0x4(%esp)
087576a0 +0x30:  lea    0x10(%esi),%eax
087576a3 +0x33:  mov    %eax,(%esp)
087576a6 +0x36:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087576ab +0x3b:  mov    0x14(%ebp),%eax
087576ae +0x3e:  mov    %eax,0x4(%esp)
087576b2 +0x42:  lea    0x20(%esi),%eax
087576b5 +0x45:  add    $0x30,%esi
087576b8 +0x48:  mov    %eax,(%esp)
087576bb +0x4b:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087576c0 +0x50:  mov    0x18(%ebp),%eax
087576c3 +0x53:  mov    %esi,(%esp)
087576c6 +0x56:  mov    %eax,0x4(%esp)
087576ca +0x5a:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087576cf +0x5f:  mov    -0x8(%ebp),%ebx
087576d2 +0x62:  mov    -0x4(%ebp),%esi
087576d5 +0x65:  mov    %ebp,%esp
087576d7 +0x67:  pop    %ebp
087576d8 +0x68:  ret
087576d9 +0x69:  nop
087576da +0x6a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::Initialize @ 0x8757670

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

void __thiscall
TaoCrypt::DSA_PublicKey::Initialize
          (DSA_PublicKey *this,Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  Integer::operator=((Integer *)this,param_1);
  Integer::operator=((Integer *)(this + 0x10),param_2);
  Integer::operator=((Integer *)(this + 0x20),param_3);
  Integer::operator=((Integer *)(this + 0x30),param_4);
  return;
}
```
