# operator!

`_ZNK8TaoCrypt7IntegerntEv`

`TaoCrypt::Integer::operator!() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d280` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d280  _ZNK8TaoCrypt7IntegerntEv
#           TaoCrypt::Integer::operator!() const
# range [0x0875d280, 0x0875d2ca]
0875d280 +0x00:  push   %ebp
0875d281 +0x01:  mov    %esp,%ebp
0875d283 +0x03:  push   %ebx
0875d284 +0x04:  sub    $0x14,%esp
0875d287 +0x07:  mov    0x8(%ebp),%eax
0875d28a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d28f +0x0f:  add    $0xc0f909,%ebx
0875d295 +0x15:  cmpl   $0x1,0xc(%eax)
0875d299 +0x19:  je     0875d2a4 <+0x24>
0875d29b +0x1b:  mov    0x4(%eax),%edx
0875d29e +0x1e:  mov    (%edx),%edx
0875d2a0 +0x20:  test   %edx,%edx
0875d2a2 +0x22:  je     0875d2b0 <+0x30>
0875d2a4 +0x24:  add    $0x14,%esp
0875d2a7 +0x27:  xor    %eax,%eax
0875d2a9 +0x29:  pop    %ebx
0875d2aa +0x2a:  pop    %ebp
0875d2ab +0x2b:  ret
0875d2ac +0x2c:  lea    0x0(%esi,%eiz,1),%esi
0875d2b0 +0x30:  mov    %eax,(%esp)
0875d2b3 +0x33:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875d2b8 +0x38:  test   %eax,%eax
0875d2ba +0x3a:  sete   %al
0875d2bd +0x3d:  add    $0x14,%esp
0875d2c0 +0x40:  pop    %ebx
0875d2c1 +0x41:  pop    %ebp
0875d2c2 +0x42:  ret
0875d2c3 +0x43:  nop
0875d2c4 +0x44:  lea    0x0(%esi),%esi
0875d2ca +0x4a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::operator! @ 0x875d280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE() const */

bool __thiscall TaoCrypt::Integer::operator!(Integer *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0xc) != 1) && (**(int **)(this + 4) == 0)) {
    iVar1 = WordCount(this);
    return iVar1 == 0;
  }
  return false;
}
```
