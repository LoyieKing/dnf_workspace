# operator=

`_ZN5yaSSL7IntegeraSERKS0_`

`yaSSL::Integer::operator=(yaSSL::Integer const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Integer` | `0x08798f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798f50  _ZN5yaSSL7IntegeraSERKS0_
#           yaSSL::Integer::operator=(yaSSL::Integer const&)
# range [0x08798f50, 0x08798f8a]
08798f50 +0x00:  push   %ebp
08798f51 +0x01:  mov    %esp,%ebp
08798f53 +0x03:  sub    $0x18,%esp
08798f56 +0x06:  mov    0xc(%ebp),%eax
08798f59 +0x09:  mov    %ebx,-0x8(%ebp)
08798f5c +0x0c:  mov    %esi,-0x4(%ebp)
08798f5f +0x0f:  mov    0x8(%ebp),%esi
08798f62 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08798f67 +0x17:  add    $0xbd3c31,%ebx
08798f6d +0x1d:  mov    (%eax),%eax
08798f6f +0x1f:  mov    %eax,0x4(%esp)
08798f73 +0x23:  mov    (%esi),%eax
08798f75 +0x25:  mov    %eax,(%esp)
08798f78 +0x28:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08798f7d +0x2d:  mov    %esi,%eax
08798f7f +0x2f:  mov    -0x8(%ebp),%ebx
08798f82 +0x32:  mov    -0x4(%ebp),%esi
08798f85 +0x35:  mov    %ebp,%esp
08798f87 +0x37:  pop    %ebp
08798f88 +0x38:  ret
08798f89 +0x39:  nop
08798f8a +0x3a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Integer::operator= @ 0x8798f50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::TEMPNAMEPLACEHOLDERVALUE(yaSSL::Integer const&) */

Integer * __thiscall yaSSL::Integer::operator=(Integer *this,Integer *param_1)

{
  TaoCrypt::Integer::operator=(*(Integer **)this,*(Integer **)param_1);
  return this;
}
```
