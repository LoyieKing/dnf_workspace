# SetKey

`_ZN8TaoCrypt8DES_EDE36SetKeyEPKhjNS_9CipherDirE`

`TaoCrypt::DES_EDE3::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DES_EDE3` | `0x087a7c70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a7c70  _ZN8TaoCrypt8DES_EDE36SetKeyEPKhjNS_9CipherDirE
#           TaoCrypt::DES_EDE3::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
# range [0x087a7c70, 0x087a7d69]
087a7c70 +0x00:  push   %ebp
087a7c71 +0x01:  mov    %esp,%ebp
087a7c73 +0x03:  sub    $0x38,%esp
087a7c76 +0x06:  mov    %edi,-0x4(%ebp)
087a7c79 +0x09:  mov    0x14(%ebp),%edi
087a7c7c +0x0c:  mov    %ebx,-0xc(%ebp)
087a7c7f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
087a7c84 +0x14:  add    $0xbc4f14,%ebx
087a7c8a +0x1a:  mov    %esi,-0x8(%ebp)
087a7c8d +0x1d:  mov    0xc(%ebp),%esi
087a7c90 +0x20:  test   %edi,%edi
087a7c92 +0x22:  jne    087a7d10 <+0xa0>
087a7c94 +0x24:  mov    0x10(%ebp),%eax
087a7c97 +0x27:  movl   $0x0,0xc(%esp)
087a7c9f +0x2f:  mov    %esi,0x4(%esp)
087a7ca3 +0x33:  mov    %eax,0x8(%esp)
087a7ca7 +0x37:  mov    0x8(%ebp),%eax
087a7caa +0x3a:  add    $0x38,%eax
087a7cad +0x3d:  mov    %eax,(%esp)
087a7cb0 +0x40:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087a7cb5 +0x45:  lea    0x8(%esi),%eax
087a7cb8 +0x48:  mov    0x10(%ebp),%edx
087a7cbb +0x4b:  mov    %eax,0x4(%esp)
087a7cbf +0x4f:  mov    0x8(%ebp),%eax
087a7cc2 +0x52:  movl   $0x1,0xc(%esp)
087a7cca +0x5a:  mov    %edx,0x8(%esp)
087a7cce +0x5e:  add    $0xb8,%eax
087a7cd3 +0x63:  mov    %eax,(%esp)
087a7cd6 +0x66:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087a7cdb +0x6b:  lea    0x10(%esi),%eax
087a7cde +0x6e:  mov    %eax,0x4(%esp)
087a7ce2 +0x72:  mov    0x8(%ebp),%eax
087a7ce5 +0x75:  mov    0x10(%ebp),%edx
087a7ce8 +0x78:  mov    %edi,0xc(%esp)
087a7cec +0x7c:  add    $0x138,%eax
087a7cf1 +0x81:  mov    %edx,0x8(%esp)
087a7cf5 +0x85:  mov    %eax,(%esp)
087a7cf8 +0x88:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087a7cfd +0x8d:  mov    -0xc(%ebp),%ebx
087a7d00 +0x90:  mov    -0x8(%ebp),%esi
087a7d03 +0x93:  mov    -0x4(%ebp),%edi
087a7d06 +0x96:  mov    %ebp,%esp
087a7d08 +0x98:  pop    %ebp
087a7d09 +0x99:  ret
087a7d0a +0x9a:  lea    0x0(%esi),%esi
087a7d10 +0xa0:  mov    0x10(%ebp),%edx
087a7d13 +0xa3:  lea    0x10(%esi),%eax
087a7d16 +0xa6:  mov    %eax,0x4(%esp)
087a7d1a +0xaa:  mov    %eax,-0x1c(%ebp)
087a7d1d +0xad:  mov    %edi,0xc(%esp)
087a7d21 +0xb1:  mov    %edx,0x8(%esp)
087a7d25 +0xb5:  mov    0x8(%ebp),%edx
087a7d28 +0xb8:  add    $0x38,%edx
087a7d2b +0xbb:  mov    %edx,(%esp)
087a7d2e +0xbe:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087a7d33 +0xc3:  mov    0x10(%ebp),%edx
087a7d36 +0xc6:  movl   $0x0,0xc(%esp)
087a7d3e +0xce:  mov    %edx,0x8(%esp)
087a7d42 +0xd2:  lea    0x8(%esi),%edx
087a7d45 +0xd5:  mov    %edx,0x4(%esp)
087a7d49 +0xd9:  mov    0x8(%ebp),%edx
087a7d4c +0xdc:  add    $0xb8,%edx
087a7d52 +0xe2:  mov    %edx,(%esp)
087a7d55 +0xe5:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087a7d5a +0xea:  mov    -0x1c(%ebp),%eax
087a7d5d +0xed:  cmp    $0x1,%edi
087a7d60 +0xf0:  cmove  %esi,%eax
087a7d63 +0xf3:  jmp    087a7cde <+0x6e>
087a7d68 +0xf8:  nop
087a7d69 +0xf9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DES_EDE3::SetKey @ 0x87a7c70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DES_EDE3::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir) */

void __thiscall
TaoCrypt::DES_EDE3::SetKey(DES_EDE3 *this,int param_1,undefined4 param_2,int param_4)

{
  int iVar1;
  
  if (param_4 == 0) {
    BasicDES::SetKey((BasicDES *)(this + 0x38),param_1,param_2,0);
    BasicDES::SetKey((BasicDES *)(this + 0xb8),param_1 + 8,param_2,1);
    iVar1 = param_1 + 0x10;
  }
  else {
    BasicDES::SetKey((BasicDES *)(this + 0x38),param_1 + 0x10,param_2,param_4);
    BasicDES::SetKey((BasicDES *)(this + 0xb8),param_1 + 8,param_2,0);
    iVar1 = param_1 + 0x10;
    if (param_4 == 1) {
      iVar1 = param_1;
    }
  }
  BasicDES::SetKey((BasicDES *)(this + 0x138),iVar1,param_2,param_4);
  return;
}
```
