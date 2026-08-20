# operator=

`_ZN8TaoCrypt6SHA224aSERKS0_`

`TaoCrypt::SHA224::operator=(TaoCrypt::SHA224 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA224` | `0x08770280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08770280  _ZN8TaoCrypt6SHA224aSERKS0_
#           TaoCrypt::SHA224::operator=(TaoCrypt::SHA224 const&)
# range [0x08770280, 0x087702cf]
08770280 +0x00:  push   %ebp
08770281 +0x01:  mov    %esp,%ebp
08770283 +0x03:  sub    $0x98,%esp
08770289 +0x09:  mov    %ebx,-0xc(%ebp)
0877028c +0x0c:  mov    0xc(%ebp),%eax
0877028f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08770294 +0x14:  add    $0xbfc904,%ebx
0877029a +0x1a:  mov    %esi,-0x8(%ebp)
0877029d +0x1d:  mov    0x8(%ebp),%esi
087702a0 +0x20:  mov    %edi,-0x4(%ebp)
087702a3 +0x23:  lea    -0x88(%ebp),%edi
087702a9 +0x29:  mov    %eax,0x4(%esp)
087702ad +0x2d:  mov    %edi,(%esp)
087702b0 +0x30:  call   08770190 <_ZN8TaoCrypt6SHA224C1ERKS0_>  ; TaoCrypt::SHA224::SHA224(TaoCrypt::SHA224 const&)
087702b5 +0x35:  mov    %edi,0x4(%esp)
087702b9 +0x39:  mov    %esi,(%esp)
087702bc +0x3c:  call   0876fa00 <_ZN8TaoCrypt6SHA2244SwapERS0_>  ; TaoCrypt::SHA224::Swap(TaoCrypt::SHA224&)
087702c1 +0x41:  mov    %esi,%eax
087702c3 +0x43:  mov    -0xc(%ebp),%ebx
087702c6 +0x46:  mov    -0x8(%ebp),%esi
087702c9 +0x49:  mov    -0x4(%ebp),%edi
087702cc +0x4c:  mov    %ebp,%esp
087702ce +0x4e:  pop    %ebp
087702cf +0x4f:  ret
```

## 反编译 C

```c
// TaoCrypt::SHA224::operator= @ 0x8770280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA224::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA224 const&) */

SHA224 * __thiscall TaoCrypt::SHA224::operator=(SHA224 *this,SHA224 *param_1)

{
  SHA224 local_8c [124];
  
  SHA224(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}
```
