# GetAllKillUserIndex

`_ZN15CRelayBattleMgr19GetAllKillUserIndexEPi`

`CRelayBattleMgr::GetAllKillUserIndex(int*)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085ded74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ded74  _ZN15CRelayBattleMgr19GetAllKillUserIndexEPi
#           CRelayBattleMgr::GetAllKillUserIndex(int*)
# range [0x085ded74, 0x085dee21]
085ded74 +0x00:  push   %ebp
085ded75 +0x01:  mov    %esp,%ebp
085ded77 +0x03:  sub    $0x10,%esp
085ded7a +0x06:  movl   $0x0,-0x4(%ebp)
085ded81 +0x0d:  jmp    085dee0b <+0x97>
085ded86 +0x12:  mov    -0x4(%ebp),%edx
085ded89 +0x15:  mov    0x8(%ebp),%ecx
085ded8c +0x18:  mov    %edx,%eax
085ded8e +0x1a:  add    %eax,%eax
085ded90 +0x1c:  add    %edx,%eax
085ded92 +0x1e:  shl    $0x2,%eax
085ded95 +0x21:  movzbl 0x8(%eax,%ecx,1),%eax
085ded9a +0x26:  cmp    $0x1,%al
085ded9c +0x28:  jle    085dee07 <+0x93>
085ded9e +0x2a:  mov    -0x4(%ebp),%edx
085deda1 +0x2d:  mov    0x8(%ebp),%ecx
085deda4 +0x30:  mov    %edx,%eax
085deda6 +0x32:  add    %eax,%eax
085deda8 +0x34:  add    %edx,%eax
085dedaa +0x36:  shl    $0x2,%eax
085dedad +0x39:  movzbl 0x8(%eax,%ecx,1),%eax
085dedb2 +0x3e:  movsbl %al,%edx
085dedb5 +0x41:  mov    0x8(%ebp),%eax
085dedb8 +0x44:  mov    0x78(%eax),%eax
085dedbb +0x47:  mov    %eax,%ecx
085dedbd +0x49:  shr    $0x1f,%ecx
085dedc0 +0x4c:  lea    (%ecx,%eax,1),%eax
085dedc3 +0x4f:  sar    %eax
085dedc5 +0x51:  cmp    %eax,%edx
085dedc7 +0x53:  jl     085dee07 <+0x93>
085dedc9 +0x55:  mov    -0x4(%ebp),%edx
085dedcc +0x58:  mov    0x8(%ebp),%ecx
085dedcf +0x5b:  mov    %edx,%eax
085dedd1 +0x5d:  add    %eax,%eax
085dedd3 +0x5f:  add    %edx,%eax
085dedd5 +0x61:  shl    $0x2,%eax
085dedd8 +0x64:  mov    (%eax,%ecx,1),%eax
085deddb +0x67:  cmp    $0x2,%eax
085dedde +0x6a:  jne    085dee07 <+0x93>
085dede0 +0x6c:  cmpl   $0x0,0xc(%ebp)
085dede4 +0x70:  je     085dee02 <+0x8e>
085dede6 +0x72:  mov    -0x4(%ebp),%edx
085dede9 +0x75:  mov    0x8(%ebp),%ecx
085dedec +0x78:  mov    %edx,%eax
085dedee +0x7a:  add    %eax,%eax
085dedf0 +0x7c:  add    %edx,%eax
085dedf2 +0x7e:  shl    $0x2,%eax
085dedf5 +0x81:  movzbl 0x6(%eax,%ecx,1),%eax
085dedfa +0x86:  movsbl %al,%edx
085dedfd +0x89:  mov    0xc(%ebp),%eax
085dee00 +0x8c:  mov    %edx,(%eax)
085dee02 +0x8e:  mov    -0x4(%ebp),%eax
085dee05 +0x91:  jmp    085dee1f <+0xab>
085dee07 +0x93:  addl   $0x1,-0x4(%ebp)
085dee0b +0x97:  cmpl   $0x7,-0x4(%ebp)
085dee0f +0x9b:  setle  %al
085dee12 +0x9e:  test   %al,%al
085dee14 +0xa0:  jne    085ded86 <+0x12>
085dee1a +0xa6:  mov    $0xffffffff,%eax
085dee1f +0xab:  leave
085dee20 +0xac:  ret
085dee21 +0xad:  nop
```

## 反编译 C

```c
// CRelayBattleMgr::GetAllKillUserIndex @ 0x85ded74

/* CRelayBattleMgr::GetAllKillUserIndex(int*) */

int __thiscall CRelayBattleMgr::GetAllKillUserIndex(CRelayBattleMgr *this,int *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return -1;
    }
    if ((('\x01' < (char)this[local_8 * 0xc + 8]) &&
        (*(int *)(this + 0x78) / 2 <= (int)(char)this[local_8 * 0xc + 8])) &&
       (*(int *)(this + local_8 * 0xc) == 2)) break;
    local_8 = local_8 + 1;
  }
  if (param_1 == (int *)0x0) {
    return local_8;
  }
  *param_1 = (int)(char)this[local_8 * 0xc + 6];
  return local_8;
}
```
