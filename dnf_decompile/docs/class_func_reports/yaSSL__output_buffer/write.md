# write

`_ZN5yaSSL13output_buffer5writeEPKhj`

`yaSSL::output_buffer::write(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08796fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796fd0  _ZN5yaSSL13output_buffer5writeEPKhj
#           yaSSL::output_buffer::write(unsigned char const*, unsigned int)
# range [0x08796fd0, 0x08797039]
08796fd0 +0x00:  push   %ebp
08796fd1 +0x01:  mov    %esp,%ebp
08796fd3 +0x03:  sub    $0x28,%esp
08796fd6 +0x06:  mov    %ebx,-0xc(%ebp)
08796fd9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08796fde +0x0e:  add    $0xbd5bba,%ebx
08796fe4 +0x14:  mov    %esi,-0x8(%ebp)
08796fe7 +0x17:  mov    0x8(%ebp),%esi
08796fea +0x1a:  mov    %edi,-0x4(%ebp)
08796fed +0x1d:  mov    0x10(%ebp),%edi
08796ff0 +0x20:  mov    %esi,(%esp)
08796ff3 +0x23:  call   08796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>  ; yaSSL::output_buffer::get_capacity() const
08796ff8 +0x28:  mov    %eax,0x8(%esp)
08796ffc +0x2c:  mov    (%esi),%eax
08796ffe +0x2e:  mov    %esi,(%esp)
08797001 +0x31:  lea    -0x1(%edi,%eax,1),%eax
08797005 +0x35:  mov    %eax,0x4(%esp)
08797009 +0x39:  call   08796ce0 <_ZN5yaSSL5Check5checkEjj>  ; yaSSL::Check::check(unsigned int, unsigned int)
0879700e +0x3e:  mov    0x4(%esi),%eax
08797011 +0x41:  mov    0xc(%ebp),%edx
08797014 +0x44:  add    (%esi),%eax
08797016 +0x46:  mov    %edi,0x8(%esp)
0879701a +0x4a:  mov    %edx,0x4(%esp)
0879701e +0x4e:  mov    %eax,(%esp)
08797021 +0x51:  call   0807d8a0 <_init+0x198>
08797026 +0x56:  add    %edi,(%esi)
08797028 +0x58:  mov    -0xc(%ebp),%ebx
0879702b +0x5b:  mov    -0x8(%ebp),%esi
0879702e +0x5e:  mov    -0x4(%ebp),%edi
08797031 +0x61:  mov    %ebp,%esp
08797033 +0x63:  pop    %ebp
08797034 +0x64:  ret
08797035 +0x65:  nop
08797036 +0x66:  lea    0x0(%esi),%esi
08797039 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::output_buffer::write @ 0x8796fd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::write(unsigned char const*, unsigned int) */

void __thiscall yaSSL::output_buffer::write(output_buffer *this,uchar *param_1,uint param_2)

{
  get_capacity(this);
  Check::check((uint)this,(param_2 - 1) + *(int *)this);
  memcpy((void *)(*(int *)(this + 4) + *(int *)this),param_1,param_2);
  *(uint *)this = *(int *)this + param_2;
  return;
}
```
