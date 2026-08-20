# DoEvent

`_ZN17CAradRyosikaEvent7DoEventEP5CUseriii`

`CAradRyosikaEvent::DoEvent(CUser*, int, int, int)`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a107c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a107c  _ZN17CAradRyosikaEvent7DoEventEP5CUseriii
#           CAradRyosikaEvent::DoEvent(CUser*, int, int, int)
# range [0x081a107c, 0x081a10f8]
081a107c +0x00:  push   %ebp
081a107d +0x01:  mov    %esp,%ebp
081a107f +0x03:  sub    $0x28,%esp
081a1082 +0x06:  cmpl   $0x0,0xc(%ebp)
081a1086 +0x0a:  je     081a10f6 <+0x7a>
081a1088 +0x0c:  mov    0x8(%ebp),%eax
081a108b +0x0f:  mov    (%eax),%eax
081a108d +0x11:  add    $0x34,%eax
081a1090 +0x14:  mov    (%eax),%edx
081a1092 +0x16:  mov    0x8(%ebp),%eax
081a1095 +0x19:  movl   $0x0,0x4(%esp)
081a109d +0x21:  mov    %eax,(%esp)
081a10a0 +0x24:  call   *%edx
081a10a2 +0x26:  test   %al,%al
081a10a4 +0x28:  je     081a10c3 <+0x47>
081a10a6 +0x2a:  mov    0xc(%ebp),%eax
081a10a9 +0x2d:  mov    %eax,0x4(%esp)
081a10ad +0x31:  mov    0x8(%ebp),%eax
081a10b0 +0x34:  mov    %eax,(%esp)
081a10b3 +0x37:  call   081a0fda <_ZN17CAradRyosikaEvent15ApplyDatePeriodEP5CUser>  ; CAradRyosikaEvent::ApplyDatePeriod(CUser*)
081a10b8 +0x3c:  test   %al,%al
081a10ba +0x3e:  je     081a10c3 <+0x47>
081a10bc +0x40:  mov    $0x1,%eax
081a10c1 +0x45:  jmp    081a10c8 <+0x4c>
081a10c3 +0x47:  mov    $0x0,%eax
081a10c8 +0x4c:  test   %al,%al
081a10ca +0x4e:  je     081a10f7 <+0x7b>
081a10cc +0x50:  mov    0x18(%ebp),%eax
081a10cf +0x53:  mov    %eax,0x10(%esp)
081a10d3 +0x57:  movl   $0x1,0xc(%esp)
081a10db +0x5f:  mov    0x10(%ebp),%eax
081a10de +0x62:  mov    %eax,0x8(%esp)
081a10e2 +0x66:  mov    0xc(%ebp),%eax
081a10e5 +0x69:  mov    %eax,0x4(%esp)
081a10e9 +0x6d:  mov    0x8(%ebp),%eax
081a10ec +0x70:  mov    %eax,(%esp)
081a10ef +0x73:  call   081a0fe4 <_ZN17CAradRyosikaEvent8SendMailEP5CUseriii>  ; CAradRyosikaEvent::SendMail(CUser*, int, int, int)
081a10f4 +0x78:  jmp    081a10f7 <+0x7b>
081a10f6 +0x7a:  nop
081a10f7 +0x7b:  leave
081a10f8 +0x7c:  ret
```

## 反编译 C

```c
// CAradRyosikaEvent::DoEvent @ 0x81a107c

/* CAradRyosikaEvent::DoEvent(CUser*, int, int, int) */

void __thiscall
CAradRyosikaEvent::DoEvent
          (CAradRyosikaEvent *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  
  if (param_1 != (CUser *)0x0) {
    cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
    if ((cVar2 == '\0') || (cVar2 = ApplyDatePeriod((CUser *)this), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      SendMail(this,param_1,param_2,1,param_4);
    }
    return;
  }
  return;
}
```
