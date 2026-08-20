# get_agreedKeyLength

`_ZNK5yaSSL13DiffieHellman19get_agreedKeyLengthEv`

`yaSSL::DiffieHellman::get_agreedKeyLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x08798e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798e20  _ZNK5yaSSL13DiffieHellman19get_agreedKeyLengthEv
#           yaSSL::DiffieHellman::get_agreedKeyLength() const
# range [0x08798e20, 0x08798e49]
08798e20 +0x00:  push   %ebp
08798e21 +0x01:  mov    %esp,%ebp
08798e23 +0x03:  push   %ebx
08798e24 +0x04:  sub    $0x14,%esp
08798e27 +0x07:  mov    0x8(%ebp),%eax
08798e2a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08798e2f +0x0f:  add    $0xbd3d69,%ebx
08798e35 +0x15:  mov    (%eax),%eax
08798e37 +0x17:  mov    %eax,(%esp)
08798e3a +0x1a:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08798e3f +0x1f:  add    $0x14,%esp
08798e42 +0x22:  pop    %ebx
08798e43 +0x23:  pop    %ebp
08798e44 +0x24:  ret
08798e45 +0x25:  nop
08798e46 +0x26:  lea    0x0(%esi),%esi
08798e49 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DiffieHellman::get_agreedKeyLength @ 0x8798e20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::get_agreedKeyLength() const */

void __thiscall yaSSL::DiffieHellman::get_agreedKeyLength(DiffieHellman *this)

{
  TaoCrypt::Integer::ByteCount(*(Integer **)this);
  return;
}
```
