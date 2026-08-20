# CheckDan

`_ZN12PvpUserTable8CheckDanEv`

`PvpUserTable::CheckDan()`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d57c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d57c2  _ZN12PvpUserTable8CheckDanEv
#           PvpUserTable::CheckDan()
# range [0x085d57c2, 0x085d585d]
085d57c2 +0x00:  push   %ebp
085d57c3 +0x01:  mov    %esp,%ebp
085d57c5 +0x03:  sub    $0x28,%esp
085d57c8 +0x06:  mov    0x8(%ebp),%eax
085d57cb +0x09:  add    $0x344,%eax
085d57d0 +0x0e:  movl   $0x8,0x8(%esp)
085d57d8 +0x16:  movl   $0x0,0x4(%esp)
085d57e0 +0x1e:  mov    %eax,(%esp)
085d57e3 +0x21:  call   0807dcc0 <_init+0x5b8>
085d57e8 +0x26:  movl   $0x0,-0x14(%ebp)
085d57ef +0x2d:  jmp    085d5851 <+0x8f>
085d57f1 +0x2f:  movl   $0x0,-0x10(%ebp)
085d57f8 +0x36:  jmp    085d5842 <+0x80>
085d57fa +0x38:  mov    -0x14(%ebp),%ecx
085d57fd +0x3b:  mov    -0x10(%ebp),%edx
085d5800 +0x3e:  mov    0x8(%ebp),%eax
085d5803 +0x41:  shl    $0x3,%ecx
085d5806 +0x44:  lea    (%ecx,%edx,1),%edx
085d5809 +0x47:  add    $0x24,%edx
085d580c +0x4a:  mov    (%eax,%edx,8),%eax
085d580f +0x4d:  mov    %eax,-0xc(%ebp)
085d5812 +0x50:  cmpl   $0x0,-0xc(%ebp)
085d5816 +0x54:  je     085d583d <+0x7b>
085d5818 +0x56:  mov    -0xc(%ebp),%eax
085d581b +0x59:  mov    %eax,(%esp)
085d581e +0x5c:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
085d5823 +0x61:  cmp    $0x9,%eax
085d5826 +0x64:  setg   %al
085d5829 +0x67:  test   %al,%al
085d582b +0x69:  je     085d583e <+0x7c>
085d582d +0x6b:  mov    -0x14(%ebp),%eax
085d5830 +0x6e:  mov    0x8(%ebp),%edx
085d5833 +0x71:  movb   $0x1,0x344(%edx,%eax,1)
085d583b +0x79:  jmp    085d584d <+0x8b>
085d583d +0x7b:  nop
085d583e +0x7c:  addl   $0x1,-0x10(%ebp)
085d5842 +0x80:  cmpl   $0x7,-0x10(%ebp)
085d5846 +0x84:  setle  %al
085d5849 +0x87:  test   %al,%al
085d584b +0x89:  jne    085d57fa <+0x38>
085d584d +0x8b:  addl   $0x1,-0x14(%ebp)
085d5851 +0x8f:  cmpl   $0x7,-0x14(%ebp)
085d5855 +0x93:  setle  %al
085d5858 +0x96:  test   %al,%al
085d585a +0x98:  jne    085d57f1 <+0x2f>
085d585c +0x9a:  leave
085d585d +0x9b:  ret
```

## 反编译 C

```c
// PvpUserTable::CheckDan @ 0x85d57c2

/* PvpUserTable::CheckDan() */

void __thiscall PvpUserTable::CheckDan(PvpUserTable *this)

{
  int iVar1;
  int local_18;
  int local_14;
  
  memset(this + 0x344,0,8);
  local_18 = 0;
  do {
    if (7 < local_18) {
      return;
    }
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      if (*(CUserCharacInfo **)(this + (local_18 * 8 + local_14 + 0x24) * 8) !=
          (CUserCharacInfo *)0x0) {
        iVar1 = CUserCharacInfo::get_pvp_grade
                          (*(CUserCharacInfo **)(this + (local_18 * 8 + local_14 + 0x24) * 8));
        if (9 < iVar1) {
          this[local_18 + 0x344] = (PvpUserTable)0x1;
          break;
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
