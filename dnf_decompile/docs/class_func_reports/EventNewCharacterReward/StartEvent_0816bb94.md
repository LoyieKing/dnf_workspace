# StartEvent

`_ZN23EventNewCharacterReward10StartEventE10Word_Param`

`EventNewCharacterReward::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816bb94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bb94  _ZN23EventNewCharacterReward10StartEventE10Word_Param
#           EventNewCharacterReward::StartEvent(Word_Param)
# range [0x0816bb94, 0x0816bc97]
0816bb94 +0x000:  push   %ebp
0816bb95 +0x001:  mov    %esp,%ebp
0816bb97 +0x003:  push   %esi
0816bb98 +0x004:  push   %ebx
0816bb99 +0x005:  sub    $0x30,%esp
0816bb9c +0x008:  movzwl 0xc(%ebp),%eax
0816bba0 +0x00c:  movzwl %ax,%edx
0816bba3 +0x00f:  mov    0x8(%ebp),%eax
0816bba6 +0x012:  mov    %edx,0xc(%eax)
0816bba9 +0x015:  movzwl 0xe(%ebp),%eax
0816bbad +0x019:  movzwl %ax,%edx
0816bbb0 +0x01c:  mov    0x8(%ebp),%eax
0816bbb3 +0x01f:  mov    %edx,0x10(%eax)
0816bbb6 +0x022:  mov    0x8(%ebp),%eax
0816bbb9 +0x025:  mov    0xc(%eax),%eax
0816bbbc +0x028:  mov    %eax,%edx
0816bbbe +0x02a:  mov    0x8(%ebp),%eax
0816bbc1 +0x02d:  mov    %dx,0x4(%eax)
0816bbc5 +0x031:  mov    0x8(%ebp),%eax
0816bbc8 +0x034:  mov    0x10(%eax),%eax
0816bbcb +0x037:  mov    %eax,%edx
0816bbcd +0x039:  mov    0x8(%ebp),%eax
0816bbd0 +0x03c:  mov    %dx,0x6(%eax)
0816bbd4 +0x040:  mov    0x8(%ebp),%eax
0816bbd7 +0x043:  mov    0xc(%eax),%eax
0816bbda +0x046:  test   %eax,%eax
0816bbdc +0x048:  js     0816bc47 <+0xb3>
0816bbde +0x04a:  mov    0x8(%ebp),%eax
0816bbe1 +0x04d:  mov    0xc(%eax),%eax
0816bbe4 +0x050:  cmp    $0xa,%eax
0816bbe7 +0x053:  jg     0816bc47 <+0xb3>
0816bbe9 +0x055:  mov    0x8(%ebp),%eax
0816bbec +0x058:  mov    0x10(%eax),%esi
0816bbef +0x05b:  mov    0x8(%ebp),%eax
0816bbf2 +0x05e:  mov    0xc(%eax),%ebx
0816bbf5 +0x061:  movl   $0x0,0xc(%esp)
0816bbfd +0x069:  movl   $0x22,0x8(%esp)
0816bc05 +0x071:  movl   $&_ZZN23EventNewCharacterReward10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0816bc0d +0x079:  lea    -0x28(%ebp),%eax
0816bc10 +0x07c:  mov    %eax,(%esp)
0816bc13 +0x07f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816bc18 +0x084:  mov    %esi,0xc(%esp)
0816bc1c +0x088:  mov    %ebx,0x8(%esp)
0816bc20 +0x08c:  movl   $"[Taiwan, EventCharacterBonus] Event parameters (job:%d, exp_ratio:%d)",0x4(%esp)
0816bc28 +0x094:  lea    -0x28(%ebp),%eax
0816bc2b +0x097:  mov    %eax,(%esp)
0816bc2e +0x09a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816bc33 +0x09f:  mov    0x8(%ebp),%eax
0816bc36 +0x0a2:  mov    (%eax),%eax
0816bc38 +0x0a4:  add    $0x8,%eax
0816bc3b +0x0a7:  mov    (%eax),%edx
0816bc3d +0x0a9:  mov    0x8(%ebp),%eax
0816bc40 +0x0ac:  mov    %eax,(%esp)
0816bc43 +0x0af:  call   *%edx
0816bc45 +0x0b1:  jmp    0816bc91 <+0xfd>
0816bc47 +0x0b3:  mov    0x8(%ebp),%eax
0816bc4a +0x0b6:  mov    0x10(%eax),%esi
0816bc4d +0x0b9:  mov    0x8(%ebp),%eax
0816bc50 +0x0bc:  mov    0xc(%eax),%ebx
0816bc53 +0x0bf:  movl   $0x0,0xc(%esp)
0816bc5b +0x0c7:  movl   $0x27,0x8(%esp)
0816bc63 +0x0cf:  movl   $&_ZZN23EventNewCharacterReward10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0816bc6b +0x0d7:  lea    -0x18(%ebp),%eax
0816bc6e +0x0da:  mov    %eax,(%esp)
0816bc71 +0x0dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0816bc76 +0x0e2:  mov    %esi,0xc(%esp)
0816bc7a +0x0e6:  mov    %ebx,0x8(%esp)
0816bc7e +0x0ea:  movl   $"[Taiwan, EventCharacterBonus] Invalid event parameters (job:%d, exp_ratio:%d)",0x4(%esp)
0816bc86 +0x0f2:  lea    -0x18(%ebp),%eax
0816bc89 +0x0f5:  mov    %eax,(%esp)
0816bc8c +0x0f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816bc91 +0x0fd:  add    $0x30,%esp
0816bc94 +0x100:  pop    %ebx
0816bc95 +0x101:  pop    %esi
0816bc96 +0x102:  pop    %ebp
0816bc97 +0x103:  ret
```

## 反编译 C

```c
// EventNewCharacterReward::StartEvent @ 0x816bb94

/* EventNewCharacterReward::StartEvent(Word_Param) */

void __thiscall EventNewCharacterReward::StartEvent(EventNewCharacterReward *this,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  cMyTrace local_2c [16];
  cMyTrace local_1c [16];
  
  *(uint *)(this + 0xc) = param_2 & 0xffff;
  *(uint *)(this + 0x10) = param_2 >> 0x10;
  *(short *)(this + 4) = (short)*(undefined4 *)(this + 0xc);
  *(short *)(this + 6) = (short)*(undefined4 *)(this + 0x10);
  if ((*(int *)(this + 0xc) < 0) || (10 < *(int *)(this + 0xc))) {
    uVar1 = *(undefined4 *)(this + 0x10);
    uVar2 = *(undefined4 *)(this + 0xc);
    cMyTrace::cMyTrace(local_1c,"virtual void EventNewCharacterReward::StartEvent(Word_Param)",0x27,
                       0);
    cMyTrace::operator()
              (local_1c,
               "[Taiwan, EventCharacterBonus] Invalid event parameters (job:%d, exp_ratio:%d)",uVar2
               ,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x10);
    uVar2 = *(undefined4 *)(this + 0xc);
    cMyTrace::cMyTrace(local_2c,"virtual void EventNewCharacterReward::StartEvent(Word_Param)",0x22,
                       0);
    cMyTrace::operator()
              (local_2c,"[Taiwan, EventCharacterBonus] Event parameters (job:%d, exp_ratio:%d)",
               uVar2,uVar1);
    (**(code **)(*(int *)this + 8))(this);
  }
  return;
}
```
