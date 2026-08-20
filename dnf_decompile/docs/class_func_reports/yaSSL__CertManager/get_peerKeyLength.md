# get_peerKeyLength

`_ZNK5yaSSL11CertManager17get_peerKeyLengthEv`

`yaSSL::CertManager::get_peerKeyLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087977c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087977c0  _ZNK5yaSSL11CertManager17get_peerKeyLengthEv
#           yaSSL::CertManager::get_peerKeyLength() const
# range [0x087977c0, 0x087977e9]
087977c0 +0x00:  push   %ebp
087977c1 +0x01:  mov    %esp,%ebp
087977c3 +0x03:  push   %ebx
087977c4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087977c9 +0x09:  add    $0xbd53cf,%ebx
087977cf +0x0f:  sub    $0x14,%esp
087977d2 +0x12:  mov    0x8(%ebp),%eax
087977d5 +0x15:  add    $0x28,%eax
087977d8 +0x18:  mov    %eax,(%esp)
087977db +0x1b:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
087977e0 +0x20:  add    $0x14,%esp
087977e3 +0x23:  pop    %ebx
087977e4 +0x24:  pop    %ebp
087977e5 +0x25:  ret
087977e6 +0x26:  lea    0x0(%esi),%esi
087977e9 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::get_peerKeyLength @ 0x87977c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::get_peerKeyLength() const */

void __thiscall yaSSL::CertManager::get_peerKeyLength(CertManager *this)

{
  input_buffer::get_size((input_buffer *)(this + 0x28));
  return;
}
```
