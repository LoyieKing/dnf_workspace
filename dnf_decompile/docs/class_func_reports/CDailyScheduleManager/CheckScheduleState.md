# CheckScheduleState

`_ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb`

`CDailyScheduleManager::CheckScheduleState(_DailySchedule const&, unsigned int&, bool) const`

| 类 | 地址 |
|---|---|
| `CDailyScheduleManager` | `0x08125ff4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08125ff4  _ZNK21CDailyScheduleManager18CheckScheduleStateERK14_DailyScheduleRjb
#           CDailyScheduleManager::CheckScheduleState(_DailySchedule const&, unsigned int&, bool) const
# range [0x08125ff4, 0x081261a7]
08125ff4 +0x000:  push   %ebp
08125ff5 +0x001:  mov    %esp,%ebp
08125ff7 +0x003:  sub    $0x68,%esp
08125ffa +0x006:  mov    0x14(%ebp),%eax
08125ffd +0x009:  mov    %al,-0x4c(%ebp)
08126000 +0x00c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08126007 +0x013:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0812600c +0x018:  mov    %eax,-0x1c(%ebp)
0812600f +0x01b:  lea    -0x48(%ebp),%eax
08126012 +0x01e:  mov    %eax,0x4(%esp)
08126016 +0x022:  lea    -0x1c(%ebp),%eax
08126019 +0x025:  mov    %eax,(%esp)
0812601c +0x028:  call   0807e360 <_init+0xc58>
08126021 +0x02d:  mov    -0x30(%ebp),%eax
08126024 +0x030:  mov    %eax,-0x18(%ebp)
08126027 +0x033:  movl   $0x0,-0x14(%ebp)
0812602e +0x03a:  mov    0xc(%ebp),%eax
08126031 +0x03d:  mov    (%eax),%eax
08126033 +0x03f:  test   %eax,%eax
08126035 +0x041:  je     081260c9 <+0xd5>
0812603b +0x047:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08126040 +0x04c:  test   %eax,%eax
08126042 +0x04e:  je     08126060 <+0x6c>
08126044 +0x050:  mov    0xc(%ebp),%eax
08126047 +0x053:  mov    (%eax),%eax
08126049 +0x055:  mov    %eax,%edx
0812604b +0x057:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08126050 +0x05c:  mov    %edx,0x4(%esp)
08126054 +0x060:  mov    %eax,(%esp)
08126057 +0x063:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0812605c +0x068:  test   %eax,%eax
0812605e +0x06a:  jne    08126067 <+0x73>
08126060 +0x06c:  mov    $0x1,%eax
08126065 +0x071:  jmp    0812606c <+0x78>
08126067 +0x073:  mov    $0x0,%eax
0812606c +0x078:  test   %al,%al
0812606e +0x07a:  je     08126083 <+0x8f>
08126070 +0x07c:  mov    0x10(%ebp),%eax
08126073 +0x07f:  movl   $0x0,(%eax)
08126079 +0x085:  mov    $0x0,%eax
0812607e +0x08a:  jmp    081261a5 <+0x1b1>
08126083 +0x08f:  mov    0xc(%ebp),%eax
08126086 +0x092:  mov    (%eax),%eax
08126088 +0x094:  mov    %eax,%edx
0812608a +0x096:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0812608f +0x09b:  mov    %edx,0x4(%esp)
08126093 +0x09f:  mov    %eax,(%esp)
08126096 +0x0a2:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0812609b +0x0a7:  mov    (%eax),%edx
0812609d +0x0a9:  add    $0x34,%edx
081260a0 +0x0ac:  mov    (%edx),%edx
081260a2 +0x0ae:  movl   $0x0,0x4(%esp)
081260aa +0x0b6:  mov    %eax,(%esp)
081260ad +0x0b9:  call   *%edx
081260af +0x0bb:  xor    $0x1,%eax
081260b2 +0x0be:  test   %al,%al
081260b4 +0x0c0:  je     081260c9 <+0xd5>
081260b6 +0x0c2:  mov    0x10(%ebp),%eax
081260b9 +0x0c5:  movl   $0x0,(%eax)
081260bf +0x0cb:  mov    $0x0,%eax
081260c4 +0x0d0:  jmp    081261a5 <+0x1b1>
081260c9 +0x0d5:  mov    0xc(%ebp),%eax
081260cc +0x0d8:  movzbl 0x18(%eax),%eax
081260d0 +0x0dc:  movzbl %al,%eax
081260d3 +0x0df:  mov    %eax,-0x40(%ebp)
081260d6 +0x0e2:  mov    0xc(%ebp),%eax
081260d9 +0x0e5:  movzbl 0x19(%eax),%eax
081260dd +0x0e9:  movzbl %al,%eax
081260e0 +0x0ec:  mov    %eax,-0x44(%ebp)
081260e3 +0x0ef:  mov    0xc(%ebp),%eax
081260e6 +0x0f2:  movzbl 0x1a(%eax),%eax
081260ea +0x0f6:  movzbl %al,%eax
081260ed +0x0f9:  mov    %eax,-0x48(%ebp)
081260f0 +0x0fc:  lea    -0x48(%ebp),%eax
081260f3 +0x0ff:  mov    %eax,(%esp)
081260f6 +0x102:  call   0807e820 <_init+0x1118>
081260fb +0x107:  mov    %eax,-0x10(%ebp)
081260fe +0x10a:  mov    0xc(%ebp),%eax
08126101 +0x10d:  movzbl 0x1b(%eax),%eax
08126105 +0x111:  movzbl %al,%eax
08126108 +0x114:  mov    %eax,-0x40(%ebp)
0812610b +0x117:  mov    0xc(%ebp),%eax
0812610e +0x11a:  movzbl 0x1c(%eax),%eax
08126112 +0x11e:  movzbl %al,%eax
08126115 +0x121:  mov    %eax,-0x44(%ebp)
08126118 +0x124:  mov    0xc(%ebp),%eax
0812611b +0x127:  movzbl 0x1d(%eax),%eax
0812611f +0x12b:  movzbl %al,%eax
08126122 +0x12e:  mov    %eax,-0x48(%ebp)
08126125 +0x131:  lea    -0x48(%ebp),%eax
08126128 +0x134:  mov    %eax,(%esp)
0812612b +0x137:  call   0807e820 <_init+0x1118>
08126130 +0x13c:  mov    %eax,-0xc(%ebp)
08126133 +0x13f:  mov    0xc(%ebp),%eax
08126136 +0x142:  mov    0xc(%eax),%edx
08126139 +0x145:  mov    -0x1c(%ebp),%eax
0812613c +0x148:  cmp    %eax,%edx
0812613e +0x14a:  jg     0812617e <+0x18a>
08126140 +0x14c:  mov    0xc(%ebp),%eax
08126143 +0x14f:  mov    0x10(%eax),%edx
08126146 +0x152:  mov    -0x1c(%ebp),%eax
08126149 +0x155:  cmp    %eax,%edx
0812614b +0x157:  jl     0812617e <+0x18a>
0812614d +0x159:  mov    0xc(%ebp),%eax
08126150 +0x15c:  mov    0x14(%eax),%eax
08126153 +0x15f:  mov    %eax,%edx
08126155 +0x161:  mov    -0x18(%ebp),%eax
08126158 +0x164:  cmp    %eax,%edx
0812615a +0x166:  je     08126167 <+0x173>
0812615c +0x168:  mov    0xc(%ebp),%eax
0812615f +0x16b:  mov    0x14(%eax),%eax
08126162 +0x16e:  cmp    $0x7,%eax
08126165 +0x171:  jne    0812617e <+0x18a>
08126167 +0x173:  mov    -0x1c(%ebp),%eax
0812616a +0x176:  cmp    -0x10(%ebp),%eax
0812616d +0x179:  jl     0812617e <+0x18a>
0812616f +0x17b:  mov    -0x1c(%ebp),%eax
08126172 +0x17e:  cmp    -0xc(%ebp),%eax
08126175 +0x181:  jg     0812617e <+0x18a>
08126177 +0x183:  movl   $0x1,-0x14(%ebp)
0812617e +0x18a:  cmpl   $0x0,-0x14(%ebp)
08126182 +0x18e:  jne    0812618f <+0x19b>
08126184 +0x190:  mov    0x10(%ebp),%eax
08126187 +0x193:  movl   $0x0,(%eax)
0812618d +0x199:  jmp    081261a2 <+0x1ae>
0812618f +0x19b:  mov    -0x1c(%ebp),%eax
08126192 +0x19e:  mov    -0xc(%ebp),%edx
08126195 +0x1a1:  mov    %edx,%ecx
08126197 +0x1a3:  sub    %eax,%ecx
08126199 +0x1a5:  mov    %ecx,%eax
0812619b +0x1a7:  mov    %eax,%edx
0812619d +0x1a9:  mov    0x10(%ebp),%eax
081261a0 +0x1ac:  mov    %edx,(%eax)
081261a2 +0x1ae:  mov    -0x14(%ebp),%eax
081261a5 +0x1b1:  leave
081261a6 +0x1b2:  ret
081261a7 +0x1b3:  nop
```

## 反编译 C

```c
// CDailyScheduleManager::CheckScheduleState @ 0x8125ff4

/* CDailyScheduleManager::CheckScheduleState(_DailySchedule const&, unsigned int&, bool) const */

int CDailyScheduleManager::CheckScheduleState(_DailySchedule *param_1,uint *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  time_t tVar5;
  time_t tVar6;
  undefined3 in_stack_0000000d;
  tm local_4c;
  int local_20;
  uint local_1c;
  int iVar7;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_20,&local_4c);
  local_1c = local_4c.tm_wday;
  iVar7 = 0;
  if (*param_2 != 0) {
    if ((GlobalData::s_event_manager == (CEventManager *)0x0) ||
       (iVar3 = CEventManager::GetRepeatEvent(GlobalData::s_event_manager,*param_2), iVar3 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *_param_3 = 0;
      return 0;
    }
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,*param_2);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    if (cVar2 != '\x01') {
      *_param_3 = 0;
      return 0;
    }
  }
  local_4c.tm_hour = (int)(byte)param_2[6];
  local_4c.tm_min = (int)*(byte *)((int)param_2 + 0x19);
  local_4c.tm_sec = (int)*(byte *)((int)param_2 + 0x1a);
  tVar5 = mktime(&local_4c);
  local_4c.tm_hour = (int)*(byte *)((int)param_2 + 0x1b);
  local_4c.tm_min = (int)(byte)param_2[7];
  local_4c.tm_sec = (int)*(byte *)((int)param_2 + 0x1d);
  tVar6 = mktime(&local_4c);
  if (((((int)param_2[3] <= local_20) && (local_20 <= (int)param_2[4])) &&
      ((param_2[5] == local_1c || (param_2[5] == 7)))) &&
     ((tVar5 <= local_20 && (local_20 <= tVar6)))) {
    iVar7 = 1;
  }
  if (iVar7 == 0) {
    *_param_3 = 0;
  }
  else {
    *_param_3 = tVar6 - local_20;
  }
  return iVar7;
}
```
