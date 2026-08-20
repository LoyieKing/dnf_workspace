# SSL_METHOD

`_ZN5yaSSL10SSL_METHODC1ENS_13ConnectionEndENS_15ProtocolVersionEb`

`yaSSL::SSL_METHOD::SSL_METHOD(yaSSL::ConnectionEnd, yaSSL::ProtocolVersion, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_METHOD` | `0x0874e390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e390  _ZN5yaSSL10SSL_METHODC1ENS_13ConnectionEndENS_15ProtocolVersionEb
#           yaSSL::SSL_METHOD::SSL_METHOD(yaSSL::ConnectionEnd, yaSSL::ProtocolVersion, bool)
# range [0x0874e390, 0x0874e3b9]
0874e390 +0x00:  push   %ebp
0874e391 +0x01:  mov    %esp,%ebp
0874e393 +0x03:  movzwl 0x10(%ebp),%edx
0874e397 +0x07:  mov    0x8(%ebp),%eax
0874e39a +0x0a:  mov    %dx,(%eax)
0874e39d +0x0d:  mov    0xc(%ebp),%edx
0874e3a0 +0x10:  movb   $0x0,0x8(%eax)
0874e3a4 +0x14:  movb   $0x0,0x9(%eax)
0874e3a8 +0x18:  movb   $0x0,0xa(%eax)
0874e3ac +0x1c:  mov    %edx,0x4(%eax)
0874e3af +0x1f:  mov    0x14(%ebp),%edx
0874e3b2 +0x22:  mov    %dl,0xb(%eax)
0874e3b5 +0x25:  pop    %ebp
0874e3b6 +0x26:  ret
0874e3b7 +0x27:  nop
0874e3b8 +0x28:  nop
0874e3b9 +0x29:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_METHOD::SSL_METHOD @ 0x874e390

/* yaSSL::SSL_METHOD::SSL_METHOD(yaSSL::ConnectionEnd, yaSSL::ProtocolVersion, bool) */

void __thiscall
yaSSL::SSL_METHOD::SSL_METHOD
          (SSL_METHOD *this,undefined4 param_2,undefined2 param_3,SSL_METHOD param_4)

{
  *(undefined2 *)this = param_3;
  this[8] = (SSL_METHOD)0x0;
  this[9] = (SSL_METHOD)0x0;
  this[10] = (SSL_METHOD)0x0;
  *(undefined4 *)(this + 4) = param_2;
  this[0xb] = param_4;
  return;
}
```
