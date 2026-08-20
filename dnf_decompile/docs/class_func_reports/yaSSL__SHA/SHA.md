# SHA

`_ZN5yaSSL3SHAC1ERKS0_`

`yaSSL::SHA::SHA(yaSSL::SHA const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SHA` | `0x08799f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799f10  _ZN5yaSSL3SHAC1ERKS0_
#           yaSSL::SHA::SHA(yaSSL::SHA const&)
# range [0x08799f10, 0x08799f6e]
08799f10 +0x00:  push   %ebp
08799f11 +0x01:  mov    %esp,%ebp
08799f13 +0x03:  sub    $0x28,%esp
08799f16 +0x06:  mov    %ebx,-0xc(%ebp)
08799f19 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08799f1e +0x0e:  add    $0xbd2c7a,%ebx
08799f24 +0x14:  mov    %esi,-0x8(%ebp)
08799f27 +0x17:  mov    0x8(%ebp),%esi
08799f2a +0x1a:  mov    %edi,-0x4(%ebp)
08799f2d +0x1d:  mov    -0x424(%ebx),%eax
08799f33 +0x23:  add    $0x8,%eax
08799f36 +0x26:  mov    %eax,(%esi)
08799f38 +0x28:  movb   $0x0,0x4(%esp)
08799f3d +0x2d:  movl   $0x70,(%esp)
08799f44 +0x34:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08799f49 +0x39:  mov    %eax,%edi
08799f4b +0x3b:  mov    0xc(%ebp),%eax
08799f4e +0x3e:  mov    0x4(%eax),%eax
08799f51 +0x41:  mov    %edi,(%esp)
08799f54 +0x44:  mov    %eax,0x4(%esp)
08799f58 +0x48:  call   08770420 <_ZN8TaoCrypt3SHAC1ERKS0_>  ; TaoCrypt::SHA::SHA(TaoCrypt::SHA const&)
08799f5d +0x4d:  mov    %edi,0x4(%esi)
08799f60 +0x50:  mov    -0xc(%ebp),%ebx
08799f63 +0x53:  mov    -0x8(%ebp),%esi
08799f66 +0x56:  mov    -0x4(%ebp),%edi
08799f69 +0x59:  mov    %ebp,%esp
08799f6b +0x5b:  pop    %ebp
08799f6c +0x5c:  ret
08799f6d +0x5d:  nop
08799f6e +0x5e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::SHA::SHA @ 0x8799f10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::SHA(yaSSL::SHA const&) */

void __thiscall yaSSL::SHA::SHA(SHA *this,SHA *param_1)

{
  SHA *this_00;
  uint in_stack_ffffffd8;
  
  *(undefined **)this = PTR_vtable_0936c774 + 8;
  this_00 = operator_new(0x70,in_stack_ffffffd8 & 0xffffff00);
  TaoCrypt::SHA::SHA(this_00,*(SHA **)(param_1 + 4));
  *(SHA **)(this + 4) = this_00;
  return;
}
```
