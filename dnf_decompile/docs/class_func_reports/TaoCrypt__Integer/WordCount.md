# WordCount

`_ZNK8TaoCrypt7Integer9WordCountEv`

`TaoCrypt::Integer::WordCount() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875d130` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d130  _ZNK8TaoCrypt7Integer9WordCountEv
#           TaoCrypt::Integer::WordCount() const
# range [0x0875d130, 0x0875d16e]
0875d130 +0x00:  push   %ebp
0875d131 +0x01:  mov    %esp,%ebp
0875d133 +0x03:  mov    0x8(%ebp),%edx
0875d136 +0x06:  push   %esi
0875d137 +0x07:  mov    (%edx),%eax
0875d139 +0x09:  mov    0x4(%edx),%esi
0875d13c +0x0c:  test   %eax,%eax
0875d13e +0x0e:  je     0875d156 <+0x26>
0875d140 +0x10:  lea    -0x1(%eax),%ecx
0875d143 +0x13:  lea    -0x8(%esi,%eax,4),%edx
0875d147 +0x17:  mov    (%esi,%ecx,4),%esi
0875d14a +0x1a:  test   %esi,%esi
0875d14c +0x1c:  jne    0875d156 <+0x26>
0875d14e +0x1e:  xchg   %ax,%ax
0875d150 +0x20:  test   %ecx,%ecx
0875d152 +0x22:  mov    %ecx,%eax
0875d154 +0x24:  jne    0875d160 <+0x30>
0875d156 +0x26:  pop    %esi
0875d157 +0x27:  pop    %ebp
0875d158 +0x28:  ret
0875d159 +0x29:  lea    0x0(%esi,%eiz,1),%esi
0875d160 +0x30:  mov    (%edx),%esi
0875d162 +0x32:  sub    $0x4,%edx
0875d165 +0x35:  test   %esi,%esi
0875d167 +0x37:  jne    0875d156 <+0x26>
0875d169 +0x39:  sub    $0x1,%ecx
0875d16c +0x3c:  jmp    0875d150 <+0x20>
0875d16e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Integer::WordCount @ 0x875d130

/* TaoCrypt::Integer::WordCount() const */

int __thiscall TaoCrypt::Integer::WordCount(Integer *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    piVar3 = (int *)(*(int *)(this + 4) + -8 + iVar2 * 4);
    iVar1 = iVar2 + -1;
    if (*(int *)(*(int *)(this + 4) + (iVar2 + -1) * 4) == 0) {
      while ((iVar2 = iVar1, iVar2 != 0 && (iVar1 = *piVar3, piVar3 = piVar3 + -1, iVar1 == 0))) {
        iVar1 = iVar2 + -1;
      }
    }
  }
  return iVar2;
}
```
