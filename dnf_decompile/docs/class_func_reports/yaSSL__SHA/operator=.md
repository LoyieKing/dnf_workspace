# operator=

`_ZN5yaSSL3SHAaSERKS0_`

`yaSSL::SHA::operator=(yaSSL::SHA const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SHA` | `0x08799ed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799ed0  _ZN5yaSSL3SHAaSERKS0_
#           yaSSL::SHA::operator=(yaSSL::SHA const&)
# range [0x08799ed0, 0x08799f0c]
08799ed0 +0x00:  push   %ebp
08799ed1 +0x01:  mov    %esp,%ebp
08799ed3 +0x03:  sub    $0x18,%esp
08799ed6 +0x06:  mov    0xc(%ebp),%eax
08799ed9 +0x09:  mov    %ebx,-0x8(%ebp)
08799edc +0x0c:  mov    %esi,-0x4(%ebp)
08799edf +0x0f:  mov    0x8(%ebp),%esi
08799ee2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08799ee7 +0x17:  add    $0xbd2cb1,%ebx
08799eed +0x1d:  mov    0x4(%eax),%eax
08799ef0 +0x20:  mov    %eax,0x4(%esp)
08799ef4 +0x24:  mov    0x4(%esi),%eax
08799ef7 +0x27:  mov    %eax,(%esp)
08799efa +0x2a:  call   08770510 <_ZN8TaoCrypt3SHAaSERKS0_>  ; TaoCrypt::SHA::operator=(TaoCrypt::SHA const&)
08799eff +0x2f:  mov    %esi,%eax
08799f01 +0x31:  mov    -0x8(%ebp),%ebx
08799f04 +0x34:  mov    -0x4(%ebp),%esi
08799f07 +0x37:  mov    %ebp,%esp
08799f09 +0x39:  pop    %ebp
08799f0a +0x3a:  ret
08799f0b +0x3b:  nop
08799f0c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SHA::operator= @ 0x8799ed0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::TEMPNAMEPLACEHOLDERVALUE(yaSSL::SHA const&) */

SHA * __thiscall yaSSL::SHA::operator=(SHA *this,SHA *param_1)

{
  TaoCrypt::SHA::operator=(*(SHA **)(this + 4),*(SHA **)(param_1 + 4));
  return this;
}
```
