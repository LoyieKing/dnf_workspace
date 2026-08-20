# Zero

`_ZN8TaoCrypt7Integer4ZeroEv`

`TaoCrypt::Integer::Zero()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f860` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f860  _ZN8TaoCrypt7Integer4ZeroEv
#           TaoCrypt::Integer::Zero()
# range [0x0875f860, 0x0875f8ba]
0875f860 +0x00:  push   %ebp
0875f861 +0x01:  mov    %esp,%ebp
0875f863 +0x03:  push   %ebx
0875f864 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f869 +0x09:  add    $0xc0d32f,%ebx
0875f86f +0x0f:  sub    $0x24,%esp
0875f872 +0x12:  mov    0x124c98(%ebx),%eax
0875f878 +0x18:  test   %eax,%eax
0875f87a +0x1a:  je     0875f888 <+0x28>
0875f87c +0x1c:  add    $0x24,%esp
0875f87f +0x1f:  pop    %ebx
0875f880 +0x20:  pop    %ebp
0875f881 +0x21:  ret
0875f882 +0x22:  lea    0x0(%esi),%esi
0875f888 +0x28:  movb   $0x0,0x4(%esp)
0875f88d +0x2d:  movl   $0x10,(%esp)
0875f894 +0x34:  call   08767750 <_ZnwjN8TaoCrypt5new_tE>  ; operator new(unsigned int, TaoCrypt::new_t)
0875f899 +0x39:  mov    %eax,(%esp)
0875f89c +0x3c:  mov    %eax,-0xc(%ebp)
0875f89f +0x3f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875f8a4 +0x44:  mov    -0xc(%ebp),%eax
0875f8a7 +0x47:  mov    %eax,0x124c98(%ebx)
0875f8ad +0x4d:  add    $0x24,%esp
0875f8b0 +0x50:  pop    %ebx
0875f8b1 +0x51:  pop    %ebp
0875f8b2 +0x52:  ret
0875f8b3 +0x53:  nop
0875f8b4 +0x54:  lea    0x0(%esi),%esi
0875f8ba +0x5a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Zero @ 0x875f860

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Zero() */

void TaoCrypt::Integer::Zero(void)

{
  Integer *this;
  
  if (zero != (Integer *)0x0) {
    return;
  }
  this = operator_new(0x10,0);
  Integer(this);
  zero = this;
  return;
}
```
