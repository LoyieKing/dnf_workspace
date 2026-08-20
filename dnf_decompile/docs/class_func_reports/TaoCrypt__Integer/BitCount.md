# BitCount

`_ZNK8TaoCrypt7Integer8BitCountEv`

`TaoCrypt::Integer::BitCount() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875ebe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ebe0  _ZNK8TaoCrypt7Integer8BitCountEv
#           TaoCrypt::Integer::BitCount() const
# range [0x0875ebe0, 0x0875ec2f]
0875ebe0 +0x00:  push   %ebp
0875ebe1 +0x01:  mov    %esp,%ebp
0875ebe3 +0x03:  sub    $0x28,%esp
0875ebe6 +0x06:  mov    %ebx,-0xc(%ebp)
0875ebe9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875ebee +0x0e:  add    $0xc0dfaa,%ebx
0875ebf4 +0x14:  mov    %edi,-0x4(%ebp)
0875ebf7 +0x17:  mov    0x8(%ebp),%edi
0875ebfa +0x1a:  mov    %esi,-0x8(%ebp)
0875ebfd +0x1d:  mov    %edi,(%esp)
0875ec00 +0x20:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875ec05 +0x25:  mov    %eax,%esi
0875ec07 +0x27:  xor    %eax,%eax
0875ec09 +0x29:  test   %esi,%esi
0875ec0b +0x2b:  je     0875ec23 <+0x43>
0875ec0d +0x2d:  mov    0x4(%edi),%eax
0875ec10 +0x30:  mov    -0x4(%eax,%esi,4),%eax
0875ec14 +0x34:  shl    $0x5,%esi
0875ec17 +0x37:  mov    %eax,(%esp)
0875ec1a +0x3a:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
0875ec1f +0x3f:  lea    -0x20(%eax,%esi,1),%eax
0875ec23 +0x43:  mov    -0xc(%ebp),%ebx
0875ec26 +0x46:  mov    -0x8(%ebp),%esi
0875ec29 +0x49:  mov    -0x4(%ebp),%edi
0875ec2c +0x4c:  mov    %ebp,%esp
0875ec2e +0x4e:  pop    %ebp
0875ec2f +0x4f:  ret
```

## 反编译 C

```c
// TaoCrypt::Integer::BitCount @ 0x875ebe0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::BitCount() const */

int __thiscall TaoCrypt::Integer::BitCount(Integer *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = WordCount(this);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = BitPrecision(*(uint *)(*(int *)(this + 4) + -4 + iVar1 * 4));
    iVar2 = iVar2 + -0x20 + iVar1 * 0x20;
  }
  return iVar2;
}
```
