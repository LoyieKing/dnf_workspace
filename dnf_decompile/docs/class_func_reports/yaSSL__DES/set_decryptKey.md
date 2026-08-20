# set_decryptKey

`_ZN5yaSSL3DES14set_decryptKeyEPKhS2_`

`yaSSL::DES::set_decryptKey(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::DES` | `0x08799450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799450  _ZN5yaSSL3DES14set_decryptKeyEPKhS2_
#           yaSSL::DES::set_decryptKey(unsigned char const*, unsigned char const*)
# range [0x08799450, 0x087994bc]
08799450 +0x00:  push   %ebp
08799451 +0x01:  mov    %esp,%ebp
08799453 +0x03:  sub    $0x18,%esp
08799456 +0x06:  mov    0x8(%ebp),%eax
08799459 +0x09:  mov    %ebx,-0x8(%ebp)
0879945c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08799461 +0x11:  add    $0xbd3737,%ebx
08799467 +0x17:  mov    %esi,-0x4(%ebp)
0879946a +0x1a:  mov    0x4(%eax),%esi
0879946d +0x1d:  mov    0xc(%ebp),%eax
08799470 +0x20:  movl   $0x1,0xc(%esp)
08799478 +0x28:  movl   $0x8,0x8(%esp)
08799480 +0x30:  mov    %eax,0x4(%esp)
08799484 +0x34:  lea    0xf0(%esi),%eax
0879948a +0x3a:  mov    %eax,(%esp)
0879948d +0x3d:  call   087a7a10 <_ZN8TaoCrypt8BasicDES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::BasicDES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
08799492 +0x42:  mov    0xbc(%esi),%edx
08799498 +0x48:  mov    0xc0(%esi),%eax
0879949e +0x4e:  mov    %edx,0x8(%esp)
087994a2 +0x52:  mov    0x10(%ebp),%edx
087994a5 +0x55:  mov    %eax,(%esp)
087994a8 +0x58:  mov    %edx,0x4(%esp)
087994ac +0x5c:  call   0807d8a0 <_init+0x198>
087994b1 +0x61:  mov    -0x8(%ebp),%ebx
087994b4 +0x64:  mov    -0x4(%ebp),%esi
087994b7 +0x67:  mov    %ebp,%esp
087994b9 +0x69:  pop    %ebp
087994ba +0x6a:  ret
087994bb +0x6b:  nop
087994bc +0x6c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::DES::set_decryptKey @ 0x8799450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::set_decryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::DES::set_decryptKey(DES *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::BasicDES::SetKey((BasicDES *)(iVar1 + 0xf0),param_1,8,1);
  memcpy(*(void **)(iVar1 + 0xc0),param_2,*(size_t *)(iVar1 + 0xbc));
  return;
}
```
