# get_peerKey

`_ZNK5yaSSL11CertManager11get_peerKeyEv`

`yaSSL::CertManager::get_peerKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797820  _ZNK5yaSSL11CertManager11get_peerKeyEv
#           yaSSL::CertManager::get_peerKey() const
# range [0x08797820, 0x08797849]
08797820 +0x00:  push   %ebp
08797821 +0x01:  mov    %esp,%ebp
08797823 +0x03:  push   %ebx
08797824 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08797829 +0x09:  add    $0xbd536f,%ebx
0879782f +0x0f:  sub    $0x14,%esp
08797832 +0x12:  mov    0x8(%ebp),%eax
08797835 +0x15:  add    $0x28,%eax
08797838 +0x18:  mov    %eax,(%esp)
0879783b +0x1b:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
08797840 +0x20:  add    $0x14,%esp
08797843 +0x23:  pop    %ebx
08797844 +0x24:  pop    %ebp
08797845 +0x25:  ret
08797846 +0x26:  lea    0x0(%esi),%esi
08797849 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::get_peerKey @ 0x8797820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::get_peerKey() const */

void __thiscall yaSSL::CertManager::get_peerKey(CertManager *this)

{
  input_buffer::get_buffer((input_buffer *)(this + 0x28));
  return;
}
```
