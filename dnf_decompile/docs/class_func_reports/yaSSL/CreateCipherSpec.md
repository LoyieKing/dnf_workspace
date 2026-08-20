# CreateCipherSpec

`_ZN5yaSSL16CreateCipherSpecEv`

`yaSSL::CreateCipherSpec()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747810  _ZN5yaSSL16CreateCipherSpecEv
#           yaSSL::CreateCipherSpec()
# range [0x08747810, 0x0874784e]
08747810 +0x00:  push   %ebp
08747811 +0x01:  mov    %esp,%ebp
08747813 +0x03:  sub    $0x18,%esp
08747816 +0x06:  mov    %ebx,-0x8(%ebp)
08747819 +0x09:  mov    %esi,-0x4(%ebp)
0874781c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747821 +0x11:  add    $0xc25377,%ebx
08747827 +0x17:  movb   $0x0,0x4(%esp)
0874782c +0x1c:  movl   $0x8,(%esp)
08747833 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747838 +0x28:  mov    %eax,%esi
0874783a +0x2a:  mov    %eax,(%esp)
0874783d +0x2d:  call   08746b40 <_ZN5yaSSL16ChangeCipherSpecC1Ev>  ; yaSSL::ChangeCipherSpec::ChangeCipherSpec()
08747842 +0x32:  mov    %esi,%eax
08747844 +0x34:  mov    -0x8(%ebp),%ebx
08747847 +0x37:  mov    -0x4(%ebp),%esi
0874784a +0x3a:  mov    %ebp,%esp
0874784c +0x3c:  pop    %ebp
0874784d +0x3d:  ret
0874784e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateCipherSpec @ 0x8747810

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateCipherSpec() */

ChangeCipherSpec * yaSSL::CreateCipherSpec(void)

{
  ChangeCipherSpec *this;
  
  this = operator_new(8,0);
  ChangeCipherSpec::ChangeCipherSpec(this);
  return this;
}
```
