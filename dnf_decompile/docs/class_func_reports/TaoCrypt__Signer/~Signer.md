# ~Signer

`_ZN8TaoCrypt6SignerD1Ev`

`TaoCrypt::Signer::~Signer()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Signer` | `0x08754230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754230  _ZN8TaoCrypt6SignerD1Ev
#           TaoCrypt::Signer::~Signer()
# range [0x08754230, 0x0875425a]
08754230 +0x00:  push   %ebp
08754231 +0x01:  mov    %esp,%ebp
08754233 +0x03:  push   %ebx
08754234 +0x04:  sub    $0x14,%esp
08754237 +0x07:  mov    0x8(%ebp),%eax
0875423a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875423f +0x0f:  add    $0xc18959,%ebx
08754245 +0x15:  movb   $0x0,0x4(%esp)
0875424a +0x1a:  mov    (%eax),%eax
0875424c +0x1c:  mov    %eax,(%esp)
0875424f +0x1f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08754254 +0x24:  add    $0x14,%esp
08754257 +0x27:  pop    %ebx
08754258 +0x28:  pop    %ebp
08754259 +0x29:  ret
0875425a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::Signer::~Signer @ 0x8754230

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Signer::~Signer() */

void __thiscall TaoCrypt::Signer::~Signer(Signer *this)

{
  operator_delete__(*(undefined4 *)this,0);
  return;
}
```
