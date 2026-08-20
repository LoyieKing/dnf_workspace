# set_current

`_ZN5yaSSL13output_buffer11set_currentEj`

`yaSSL::output_buffer::set_current(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08796ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796ee0  _ZN5yaSSL13output_buffer11set_currentEj
#           yaSSL::output_buffer::set_current(unsigned int)
# range [0x08796ee0, 0x08796f29]
08796ee0 +0x00:  push   %ebp
08796ee1 +0x01:  mov    %esp,%ebp
08796ee3 +0x03:  sub    $0x28,%esp
08796ee6 +0x06:  mov    %ebx,-0xc(%ebp)
08796ee9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08796eee +0x0e:  add    $0xbd5caa,%ebx
08796ef4 +0x14:  mov    %esi,-0x8(%ebp)
08796ef7 +0x17:  mov    0x8(%ebp),%esi
08796efa +0x1a:  mov    %edi,-0x4(%ebp)
08796efd +0x1d:  mov    0xc(%ebp),%edi
08796f00 +0x20:  mov    %esi,(%esp)
08796f03 +0x23:  call   08796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>  ; yaSSL::output_buffer::get_capacity() const
08796f08 +0x28:  mov    %edi,0x4(%esp)
08796f0c +0x2c:  mov    %esi,(%esp)
08796f0f +0x2f:  mov    %eax,0x8(%esp)
08796f13 +0x33:  call   08796ce0 <_ZN5yaSSL5Check5checkEjj>  ; yaSSL::Check::check(unsigned int, unsigned int)
08796f18 +0x38:  mov    %edi,(%esi)
08796f1a +0x3a:  mov    -0xc(%ebp),%ebx
08796f1d +0x3d:  mov    -0x8(%ebp),%esi
08796f20 +0x40:  mov    -0x4(%ebp),%edi
08796f23 +0x43:  mov    %ebp,%esp
08796f25 +0x45:  pop    %ebp
08796f26 +0x46:  ret
08796f27 +0x47:  nop
08796f28 +0x48:  nop
08796f29 +0x49:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::output_buffer::set_current @ 0x8796ee0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::set_current(unsigned int) */

void __thiscall yaSSL::output_buffer::set_current(output_buffer *this,uint param_1)

{
  get_capacity(this);
  Check::check((uint)this,param_1);
  *(uint *)this = param_1;
  return;
}
```
