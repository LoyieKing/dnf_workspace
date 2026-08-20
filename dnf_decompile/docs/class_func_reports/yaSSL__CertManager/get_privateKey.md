# get_privateKey

`_ZNK5yaSSL11CertManager14get_privateKeyEv`

`yaSSL::CertManager::get_privateKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087977f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087977f0  _ZNK5yaSSL11CertManager14get_privateKeyEv
#           yaSSL::CertManager::get_privateKey() const
# range [0x087977f0, 0x08797819]
087977f0 +0x00:  push   %ebp
087977f1 +0x01:  mov    %esp,%ebp
087977f3 +0x03:  push   %ebx
087977f4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
087977f9 +0x09:  add    $0xbd539f,%ebx
087977ff +0x0f:  sub    $0x14,%esp
08797802 +0x12:  mov    0x8(%ebp),%eax
08797805 +0x15:  add    $0xc,%eax
08797808 +0x18:  mov    %eax,(%esp)
0879780b +0x1b:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
08797810 +0x20:  add    $0x14,%esp
08797813 +0x23:  pop    %ebx
08797814 +0x24:  pop    %ebp
08797815 +0x25:  ret
08797816 +0x26:  lea    0x0(%esi),%esi
08797819 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::get_privateKey @ 0x87977f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::get_privateKey() const */

void __thiscall yaSSL::CertManager::get_privateKey(CertManager *this)

{
  input_buffer::get_buffer((input_buffer *)(this + 0xc));
  return;
}
```
