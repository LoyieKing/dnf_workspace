# operator[]

`_ZN5yaSSL13output_bufferixEj`

`yaSSL::output_buffer::operator[](unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08796f40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08796f40  _ZN5yaSSL13output_bufferixEj
#           yaSSL::output_buffer::operator[](unsigned int)
# range [0x08796f40, 0x08796f8a]
08796f40 +0x00:  push   %ebp
08796f41 +0x01:  mov    %esp,%ebp
08796f43 +0x03:  sub    $0x18,%esp
08796f46 +0x06:  mov    %ebx,-0x8(%ebp)
08796f49 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08796f4e +0x0e:  add    $0xbd5c4a,%ebx
08796f54 +0x14:  mov    %esi,-0x4(%ebp)
08796f57 +0x17:  mov    0x8(%ebp),%esi
08796f5a +0x1a:  mov    %esi,(%esp)
08796f5d +0x1d:  call   08796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>  ; yaSSL::output_buffer::get_capacity() const
08796f62 +0x22:  mov    %eax,0x8(%esp)
08796f66 +0x26:  mov    (%esi),%eax
08796f68 +0x28:  mov    %esi,(%esp)
08796f6b +0x2b:  mov    %eax,0x4(%esp)
08796f6f +0x2f:  call   08796ce0 <_ZN5yaSSL5Check5checkEjj>  ; yaSSL::Check::check(unsigned int, unsigned int)
08796f74 +0x34:  mov    (%esi),%edx
08796f76 +0x36:  mov    0x4(%esi),%eax
08796f79 +0x39:  add    %edx,%eax
08796f7b +0x3b:  add    $0x1,%edx
08796f7e +0x3e:  mov    %edx,(%esi)
08796f80 +0x40:  mov    -0x8(%ebp),%ebx
08796f83 +0x43:  mov    -0x4(%ebp),%esi
08796f86 +0x46:  mov    %ebp,%esp
08796f88 +0x48:  pop    %ebp
08796f89 +0x49:  ret
08796f8a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::output_buffer::operator[] @ 0x8796f40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::operator[](unsigned int) */

int yaSSL::output_buffer::operator[](uint param_1)

{
  int iVar1;
  
  get_capacity((output_buffer *)param_1);
  Check::check(param_1,*(uint *)param_1);
  iVar1 = *(int *)param_1;
  *(int *)param_1 = iVar1 + 1;
  return *(int *)(param_1 + 4) + iVar1;
}
```
