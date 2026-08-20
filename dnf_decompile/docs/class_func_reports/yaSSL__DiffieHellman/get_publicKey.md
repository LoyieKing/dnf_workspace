# get_publicKey

`_ZNK5yaSSL13DiffieHellman13get_publicKeyEv`

`yaSSL::DiffieHellman::get_publicKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x087985d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087985d0  _ZNK5yaSSL13DiffieHellman13get_publicKeyEv
#           yaSSL::DiffieHellman::get_publicKey() const
# range [0x087985d0, 0x087985de]
087985d0 +0x00:  push   %ebp
087985d1 +0x01:  mov    %esp,%ebp
087985d3 +0x03:  mov    0x8(%ebp),%eax
087985d6 +0x06:  pop    %ebp
087985d7 +0x07:  mov    (%eax),%eax
087985d9 +0x09:  mov    0x24(%eax),%eax
087985dc +0x0c:  ret
087985dd +0x0d:  nop
087985de +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::DiffieHellman::get_publicKey @ 0x87985d0

/* yaSSL::DiffieHellman::get_publicKey() const */

undefined4 __thiscall yaSSL::DiffieHellman::get_publicKey(DiffieHellman *this)

{
  return *(undefined4 *)(*(int *)this + 0x24);
}
```
