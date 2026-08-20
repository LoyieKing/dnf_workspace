# get_privateKeyLength

`_ZNK5yaSSL11CertManager20get_privateKeyLengthEv`

`yaSSL::CertManager::get_privateKeyLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797790  _ZNK5yaSSL11CertManager20get_privateKeyLengthEv
#           yaSSL::CertManager::get_privateKeyLength() const
# range [0x08797790, 0x087977b9]
08797790 +0x00:  push   %ebp
08797791 +0x01:  mov    %esp,%ebp
08797793 +0x03:  push   %ebx
08797794 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08797799 +0x09:  add    $0xbd53ff,%ebx
0879779f +0x0f:  sub    $0x14,%esp
087977a2 +0x12:  mov    0x8(%ebp),%eax
087977a5 +0x15:  add    $0xc,%eax
087977a8 +0x18:  mov    %eax,(%esp)
087977ab +0x1b:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
087977b0 +0x20:  add    $0x14,%esp
087977b3 +0x23:  pop    %ebx
087977b4 +0x24:  pop    %ebp
087977b5 +0x25:  ret
087977b6 +0x26:  lea    0x0(%esi),%esi
087977b9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::get_privateKeyLength @ 0x8797790

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::get_privateKeyLength() const */

void __thiscall yaSSL::CertManager::get_privateKeyLength(CertManager *this)

{
  input_buffer::get_size((input_buffer *)(this + 0xc));
  return;
}
```
