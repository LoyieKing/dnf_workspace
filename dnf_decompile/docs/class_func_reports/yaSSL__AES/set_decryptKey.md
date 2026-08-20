# set_decryptKey

`_ZN5yaSSL3AES14set_decryptKeyEPKhS2_`

`yaSSL::AES::set_decryptKey(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::AES` | `0x08799110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799110  _ZN5yaSSL3AES14set_decryptKeyEPKhS2_
#           yaSSL::AES::set_decryptKey(unsigned char const*, unsigned char const*)
# range [0x08799110, 0x08799189]
08799110 +0x00:  push   %ebp
08799111 +0x01:  mov    %esp,%ebp
08799113 +0x03:  sub    $0x28,%esp
08799116 +0x06:  mov    0x8(%ebp),%eax
08799119 +0x09:  mov    %ebx,-0xc(%ebp)
0879911c +0x0c:  mov    %esi,-0x8(%ebp)
0879911f +0x0f:  mov    0x10(%ebp),%esi
08799122 +0x12:  mov    %edi,-0x4(%ebp)
08799125 +0x15:  mov    0x4(%eax),%edi
08799128 +0x18:  movl   $0x1,0xc(%esp)
08799130 +0x20:  call   08722df8 <__i686.get_pc_thunk.bx>
08799135 +0x25:  add    $0xbd3a63,%ebx
0879913b +0x2b:  mov    0x258(%edi),%eax
08799141 +0x31:  mov    %eax,0x8(%esp)
08799145 +0x35:  mov    0xc(%ebp),%eax
08799148 +0x38:  mov    %eax,0x4(%esp)
0879914c +0x3c:  lea    0x12c(%edi),%eax
08799152 +0x42:  mov    %eax,(%esp)
08799155 +0x45:  call   087a1d50 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::AES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
0879915a +0x4a:  mov    (%esi),%edx
0879915c +0x4c:  lea    0x13c(%edi),%eax
08799162 +0x52:  mov    %edx,0x13c(%edi)
08799168 +0x58:  mov    0x4(%esi),%edx
0879916b +0x5b:  mov    %edx,0x4(%eax)
0879916e +0x5e:  mov    0x8(%esi),%edx
08799171 +0x61:  mov    %edx,0x8(%eax)
08799174 +0x64:  mov    0xc(%esi),%edx
08799177 +0x67:  mov    %edx,0xc(%eax)
0879917a +0x6a:  mov    -0xc(%ebp),%ebx
0879917d +0x6d:  mov    -0x8(%ebp),%esi
08799180 +0x70:  mov    -0x4(%ebp),%edi
08799183 +0x73:  mov    %ebp,%esp
08799185 +0x75:  pop    %ebp
08799186 +0x76:  ret
08799187 +0x77:  nop
08799188 +0x78:  nop
08799189 +0x79:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::AES::set_decryptKey @ 0x8799110

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::set_decryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::AES::set_decryptKey(AES *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::AES::SetKey(iVar1 + 300,param_1,*(undefined4 *)(iVar1 + 600),1);
  *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)param_2;
  *(undefined4 *)(iVar1 + 0x140) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar1 + 0x144) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar1 + 0x148) = *(undefined4 *)(param_2 + 0xc);
  return;
}
```
