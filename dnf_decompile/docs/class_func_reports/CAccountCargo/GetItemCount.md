# GetItemCount

`_ZN13CAccountCargo12GetItemCountEv`

`CAccountCargo::GetItemCount()`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a794  _ZN13CAccountCargo12GetItemCountEv
#           CAccountCargo::GetItemCount()
# range [0x0828a794, 0x0828a7db]
0828a794 +0x00:  push   %ebp
0828a795 +0x01:  mov    %esp,%ebp
0828a797 +0x03:  sub    $0x10,%esp
0828a79a +0x06:  movl   $0x0,-0x8(%ebp)
0828a7a1 +0x0d:  movl   $0x0,-0x4(%ebp)
0828a7a8 +0x14:  jmp    0828a7c3 <+0x2f>
0828a7aa +0x16:  mov    -0x4(%ebp),%edx
0828a7ad +0x19:  mov    0x8(%ebp),%eax
0828a7b0 +0x1c:  imul   $0x3d,%edx,%edx
0828a7b3 +0x1f:  mov    0x6(%edx,%eax,1),%eax
0828a7b7 +0x23:  test   %eax,%eax
0828a7b9 +0x25:  je     0828a7bf <+0x2b>
0828a7bb +0x27:  addl   $0x1,-0x8(%ebp)
0828a7bf +0x2b:  addl   $0x1,-0x4(%ebp)
0828a7c3 +0x2f:  mov    0x8(%ebp),%eax
0828a7c6 +0x32:  mov    0xd60(%eax),%eax
0828a7cc +0x38:  cmp    -0x4(%ebp),%eax
0828a7cf +0x3b:  setg   %al
0828a7d2 +0x3e:  test   %al,%al
0828a7d4 +0x40:  jne    0828a7aa <+0x16>
0828a7d6 +0x42:  mov    -0x8(%ebp),%eax
0828a7d9 +0x45:  leave
0828a7da +0x46:  ret
0828a7db +0x47:  nop
```

## 反编译 C

```c
// CAccountCargo::GetItemCount @ 0x828a794

/* CAccountCargo::GetItemCount() */

int __thiscall CAccountCargo::GetItemCount(CAccountCargo *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < *(int *)(this + 0xd60); local_8 = local_8 + 1) {
    if (*(int *)(this + local_8 * 0x3d + 6) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
