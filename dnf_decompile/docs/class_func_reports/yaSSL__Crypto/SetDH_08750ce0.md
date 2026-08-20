# SetDH

`_ZN5yaSSL6Crypto5SetDHERKNS_8DH_ParmsE`

`yaSSL::Crypto::SetDH(yaSSL::DH_Parms const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x08750ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750ce0  _ZN5yaSSL6Crypto5SetDHERKNS_8DH_ParmsE
#           yaSSL::Crypto::SetDH(yaSSL::DH_Parms const&)
# range [0x08750ce0, 0x08750d49]
08750ce0 +0x00:  push   %ebp
08750ce1 +0x01:  mov    %esp,%ebp
08750ce3 +0x03:  sub    $0x38,%esp
08750ce6 +0x06:  mov    %esi,-0x8(%ebp)
08750ce9 +0x09:  mov    0xc(%ebp),%esi
08750cec +0x0c:  mov    %ebx,-0xc(%ebp)
08750cef +0x0f:  mov    %edi,-0x4(%ebp)
08750cf2 +0x12:  mov    0x8(%ebp),%edi
08750cf5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
08750cfa +0x1a:  add    $0xc1be9e,%ebx
08750d00 +0x20:  cmpb   $0x0,0x8(%esi)
08750d04 +0x24:  je     08750d3a <+0x5a>
08750d06 +0x26:  movb   $0x0,0x4(%esp)
08750d0b +0x2b:  movl   $0x4,(%esp)
08750d12 +0x32:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08750d17 +0x37:  lea    0xc(%edi),%edx
08750d1a +0x3a:  mov    %edx,0xc(%esp)
08750d1e +0x3e:  lea    0x4(%esi),%edx
08750d21 +0x41:  mov    %edx,0x8(%esp)
08750d25 +0x45:  mov    %esi,0x4(%esp)
08750d29 +0x49:  mov    %eax,(%esp)
08750d2c +0x4c:  mov    %eax,-0x1c(%ebp)
08750d2f +0x4f:  call   0879a010 <_ZN5yaSSL13DiffieHellmanC1ERKNS_7IntegerES3_RKNS_10RandomPoolE>  ; yaSSL::DiffieHellman::DiffieHellman(yaSSL::Integer const&, yaSSL::Integer const&, yaSSL::RandomPool const&)
08750d34 +0x54:  mov    -0x1c(%ebp),%eax
08750d37 +0x57:  mov    %eax,0x8(%edi)
08750d3a +0x5a:  mov    -0xc(%ebp),%ebx
08750d3d +0x5d:  mov    -0x8(%ebp),%esi
08750d40 +0x60:  mov    -0x4(%ebp),%edi
08750d43 +0x63:  mov    %ebp,%esp
08750d45 +0x65:  pop    %ebp
08750d46 +0x66:  ret
08750d47 +0x67:  nop
08750d48 +0x68:  nop
08750d49 +0x69:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::SetDH @ 0x8750ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Crypto::SetDH(yaSSL::DH_Parms const&) */

void __thiscall yaSSL::Crypto::SetDH(Crypto *this,DH_Parms *param_1)

{
  DiffieHellman *this_00;
  uint in_stack_ffffffc8;
  
  if (param_1[8] != (DH_Parms)0x0) {
    this_00 = operator_new(4,in_stack_ffffffc8 & 0xffffff00);
    DiffieHellman::DiffieHellman
              (this_00,(Integer *)param_1,(Integer *)(param_1 + 4),(RandomPool *)(this + 0xc));
    *(DiffieHellman **)(this + 8) = this_00;
  }
  return;
}
```
