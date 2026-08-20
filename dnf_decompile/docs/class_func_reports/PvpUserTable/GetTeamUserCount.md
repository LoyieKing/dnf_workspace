# GetTeamUserCount

`_ZN12PvpUserTable16GetTeamUserCountEi`

`PvpUserTable::GetTeamUserCount(int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4a50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4a50  _ZN12PvpUserTable16GetTeamUserCountEi
#           PvpUserTable::GetTeamUserCount(int)
# range [0x085d4a50, 0x085d4ab7]
085d4a50 +0x00:  push   %ebp
085d4a51 +0x01:  mov    %esp,%ebp
085d4a53 +0x03:  sub    $0x18,%esp
085d4a56 +0x06:  mov    0xc(%ebp),%eax
085d4a59 +0x09:  mov    %eax,0x4(%esp)
085d4a5d +0x0d:  mov    0x8(%ebp),%eax
085d4a60 +0x10:  mov    %eax,(%esp)
085d4a63 +0x13:  call   085d4a14 <_ZN12PvpUserTable11IsValidTeamEi>  ; PvpUserTable::IsValidTeam(int)
085d4a68 +0x18:  xor    $0x1,%eax
085d4a6b +0x1b:  test   %al,%al
085d4a6d +0x1d:  je     085d4a76 <+0x26>
085d4a6f +0x1f:  mov    $0xffffffff,%eax
085d4a74 +0x24:  jmp    085d4ab5 <+0x65>
085d4a76 +0x26:  movl   $0x0,-0x8(%ebp)
085d4a7d +0x2d:  movl   $0x0,-0x4(%ebp)
085d4a84 +0x34:  jmp    085d4aa7 <+0x57>
085d4a86 +0x36:  mov    0xc(%ebp),%ecx
085d4a89 +0x39:  mov    -0x4(%ebp),%edx
085d4a8c +0x3c:  mov    0x8(%ebp),%eax
085d4a8f +0x3f:  shl    $0x3,%ecx
085d4a92 +0x42:  lea    (%ecx,%edx,1),%edx
085d4a95 +0x45:  add    $0x24,%edx
085d4a98 +0x48:  mov    (%eax,%edx,8),%eax
085d4a9b +0x4b:  test   %eax,%eax
085d4a9d +0x4d:  je     085d4aa3 <+0x53>
085d4a9f +0x4f:  addl   $0x1,-0x8(%ebp)
085d4aa3 +0x53:  addl   $0x1,-0x4(%ebp)
085d4aa7 +0x57:  cmpl   $0x7,-0x4(%ebp)
085d4aab +0x5b:  setle  %al
085d4aae +0x5e:  test   %al,%al
085d4ab0 +0x60:  jne    085d4a86 <+0x36>
085d4ab2 +0x62:  mov    -0x8(%ebp),%eax
085d4ab5 +0x65:  leave
085d4ab6 +0x66:  ret
085d4ab7 +0x67:  nop
```

## 反编译 C

```c
// PvpUserTable::GetTeamUserCount @ 0x85d4a50

/* PvpUserTable::GetTeamUserCount(int) */

int __thiscall PvpUserTable::GetTeamUserCount(PvpUserTable *this,int param_1)

{
  char cVar1;
  int local_c;
  int local_8;
  
  cVar1 = IsValidTeam(this,param_1);
  if (cVar1 == '\x01') {
    local_c = 0;
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      if (*(int *)(this + (param_1 * 8 + local_8 + 0x24) * 8) != 0) {
        local_c = local_c + 1;
      }
    }
  }
  else {
    local_c = -1;
  }
  return local_c;
}
```
