# Integer

`_ZN5yaSSL7IntegerC1Ev`

`yaSSL::Integer::Integer()`

| 类 | 地址 |
|---|---|
| `yaSSL::Integer` | `0x08798f00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798f00  _ZN5yaSSL7IntegerC1Ev
#           yaSSL::Integer::Integer()
# range [0x08798f00, 0x08798f49]
08798f00 +0x00:  push   %ebp
08798f01 +0x01:  mov    %esp,%ebp
08798f03 +0x03:  sub    $0x18,%esp
08798f06 +0x06:  mov    %ebx,-0x8(%ebp)
08798f09 +0x09:  mov    %esi,-0x4(%ebp)
08798f0c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08798f11 +0x11:  add    $0xbd3c87,%ebx
08798f17 +0x17:  movb   $0x0,0x4(%esp)
08798f1c +0x1c:  movl   $0x10,(%esp)
08798f23 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08798f28 +0x28:  mov    %eax,%esi
08798f2a +0x2a:  mov    %eax,(%esp)
08798f2d +0x2d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08798f32 +0x32:  mov    0x8(%ebp),%eax
08798f35 +0x35:  mov    %esi,(%eax)
08798f37 +0x37:  mov    -0x8(%ebp),%ebx
08798f3a +0x3a:  mov    -0x4(%ebp),%esi
08798f3d +0x3d:  mov    %ebp,%esp
08798f3f +0x3f:  pop    %ebp
08798f40 +0x40:  ret
08798f41 +0x41:  nop
08798f42 +0x42:  lea    0x0(%esi,%eiz,1),%esi
08798f49 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Integer::Integer @ 0x8798f00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::Integer() */

void __thiscall yaSSL::Integer::Integer(Integer *this)

{
  Integer *this_00;
  
  this_00 = operator_new(0x10,0);
  TaoCrypt::Integer::Integer(this_00);
  *(Integer **)this = this_00;
  return;
}
```
