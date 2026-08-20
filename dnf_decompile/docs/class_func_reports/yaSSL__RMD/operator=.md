# operator=

`_ZN5yaSSL3RMDaSERKS0_`

`yaSSL::RMD::operator=(yaSSL::RMD const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::RMD` | `0x08799e30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799e30  _ZN5yaSSL3RMDaSERKS0_
#           yaSSL::RMD::operator=(yaSSL::RMD const&)
# range [0x08799e30, 0x08799e6c]
08799e30 +0x00:  push   %ebp
08799e31 +0x01:  mov    %esp,%ebp
08799e33 +0x03:  sub    $0x18,%esp
08799e36 +0x06:  mov    0xc(%ebp),%eax
08799e39 +0x09:  mov    %ebx,-0x8(%ebp)
08799e3c +0x0c:  mov    %esi,-0x4(%ebp)
08799e3f +0x0f:  mov    0x8(%ebp),%esi
08799e42 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08799e47 +0x17:  add    $0xbd2d51,%ebx
08799e4d +0x1d:  mov    0x4(%eax),%eax
08799e50 +0x20:  mov    %eax,0x4(%esp)
08799e54 +0x24:  mov    0x4(%esi),%eax
08799e57 +0x27:  mov    %eax,(%esp)
08799e5a +0x2a:  call   087ab620 <_ZN8TaoCrypt9RIPEMD160aSERKS0_>  ; TaoCrypt::RIPEMD160::operator=(TaoCrypt::RIPEMD160 const&)
08799e5f +0x2f:  mov    %esi,%eax
08799e61 +0x31:  mov    -0x8(%ebp),%ebx
08799e64 +0x34:  mov    -0x4(%ebp),%esi
08799e67 +0x37:  mov    %ebp,%esp
08799e69 +0x39:  pop    %ebp
08799e6a +0x3a:  ret
08799e6b +0x3b:  nop
08799e6c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::RMD::operator= @ 0x8799e30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::TEMPNAMEPLACEHOLDERVALUE(yaSSL::RMD const&) */

RMD * __thiscall yaSSL::RMD::operator=(RMD *this,RMD *param_1)

{
  TaoCrypt::RIPEMD160::operator=(*(RIPEMD160 **)(this + 4),*(RIPEMD160 **)(param_1 + 4));
  return this;
}
```
