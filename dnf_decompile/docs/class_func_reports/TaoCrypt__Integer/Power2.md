# Power2

`_ZN8TaoCrypt7Integer6Power2Ej`

`TaoCrypt::Integer::Power2(unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08760d70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760d70  _ZN8TaoCrypt7Integer6Power2Ej
#           TaoCrypt::Integer::Power2(unsigned int)
# range [0x08760d70, 0x08760dcf]
08760d70 +0x00:  push   %ebp
08760d71 +0x01:  mov    %esp,%ebp
08760d73 +0x03:  sub    $0x28,%esp
08760d76 +0x06:  mov    %ebx,-0xc(%ebp)
08760d79 +0x09:  mov    %edi,-0x4(%ebp)
08760d7c +0x0c:  mov    0xc(%ebp),%edi
08760d7f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08760d84 +0x14:  add    $0xc0be14,%ebx
08760d8a +0x1a:  mov    %esi,-0x8(%ebp)
08760d8d +0x1d:  mov    0x8(%ebp),%esi
08760d90 +0x20:  movl   $0x0,0x4(%esp)
08760d98 +0x28:  lea    0x20(%edi),%eax
08760d9b +0x2b:  shr    $0x5,%eax
08760d9e +0x2e:  mov    %eax,0x8(%esp)
08760da2 +0x32:  mov    %esi,(%esp)
08760da5 +0x35:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
08760daa +0x3a:  mov    %edi,0x4(%esp)
08760dae +0x3e:  mov    %esi,(%esp)
08760db1 +0x41:  movl   $0x1,0x8(%esp)
08760db9 +0x49:  call   08760c50 <_ZN8TaoCrypt7Integer6SetBitEjb>  ; TaoCrypt::Integer::SetBit(unsigned int, bool)
08760dbe +0x4e:  mov    %esi,%eax
08760dc0 +0x50:  mov    -0xc(%ebp),%ebx
08760dc3 +0x53:  mov    -0x8(%ebp),%esi
08760dc6 +0x56:  mov    -0x4(%ebp),%edi
08760dc9 +0x59:  mov    %ebp,%esp
08760dcb +0x5b:  pop    %ebp
08760dcc +0x5c:  ret    $0x4
08760dcf +0x5f:  nop
```

## 反编译 C

```c
// TaoCrypt::Integer::Power2 @ 0x8760d70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Power2(unsigned int) */

Integer * __thiscall TaoCrypt::Integer::Power2(Integer *this,uint param_1)

{
  Integer(this,0,param_1 + 0x20 >> 5);
  SetBit(this,param_1,true);
  return this;
}
```
