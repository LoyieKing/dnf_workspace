# _IncreaseWinCount

`_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM`

`online_preliminary::COnlinePreliminary::_IncreaseWinCount(ENUM_SCHOOL_MATCH_TEAM)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085603fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085603fa  _ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountE22ENUM_SCHOOL_MATCH_TEAM
#           online_preliminary::COnlinePreliminary::_IncreaseWinCount(ENUM_SCHOOL_MATCH_TEAM)
# range [0x085603fa, 0x08560483]
085603fa +0x00:  push   %ebp
085603fb +0x01:  mov    %esp,%ebp
085603fd +0x03:  push   %ebx
085603fe +0x04:  sub    $0x24,%esp
08560401 +0x07:  movl   $0x0,-0xc(%ebp)
08560408 +0x0e:  jmp    08560473 <+0x79>
0856040a +0x10:  mov    0xc(%ebp),%edx
0856040d +0x13:  mov    -0xc(%ebp),%ebx
08560410 +0x16:  mov    0x8(%ebp),%ecx
08560413 +0x19:  mov    %edx,%eax
08560415 +0x1b:  shl    $0x2,%eax
08560418 +0x1e:  add    %edx,%eax
0856041a +0x20:  add    %ebx,%eax
0856041c +0x22:  add    $0x2,%eax
0856041f +0x25:  movzbl 0x18(%ecx,%eax,8),%eax
08560424 +0x2a:  test   %al,%al
08560426 +0x2c:  je     0856046f <+0x75>
08560428 +0x2e:  mov    0xc(%ebp),%edx
0856042b +0x31:  mov    -0xc(%ebp),%ebx
0856042e +0x34:  mov    0x8(%ebp),%ecx
08560431 +0x37:  mov    %edx,%eax
08560433 +0x39:  shl    $0x2,%eax
08560436 +0x3c:  add    %edx,%eax
08560438 +0x3e:  add    %ebx,%eax
0856043a +0x40:  add    $0x2,%eax
0856043d +0x43:  mov    0x14(%ecx,%eax,8),%eax
08560441 +0x47:  test   %eax,%eax
08560443 +0x49:  je     0856046f <+0x75>
08560445 +0x4b:  mov    0xc(%ebp),%edx
08560448 +0x4e:  mov    -0xc(%ebp),%ebx
0856044b +0x51:  mov    0x8(%ebp),%ecx
0856044e +0x54:  mov    %edx,%eax
08560450 +0x56:  shl    $0x2,%eax
08560453 +0x59:  add    %edx,%eax
08560455 +0x5b:  add    %ebx,%eax
08560457 +0x5d:  add    $0x2,%eax
0856045a +0x60:  mov    0x14(%ecx,%eax,8),%eax
0856045e +0x64:  mov    %eax,0x4(%esp)
08560462 +0x68:  mov    0x8(%ebp),%eax
08560465 +0x6b:  mov    %eax,(%esp)
08560468 +0x6e:  call   0856015e <_ZN18online_preliminary18COnlinePreliminary17_IncreaseWinCountEP5CUser>  ; online_preliminary::COnlinePreliminary::_IncreaseWinCount(CUser*)
0856046d +0x73:  jmp    0856047e <+0x84>
0856046f +0x75:  addl   $0x1,-0xc(%ebp)
08560473 +0x79:  cmpl   $0x3,-0xc(%ebp)
08560477 +0x7d:  setle  %al
0856047a +0x80:  test   %al,%al
0856047c +0x82:  jne    0856040a <+0x10>
0856047e +0x84:  add    $0x24,%esp
08560481 +0x87:  pop    %ebx
08560482 +0x88:  pop    %ebp
08560483 +0x89:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_IncreaseWinCount @ 0x85603fa

/* online_preliminary::COnlinePreliminary::_IncreaseWinCount(ENUM_SCHOOL_MATCH_TEAM) */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseWinCount(COnlinePreliminary *this,int param_2)

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
  _IncreaseWinCount(this,*(CUser **)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14));
  return;
}
```
