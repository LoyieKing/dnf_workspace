# SendChagePwdReward

`_ZN8Sanicova4CPad18SendChagePwdRewardEP5CUser`

`Sanicova::CPad::SendChagePwdReward(CUser*)`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x085997b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085997b8  _ZN8Sanicova4CPad18SendChagePwdRewardEP5CUser
#           Sanicova::CPad::SendChagePwdReward(CUser*)
# range [0x085997b8, 0x0859981d]
085997b8 +0x00:  push   %ebp
085997b9 +0x01:  mov    %esp,%ebp
085997bb +0x03:  sub    $0x18,%esp
085997be +0x06:  mov    0x8(%ebp),%eax
085997c1 +0x09:  mov    %eax,(%esp)
085997c4 +0x0c:  call   08265302 <_GLOBAL__I__ZN30Dispatcher_SecurityCardAuthRpy4readER9PacketBufR8MSG_BASE+0xda>  ; global constructors keyed to Dispatcher_SecurityCardAuthRpy::read(PacketBuf&, MSG_BASE&)+0xda
085997c9 +0x11:  test   %al,%al
085997cb +0x13:  je     0859981b <+0x63>
085997cd +0x15:  movl   $0x0,0x4(%esp)
085997d5 +0x1d:  mov    0x8(%ebp),%eax
085997d8 +0x20:  mov    %eax,(%esp)
085997db +0x23:  call   084ebdb2 <_GLOBAL__I__Z7getUserj+0x2d64>  ; global constructors keyed to getUser(unsigned int)+0x2d64
085997e0 +0x28:  mov    0xc(%ebp),%eax
085997e3 +0x2b:  mov    %eax,(%esp)
085997e6 +0x2e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085997eb +0x33:  test   %eax,%eax
085997ed +0x35:  sete   %al
085997f0 +0x38:  test   %al,%al
085997f2 +0x3a:  je     08599809 <+0x51>
085997f4 +0x3c:  movl   $0x1,0x4(%esp)
085997fc +0x44:  mov    0x8(%ebp),%eax
085997ff +0x47:  mov    %eax,(%esp)
08599802 +0x4a:  call   085999e8 <_GLOBAL__I__ZN8Sanicova4CPad4initEv+0x1c>  ; global constructors keyed to Sanicova::CPad::init()+0x1c
08599807 +0x4f:  jmp    0859981b <+0x63>
08599809 +0x51:  mov    0xc(%ebp),%eax
0859980c +0x54:  mov    %eax,0x4(%esp)
08599810 +0x58:  mov    0x8(%ebp),%eax
08599813 +0x5b:  mov    %eax,(%esp)
08599816 +0x5e:  call   0859981e <_ZN8Sanicova4CPad22SendChagePwdRewardMailEP5CUser>  ; Sanicova::CPad::SendChagePwdRewardMail(CUser*)
0859981b +0x63:  leave
0859981c +0x64:  ret
0859981d +0x65:  nop
```

## 反编译 C

```c
// Sanicova::CPad::SendChagePwdReward @ 0x85997b8

/* Sanicova::CPad::SendChagePwdReward(CUser*) */

void __thiscall Sanicova::CPad::SendChagePwdReward(CPad *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = getAdvideChangePwd(this);
  if (cVar1 != '\0') {
    setAdvideChangePwd(this,false);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      setChangedPwd(this,true);
    }
    else {
      SendChagePwdRewardMail((CUser *)this);
    }
  }
  return;
}
```
