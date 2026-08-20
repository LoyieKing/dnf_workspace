# _SetRating

`_ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf`

`online_preliminary::COnlinePreliminary::_SetRating(ENUM_SCHOOL_MATCH_TEAM, float)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560368` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560368  _ZN18online_preliminary18COnlinePreliminary10_SetRatingE22ENUM_SCHOOL_MATCH_TEAMf
#           online_preliminary::COnlinePreliminary::_SetRating(ENUM_SCHOOL_MATCH_TEAM, float)
# range [0x08560368, 0x085603f9]
08560368 +0x00:  push   %ebp
08560369 +0x01:  mov    %esp,%ebp
0856036b +0x03:  push   %ebx
0856036c +0x04:  sub    $0x24,%esp
0856036f +0x07:  movl   $0x0,-0xc(%ebp)
08560376 +0x0e:  jmp    085603e8 <+0x80>
08560378 +0x10:  mov    0xc(%ebp),%edx
0856037b +0x13:  mov    -0xc(%ebp),%ebx
0856037e +0x16:  mov    0x8(%ebp),%ecx
08560381 +0x19:  mov    %edx,%eax
08560383 +0x1b:  shl    $0x2,%eax
08560386 +0x1e:  add    %edx,%eax
08560388 +0x20:  add    %ebx,%eax
0856038a +0x22:  add    $0x2,%eax
0856038d +0x25:  movzbl 0x18(%ecx,%eax,8),%eax
08560392 +0x2a:  test   %al,%al
08560394 +0x2c:  je     085603e4 <+0x7c>
08560396 +0x2e:  mov    0xc(%ebp),%edx
08560399 +0x31:  mov    -0xc(%ebp),%ebx
0856039c +0x34:  mov    0x8(%ebp),%ecx
0856039f +0x37:  mov    %edx,%eax
085603a1 +0x39:  shl    $0x2,%eax
085603a4 +0x3c:  add    %edx,%eax
085603a6 +0x3e:  add    %ebx,%eax
085603a8 +0x40:  add    $0x2,%eax
085603ab +0x43:  mov    0x14(%ecx,%eax,8),%eax
085603af +0x47:  test   %eax,%eax
085603b1 +0x49:  je     085603e4 <+0x7c>
085603b3 +0x4b:  mov    0xc(%ebp),%edx
085603b6 +0x4e:  mov    -0xc(%ebp),%ebx
085603b9 +0x51:  mov    0x8(%ebp),%ecx
085603bc +0x54:  mov    %edx,%eax
085603be +0x56:  shl    $0x2,%eax
085603c1 +0x59:  add    %edx,%eax
085603c3 +0x5b:  add    %ebx,%eax
085603c5 +0x5d:  add    $0x2,%eax
085603c8 +0x60:  mov    0x14(%ecx,%eax,8),%eax
085603cc +0x64:  mov    0x10(%ebp),%edx
085603cf +0x67:  mov    %edx,0x8(%esp)
085603d3 +0x6b:  mov    %eax,0x4(%esp)
085603d7 +0x6f:  mov    0x8(%ebp),%eax
085603da +0x72:  mov    %eax,(%esp)
085603dd +0x75:  call   085600f6 <_ZN18online_preliminary18COnlinePreliminary10_SetRatingEP5CUserf>  ; online_preliminary::COnlinePreliminary::_SetRating(CUser*, float)
085603e2 +0x7a:  jmp    085603f3 <+0x8b>
085603e4 +0x7c:  addl   $0x1,-0xc(%ebp)
085603e8 +0x80:  cmpl   $0x3,-0xc(%ebp)
085603ec +0x84:  setle  %al
085603ef +0x87:  test   %al,%al
085603f1 +0x89:  jne    08560378 <+0x10>
085603f3 +0x8b:  add    $0x24,%esp
085603f6 +0x8e:  pop    %ebx
085603f7 +0x8f:  pop    %ebp
085603f8 +0x90:  ret
085603f9 +0x91:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_SetRating @ 0x8560368

/* online_preliminary::COnlinePreliminary::_SetRating(ENUM_SCHOOL_MATCH_TEAM, float) */

void __thiscall
online_preliminary::COnlinePreliminary::_SetRating
          (COnlinePreliminary *this,int param_2,float param_3)

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
  _SetRating(this,*(CUser **)(this + (param_2 * 5 + local_10 + 2) * 8 + 0x14),param_3);
  return;
}
```
