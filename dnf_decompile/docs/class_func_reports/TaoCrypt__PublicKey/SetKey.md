# SetKey

`_ZN8TaoCrypt9PublicKey6SetKeyEPKh`

`TaoCrypt::PublicKey::SetKey(unsigned char const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PublicKey` | `0x08753ca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753ca0  _ZN8TaoCrypt9PublicKey6SetKeyEPKh
#           TaoCrypt::PublicKey::SetKey(unsigned char const*)
# range [0x08753ca0, 0x08753cda]
08753ca0 +0x00:  push   %ebp
08753ca1 +0x01:  mov    %esp,%ebp
08753ca3 +0x03:  push   %ebx
08753ca4 +0x04:  sub    $0x14,%esp
08753ca7 +0x07:  mov    0x8(%ebp),%eax
08753caa +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08753caf +0x0f:  add    $0xc18ee9,%ebx
08753cb5 +0x15:  mov    (%eax),%edx
08753cb7 +0x17:  mov    0x4(%eax),%eax
08753cba +0x1a:  mov    %edx,(%esp)
08753cbd +0x1d:  mov    %eax,0x8(%esp)
08753cc1 +0x21:  mov    0xc(%ebp),%eax
08753cc4 +0x24:  mov    %eax,0x4(%esp)
08753cc8 +0x28:  call   0807d8a0 <_init+0x198>
08753ccd +0x2d:  add    $0x14,%esp
08753cd0 +0x30:  pop    %ebx
08753cd1 +0x31:  pop    %ebp
08753cd2 +0x32:  ret
08753cd3 +0x33:  nop
08753cd4 +0x34:  lea    0x0(%esi),%esi
08753cda +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::PublicKey::SetKey @ 0x8753ca0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PublicKey::SetKey(unsigned char const*) */

void __thiscall TaoCrypt::PublicKey::SetKey(PublicKey *this,uchar *param_1)

{
  memcpy(*(void **)this,param_1,*(size_t *)(this + 4));
  return;
}
```
