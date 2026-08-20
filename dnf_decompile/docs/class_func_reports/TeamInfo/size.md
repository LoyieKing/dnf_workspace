# size

`_ZNK8TeamInfo4sizeEv`

`TeamInfo::size() const`

| 类 | 地址 |
|---|---|
| `TeamInfo` | `0x0855cd26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855cd26  _ZNK8TeamInfo4sizeEv
#           TeamInfo::size() const
# range [0x0855cd26, 0x0855cd73]
0855cd26 +0x00:  push   %ebp
0855cd27 +0x01:  mov    %esp,%ebp
0855cd29 +0x03:  sub    $0x10,%esp
0855cd2c +0x06:  movl   $0x0,-0x8(%ebp)
0855cd33 +0x0d:  movl   $0x0,-0x4(%ebp)
0855cd3a +0x14:  jmp    0855cd63 <+0x3d>
0855cd3c +0x16:  mov    -0x4(%ebp),%eax
0855cd3f +0x19:  mov    0x8(%ebp),%ecx
0855cd42 +0x1c:  lea    0x0(,%eax,4),%edx
0855cd49 +0x23:  lea    0x0(,%edx,8),%eax
0855cd50 +0x2a:  sub    %edx,%eax
0855cd52 +0x2c:  movzbl 0xc(%eax,%ecx,1),%eax
0855cd57 +0x31:  test   %al,%al
0855cd59 +0x33:  je     0855cd5f <+0x39>
0855cd5b +0x35:  addl   $0x1,-0x8(%ebp)
0855cd5f +0x39:  addl   $0x1,-0x4(%ebp)
0855cd63 +0x3d:  cmpl   $0x3,-0x4(%ebp)
0855cd67 +0x41:  setle  %al
0855cd6a +0x44:  test   %al,%al
0855cd6c +0x46:  jne    0855cd3c <+0x16>
0855cd6e +0x48:  mov    -0x8(%ebp),%eax
0855cd71 +0x4b:  leave
0855cd72 +0x4c:  ret
0855cd73 +0x4d:  nop
```

## 反编译 C

```c
// TeamInfo::size @ 0x855cd26

/* TeamInfo::size() const */

int __thiscall TeamInfo::size(TeamInfo *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (this[local_8 * 0x1c + 0xc] != (TeamInfo)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
