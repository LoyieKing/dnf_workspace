# set_current

`_ZN5yaSSL12input_buffer11set_currentEj`

`yaSSL::input_buffer::set_current(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08796dd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796dd0  _ZN5yaSSL12input_buffer11set_currentEj
#           yaSSL::input_buffer::set_current(unsigned int)
# range [0x08796dd0, 0x08796e1a]
08796dd0 +0x00:  push   %ebp
08796dd1 +0x01:  mov    %esp,%ebp
08796dd3 +0x03:  sub    $0x28,%esp
08796dd6 +0x06:  mov    %esi,-0x8(%ebp)
08796dd9 +0x09:  mov    0xc(%ebp),%esi
08796ddc +0x0c:  mov    %ebx,-0xc(%ebp)
08796ddf +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08796de4 +0x14:  add    $0xbd5db4,%ebx
08796dea +0x1a:  mov    %edi,-0x4(%ebp)
08796ded +0x1d:  mov    0x8(%ebp),%edi
08796df0 +0x20:  test   %esi,%esi
08796df2 +0x22:  je     08796e09 <+0x39>
08796df4 +0x24:  mov    (%edi),%eax
08796df6 +0x26:  mov    %edi,(%esp)
08796df9 +0x29:  mov    %eax,0x8(%esp)
08796dfd +0x2d:  lea    -0x1(%esi),%eax
08796e00 +0x30:  mov    %eax,0x4(%esp)
08796e04 +0x34:  call   08796ce0 <_ZN5yaSSL5Check5checkEjj>  ; yaSSL::Check::check(unsigned int, unsigned int)
08796e09 +0x39:  mov    %esi,0x4(%edi)
08796e0c +0x3c:  mov    -0xc(%ebp),%ebx
08796e0f +0x3f:  mov    -0x8(%ebp),%esi
08796e12 +0x42:  mov    -0x4(%ebp),%edi
08796e15 +0x45:  mov    %ebp,%esp
08796e17 +0x47:  pop    %ebp
08796e18 +0x48:  ret
08796e19 +0x49:  nop
08796e1a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::input_buffer::set_current @ 0x8796dd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::set_current(unsigned int) */

void __thiscall yaSSL::input_buffer::set_current(input_buffer *this,uint param_1)

{
  if (param_1 != 0) {
    Check::check((uint)this,param_1 - 1);
  }
  *(uint *)(this + 4) = param_1;
  return;
}
```
