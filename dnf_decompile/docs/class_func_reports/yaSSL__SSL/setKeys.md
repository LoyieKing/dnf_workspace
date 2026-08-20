# setKeys

`_ZN5yaSSL3SSL7setKeysEv`

`yaSSL::SSL::setKeys()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874ed80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ed80  _ZN5yaSSL3SSL7setKeysEv
#           yaSSL::SSL::setKeys()
# range [0x0874ed80, 0x0874ee6e]
0874ed80 +0x00:  push   %ebp
0874ed81 +0x01:  mov    %esp,%ebp
0874ed83 +0x03:  sub    $0x38,%esp
0874ed86 +0x06:  mov    %ebx,-0xc(%ebp)
0874ed89 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ed8e +0x0e:  add    $0xc1de0a,%ebx
0874ed94 +0x14:  mov    %edi,-0x4(%ebp)
0874ed97 +0x17:  mov    0x8(%ebp),%edi
0874ed9a +0x1a:  mov    %esi,-0x8(%ebp)
0874ed9d +0x1d:  lea    0x68(%edi),%edx
0874eda0 +0x20:  mov    %edx,(%esp)
0874eda3 +0x23:  mov    %edx,-0x1c(%ebp)
0874eda6 +0x26:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874edab +0x2b:  mov    -0x1c(%ebp),%edx
0874edae +0x2e:  mov    %edx,(%esp)
0874edb1 +0x31:  mov    %eax,%esi
0874edb3 +0x33:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874edb8 +0x38:  cmpl   $0x1,(%eax)
0874edbb +0x3b:  je     0874ee18 <+0x98>
0874edbd +0x3d:  mov    %edi,(%esp)
0874edc0 +0x40:  call   0874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>  ; yaSSL::Crypto::use_cipher()
0874edc5 +0x45:  lea    0x10c(%esi),%ecx
0874edcb +0x4b:  mov    (%eax),%edx
0874edcd +0x4d:  mov    %ecx,0x8(%esp)
0874edd1 +0x51:  lea    0xdc(%esi),%ecx
0874edd7 +0x57:  mov    %ecx,0x4(%esp)
0874eddb +0x5b:  mov    %eax,(%esp)
0874edde +0x5e:  call   *0x8(%edx)
0874ede1 +0x61:  mov    %edi,(%esp)
0874ede4 +0x64:  call   0874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>  ; yaSSL::Crypto::use_cipher()
0874ede9 +0x69:  lea    0xfc(%esi),%ecx
0874edef +0x6f:  add    $0xbc,%esi
0874edf5 +0x75:  mov    (%eax),%edx
0874edf7 +0x77:  mov    %esi,0x4(%esp)
0874edfb +0x7b:  mov    %ecx,0x8(%esp)
0874edff +0x7f:  mov    %eax,(%esp)
0874ee02 +0x82:  call   *0xc(%edx)
0874ee05 +0x85:  mov    -0xc(%ebp),%ebx
0874ee08 +0x88:  mov    -0x8(%ebp),%esi
0874ee0b +0x8b:  mov    -0x4(%ebp),%edi
0874ee0e +0x8e:  mov    %ebp,%esp
0874ee10 +0x90:  pop    %ebp
0874ee11 +0x91:  ret
0874ee12 +0x92:  lea    0x0(%esi),%esi
0874ee18 +0x98:  mov    %edi,(%esp)
0874ee1b +0x9b:  call   0874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>  ; yaSSL::Crypto::use_cipher()
0874ee20 +0xa0:  lea    0xfc(%esi),%ecx
0874ee26 +0xa6:  mov    (%eax),%edx
0874ee28 +0xa8:  mov    %ecx,0x8(%esp)
0874ee2c +0xac:  lea    0xbc(%esi),%ecx
0874ee32 +0xb2:  mov    %ecx,0x4(%esp)
0874ee36 +0xb6:  mov    %eax,(%esp)
0874ee39 +0xb9:  call   *0x8(%edx)
0874ee3c +0xbc:  mov    %edi,(%esp)
0874ee3f +0xbf:  call   0874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>  ; yaSSL::Crypto::use_cipher()
0874ee44 +0xc4:  lea    0x10c(%esi),%ecx
0874ee4a +0xca:  add    $0xdc,%esi
0874ee50 +0xd0:  mov    (%eax),%edx
0874ee52 +0xd2:  mov    %esi,0x4(%esp)
0874ee56 +0xd6:  mov    %ecx,0x8(%esp)
0874ee5a +0xda:  mov    %eax,(%esp)
0874ee5d +0xdd:  call   *0xc(%edx)
0874ee60 +0xe0:  mov    -0xc(%ebp),%ebx
0874ee63 +0xe3:  mov    -0x8(%ebp),%esi
0874ee66 +0xe6:  mov    -0x4(%ebp),%edi
0874ee69 +0xe9:  mov    %ebp,%esp
0874ee6b +0xeb:  pop    %ebp
0874ee6c +0xec:  ret
0874ee6d +0xed:  nop
0874ee6e +0xee:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SSL::setKeys @ 0x874ed80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::setKeys() */

void __thiscall yaSSL::SSL::setKeys(SSL *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  piVar2 = (int *)Security::get_parms((Security *)(this + 0x68));
  if (*piVar2 != 1) {
    piVar2 = (int *)Crypto::use_cipher((Crypto *)this);
    (**(code **)(*piVar2 + 8))(piVar2,iVar1 + 0xdc,iVar1 + 0x10c);
    piVar2 = (int *)Crypto::use_cipher((Crypto *)this);
    (**(code **)(*piVar2 + 0xc))(piVar2,iVar1 + 0xbc,iVar1 + 0xfc);
    return;
  }
  piVar2 = (int *)Crypto::use_cipher((Crypto *)this);
  (**(code **)(*piVar2 + 8))(piVar2,iVar1 + 0xbc,iVar1 + 0xfc);
  piVar2 = (int *)Crypto::use_cipher((Crypto *)this);
  (**(code **)(*piVar2 + 0xc))(piVar2,iVar1 + 0xdc,iVar1 + 0x10c);
  return;
}
```
