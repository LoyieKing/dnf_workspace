# processReturnUserQuestAutoClear

`_ZN5CUser31processReturnUserQuestAutoClearEv`

`CUser::processReturnUserQuestAutoClear()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691e70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691e70  _ZN5CUser31processReturnUserQuestAutoClearEv
#           CUser::processReturnUserQuestAutoClear()
# range [0x08691e70, 0x08691ec3]
08691e70 +0x00:  push   %ebp
08691e71 +0x01:  mov    %esp,%ebp
08691e73 +0x03:  sub    $0x18,%esp
08691e76 +0x06:  mov    0x8(%ebp),%eax
08691e79 +0x09:  mov    %eax,(%esp)
08691e7c +0x0c:  call   085bfd66 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x12c4>  ; global constructors keyed to CParty::cMember::cMember()+0x12c4
08691e81 +0x11:  test   %al,%al
08691e83 +0x13:  je     08691e9b <+0x2b>
08691e85 +0x15:  mov    0x8(%ebp),%eax
08691e88 +0x18:  mov    %eax,(%esp)
08691e8b +0x1b:  call   082a6786 <_GLOBAL__I__ZN4CLog5this_E+0x2bad>  ; global constructors keyed to CLog::this_+0x2bad
08691e90 +0x20:  test   %al,%al
08691e92 +0x22:  je     08691e9b <+0x2b>
08691e94 +0x24:  mov    $0x1,%eax
08691e99 +0x29:  jmp    08691ea0 <+0x30>
08691e9b +0x2b:  mov    $0x0,%eax
08691ea0 +0x30:  test   %al,%al
08691ea2 +0x32:  je     08691ec1 <+0x51>
08691ea4 +0x34:  mov    0x8(%ebp),%eax
08691ea7 +0x37:  mov    %eax,(%esp)
08691eaa +0x3a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08691eaf +0x3f:  sub    $0x1,%eax
08691eb2 +0x42:  mov    %eax,0x4(%esp)
08691eb6 +0x46:  mov    0x8(%ebp),%eax
08691eb9 +0x49:  mov    %eax,(%esp)
08691ebc +0x4c:  call   08692390 <_ZN5CUser14questAutoClearEi>  ; CUser::questAutoClear(int)
08691ec1 +0x51:  leave
08691ec2 +0x52:  ret
08691ec3 +0x53:  nop
```

## 反编译 C

```c
// CUser::processReturnUserQuestAutoClear @ 0x8691e70

/* CUser::processReturnUserQuestAutoClear() */

void __thiscall CUser::processReturnUserQuestAutoClear(CUser *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = IsReturnUser(this);
  if (cVar2 != '\0') {
    cVar2 = IsReturnUserFirstLogin(this);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08691ea0;
    }
  }
  bVar1 = false;
LAB_08691ea0:
  if (bVar1) {
    CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    questAutoClear((int)this);
  }
  return;
}
```
