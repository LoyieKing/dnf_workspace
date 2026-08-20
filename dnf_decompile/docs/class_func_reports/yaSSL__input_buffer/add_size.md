# add_size

`_ZN5yaSSL12input_buffer8add_sizeEj`

`yaSSL::input_buffer::add_size(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796d50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796d50  _ZN5yaSSL12input_buffer8add_sizeEj
#           yaSSL::input_buffer::add_size(unsigned int)
# range [0x08796d50, 0x08796d9e]
08796d50 +0x00:  push   %ebp
08796d51 +0x01:  mov    %esp,%ebp
08796d53 +0x03:  sub    $0x28,%esp
08796d56 +0x06:  mov    %ebx,-0xc(%ebp)
08796d59 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08796d5e +0x0e:  add    $0xbd5e3a,%ebx
08796d64 +0x14:  mov    %esi,-0x8(%ebp)
08796d67 +0x17:  mov    0x8(%ebp),%esi
08796d6a +0x1a:  mov    %edi,-0x4(%ebp)
08796d6d +0x1d:  mov    0xc(%ebp),%edi
08796d70 +0x20:  mov    %esi,(%esp)
08796d73 +0x23:  call   08796d40 <_ZNK5yaSSL12input_buffer12get_capacityEv>  ; yaSSL::input_buffer::get_capacity() const
08796d78 +0x28:  mov    %eax,0x8(%esp)
08796d7c +0x2c:  mov    (%esi),%eax
08796d7e +0x2e:  mov    %esi,(%esp)
08796d81 +0x31:  lea    -0x1(%edi,%eax,1),%eax
08796d85 +0x35:  mov    %eax,0x4(%esp)
08796d89 +0x39:  call   08796ce0 <_ZN5yaSSL5Check5checkEjj>  ; yaSSL::Check::check(unsigned int, unsigned int)
08796d8e +0x3e:  add    %edi,(%esi)
08796d90 +0x40:  mov    -0xc(%ebp),%ebx
08796d93 +0x43:  mov    -0x8(%ebp),%esi
08796d96 +0x46:  mov    -0x4(%ebp),%edi
08796d99 +0x49:  mov    %ebp,%esp
08796d9b +0x4b:  pop    %ebp
08796d9c +0x4c:  ret
08796d9d +0x4d:  nop
08796d9e +0x4e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::input_buffer::add_size @ 0x8796d50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::add_size(unsigned int) */

void __thiscall yaSSL::input_buffer::add_size(input_buffer *this,uint param_1)

{
  get_capacity(this);
  Check::check((uint)this,(param_1 - 1) + *(int *)this);
  *(uint *)this = *(int *)this + param_1;
  return;
}
```
