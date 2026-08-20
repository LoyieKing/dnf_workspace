# Negate

`_ZN8TaoCrypt7Integer6NegateEv`

`TaoCrypt::Integer::Negate()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d2d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d2d0  _ZN8TaoCrypt7Integer6NegateEv
#           TaoCrypt::Integer::Negate()
# range [0x0875d2d0, 0x0875d30c]
0875d2d0 +0x00:  push   %ebp
0875d2d1 +0x01:  mov    %esp,%ebp
0875d2d3 +0x03:  sub    $0x18,%esp
0875d2d6 +0x06:  mov    %ebx,-0x8(%ebp)
0875d2d9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d2de +0x0e:  add    $0xc0f8ba,%ebx
0875d2e4 +0x14:  mov    %esi,-0x4(%ebp)
0875d2e7 +0x17:  mov    0x8(%ebp),%esi
0875d2ea +0x1a:  mov    %esi,(%esp)
0875d2ed +0x1d:  call   0875d280 <_ZNK8TaoCrypt7IntegerntEv>  ; TaoCrypt::Integer::operator!() const
0875d2f2 +0x22:  test   %al,%al
0875d2f4 +0x24:  jne    0875d301 <+0x31>
0875d2f6 +0x26:  mov    $0x1,%eax
0875d2fb +0x2b:  sub    0xc(%esi),%eax
0875d2fe +0x2e:  mov    %eax,0xc(%esi)
0875d301 +0x31:  mov    -0x8(%ebp),%ebx
0875d304 +0x34:  mov    -0x4(%ebp),%esi
0875d307 +0x37:  mov    %ebp,%esp
0875d309 +0x39:  pop    %ebp
0875d30a +0x3a:  ret
0875d30b +0x3b:  nop
0875d30c +0x3c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::Negate @ 0x875d2d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Negate() */

void __thiscall TaoCrypt::Integer::Negate(Integer *this)

{
  char cVar1;
  
  cVar1 = operator!(this);
  if (cVar1 == '\0') {
    *(int *)(this + 0xc) = 1 - *(int *)(this + 0xc);
  }
  return;
}
```
