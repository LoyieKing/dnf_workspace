# eof

`_ZN5yaSSL13output_buffer3eofEv`

`yaSSL::output_buffer::eof()`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08796f90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796f90  _ZN5yaSSL13output_buffer3eofEv
#           yaSSL::output_buffer::eof()
# range [0x08796f90, 0x08796fca]
08796f90 +0x00:  push   %ebp
08796f91 +0x01:  mov    %esp,%ebp
08796f93 +0x03:  sub    $0x18,%esp
08796f96 +0x06:  mov    %ebx,-0x8(%ebp)
08796f99 +0x09:  mov    0x8(%ebp),%eax
08796f9c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08796fa1 +0x11:  add    $0xbd5bf7,%ebx
08796fa7 +0x17:  mov    %esi,-0x4(%ebp)
08796faa +0x1a:  mov    (%eax),%esi
08796fac +0x1c:  mov    %eax,(%esp)
08796faf +0x1f:  call   08796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>  ; yaSSL::output_buffer::get_capacity() const
08796fb4 +0x24:  mov    -0x8(%ebp),%ebx
08796fb7 +0x27:  cmp    %eax,%esi
08796fb9 +0x29:  mov    -0x4(%ebp),%esi
08796fbc +0x2c:  setae  %al
08796fbf +0x2f:  mov    %ebp,%esp
08796fc1 +0x31:  pop    %ebp
08796fc2 +0x32:  ret
08796fc3 +0x33:  nop
08796fc4 +0x34:  lea    0x0(%esi),%esi
08796fca +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::output_buffer::eof @ 0x8796f90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::eof() */

bool __thiscall yaSSL::output_buffer::eof(output_buffer *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)this;
  uVar2 = get_capacity(this);
  return uVar2 <= uVar1;
}
```
