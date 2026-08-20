# get_agreedKey

`_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv`

`yaSSL::DiffieHellman::get_agreedKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x087985c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087985c0  _ZNK5yaSSL13DiffieHellman13get_agreedKeyEv
#           yaSSL::DiffieHellman::get_agreedKey() const
# range [0x087985c0, 0x087985ce]
087985c0 +0x00:  push   %ebp
087985c1 +0x01:  mov    %esp,%ebp
087985c3 +0x03:  mov    0x8(%ebp),%eax
087985c6 +0x06:  pop    %ebp
087985c7 +0x07:  mov    (%eax),%eax
087985c9 +0x09:  mov    0x2c(%eax),%eax
087985cc +0x0c:  ret
087985cd +0x0d:  nop
087985ce +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::DiffieHellman::get_agreedKey @ 0x87985c0

/* yaSSL::DiffieHellman::get_agreedKey() const */

undefined4 __thiscall yaSSL::DiffieHellman::get_agreedKey(DiffieHellman *this)

{
  return *(undefined4 *)(*(int *)this + 0x2c);
}
```
