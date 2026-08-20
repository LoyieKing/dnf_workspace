# set_encryptKey

`_ZN5yaSSL7DES_EDE14set_encryptKeyEPKhS2_`

`yaSSL::DES_EDE::set_encryptKey(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::DES_EDE` | `0x087993f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087993f0  _ZN5yaSSL7DES_EDE14set_encryptKeyEPKhS2_
#           yaSSL::DES_EDE::set_encryptKey(unsigned char const*, unsigned char const*)
# range [0x087993f0, 0x0879944a]
087993f0 +0x00:  push   %ebp
087993f1 +0x01:  mov    %esp,%ebp
087993f3 +0x03:  sub    $0x28,%esp
087993f6 +0x06:  mov    0x8(%ebp),%eax
087993f9 +0x09:  mov    %ebx,-0xc(%ebp)
087993fc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08799401 +0x11:  add    $0xbd3797,%ebx
08799407 +0x17:  mov    %edi,-0x4(%ebp)
0879940a +0x1a:  mov    0x10(%ebp),%edi
0879940d +0x1d:  mov    %esi,-0x8(%ebp)
08799410 +0x20:  mov    0x4(%eax),%esi
08799413 +0x23:  mov    0xc(%ebp),%eax
08799416 +0x26:  movl   $0x0,0xc(%esp)
0879941e +0x2e:  movl   $0x18,0x8(%esp)
08799426 +0x36:  mov    %esi,(%esp)
08799429 +0x39:  mov    %eax,0x4(%esp)
0879942d +0x3d:  call   087a7c70 <_ZN8TaoCrypt8DES_EDE36SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::DES_EDE3::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
08799432 +0x42:  mov    (%edi),%eax
08799434 +0x44:  mov    %eax,0x10(%esi)
08799437 +0x47:  mov    0x4(%edi),%eax
0879943a +0x4a:  mov    %eax,0x14(%esi)
0879943d +0x4d:  mov    -0xc(%ebp),%ebx
08799440 +0x50:  mov    -0x8(%ebp),%esi
08799443 +0x53:  mov    -0x4(%ebp),%edi
08799446 +0x56:  mov    %ebp,%esp
08799448 +0x58:  pop    %ebp
08799449 +0x59:  ret
0879944a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DES_EDE::set_encryptKey @ 0x87993f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::set_encryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::DES_EDE::set_encryptKey(DES_EDE *this,uchar *param_1,uchar *param_2)

{
  DES_EDE3 *pDVar1;
  
  pDVar1 = *(DES_EDE3 **)(this + 4);
  TaoCrypt::DES_EDE3::SetKey(pDVar1,param_1,0x18,0);
  *(undefined4 *)(pDVar1 + 0x10) = *(undefined4 *)param_2;
  *(undefined4 *)(pDVar1 + 0x14) = *(undefined4 *)(param_2 + 4);
  return;
}
```
