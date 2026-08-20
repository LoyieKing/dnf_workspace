# operator=

`_ZN8TaoCrypt6SHA256aSERKS0_`

`TaoCrypt::SHA256::operator=(TaoCrypt::SHA256 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA256` | `0x087703d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087703d0  _ZN8TaoCrypt6SHA256aSERKS0_
#           TaoCrypt::SHA256::operator=(TaoCrypt::SHA256 const&)
# range [0x087703d0, 0x0877041f]
087703d0 +0x00:  push   %ebp
087703d1 +0x01:  mov    %esp,%ebp
087703d3 +0x03:  sub    $0x98,%esp
087703d9 +0x09:  mov    %ebx,-0xc(%ebp)
087703dc +0x0c:  mov    0xc(%ebp),%eax
087703df +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087703e4 +0x14:  add    $0xbfc7b4,%ebx
087703ea +0x1a:  mov    %esi,-0x8(%ebp)
087703ed +0x1d:  mov    0x8(%ebp),%esi
087703f0 +0x20:  mov    %edi,-0x4(%ebp)
087703f3 +0x23:  lea    -0x88(%ebp),%edi
087703f9 +0x29:  mov    %eax,0x4(%esp)
087703fd +0x2d:  mov    %edi,(%esp)
08770400 +0x30:  call   087702d0 <_ZN8TaoCrypt6SHA256C1ERKS0_>  ; TaoCrypt::SHA256::SHA256(TaoCrypt::SHA256 const&)
08770405 +0x35:  mov    %edi,0x4(%esp)
08770409 +0x39:  mov    %esi,(%esp)
0877040c +0x3c:  call   0876fad0 <_ZN8TaoCrypt6SHA2564SwapERS0_>  ; TaoCrypt::SHA256::Swap(TaoCrypt::SHA256&)
08770411 +0x41:  mov    %esi,%eax
08770413 +0x43:  mov    -0xc(%ebp),%ebx
08770416 +0x46:  mov    -0x8(%ebp),%esi
08770419 +0x49:  mov    -0x4(%ebp),%edi
0877041c +0x4c:  mov    %ebp,%esp
0877041e +0x4e:  pop    %ebp
0877041f +0x4f:  ret
```

## 反编译 C

```c
// TaoCrypt::SHA256::operator= @ 0x87703d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA256::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA256 const&) */

SHA256 * __thiscall TaoCrypt::SHA256::operator=(SHA256 *this,SHA256 *param_1)

{
  SHA256 local_8c [124];
  
  SHA256(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}
```
