# set_encryptKey

`_ZN5yaSSL3AES14set_encryptKeyEPKhS2_`

`yaSSL::AES::set_encryptKey(unsigned char const*, unsigned char const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::AES` | `0x08799190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799190  _ZN5yaSSL3AES14set_encryptKeyEPKhS2_
#           yaSSL::AES::set_encryptKey(unsigned char const*, unsigned char const*)
# range [0x08799190, 0x087991fc]
08799190 +0x00:  push   %ebp
08799191 +0x01:  mov    %esp,%ebp
08799193 +0x03:  sub    $0x28,%esp
08799196 +0x06:  mov    0x8(%ebp),%eax
08799199 +0x09:  mov    %ebx,-0xc(%ebp)
0879919c +0x0c:  mov    %esi,-0x8(%ebp)
0879919f +0x0f:  mov    0x10(%ebp),%esi
087991a2 +0x12:  mov    %edi,-0x4(%ebp)
087991a5 +0x15:  mov    0x4(%eax),%edi
087991a8 +0x18:  movl   $0x0,0xc(%esp)
087991b0 +0x20:  call   08722df8 <__i686.get_pc_thunk.bx>
087991b5 +0x25:  add    $0xbd39e3,%ebx
087991bb +0x2b:  mov    0x258(%edi),%eax
087991c1 +0x31:  mov    %edi,(%esp)
087991c4 +0x34:  mov    %eax,0x8(%esp)
087991c8 +0x38:  mov    0xc(%ebp),%eax
087991cb +0x3b:  mov    %eax,0x4(%esp)
087991cf +0x3f:  call   087a1d50 <_ZN8TaoCrypt3AES6SetKeyEPKhjNS_9CipherDirE>  ; TaoCrypt::AES::SetKey(unsigned char const*, unsigned int, TaoCrypt::CipherDir)
087991d4 +0x44:  mov    (%esi),%edx
087991d6 +0x46:  lea    0x10(%edi),%eax
087991d9 +0x49:  mov    %edx,0x10(%edi)
087991dc +0x4c:  mov    0x4(%esi),%edx
087991df +0x4f:  mov    %edx,0x4(%eax)
087991e2 +0x52:  mov    0x8(%esi),%edx
087991e5 +0x55:  mov    %edx,0x8(%eax)
087991e8 +0x58:  mov    0xc(%esi),%edx
087991eb +0x5b:  mov    %edx,0xc(%eax)
087991ee +0x5e:  mov    -0xc(%ebp),%ebx
087991f1 +0x61:  mov    -0x8(%ebp),%esi
087991f4 +0x64:  mov    -0x4(%ebp),%edi
087991f7 +0x67:  mov    %ebp,%esp
087991f9 +0x69:  pop    %ebp
087991fa +0x6a:  ret
087991fb +0x6b:  nop
087991fc +0x6c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::AES::set_encryptKey @ 0x8799190

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::set_encryptKey(unsigned char const*, unsigned char const*) */

void __thiscall yaSSL::AES::set_encryptKey(AES *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  TaoCrypt::AES::SetKey(iVar1,param_1,*(undefined4 *)(iVar1 + 600),0);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)param_2;
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 0xc);
  return;
}
```
