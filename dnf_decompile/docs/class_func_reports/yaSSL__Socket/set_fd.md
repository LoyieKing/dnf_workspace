# set_fd

`_ZN5yaSSL6Socket6set_fdEi`

`yaSSL::Socket::set_fd(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a14c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a14c0  _ZN5yaSSL6Socket6set_fdEi
#           yaSSL::Socket::set_fd(int)
# range [0x087a14c0, 0x087a14ce]
087a14c0 +0x00:  push   %ebp
087a14c1 +0x01:  mov    %esp,%ebp
087a14c3 +0x03:  mov    0xc(%ebp),%edx
087a14c6 +0x06:  mov    0x8(%ebp),%eax
087a14c9 +0x09:  mov    %edx,(%eax)
087a14cb +0x0b:  pop    %ebp
087a14cc +0x0c:  ret
087a14cd +0x0d:  nop
087a14ce +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Socket::set_fd @ 0x87a14c0

/* yaSSL::Socket::set_fd(int) */

void __thiscall yaSSL::Socket::set_fd(Socket *this,int param_1)

{
  *(int *)this = param_1;
  return;
}
```
