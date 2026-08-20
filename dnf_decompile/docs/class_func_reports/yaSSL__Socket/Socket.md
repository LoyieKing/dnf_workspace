# Socket

`_ZN5yaSSL6SocketC1Ei`

`yaSSL::Socket::Socket(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a14a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a14a0  _ZN5yaSSL6SocketC1Ei
#           yaSSL::Socket::Socket(int)
# range [0x087a14a0, 0x087a14b9]
087a14a0 +0x00:  push   %ebp
087a14a1 +0x01:  mov    %esp,%ebp
087a14a3 +0x03:  mov    0x8(%ebp),%eax
087a14a6 +0x06:  mov    0xc(%ebp),%edx
087a14a9 +0x09:  movb   $0x0,0x4(%eax)
087a14ad +0x0d:  mov    %edx,(%eax)
087a14af +0x0f:  movb   $0x0,0x5(%eax)
087a14b3 +0x13:  pop    %ebp
087a14b4 +0x14:  ret
087a14b5 +0x15:  nop
087a14b6 +0x16:  lea    0x0(%esi),%esi
087a14b9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Socket::Socket @ 0x87a14a0

/* yaSSL::Socket::Socket(int) */

void __thiscall yaSSL::Socket::Socket(Socket *this,int param_1)

{
  this[4] = (Socket)0x0;
  *(int *)this = param_1;
  this[5] = (Socket)0x0;
  return;
}
```
