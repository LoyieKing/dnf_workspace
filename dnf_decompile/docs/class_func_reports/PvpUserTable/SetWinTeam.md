# SetWinTeam

`_ZN12PvpUserTable10SetWinTeamEi`

`PvpUserTable::SetWinTeam(int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d585e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d585e  _ZN12PvpUserTable10SetWinTeamEi
#           PvpUserTable::SetWinTeam(int)
# range [0x085d585e, 0x085d58d9]
085d585e +0x00:  push   %ebp
085d585f +0x01:  mov    %esp,%ebp
085d5861 +0x03:  sub    $0x10,%esp
085d5864 +0x06:  mov    0x8(%ebp),%eax
085d5867 +0x09:  mov    0xc(%ebp),%edx
085d586a +0x0c:  mov    %edx,0x320(%eax)
085d5870 +0x12:  movl   $0x0,-0x8(%ebp)
085d5877 +0x19:  jmp    085d58cd <+0x6f>
085d5879 +0x1b:  movl   $0x0,-0x4(%ebp)
085d5880 +0x22:  jmp    085d58be <+0x60>
085d5882 +0x24:  mov    -0x8(%ebp),%eax
085d5885 +0x27:  cmp    0xc(%ebp),%eax
085d5888 +0x2a:  jne    085d58a3 <+0x45>
085d588a +0x2c:  mov    -0x8(%ebp),%ecx
085d588d +0x2f:  mov    -0x4(%ebp),%edx
085d5890 +0x32:  mov    0x8(%ebp),%eax
085d5893 +0x35:  shl    $0x3,%ecx
085d5896 +0x38:  lea    (%ecx,%edx,1),%edx
085d5899 +0x3b:  add    $0x24,%edx
085d589c +0x3e:  movb   $0x1,0x4(%eax,%edx,8)
085d58a1 +0x43:  jmp    085d58ba <+0x5c>
085d58a3 +0x45:  mov    -0x8(%ebp),%ecx
085d58a6 +0x48:  mov    -0x4(%ebp),%edx
085d58a9 +0x4b:  mov    0x8(%ebp),%eax
085d58ac +0x4e:  shl    $0x3,%ecx
085d58af +0x51:  lea    (%ecx,%edx,1),%edx
085d58b2 +0x54:  add    $0x24,%edx
085d58b5 +0x57:  movb   $0x0,0x4(%eax,%edx,8)
085d58ba +0x5c:  addl   $0x1,-0x4(%ebp)
085d58be +0x60:  cmpl   $0x7,-0x4(%ebp)
085d58c2 +0x64:  setle  %al
085d58c5 +0x67:  test   %al,%al
085d58c7 +0x69:  jne    085d5882 <+0x24>
085d58c9 +0x6b:  addl   $0x1,-0x8(%ebp)
085d58cd +0x6f:  cmpl   $0x7,-0x8(%ebp)
085d58d1 +0x73:  setle  %al
085d58d4 +0x76:  test   %al,%al
085d58d6 +0x78:  jne    085d5879 <+0x1b>
085d58d8 +0x7a:  leave
085d58d9 +0x7b:  ret
```

## 反编译 C

```c
// PvpUserTable::SetWinTeam @ 0x85d585e

/* PvpUserTable::SetWinTeam(int) */

void __thiscall PvpUserTable::SetWinTeam(PvpUserTable *this,int param_1)

{
  int local_c;
  int local_8;
  
  *(int *)(this + 800) = param_1;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      if (local_c == param_1) {
        this[(local_c * 8 + local_8 + 0x24) * 8 + 4] = (PvpUserTable)0x1;
      }
      else {
        this[(local_c * 8 + local_8 + 0x24) * 8 + 4] = (PvpUserTable)0x0;
      }
    }
  }
  return;
}
```
