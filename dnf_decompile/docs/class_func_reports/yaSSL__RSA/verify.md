# verify

`_ZN5yaSSL3RSA6verifyEPKhjS2_j`

`yaSSL::RSA::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA` | `0x0879a7d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a7d0  _ZN5yaSSL3RSA6verifyEPKhjS2_j
#           yaSSL::RSA::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int)
# range [0x0879a7d0, 0x0879a819]
0879a7d0 +0x00:  push   %ebp
0879a7d1 +0x01:  mov    %esp,%ebp
0879a7d3 +0x03:  push   %ebx
0879a7d4 +0x04:  sub    $0x24,%esp
0879a7d7 +0x07:  mov    0x8(%ebp),%eax
0879a7da +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a7df +0x0f:  add    $0xbd23b9,%ebx
0879a7e5 +0x15:  mov    0x4(%eax),%eax
0879a7e8 +0x18:  mov    %eax,-0x10(%ebp)
0879a7eb +0x1b:  mov    0x14(%ebp),%eax
0879a7ee +0x1e:  mov    %eax,0xc(%esp)
0879a7f2 +0x22:  mov    0x10(%ebp),%eax
0879a7f5 +0x25:  mov    %eax,0x8(%esp)
0879a7f9 +0x29:  mov    0xc(%ebp),%eax
0879a7fc +0x2c:  mov    %eax,0x4(%esp)
0879a800 +0x30:  lea    -0x10(%ebp),%eax
0879a803 +0x33:  mov    %eax,(%esp)
0879a806 +0x36:  call   08756b10 <_ZN8TaoCrypt11CertDecoder21ValidateSelfSignatureEv+0x370>  ; TaoCrypt::CertDecoder::ValidateSelfSignature()+0x370
0879a80b +0x3b:  add    $0x24,%esp
0879a80e +0x3e:  pop    %ebx
0879a80f +0x3f:  pop    %ebp
0879a810 +0x40:  ret
0879a811 +0x41:  nop
0879a812 +0x42:  lea    0x0(%esi,%eiz,1),%esi
0879a819 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::RSA::verify @ 0x879a7d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::verify(unsigned char const*, unsigned int, unsigned char const*, unsigned int) */

void yaSSL::RSA::verify(uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  undefined4 local_14 [3];
  
  local_14[0] = *(undefined4 *)(param_1 + 4);
  TaoCrypt::RSA_Encryptor<TaoCrypt::RSA_BlockType2>::SSL_Verify
            ((RSA_Encryptor<TaoCrypt::RSA_BlockType2> *)local_14,(uchar *)param_2,(uint)param_3,
             (uchar *)param_4);
  return;
}
```
