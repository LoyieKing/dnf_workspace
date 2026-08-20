# Integer

`_ZN5yaSSL7IntegerC1ERKS0_`

`yaSSL::Integer::Integer(yaSSL::Integer const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Integer` | `0x08798dd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798dd0  _ZN5yaSSL7IntegerC1ERKS0_
#           yaSSL::Integer::Integer(yaSSL::Integer const&)
# range [0x08798dd0, 0x08798e1a]
08798dd0 +0x00:  push   %ebp
08798dd1 +0x01:  mov    %esp,%ebp
08798dd3 +0x03:  sub    $0x18,%esp
08798dd6 +0x06:  mov    %ebx,-0x8(%ebp)
08798dd9 +0x09:  mov    %esi,-0x4(%ebp)
08798ddc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08798de1 +0x11:  add    $0xbd3db7,%ebx
08798de7 +0x17:  movb   $0x0,0x4(%esp)
08798dec +0x1c:  movl   $0x10,(%esp)
08798df3 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08798df8 +0x28:  mov    %eax,%esi
08798dfa +0x2a:  mov    0xc(%ebp),%eax
08798dfd +0x2d:  mov    (%eax),%eax
08798dff +0x2f:  mov    %esi,(%esp)
08798e02 +0x32:  mov    %eax,0x4(%esp)
08798e06 +0x36:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08798e0b +0x3b:  mov    0x8(%ebp),%eax
08798e0e +0x3e:  mov    %esi,(%eax)
08798e10 +0x40:  mov    -0x8(%ebp),%ebx
08798e13 +0x43:  mov    -0x4(%ebp),%esi
08798e16 +0x46:  mov    %ebp,%esp
08798e18 +0x48:  pop    %ebp
08798e19 +0x49:  ret
08798e1a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::Integer::Integer @ 0x8798dd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::Integer(yaSSL::Integer const&) */

void __thiscall yaSSL::Integer::Integer(Integer *this,Integer *param_1)

{
  Integer *this_00;
  uint in_stack_ffffffe8;
  
  this_00 = operator_new(0x10,in_stack_ffffffe8 & 0xffffff00);
  TaoCrypt::Integer::Integer(this_00,*(Integer **)param_1);
  *(Integer **)this = this_00;
  return;
}
```
