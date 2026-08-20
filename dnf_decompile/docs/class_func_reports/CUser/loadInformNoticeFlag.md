# loadInformNoticeFlag

`_ZN5CUser20loadInformNoticeFlagEPc`

`CUser::loadInformNoticeFlag(char*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f900  _ZN5CUser20loadInformNoticeFlagEPc
#           CUser::loadInformNoticeFlag(char*)
# range [0x0868f900, 0x0868f955]
0868f900 +0x00:  push   %ebp
0868f901 +0x01:  mov    %esp,%ebp
0868f903 +0x03:  sub    $0x28,%esp
0868f906 +0x06:  mov    0x8(%ebp),%eax
0868f909 +0x09:  mov    %eax,(%esp)
0868f90c +0x0c:  call   0868f8d8 <_ZN5CUser21resetInformNoticeFlagEv>  ; CUser::resetInformNoticeFlag()
0868f911 +0x11:  cmpl   $0x0,0xc(%ebp)
0868f915 +0x15:  je     0868f952 <+0x52>
0868f917 +0x17:  movl   $0x0,-0xc(%ebp)
0868f91e +0x1e:  jmp    0868f93a <+0x3a>
0868f920 +0x20:  mov    -0xc(%ebp),%eax
0868f923 +0x23:  mov    -0xc(%ebp),%edx
0868f926 +0x26:  add    0xc(%ebp),%edx
0868f929 +0x29:  movzbl (%edx),%ecx
0868f92c +0x2c:  mov    0x8(%ebp),%edx
0868f92f +0x2f:  mov    %cl,0x8ebb1(%edx,%eax,1)
0868f936 +0x36:  addl   $0x1,-0xc(%ebp)
0868f93a +0x3a:  cmpl   $0xf,-0xc(%ebp)
0868f93e +0x3e:  setle  %al
0868f941 +0x41:  test   %al,%al
0868f943 +0x43:  jne    0868f920 <+0x20>
0868f945 +0x45:  mov    0x8(%ebp),%eax
0868f948 +0x48:  mov    %eax,(%esp)
0868f94b +0x4b:  call   0868fb22 <_ZN5CUser20sendInformNoticeFlagEv>  ; CUser::sendInformNoticeFlag()
0868f950 +0x50:  jmp    0868f953 <+0x53>
0868f952 +0x52:  nop
0868f953 +0x53:  leave
0868f954 +0x54:  ret
0868f955 +0x55:  nop
```

## 反编译 C

```c
// CUser::loadInformNoticeFlag @ 0x868f900

/* CUser::loadInformNoticeFlag(char*) */

void __thiscall CUser::loadInformNoticeFlag(CUser *this,char *param_1)

{
  int local_10;
  
  resetInformNoticeFlag(this);
  if (param_1 != (char *)0x0) {
    for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
      this[local_10 + 0x8ebb1] = *(CUser *)(param_1 + local_10);
    }
    sendInformNoticeFlag(this);
  }
  return;
}
```
