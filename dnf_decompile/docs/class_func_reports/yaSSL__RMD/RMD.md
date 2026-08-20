# RMD

`_ZN5yaSSL3RMDC1ERKS0_`

`yaSSL::RMD::RMD(yaSSL::RMD const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::RMD` | `0x08799e70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799e70  _ZN5yaSSL3RMDC1ERKS0_
#           yaSSL::RMD::RMD(yaSSL::RMD const&)
# range [0x08799e70, 0x08799ece]
08799e70 +0x00:  push   %ebp
08799e71 +0x01:  mov    %esp,%ebp
08799e73 +0x03:  sub    $0x28,%esp
08799e76 +0x06:  mov    %ebx,-0xc(%ebp)
08799e79 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08799e7e +0x0e:  add    $0xbd2d1a,%ebx
08799e84 +0x14:  mov    %esi,-0x8(%ebp)
08799e87 +0x17:  mov    0x8(%ebp),%esi
08799e8a +0x1a:  mov    %edi,-0x4(%ebp)
08799e8d +0x1d:  mov    -0x544(%ebx),%eax
08799e93 +0x23:  add    $0x8,%eax
08799e96 +0x26:  mov    %eax,(%esi)
08799e98 +0x28:  movb   $0x0,0x4(%esp)
08799e9d +0x2d:  movl   $0x70,(%esp)
08799ea4 +0x34:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08799ea9 +0x39:  mov    %eax,%edi
08799eab +0x3b:  mov    0xc(%ebp),%eax
08799eae +0x3e:  mov    0x4(%eax),%eax
08799eb1 +0x41:  mov    %edi,(%esp)
08799eb4 +0x44:  mov    %eax,0x4(%esp)
08799eb8 +0x48:  call   087ab530 <_ZN8TaoCrypt9RIPEMD160C1ERKS0_>  ; TaoCrypt::RIPEMD160::RIPEMD160(TaoCrypt::RIPEMD160 const&)
08799ebd +0x4d:  mov    %edi,0x4(%esi)
08799ec0 +0x50:  mov    -0xc(%ebp),%ebx
08799ec3 +0x53:  mov    -0x8(%ebp),%esi
08799ec6 +0x56:  mov    -0x4(%ebp),%edi
08799ec9 +0x59:  mov    %ebp,%esp
08799ecb +0x5b:  pop    %ebp
08799ecc +0x5c:  ret
08799ecd +0x5d:  nop
08799ece +0x5e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::RMD::RMD @ 0x8799e70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::RMD(yaSSL::RMD const&) */

void __thiscall yaSSL::RMD::RMD(RMD *this,RMD *param_1)

{
  RIPEMD160 *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c654 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::RIPEMD160::RIPEMD160(this_00,*(RIPEMD160 **)(param_1 + 4));
  *(RIPEMD160 **)(this + 4) = this_00;
  return;
}
```
