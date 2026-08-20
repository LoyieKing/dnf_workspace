# setMissionForGm

`_ZN16HeroMissionEvent15setMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TEj`

`HeroMissionEvent::setMissionForGm(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x081679ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081679ac  _ZN16HeroMissionEvent15setMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TEj
#           HeroMissionEvent::setMissionForGm(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
# range [0x081679ac, 0x08167a39]
081679ac +0x00:  push   %ebp
081679ad +0x01:  mov    %esp,%ebp
081679af +0x03:  sub    $0x28,%esp
081679b2 +0x06:  movl   $0x0,-0x10(%ebp)
081679b9 +0x0d:  mov    0x10(%ebp),%eax
081679bc +0x10:  lea    -0x10(%ebp),%edx
081679bf +0x13:  mov    %edx,0xc(%esp)
081679c3 +0x17:  mov    %eax,0x8(%esp)
081679c7 +0x1b:  mov    0xc(%ebp),%eax
081679ca +0x1e:  mov    %eax,0x4(%esp)
081679ce +0x22:  mov    0x8(%ebp),%eax
081679d1 +0x25:  mov    %eax,(%esp)
081679d4 +0x28:  call   08168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>  ; HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T, HeroMissionValue*&)
081679d9 +0x2d:  test   %al,%al
081679db +0x2f:  je     08167a37 <+0x8b>
081679dd +0x31:  mov    0x8(%ebp),%eax
081679e0 +0x34:  lea    0xc(%eax),%ecx
081679e3 +0x37:  lea    -0x14(%ebp),%eax
081679e6 +0x3a:  lea    0x10(%ebp),%edx
081679e9 +0x3d:  mov    %edx,0x8(%esp)
081679ed +0x41:  mov    %ecx,0x4(%esp)
081679f1 +0x45:  mov    %eax,(%esp)
081679f4 +0x48:  call   08168964 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7c5>  ; global constructors keyed to HeroMissionValue::clear()+0x7c5
081679f9 +0x4d:  sub    $0x4,%esp
081679fc +0x50:  mov    0x8(%ebp),%eax
081679ff +0x53:  lea    0xc(%eax),%edx
08167a02 +0x56:  lea    -0xc(%ebp),%eax
08167a05 +0x59:  mov    %edx,0x4(%esp)
08167a09 +0x5d:  mov    %eax,(%esp)
08167a0c +0x60:  call   0816871e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x57f>  ; global constructors keyed to HeroMissionValue::clear()+0x57f
08167a11 +0x65:  sub    $0x4,%esp
08167a14 +0x68:  lea    -0xc(%ebp),%eax
08167a17 +0x6b:  mov    %eax,0x4(%esp)
08167a1b +0x6f:  lea    -0x14(%ebp),%eax
08167a1e +0x72:  mov    %eax,(%esp)
08167a21 +0x75:  call   08168990 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7f1>  ; global constructors keyed to HeroMissionValue::clear()+0x7f1
08167a26 +0x7a:  test   %al,%al
08167a28 +0x7c:  jne    08167a36 <+0x8a>
08167a2a +0x7e:  mov    -0x10(%ebp),%eax
08167a2d +0x81:  mov    0x14(%ebp),%edx
08167a30 +0x84:  mov    %dx,0x4(%eax)
08167a34 +0x88:  jmp    08167a37 <+0x8b>
08167a36 +0x8a:  nop
08167a37 +0x8b:  leave
08167a38 +0x8c:  ret
08167a39 +0x8d:  nop
```

## 反编译 C

```c
// HeroMissionEvent::setMissionForGm @ 0x81679ac

/* HeroMissionEvent::setMissionForGm(CUser*, HeroMissionCondition::MissionNo::T, unsigned int) */

void __thiscall
HeroMissionEvent::setMissionForGm
          (HeroMissionEvent *this,undefined4 param_1,undefined4 param_3,undefined2 param_4)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
  local_18 [4];
  int local_14;
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_10 [12];
  
  local_14 = 0;
  cVar1 = findMissionValue(this,param_1,param_3,&local_14);
  if (cVar1 != '\0') {
    std::
    map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
    ::find(local_18);
    std::
    map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
            ::operator==(local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      *(undefined2 *)(local_14 + 4) = param_4;
    }
  }
  return;
}
```
