# operator=

`_ZN8TaoCrypt6SHA384aSERKS0_`

`TaoCrypt::SHA384::operator=(TaoCrypt::SHA384 const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA384` | `0x08770020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08770020  _ZN8TaoCrypt6SHA384aSERKS0_
#           TaoCrypt::SHA384::operator=(TaoCrypt::SHA384 const&)
# range [0x08770020, 0x0877006f]
08770020 +0x00:  push   %ebp
08770021 +0x01:  mov    %esp,%ebp
08770023 +0x03:  sub    $0xf8,%esp
08770029 +0x09:  mov    %ebx,-0xc(%ebp)
0877002c +0x0c:  mov    0xc(%ebp),%eax
0877002f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08770034 +0x14:  add    $0xbfcb64,%ebx
0877003a +0x1a:  mov    %esi,-0x8(%ebp)
0877003d +0x1d:  mov    0x8(%ebp),%esi
08770040 +0x20:  mov    %edi,-0x4(%ebp)
08770043 +0x23:  lea    -0xe8(%ebp),%edi
08770049 +0x29:  mov    %eax,0x4(%esp)
0877004d +0x2d:  mov    %edi,(%esp)
08770050 +0x30:  call   0876ff60 <_ZN8TaoCrypt6SHA384C1ERKS0_>  ; TaoCrypt::SHA384::SHA384(TaoCrypt::SHA384 const&)
08770055 +0x35:  mov    %edi,0x4(%esp)
08770059 +0x39:  mov    %esi,(%esp)
0877005c +0x3c:  call   0876f8c0 <_ZN8TaoCrypt6SHA3844SwapERS0_>  ; TaoCrypt::SHA384::Swap(TaoCrypt::SHA384&)
08770061 +0x41:  mov    %esi,%eax
08770063 +0x43:  mov    -0xc(%ebp),%ebx
08770066 +0x46:  mov    -0x8(%ebp),%esi
08770069 +0x49:  mov    -0x4(%ebp),%edi
0877006c +0x4c:  mov    %ebp,%esp
0877006e +0x4e:  pop    %ebp
0877006f +0x4f:  ret
```

## 反编译 C

```c
// TaoCrypt::SHA384::operator= @ 0x8770020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SHA384::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::SHA384 const&) */

SHA384 * __thiscall TaoCrypt::SHA384::operator=(SHA384 *this,SHA384 *param_1)

{
  SHA384 local_ec [220];
  
  SHA384(local_ec,param_1);
  Swap(this,local_ec);
  return this;
}
```
