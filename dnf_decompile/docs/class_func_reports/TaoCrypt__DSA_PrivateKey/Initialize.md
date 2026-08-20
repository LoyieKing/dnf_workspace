# Initialize

`_ZN8TaoCrypt14DSA_PrivateKey10InitializeERKNS_7IntegerES3_S3_S3_S3_`

`TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PrivateKey` | `0x087576e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087576e0  _ZN8TaoCrypt14DSA_PrivateKey10InitializeERKNS_7IntegerES3_S3_S3_S3_
#           TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x087576e0, 0x0875773a]
087576e0 +0x00:  push   %ebp
087576e1 +0x01:  mov    %esp,%ebp
087576e3 +0x03:  sub    $0x28,%esp
087576e6 +0x06:  mov    0x18(%ebp),%eax
087576e9 +0x09:  mov    %ebx,-0x8(%ebp)
087576ec +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087576f1 +0x11:  add    $0xc154a7,%ebx
087576f7 +0x17:  mov    %esi,-0x4(%ebp)
087576fa +0x1a:  mov    0x8(%ebp),%esi
087576fd +0x1d:  mov    %eax,0x10(%esp)
08757701 +0x21:  mov    0x14(%ebp),%eax
08757704 +0x24:  mov    %esi,(%esp)
08757707 +0x27:  add    $0x40,%esi
0875770a +0x2a:  mov    %eax,0xc(%esp)
0875770e +0x2e:  mov    0x10(%ebp),%eax
08757711 +0x31:  mov    %eax,0x8(%esp)
08757715 +0x35:  mov    0xc(%ebp),%eax
08757718 +0x38:  mov    %eax,0x4(%esp)
0875771c +0x3c:  call   08757670 <_ZN8TaoCrypt13DSA_PublicKey10InitializeERKNS_7IntegerES3_S3_S3_>  ; TaoCrypt::DSA_PublicKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08757721 +0x41:  mov    0x1c(%ebp),%eax
08757724 +0x44:  mov    %esi,(%esp)
08757727 +0x47:  mov    %eax,0x4(%esp)
0875772b +0x4b:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08757730 +0x50:  mov    -0x8(%ebp),%ebx
08757733 +0x53:  mov    -0x4(%ebp),%esi
08757736 +0x56:  mov    %ebp,%esp
08757738 +0x58:  pop    %ebp
08757739 +0x59:  ret
0875773a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::DSA_PrivateKey::Initialize @ 0x87576e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PrivateKey::Initialize(TaoCrypt::Integer const&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) */

void __thiscall
TaoCrypt::DSA_PrivateKey::Initialize
          (DSA_PrivateKey *this,Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,
          Integer *param_5)

{
  DSA_PublicKey::Initialize((DSA_PublicKey *)this,param_1,param_2,param_3,param_4);
  Integer::operator=((Integer *)(this + 0x40),param_5);
  return;
}
```
