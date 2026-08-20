# set_trigger

`_ZN9UserQuest11set_triggerEicb`

`UserQuest::set_trigger(int, char, bool)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086ac6ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ac6ac  _ZN9UserQuest11set_triggerEicb
#           UserQuest::set_trigger(int, char, bool)
# range [0x086ac6ac, 0x086ac853]
086ac6ac +0x000:  push   %ebp
086ac6ad +0x001:  mov    %esp,%ebp
086ac6af +0x003:  push   %ebx
086ac6b0 +0x004:  sub    $0x44,%esp
086ac6b3 +0x007:  mov    0x10(%ebp),%edx
086ac6b6 +0x00a:  mov    0x14(%ebp),%eax
086ac6b9 +0x00d:  mov    %dl,-0x2c(%ebp)
086ac6bc +0x010:  mov    %al,-0x30(%ebp)
086ac6bf +0x013:  movl   $0x0,-0xc(%ebp)
086ac6c6 +0x01a:  jmp    086ac83a <+0x18e>
086ac6cb +0x01f:  mov    -0xc(%ebp),%edx
086ac6ce +0x022:  mov    0x8(%ebp),%eax
086ac6d1 +0x025:  add    $0x1d4c,%edx
086ac6d7 +0x02b:  mov    0x8(%eax,%edx,4),%eax
086ac6db +0x02f:  cmp    0xc(%ebp),%eax
086ac6de +0x032:  jne    086ac836 <+0x18a>
086ac6e4 +0x038:  mov    0x8(%ebp),%eax
086ac6e7 +0x03b:  mov    (%eax),%eax
086ac6e9 +0x03d:  mov    %eax,(%esp)
086ac6ec +0x040:  call   0850d522 <_GLOBAL__I_g_emptySlot+0x457>  ; global constructors keyed to g_emptySlot+0x457
086ac6f1 +0x045:  test   %al,%al
086ac6f3 +0x047:  je     086ac709 <+0x5d>
086ac6f5 +0x049:  mov    -0xc(%ebp),%edx
086ac6f8 +0x04c:  mov    0x8(%ebp),%eax
086ac6fb +0x04f:  add    $0x1d60,%edx
086ac701 +0x055:  movl   $0x0,0x8(%eax,%edx,4)
086ac709 +0x05d:  cmpb   $0x1,-0x2c(%ebp)
086ac70d +0x061:  jne    086ac733 <+0x87>
086ac70f +0x063:  mov    -0xc(%ebp),%eax
086ac712 +0x066:  mov    0x8(%ebp),%edx
086ac715 +0x069:  lea    0x1d60(%eax),%ecx
086ac71b +0x06f:  mov    0x8(%edx,%ecx,4),%edx
086ac71f +0x073:  lea    0x1(%edx),%ecx
086ac722 +0x076:  mov    0x8(%ebp),%edx
086ac725 +0x079:  add    $0x1d60,%eax
086ac72a +0x07e:  mov    %ecx,0x8(%edx,%eax,4)
086ac72e +0x082:  jmp    086ac824 <+0x178>
086ac733 +0x087:  mov    0xc(%ebp),%eax
086ac736 +0x08a:  mov    %eax,0x4(%esp)
086ac73a +0x08e:  mov    0x8(%ebp),%eax
086ac73d +0x091:  mov    %eax,(%esp)
086ac740 +0x094:  call   086acf8a <_ZN9UserQuest21check_quest_conditionEi>  ; UserQuest::check_quest_condition(int)
086ac745 +0x099:  xor    $0x1,%eax
086ac748 +0x09c:  test   %al,%al
086ac74a +0x09e:  je     086ac756 <+0xaa>
086ac74c +0x0a0:  mov    $0xffffffff,%eax
086ac751 +0x0a5:  jmp    086ac84e <+0x1a2>
086ac756 +0x0aa:  cmpb   $0x0,-0x30(%ebp)
086ac75a +0x0ae:  je     086ac7b7 <+0x10b>
086ac75c +0x0b0:  lea    -0x14(%ebp),%eax
086ac75f +0x0b3:  mov    %eax,(%esp)
086ac762 +0x0b6:  call   0836ddac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7d78>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7d78
086ac767 +0x0bb:  mov    -0xc(%ebp),%eax
086ac76a +0x0be:  add    $0x1d60,%eax
086ac76f +0x0c3:  shl    $0x2,%eax
086ac772 +0x0c6:  add    0x8(%ebp),%eax
086ac775 +0x0c9:  add    $0x8,%eax
086ac778 +0x0cc:  mov    %eax,0x4(%esp)
086ac77c +0x0d0:  lea    -0x14(%ebp),%eax
086ac77f +0x0d3:  mov    %eax,(%esp)
086ac782 +0x0d6:  call   086ad56c <_GLOBAL__I__ZN9UserQuest5resetEv+0x1d>  ; global constructors keyed to UserQuest::reset()+0x1d
086ac787 +0x0db:  movsbl -0x2c(%ebp),%eax
086ac78b +0x0df:  mov    %eax,0x4(%esp)
086ac78f +0x0e3:  lea    -0x14(%ebp),%eax
086ac792 +0x0e6:  mov    %eax,(%esp)
086ac795 +0x0e9:  call   086ad602 <_GLOBAL__I__ZN9UserQuest5resetEv+0xb3>  ; global constructors keyed to UserQuest::reset()+0xb3
086ac79a +0x0ee:  mov    -0xc(%ebp),%ebx
086ac79d +0x0f1:  lea    -0x14(%ebp),%eax
086ac7a0 +0x0f4:  mov    %eax,(%esp)
086ac7a3 +0x0f7:  call   0836dd68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7d34>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7d34
086ac7a8 +0x0fc:  mov    0x8(%ebp),%edx
086ac7ab +0x0ff:  lea    0x1d60(%ebx),%ecx
086ac7b1 +0x105:  mov    %eax,0x8(%edx,%ecx,4)
086ac7b5 +0x109:  jmp    086ac824 <+0x178>
086ac7b7 +0x10b:  mov    -0xc(%ebp),%edx
086ac7ba +0x10e:  mov    0x8(%ebp),%eax
086ac7bd +0x111:  add    $0x1d60,%edx
086ac7c3 +0x117:  mov    0x8(%eax,%edx,4),%eax
086ac7c7 +0x11b:  test   %eax,%eax
086ac7c9 +0x11d:  jle    086ac824 <+0x178>
086ac7cb +0x11f:  lea    -0x1c(%ebp),%eax
086ac7ce +0x122:  mov    %eax,(%esp)
086ac7d1 +0x125:  call   0836ddac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7d78>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7d78
086ac7d6 +0x12a:  mov    -0xc(%ebp),%eax
086ac7d9 +0x12d:  add    $0x1d60,%eax
086ac7de +0x132:  shl    $0x2,%eax
086ac7e1 +0x135:  add    0x8(%ebp),%eax
086ac7e4 +0x138:  add    $0x8,%eax
086ac7e7 +0x13b:  mov    %eax,0x4(%esp)
086ac7eb +0x13f:  lea    -0x1c(%ebp),%eax
086ac7ee +0x142:  mov    %eax,(%esp)
086ac7f1 +0x145:  call   086ad56c <_GLOBAL__I__ZN9UserQuest5resetEv+0x1d>  ; global constructors keyed to UserQuest::reset()+0x1d
086ac7f6 +0x14a:  movsbl -0x2c(%ebp),%eax
086ac7fa +0x14e:  mov    %eax,0x4(%esp)
086ac7fe +0x152:  lea    -0x1c(%ebp),%eax
086ac801 +0x155:  mov    %eax,(%esp)
086ac804 +0x158:  call   086ad6ea <_GLOBAL__I__ZN9UserQuest5resetEv+0x19b>  ; global constructors keyed to UserQuest::reset()+0x19b
086ac809 +0x15d:  mov    -0xc(%ebp),%ebx
086ac80c +0x160:  lea    -0x1c(%ebp),%eax
086ac80f +0x163:  mov    %eax,(%esp)
086ac812 +0x166:  call   0836dd68 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x7d34>  ; global constructors keyed to CServerEvent::m_nExpRate+0x7d34
086ac817 +0x16b:  mov    0x8(%ebp),%edx
086ac81a +0x16e:  lea    0x1d60(%ebx),%ecx
086ac820 +0x174:  mov    %eax,0x8(%edx,%ecx,4)
086ac824 +0x178:  mov    -0xc(%ebp),%edx
086ac827 +0x17b:  mov    0x8(%ebp),%eax
086ac82a +0x17e:  add    $0x1d60,%edx
086ac830 +0x184:  mov    0x8(%eax,%edx,4),%eax
086ac834 +0x188:  jmp    086ac84e <+0x1a2>
086ac836 +0x18a:  addl   $0x1,-0xc(%ebp)
086ac83a +0x18e:  cmpl   $0x13,-0xc(%ebp)
086ac83e +0x192:  setle  %al
086ac841 +0x195:  test   %al,%al
086ac843 +0x197:  jne    086ac6cb <+0x1f>
086ac849 +0x19d:  mov    $0xffffffff,%eax
086ac84e +0x1a2:  add    $0x44,%esp
086ac851 +0x1a5:  pop    %ebx
086ac852 +0x1a6:  pop    %ebp
086ac853 +0x1a7:  ret
```

## 反编译 C

```c
// UserQuest::set_trigger @ 0x86ac6ac

/* UserQuest::set_trigger(int, char, bool) */

undefined4 __thiscall UserQuest::set_trigger(UserQuest *this,int param_1,char param_2,bool param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  stQuestTriggerState_t local_20 [8];
  stQuestTriggerState_t local_18 [8];
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      return 0xffffffff;
    }
    if (*(int *)(this + (local_10 + 0x1d4c) * 4 + 8) == param_1) break;
    local_10 = local_10 + 1;
  }
  cVar2 = CUser::getGmQuestFlag(*(CUser **)this);
  if (cVar2 != '\0') {
    *(undefined4 *)(this + (local_10 + 0x1d60) * 4 + 8) = 0;
  }
  if (param_2 == '\x01') {
    *(int *)(this + (local_10 + 0x1d60) * 4 + 8) = *(int *)(this + (local_10 + 0x1d60) * 4 + 8) + 1;
  }
  else {
    cVar2 = check_quest_condition(this,param_1);
    if (cVar2 != '\x01') {
      return 0xffffffff;
    }
    if (param_3) {
      stQuestTriggerState_t::stQuestTriggerState_t(local_18);
      stQuestTriggerState_t::operator=(local_18,(int *)(this + (local_10 + 0x1d60) * 4 + 8));
      stQuestTriggerState_t::incTirggerState(local_18,param_2);
      iVar1 = local_10;
      uVar3 = stQuestTriggerState_t::getTrigger(local_18);
      *(undefined4 *)(this + (iVar1 + 0x1d60) * 4 + 8) = uVar3;
    }
    else if (0 < *(int *)(this + (local_10 + 0x1d60) * 4 + 8)) {
      stQuestTriggerState_t::stQuestTriggerState_t(local_20);
      stQuestTriggerState_t::operator=(local_20,(int *)(this + (local_10 + 0x1d60) * 4 + 8));
      stQuestTriggerState_t::subTriggerState(local_20,param_2);
      iVar1 = local_10;
      uVar3 = stQuestTriggerState_t::getTrigger(local_20);
      *(undefined4 *)(this + (iVar1 + 0x1d60) * 4 + 8) = uVar3;
    }
  }
  return *(undefined4 *)(this + (local_10 + 0x1d60) * 4 + 8);
}
```
