# get_macSecret

`_ZN5yaSSL3SSL13get_macSecretEb`

`yaSSL::SSL::get_macSecret(bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874ec50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ec50  _ZN5yaSSL3SSL13get_macSecretEb
#           yaSSL::SSL::get_macSecret(bool)
# range [0x0874ec50, 0x0874ecd9]
0874ec50 +0x00:  push   %ebp
0874ec51 +0x01:  mov    %esp,%ebp
0874ec53 +0x03:  sub    $0x28,%esp
0874ec56 +0x06:  mov    %ebx,-0xc(%ebp)
0874ec59 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ec5e +0x0e:  add    $0xc1df3a,%ebx
0874ec64 +0x14:  mov    %esi,-0x8(%ebp)
0874ec67 +0x17:  mov    0x8(%ebp),%esi
0874ec6a +0x1a:  mov    %edi,-0x4(%ebp)
0874ec6d +0x1d:  movzbl 0xc(%ebp),%edi
0874ec71 +0x21:  add    $0x68,%esi
0874ec74 +0x24:  mov    %esi,(%esp)
0874ec77 +0x27:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874ec7c +0x2c:  cmpl   $0x1,(%eax)
0874ec7f +0x2f:  je     0874ecb8 <+0x68>
0874ec81 +0x31:  mov    %esi,(%esp)
0874ec84 +0x34:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874ec89 +0x39:  mov    (%eax),%eax
0874ec8b +0x3b:  test   %eax,%eax
0874ec8d +0x3d:  je     0874ecb0 <+0x60>
0874ec8f +0x3f:  mov    %esi,(%esp)
0874ec92 +0x42:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874ec97 +0x47:  mov    -0xc(%ebp),%ebx
0874ec9a +0x4a:  mov    -0x8(%ebp),%esi
0874ec9d +0x4d:  mov    -0x4(%ebp),%edi
0874eca0 +0x50:  mov    %ebp,%esp
0874eca2 +0x52:  pop    %ebp
0874eca3 +0x53:  add    $0xa8,%eax
0874eca8 +0x58:  ret
0874eca9 +0x59:  lea    0x0(%esi,%eiz,1),%esi
0874ecb0 +0x60:  mov    %edi,%eax
0874ecb2 +0x62:  test   %al,%al
0874ecb4 +0x64:  je     0874ec8f <+0x3f>
0874ecb6 +0x66:  jmp    0874ecbe <+0x6e>
0874ecb8 +0x68:  mov    %edi,%eax
0874ecba +0x6a:  test   %al,%al
0874ecbc +0x6c:  jne    0874ec81 <+0x31>
0874ecbe +0x6e:  mov    %esi,(%esp)
0874ecc1 +0x71:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874ecc6 +0x76:  mov    -0xc(%ebp),%ebx
0874ecc9 +0x79:  mov    -0x8(%ebp),%esi
0874eccc +0x7c:  mov    -0x4(%ebp),%edi
0874eccf +0x7f:  mov    %ebp,%esp
0874ecd1 +0x81:  pop    %ebp
0874ecd2 +0x82:  add    $0x94,%eax
0874ecd7 +0x87:  ret
0874ecd8 +0x88:  nop
0874ecd9 +0x89:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::get_macSecret @ 0x874ec50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::get_macSecret(bool) */

int __thiscall yaSSL::SSL::get_macSecret(SSL *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  Security *this_00;
  
  this_00 = (Security *)(this + 0x68);
  piVar1 = (int *)Security::get_parms(this_00);
  if (((*piVar1 != 1) || (param_1)) &&
     ((piVar1 = (int *)Security::get_parms(this_00), *piVar1 != 0 || (!param_1)))) {
    iVar2 = Security::get_connection(this_00);
    return iVar2 + 0xa8;
  }
  iVar2 = Security::get_connection(this_00);
  return iVar2 + 0x94;
}
```
