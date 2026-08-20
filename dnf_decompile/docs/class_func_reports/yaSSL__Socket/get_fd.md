# get_fd

`_ZNK5yaSSL6Socket6get_fdEv`

`yaSSL::Socket::get_fd() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a14d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a14d0  _ZNK5yaSSL6Socket6get_fdEv
#           yaSSL::Socket::get_fd() const
# range [0x087a14d0, 0x087a14da]
087a14d0 +0x00:  push   %ebp
087a14d1 +0x01:  mov    %esp,%ebp
087a14d3 +0x03:  mov    0x8(%ebp),%eax
087a14d6 +0x06:  pop    %ebp
087a14d7 +0x07:  mov    (%eax),%eax
087a14d9 +0x09:  ret
087a14da +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Socket::get_fd @ 0x87a14d0

/* yaSSL::Socket::get_fd() const */

undefined4 __thiscall yaSSL::Socket::get_fd(Socket *this)

{
  return *(undefined4 *)this;
}
```
