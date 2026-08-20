# assign

`_ZN5yaSSL12input_buffer6assignEPKhj`

`yaSSL::input_buffer::assign(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x087970b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087970b0  _ZN5yaSSL12input_buffer6assignEPKhj
#           yaSSL::input_buffer::assign(unsigned char const*, unsigned int)
# range [0x087970b0, 0x0879711e]
087970b0 +0x00:  push   %ebp
087970b1 +0x01:  mov    %esp,%ebp
087970b3 +0x03:  sub    $0x28,%esp
087970b6 +0x06:  mov    %ebx,-0xc(%ebp)
087970b9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087970be +0x0e:  add    $0xbd5ada,%ebx
087970c4 +0x14:  mov    %esi,-0x8(%ebp)
087970c7 +0x17:  mov    0x8(%ebp),%esi
087970ca +0x1a:  mov    %edi,-0x4(%ebp)
087970cd +0x1d:  mov    0x10(%ebp),%edi
087970d0 +0x20:  mov    %esi,(%esp)
087970d3 +0x23:  call   08796d40 <_ZNK5yaSSL12input_buffer12get_capacityEv>  ; yaSSL::input_buffer::get_capacity() const
087970d8 +0x28:  mov    %eax,0x8(%esp)
087970dc +0x2c:  mov    0x4(%esi),%eax
087970df +0x2f:  mov    %esi,(%esp)
087970e2 +0x32:  mov    %eax,0x4(%esp)
087970e6 +0x36:  call   08796ce0 <_ZN5yaSSL5Check5checkEjj>  ; yaSSL::Check::check(unsigned int, unsigned int)
087970eb +0x3b:  mov    %edi,0x4(%esp)
087970ef +0x3f:  mov    %esi,(%esp)
087970f2 +0x42:  call   08796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>  ; yaSSL::input_buffer::add_size(unsigned int)
087970f7 +0x47:  mov    0x8(%esi),%eax
087970fa +0x4a:  mov    0xc(%ebp),%edx
087970fd +0x4d:  add    0x4(%esi),%eax
08797100 +0x50:  mov    %edi,0x8(%esp)
08797104 +0x54:  mov    %edx,0x4(%esp)
08797108 +0x58:  mov    %eax,(%esp)
0879710b +0x5b:  call   0807d8a0 <_init+0x198>
08797110 +0x60:  mov    -0xc(%ebp),%ebx
08797113 +0x63:  mov    -0x8(%ebp),%esi
08797116 +0x66:  mov    -0x4(%ebp),%edi
08797119 +0x69:  mov    %ebp,%esp
0879711b +0x6b:  pop    %ebp
0879711c +0x6c:  ret
0879711d +0x6d:  nop
0879711e +0x6e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::input_buffer::assign @ 0x87970b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::assign(unsigned char const*, unsigned int) */

void __thiscall yaSSL::input_buffer::assign(input_buffer *this,uchar *param_1,uint param_2)

{
  get_capacity(this);
  Check::check((uint)this,*(uint *)(this + 4));
  add_size(this,param_2);
  memcpy((void *)(*(int *)(this + 8) + *(int *)(this + 4)),param_1,param_2);
  return;
}
```
