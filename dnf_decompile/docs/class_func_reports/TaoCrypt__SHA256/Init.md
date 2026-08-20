# Init

`_ZN8TaoCrypt6SHA2564InitEv`

`TaoCrypt::SHA256::Init()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::SHA256` | `0x087683f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087683f0  _ZN8TaoCrypt6SHA2564InitEv
#           TaoCrypt::SHA256::Init()
# range [0x087683f0, 0x08768449]
087683f0 +0x00:  push   %ebp
087683f1 +0x01:  mov    %esp,%ebp
087683f3 +0x03:  mov    0x8(%ebp),%eax
087683f6 +0x06:  movl   $0x6a09e667,0x10(%eax)
087683fd +0x0d:  movl   $0xbb67ae85,0x14(%eax)
08768404 +0x14:  movl   $0x3c6ef372,0x18(%eax)
0876840b +0x1b:  movl   $0xa54ff53a,0x1c(%eax)
08768412 +0x22:  movl   $0x510e527f,0x20(%eax)
08768419 +0x29:  movl   $0x9b05688c,0x24(%eax)
08768420 +0x30:  movl   $0x1f83d9ab,0x28(%eax)
08768427 +0x37:  movl   $0x5be0cd19,0x2c(%eax)
0876842e +0x3e:  movl   $0x0,0x4(%eax)
08768435 +0x45:  movl   $0x0,0x8(%eax)
0876843c +0x4c:  movl   $0x0,0xc(%eax)
08768443 +0x53:  pop    %ebp
08768444 +0x54:  ret
08768445 +0x55:  nop
08768446 +0x56:  lea    0x0(%esi),%esi
08768449 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::SHA256::Init @ 0x87683f0

/* TaoCrypt::SHA256::Init() */

void __thiscall TaoCrypt::SHA256::Init(SHA256 *this)

{
  *(undefined4 *)(this + 0x10) = 0x6a09e667;
  *(undefined4 *)(this + 0x14) = 0xbb67ae85;
  *(undefined4 *)(this + 0x18) = 0x3c6ef372;
  *(undefined4 *)(this + 0x1c) = 0xa54ff53a;
  *(undefined4 *)(this + 0x20) = 0x510e527f;
  *(undefined4 *)(this + 0x24) = 0x9b05688c;
  *(undefined4 *)(this + 0x28) = 0x1f83d9ab;
  *(undefined4 *)(this + 0x2c) = 0x5be0cd19;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
