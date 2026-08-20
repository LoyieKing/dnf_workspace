# Swap

`_ZN8TaoCrypt13DSA_PublicKey4SwapERS0_`

`TaoCrypt::DSA_PublicKey::Swap(TaoCrypt::DSA_PublicKey&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_PublicKey` | `0x08757890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08757890  _ZN8TaoCrypt13DSA_PublicKey4SwapERS0_
#           TaoCrypt::DSA_PublicKey::Swap(TaoCrypt::DSA_PublicKey&)
# range [0x08757890, 0x087578ff]
08757890 +0x00:  push   %ebp
08757891 +0x01:  mov    %esp,%ebp
08757893 +0x03:  sub    $0x28,%esp
08757896 +0x06:  mov    %ebx,-0xc(%ebp)
08757899 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875789e +0x0e:  add    $0xc152fa,%ebx
087578a4 +0x14:  mov    %esi,-0x8(%ebp)
087578a7 +0x17:  mov    0x8(%ebp),%esi
087578aa +0x1a:  mov    %edi,-0x4(%ebp)
087578ad +0x1d:  mov    0xc(%ebp),%edi
087578b0 +0x20:  mov    %esi,(%esp)
087578b3 +0x23:  mov    %edi,0x4(%esp)
087578b7 +0x27:  call   0875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>  ; TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
087578bc +0x2c:  lea    0x10(%edi),%eax
087578bf +0x2f:  mov    %eax,0x4(%esp)
087578c3 +0x33:  lea    0x10(%esi),%eax
087578c6 +0x36:  mov    %eax,(%esp)
087578c9 +0x39:  call   0875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>  ; TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
087578ce +0x3e:  lea    0x20(%edi),%eax
087578d1 +0x41:  add    $0x30,%edi
087578d4 +0x44:  mov    %eax,0x4(%esp)
087578d8 +0x48:  lea    0x20(%esi),%eax
087578db +0x4b:  add    $0x30,%esi
087578de +0x4e:  mov    %eax,(%esp)
087578e1 +0x51:  call   0875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>  ; TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
087578e6 +0x56:  mov    %edi,0x4(%esp)
087578ea +0x5a:  mov    %esi,(%esp)
087578ed +0x5d:  call   0875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>  ; TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
087578f2 +0x62:  mov    -0xc(%ebp),%ebx
087578f5 +0x65:  mov    -0x8(%ebp),%esi
087578f8 +0x68:  mov    -0x4(%ebp),%edi
087578fb +0x6b:  mov    %ebp,%esp
087578fd +0x6d:  pop    %ebp
087578fe +0x6e:  ret
087578ff +0x6f:  nop
```

## 反编译 C

```c
// TaoCrypt::DSA_PublicKey::Swap @ 0x8757890

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_PublicKey::Swap(TaoCrypt::DSA_PublicKey&) */

void __thiscall TaoCrypt::DSA_PublicKey::Swap(DSA_PublicKey *this,DSA_PublicKey *param_1)

{
  Integer::Swap((Integer *)this,(Integer *)param_1);
  Integer::Swap((Integer *)(this + 0x10),(Integer *)(param_1 + 0x10));
  Integer::Swap((Integer *)(this + 0x20),(Integer *)(param_1 + 0x20));
  Integer::Swap((Integer *)(this + 0x30),(Integer *)(param_1 + 0x30));
  return;
}
```
