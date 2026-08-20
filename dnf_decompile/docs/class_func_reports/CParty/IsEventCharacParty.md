# IsEventCharacParty

`_ZN6CParty18IsEventCharacPartyEv`

`CParty::IsEventCharacParty()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b9fd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b9fd4  _ZN6CParty18IsEventCharacPartyEv
#           CParty::IsEventCharacParty()
# range [0x085b9fd4, 0x085ba0d7]
085b9fd4 +0x000:  push   %ebp
085b9fd5 +0x001:  mov    %esp,%ebp
085b9fd7 +0x003:  sub    $0x28,%esp
085b9fda +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085b9fdf +0x00b:  movl   $0xa2,0x4(%esp)
085b9fe7 +0x013:  mov    %eax,(%esp)
085b9fea +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085b9fef +0x01b:  mov    %eax,-0x10(%ebp)
085b9ff2 +0x01e:  cmpl   $0x0,-0x10(%ebp)
085b9ff6 +0x022:  je     085ba019 <+0x45>
085b9ff8 +0x024:  mov    -0x10(%ebp),%eax
085b9ffb +0x027:  mov    (%eax),%eax
085b9ffd +0x029:  add    $0x34,%eax
085ba000 +0x02c:  mov    (%eax),%edx
085ba002 +0x02e:  mov    -0x10(%ebp),%eax
085ba005 +0x031:  movl   $0x0,0x4(%esp)
085ba00d +0x039:  mov    %eax,(%esp)
085ba010 +0x03c:  call   *%edx
085ba012 +0x03e:  xor    $0x1,%eax
085ba015 +0x041:  test   %al,%al
085ba017 +0x043:  je     085ba020 <+0x4c>
085ba019 +0x045:  mov    $0x1,%eax
085ba01e +0x04a:  jmp    085ba025 <+0x51>
085ba020 +0x04c:  mov    $0x0,%eax
085ba025 +0x051:  test   %al,%al
085ba027 +0x053:  je     085ba033 <+0x5f>
085ba029 +0x055:  mov    $0x0,%eax
085ba02e +0x05a:  jmp    085ba0d5 <+0x101>
085ba033 +0x05f:  movl   $0x0,-0xc(%ebp)
085ba03a +0x066:  jmp    085ba0c1 <+0xed>
085ba03f +0x06b:  mov    -0xc(%ebp),%eax
085ba042 +0x06e:  mov    %eax,0x4(%esp)
085ba046 +0x072:  mov    0x8(%ebp),%eax
085ba049 +0x075:  mov    %eax,(%esp)
085ba04c +0x078:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085ba051 +0x07d:  xor    $0x1,%eax
085ba054 +0x080:  test   %al,%al
085ba056 +0x082:  jne    085ba0bc <+0xe8>
085ba058 +0x084:  mov    -0xc(%ebp),%edx
085ba05b +0x087:  mov    0x8(%ebp),%ecx
085ba05e +0x08a:  mov    %edx,%eax
085ba060 +0x08c:  add    %eax,%eax
085ba062 +0x08e:  add    %edx,%eax
085ba064 +0x090:  shl    $0x3,%eax
085ba067 +0x093:  lea    (%ecx,%eax,1),%eax
085ba06a +0x096:  add    $0x78,%eax
085ba06d +0x099:  mov    (%eax),%eax
085ba06f +0x09b:  test   %eax,%eax
085ba071 +0x09d:  je     085ba0ac <+0xd8>
085ba073 +0x09f:  mov    -0xc(%ebp),%edx
085ba076 +0x0a2:  mov    0x8(%ebp),%ecx
085ba079 +0x0a5:  mov    %edx,%eax
085ba07b +0x0a7:  add    %eax,%eax
085ba07d +0x0a9:  add    %edx,%eax
085ba07f +0x0ab:  shl    $0x3,%eax
085ba082 +0x0ae:  lea    (%ecx,%eax,1),%eax
085ba085 +0x0b1:  add    $0x78,%eax
085ba088 +0x0b4:  mov    (%eax),%eax
085ba08a +0x0b6:  mov    %eax,(%esp)
085ba08d +0x0b9:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085ba092 +0x0be:  mov    %eax,0x4(%esp)
085ba096 +0x0c2:  mov    -0x10(%ebp),%eax
085ba099 +0x0c5:  mov    %eax,(%esp)
085ba09c +0x0c8:  call   0816bcea <_ZN23EventNewCharacterReward16isEventCharacterEi>  ; EventNewCharacterReward::isEventCharacter(int)
085ba0a1 +0x0cd:  test   %al,%al
085ba0a3 +0x0cf:  je     085ba0ac <+0xd8>
085ba0a5 +0x0d1:  mov    $0x1,%eax
085ba0aa +0x0d6:  jmp    085ba0b1 <+0xdd>
085ba0ac +0x0d8:  mov    $0x0,%eax
085ba0b1 +0x0dd:  test   %al,%al
085ba0b3 +0x0df:  je     085ba0bd <+0xe9>
085ba0b5 +0x0e1:  mov    $0x1,%eax
085ba0ba +0x0e6:  jmp    085ba0d5 <+0x101>
085ba0bc +0x0e8:  nop
085ba0bd +0x0e9:  addl   $0x1,-0xc(%ebp)
085ba0c1 +0x0ed:  cmpl   $0x3,-0xc(%ebp)
085ba0c5 +0x0f1:  setle  %al
085ba0c8 +0x0f4:  test   %al,%al
085ba0ca +0x0f6:  jne    085ba03f <+0x6b>
085ba0d0 +0x0fc:  mov    $0x0,%eax
085ba0d5 +0x101:  leave
085ba0d6 +0x102:  ret
085ba0d7 +0x103:  nop
```

## 反编译 C

```c
// CParty::IsEventCharacParty @ 0x85b9fd4

/* CParty::IsEventCharacParty() */

undefined4 __thiscall CParty::IsEventCharacParty(CParty *this)

{
  bool bVar1;
  char cVar2;
  EventNewCharacterReward *this_00;
  int iVar3;
  int local_10;
  
  this_00 = (EventNewCharacterReward *)
            CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa2);
  if ((this_00 == (EventNewCharacterReward *)0x0) ||
     (cVar2 = (**(code **)(*(int *)this_00 + 0x34))(this_00,0), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar2 = checkValidUser(this,local_10);
      if (cVar2 == '\x01') {
        if (*(int *)(this + local_10 * 0x18 + 0x78) == 0) {
LAB_085ba0ac:
          bVar1 = false;
        }
        else {
          iVar3 = CUserCharacInfo::get_charac_job
                            (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
          cVar2 = EventNewCharacterReward::isEventCharacter(this_00,iVar3);
          if (cVar2 == '\0') goto LAB_085ba0ac;
          bVar1 = true;
        }
        if (bVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}
```
