# operator=

`_ZN8TaoCrypt6SHA512aSERKS0_`

`TaoCrypt::SHA512::operator=(TaoCrypt::SHA512 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA512` | `0x08770140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08770140  _ZN8TaoCrypt6SHA512aSERKS0_
#           TaoCrypt::SHA512::operator=(TaoCrypt::SHA512 const&)
# range [0x08770140, 0x0877018f]
08770140 +0x00:  push   %ebp
08770141 +0x01:  mov    %esp,%ebp
08770143 +0x03:  sub    $0xf8,%esp
08770149 +0x09:  mov    %ebx,-0xc(%ebp)
0877014c +0x0c:  mov    0xc(%ebp),%eax
0877014f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08770154 +0x14:  add    $0xbfca44,%ebx
0877015a +0x1a:  mov    %esi,-0x8(%ebp)
0877015d +0x1d:  mov    0x8(%ebp),%esi
08770160 +0x20:  mov    %edi,-0x4(%ebp)
08770163 +0x23:  lea    -0xe8(%ebp),%edi
08770169 +0x29:  mov    %eax,0x4(%esp)
0877016d +0x2d:  mov    %edi,(%esp)
08770170 +0x30:  call   08770070 <_ZN8TaoCrypt6SHA512C1ERKS0_>  ; TaoCrypt::SHA512::SHA512(TaoCrypt::SHA512 const&)
08770175 +0x35:  mov    %edi,0x4(%esp)
08770179 +0x39:  mov    %esi,(%esp)
0877017c +0x3c:  call   0876f950 <_ZN8TaoCrypt6SHA5124SwapERS0_>  ; TaoCrypt::SHA512::Swap(TaoCrypt::SHA512&)
08770181 +0x41:  mov    %esi,%eax
08770183 +0x43:  mov    -0xc(%ebp),%ebx
08770186 +0x46:  mov    -0x8(%ebp),%esi
08770189 +0x49:  mov    -0x4(%ebp),%edi
0877018c +0x4c:  mov    %ebp,%esp
0877018e +0x4e:  pop    %ebp
0877018f +0x4f:  ret
```

## 反编译 C

```c
// TaoCrypt::SHA512::operator= @ 0x8770140

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA512::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA512 const&) */

SHA512 * __thiscall TaoCrypt::SHA512::operator=(SHA512 *this,SHA512 *param_1)

{
  SHA512 local_ec [220];
  
  SHA512(local_ec,param_1);
  Swap(this,local_ec);
  return this;
}
```
