# setMissionValue

`_ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj`

`HeroMissionEvent::setMissionValue(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08167216` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08167216  _ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj
#           HeroMissionEvent::setMissionValue(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
# range [0x08167216, 0x081672bd]
08167216 +0x00:  push   %ebp
08167217 +0x01:  mov    %esp,%ebp
08167219 +0x03:  sub    $0x38,%esp
0816721c +0x06:  mov    0x8(%ebp),%eax
0816721f +0x09:  mov    (%eax),%eax
08167221 +0x0b:  add    $0x34,%eax
08167224 +0x0e:  mov    (%eax),%edx
08167226 +0x10:  mov    0x8(%ebp),%eax
08167229 +0x13:  movl   $0x0,0x4(%esp)
08167231 +0x1b:  mov    %eax,(%esp)
08167234 +0x1e:  call   *%edx
08167236 +0x20:  xor    $0x1,%eax
08167239 +0x23:  test   %al,%al
0816723b +0x25:  jne    081672ba <+0xa4>
0816723d +0x27:  cmpl   $0x0,0xc(%ebp)
08167241 +0x2b:  jne    08167271 <+0x5b>
08167243 +0x2d:  movl   $"[HeroMission] User is null.",0x10(%esp)
0816724b +0x35:  movl   $0x2a6,0xc(%esp)
08167253 +0x3d:  movl   $&_ZZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEjE19__PRETTY_FUNCTION__,0x8(%esp)
0816725b +0x45:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08167263 +0x4d:  movl   $0x1,(%esp)
0816726a +0x54:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816726f +0x59:  jmp    081672bb <+0xa5>
08167271 +0x5b:  movl   $0x0,-0xc(%ebp)
08167278 +0x62:  lea    -0xc(%ebp),%eax
0816727b +0x65:  mov    %eax,0xc(%esp)
0816727f +0x69:  mov    0x10(%ebp),%eax
08167282 +0x6c:  mov    %eax,0x8(%esp)
08167286 +0x70:  mov    0xc(%ebp),%eax
08167289 +0x73:  mov    %eax,0x4(%esp)
0816728d +0x77:  mov    0x8(%ebp),%eax
08167290 +0x7a:  mov    %eax,(%esp)
08167293 +0x7d:  call   08168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>  ; HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T, HeroMissionValue*&)
08167298 +0x82:  test   %al,%al
0816729a +0x84:  je     081672a6 <+0x90>
0816729c +0x86:  mov    -0xc(%ebp),%eax
0816729f +0x89:  mov    0x14(%ebp),%edx
081672a2 +0x8c:  mov    %dx,0x8(%eax)
081672a6 +0x90:  mov    0xc(%ebp),%eax
081672a9 +0x93:  mov    %eax,0x4(%esp)
081672ad +0x97:  mov    0x8(%ebp),%eax
081672b0 +0x9a:  mov    %eax,(%esp)
081672b3 +0x9d:  call   0816770e <_ZN16HeroMissionEvent15sendMissionDataEP5CUser>  ; HeroMissionEvent::sendMissionData(CUser*)
081672b8 +0xa2:  jmp    081672bb <+0xa5>
081672ba +0xa4:  nop
081672bb +0xa5:  leave
081672bc +0xa6:  ret
081672bd +0xa7:  nop
```

## 反编译 C

```c
// HeroMissionEvent::setMissionValue @ 0x8167216

/* HeroMissionEvent::setMissionValue(CUser*, HeroMissionCondition::MissionNo::T, unsigned int) */

void __thiscall
HeroMissionEvent::setMissionValue
          (HeroMissionEvent *this,CUser *param_1,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  int local_10 [3];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::setMissionValue(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)"
                 ,0x2a6,"[HeroMission] User is null.");
    }
    else {
      local_10[0] = 0;
      cVar1 = findMissionValue(this,param_1,param_3,local_10);
      if (cVar1 != '\0') {
        *(undefined2 *)(local_10[0] + 8) = param_4;
      }
      sendMissionData(this,param_1);
    }
  }
  return;
}
```
