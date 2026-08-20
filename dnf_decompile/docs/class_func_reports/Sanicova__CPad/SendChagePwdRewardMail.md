# SendChagePwdRewardMail

`_ZN8Sanicova4CPad22SendChagePwdRewardMailEP5CUser`

`Sanicova::CPad::SendChagePwdRewardMail(CUser*)`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x0859981e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859981e  _ZN8Sanicova4CPad22SendChagePwdRewardMailEP5CUser
#           Sanicova::CPad::SendChagePwdRewardMail(CUser*)
# range [0x0859981e, 0x0859984b]
0859981e +0x00:  push   %ebp
0859981f +0x01:  mov    %esp,%ebp
08599821 +0x03:  sub    $0x18,%esp
08599824 +0x06:  movl   $0x0,0x4(%esp)
0859982c +0x0e:  mov    0x8(%ebp),%eax
0859982f +0x11:  mov    %eax,(%esp)
08599832 +0x14:  call   085999e8 <_GLOBAL__I__ZN8Sanicova4CPad4initEv+0x1c>  ; global constructors keyed to Sanicova::CPad::init()+0x1c
08599837 +0x19:  movl   $0x0,0x4(%esp)
0859983f +0x21:  mov    0x8(%ebp),%eax
08599842 +0x24:  mov    %eax,(%esp)
08599845 +0x27:  call   084ebdb2 <_GLOBAL__I__Z7getUserj+0x2d64>  ; global constructors keyed to getUser(unsigned int)+0x2d64
0859984a +0x2c:  leave
0859984b +0x2d:  ret
```

## 反编译 C

```c
// Sanicova::CPad::SendChagePwdRewardMail @ 0x859981e

/* Sanicova::CPad::SendChagePwdRewardMail(CUser*) */

void Sanicova::CPad::SendChagePwdRewardMail(CUser *param_1)

{
  setChangedPwd((CPad *)param_1,false);
  setAdvideChangePwd((CPad *)param_1,false);
  return;
}
```
