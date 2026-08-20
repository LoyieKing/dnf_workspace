# resetMissionForGm

`_ZN16HeroMissionEvent17resetMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TE`

`HeroMissionEvent::resetMissionForGm(CUser*, HeroMissionCondition::MissionNo::T)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08167a3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08167a3a  _ZN16HeroMissionEvent17resetMissionForGmEP5CUserN20HeroMissionCondition9MissionNo1TE
#           HeroMissionEvent::resetMissionForGm(CUser*, HeroMissionCondition::MissionNo::T)
# range [0x08167a3a, 0x08167ac7]
08167a3a +0x00:  push   %ebp
08167a3b +0x01:  mov    %esp,%ebp
08167a3d +0x03:  sub    $0x28,%esp
08167a40 +0x06:  movl   $0x0,-0x10(%ebp)
08167a47 +0x0d:  mov    0x10(%ebp),%eax
08167a4a +0x10:  lea    -0x10(%ebp),%edx
08167a4d +0x13:  mov    %edx,0xc(%esp)
08167a51 +0x17:  mov    %eax,0x8(%esp)
08167a55 +0x1b:  mov    0xc(%ebp),%eax
08167a58 +0x1e:  mov    %eax,0x4(%esp)
08167a5c +0x22:  mov    0x8(%ebp),%eax
08167a5f +0x25:  mov    %eax,(%esp)
08167a62 +0x28:  call   08168010 <_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue>  ; HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T, HeroMissionValue*&)
08167a67 +0x2d:  test   %al,%al
08167a69 +0x2f:  je     08167ac6 <+0x8c>
08167a6b +0x31:  mov    0x8(%ebp),%eax
08167a6e +0x34:  lea    0xc(%eax),%ecx
08167a71 +0x37:  lea    -0x14(%ebp),%eax
08167a74 +0x3a:  lea    0x10(%ebp),%edx
08167a77 +0x3d:  mov    %edx,0x8(%esp)
08167a7b +0x41:  mov    %ecx,0x4(%esp)
08167a7f +0x45:  mov    %eax,(%esp)
08167a82 +0x48:  call   08168964 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7c5>  ; global constructors keyed to HeroMissionValue::clear()+0x7c5
08167a87 +0x4d:  sub    $0x4,%esp
08167a8a +0x50:  mov    0x8(%ebp),%eax
08167a8d +0x53:  lea    0xc(%eax),%edx
08167a90 +0x56:  lea    -0xc(%ebp),%eax
08167a93 +0x59:  mov    %edx,0x4(%esp)
08167a97 +0x5d:  mov    %eax,(%esp)
08167a9a +0x60:  call   0816871e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x57f>  ; global constructors keyed to HeroMissionValue::clear()+0x57f
08167a9f +0x65:  sub    $0x4,%esp
08167aa2 +0x68:  lea    -0xc(%ebp),%eax
08167aa5 +0x6b:  mov    %eax,0x4(%esp)
08167aa9 +0x6f:  lea    -0x14(%ebp),%eax
08167aac +0x72:  mov    %eax,(%esp)
08167aaf +0x75:  call   08168990 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7f1>  ; global constructors keyed to HeroMissionValue::clear()+0x7f1
08167ab4 +0x7a:  test   %al,%al
08167ab6 +0x7c:  jne    08167ac5 <+0x8b>
08167ab8 +0x7e:  mov    -0x10(%ebp),%eax
08167abb +0x81:  mov    %eax,(%esp)
08167abe +0x84:  call   08164bb2 <_ZN16HeroMissionValue5resetEv>  ; HeroMissionValue::reset()
08167ac3 +0x89:  jmp    08167ac6 <+0x8c>
08167ac5 +0x8b:  nop
08167ac6 +0x8c:  leave
08167ac7 +0x8d:  ret
```

## 反编译 C

```c
// HeroMissionEvent::resetMissionForGm @ 0x8167a3a

/* HeroMissionEvent::resetMissionForGm(CUser*, HeroMissionCondition::MissionNo::T) */

void __thiscall
HeroMissionEvent::resetMissionForGm(HeroMissionEvent *this,undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>
  local_18 [4];
  HeroMissionValue *local_14;
  map<HeroMissionCondition::MissionNo::T,BaseHeroMissionCondition*,std::less<HeroMissionCondition::MissionNo::T>,std::allocator<std::pair<HeroMissionCondition::MissionNo::T_const,BaseHeroMissionCondition*>>>
  local_10 [12];
  
  local_14 = (HeroMissionValue *)0x0;
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
      HeroMissionValue::reset(local_14);
    }
  }
  return;
}
```
