# One

`_ZN8TaoCrypt7Integer3OneEv`

`TaoCrypt::Integer::One()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f200  _ZN8TaoCrypt7Integer3OneEv
#           TaoCrypt::Integer::One()
# range [0x0875f200, 0x0875f26a]
0875f200 +0x00:  push   %ebp
0875f201 +0x01:  mov    %esp,%ebp
0875f203 +0x03:  push   %ebx
0875f204 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f209 +0x09:  add    $0xc0d98f,%ebx
0875f20f +0x0f:  sub    $0x24,%esp
0875f212 +0x12:  mov    0x124c94(%ebx),%eax
0875f218 +0x18:  test   %eax,%eax
0875f21a +0x1a:  je     0875f228 <+0x28>
0875f21c +0x1c:  add    $0x24,%esp
0875f21f +0x1f:  pop    %ebx
0875f220 +0x20:  pop    %ebp
0875f221 +0x21:  ret
0875f222 +0x22:  lea    0x0(%esi),%esi
0875f228 +0x28:  movb   $0x0,0x4(%esp)
0875f22d +0x2d:  movl   $0x10,(%esp)
0875f234 +0x34:  call   08767750 <_ZnwjN8TaoCrypt5new_tE>  ; operator new(unsigned int, TaoCrypt::new_t)
0875f239 +0x39:  movl   $0x2,0x8(%esp)
0875f241 +0x41:  movl   $0x1,0x4(%esp)
0875f249 +0x49:  mov    %eax,(%esp)
0875f24c +0x4c:  mov    %eax,-0xc(%ebp)
0875f24f +0x4f:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
0875f254 +0x54:  mov    -0xc(%ebp),%eax
0875f257 +0x57:  mov    %eax,0x124c94(%ebx)
0875f25d +0x5d:  add    $0x24,%esp
0875f260 +0x60:  pop    %ebx
0875f261 +0x61:  pop    %ebp
0875f262 +0x62:  ret
0875f263 +0x63:  nop
0875f264 +0x64:  lea    0x0(%esi),%esi
0875f26a +0x6a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::One @ 0x875f200

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::One() */

void TaoCrypt::Integer::One(void)

{
  Integer *this;
  uint in_stack_ffffffd8;
  
  if (one != (Integer *)0x0) {
    return;
  }
  this = operator_new(0x10,in_stack_ffffffd8 & 0xffffff00);
  Integer(this,1,2);
  one = this;
  return;
}
```
