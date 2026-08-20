# ~CertDecoder

`_ZN8TaoCrypt11CertDecoderD0Ev`

`TaoCrypt::CertDecoder::~CertDecoder()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08754200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754200  _ZN8TaoCrypt11CertDecoderD0Ev
#           TaoCrypt::CertDecoder::~CertDecoder()
# range [0x08754200, 0x0875422a]
08754200 +0x00:  push   %ebp
08754201 +0x01:  mov    %esp,%ebp
08754203 +0x03:  push   %ebx
08754204 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
08754209 +0x09:  add    $0xc1898f,%ebx
0875420f +0x0f:  sub    $0x14,%esp
08754212 +0x12:  mov    0x8(%ebp),%eax
08754215 +0x15:  mov    %eax,(%esp)
08754218 +0x18:  call   087541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>  ; TaoCrypt::CertDecoder::~CertDecoder()
0875421d +0x1d:  add    $0x14,%esp
08754220 +0x20:  pop    %ebx
08754221 +0x21:  pop    %ebp
08754222 +0x22:  ret
08754223 +0x23:  nop
08754224 +0x24:  lea    0x0(%esi),%esi
0875422a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::~CertDecoder @ 0x8754200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::~CertDecoder() */

void __thiscall TaoCrypt::CertDecoder::~CertDecoder(CertDecoder *this)

{
  ~CertDecoder(this);
  return;
}
```
