# _IncreaseLoseCount

`_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM`

`online_preliminary::COnlinePreliminary::_IncreaseLoseCount(ENUM_SCHOOL_MATCH_TEAM)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560484  _ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountE22ENUM_SCHOOL_MATCH_TEAM
#           online_preliminary::COnlinePreliminary::_IncreaseLoseCount(ENUM_SCHOOL_MATCH_TEAM)
# range [0x08560484, 0x0856050d]
08560484 +0x00:  push   %ebp
08560485 +0x01:  mov    %esp,%ebp
08560487 +0x03:  push   %ebx
08560488 +0x04:  sub    $0x24,%esp
0856048b +0x07:  movl   $0x0,-0xc(%ebp)
08560492 +0x0e:  jmp    085604fd <+0x79>
08560494 +0x10:  mov    0xc(%ebp),%edx
08560497 +0x13:  mov    -0xc(%ebp),%ebx
0856049a +0x16:  mov    0x8(%ebp),%ecx
0856049d +0x19:  mov    %edx,%eax
0856049f +0x1b:  shl    $0x2,%eax
085604a2 +0x1e:  add    %edx,%eax
085604a4 +0x20:  add    %ebx,%eax
085604a6 +0x22:  add    $0x2,%eax
085604a9 +0x25:  movzbl 0x18(%ecx,%eax,8),%eax
085604ae +0x2a:  test   %al,%al
085604b0 +0x2c:  je     085604f9 <+0x75>
085604b2 +0x2e:  mov    0xc(%ebp),%edx
085604b5 +0x31:  mov    -0xc(%ebp),%ebx
085604b8 +0x34:  mov    0x8(%ebp),%ecx
085604bb +0x37:  mov    %edx,%eax
085604bd +0x39:  shl    $0x2,%eax
085604c0 +0x3c:  add    %edx,%eax
085604c2 +0x3e:  add    %ebx,%eax
085604c4 +0x40:  add    $0x2,%eax
085604c7 +0x43:  mov    0x14(%ecx,%eax,8),%eax
085604cb +0x47:  test   %eax,%eax
085604cd +0x49:  je     085604f9 <+0x75>
085604cf +0x4b:  mov    0xc(%ebp),%edx
085604d2 +0x4e:  mov    -0xc(%ebp),%ebx
085604d5 +0x51:  mov    0x8(%ebp),%ecx
085604d8 +0x54:  mov    %edx,%eax
085604da +0x56:  shl    $0x2,%eax
085604dd +0x59:  add    %edx,%eax
085604df +0x5b:  add    %ebx,%eax
085604e1 +0x5d:  add    $0x2,%eax
085604e4 +0x60:  mov    0x14(%ecx,%eax,8),%eax
085604e8 +0x64:  mov    %eax,0x4(%esp)
085604ec +0x68:  mov    0x8(%ebp),%eax
085604ef +0x6b:  mov    %eax,(%esp)
085604f2 +0x6e:  call   085601b8 <_ZN18online_preliminary18COnlinePreliminary18_IncreaseLoseCountEP5CUser>  ; online_preliminary::COnlinePreliminary::_IncreaseLoseCount(CUser*)
085604f7 +0x73:  jmp    08560508 <+0x84>
085604f9 +0x75:  addl   $0x1,-0xc(%ebp)
085604fd +0x79:  cmpl   $0x3,-0xc(%ebp)
08560501 +0x7d:  setle  %al
08560504 +0x80:  test   %al,%al
08560506 +0x82:  jne    08560494 <+0x10>
08560508 +0x84:  add    $0x24,%esp
0856050b +0x87:  pop    %ebx
0856050c +0x88:  pop    %ebp
0856050d +0x89:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_IncreaseLoseCount @ 0x8560484

/* online_preliminary::COnlinePreliminary::_IncreaseLoseCount(ENUM_SCHOOL_MATCH_TEAM) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseLoseCount(COnlinePreliminary *this,int param_2)

{
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return;
    }
    if ((this[(param_2 * 5 + local_10 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14) != 0)) break;
    local_10 = local_10 + 1;
  }
  _IncreaseLoseCount(this,*(CUser **)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14));
  return;
}
```
