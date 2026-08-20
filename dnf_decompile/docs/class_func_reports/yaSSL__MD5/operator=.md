# operator=

`_ZN5yaSSL3MD5aSERKS0_`

`yaSSL::MD5::operator=(yaSSL::MD5 const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::MD5` | `0x08799f70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799f70  _ZN5yaSSL3MD5aSERKS0_
#           yaSSL::MD5::operator=(yaSSL::MD5 const&)
# range [0x08799f70, 0x08799fac]
08799f70 +0x00:  push   %ebp
08799f71 +0x01:  mov    %esp,%ebp
08799f73 +0x03:  sub    $0x18,%esp
08799f76 +0x06:  mov    0xc(%ebp),%eax
08799f79 +0x09:  mov    %ebx,-0x8(%ebp)
08799f7c +0x0c:  mov    %esi,-0x4(%ebp)
08799f7f +0x0f:  mov    0x8(%ebp),%esi
08799f82 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08799f87 +0x17:  add    $0xbd2c11,%ebx
08799f8d +0x1d:  mov    0x4(%eax),%eax
08799f90 +0x20:  mov    %eax,0x4(%esp)
08799f94 +0x24:  mov    0x4(%esi),%eax
08799f97 +0x27:  mov    %eax,(%esp)
08799f9a +0x2a:  call   08767330 <_ZN8TaoCrypt3MD5aSERKS0_>  ; TaoCrypt::MD5::operator=(TaoCrypt::MD5 const&)
08799f9f +0x2f:  mov    %esi,%eax
08799fa1 +0x31:  mov    -0x8(%ebp),%ebx
08799fa4 +0x34:  mov    -0x4(%ebp),%esi
08799fa7 +0x37:  mov    %ebp,%esp
08799fa9 +0x39:  pop    %ebp
08799faa +0x3a:  ret
08799fab +0x3b:  nop
08799fac +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::MD5::operator= @ 0x8799f70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::TEMPNAMEPLACEHOLDERVALUE(yaSSL::MD5 const&) */

MD5 * __thiscall yaSSL::MD5::operator=(MD5 *this,MD5 *param_1)

{
  TaoCrypt::MD5::operator=(*(MD5 **)(this + 4),*(MD5 **)(param_1 + 4));
  return this;
}
```
