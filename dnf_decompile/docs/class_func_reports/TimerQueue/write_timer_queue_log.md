# write_timer_queue_log

`_ZN10TimerQueue21write_timer_queue_logEv`

`TimerQueue::write_timer_queue_log()`

| 类 | 地址 |
|---|---|
| `TimerQueue` | `0x0863101e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863101e  _ZN10TimerQueue21write_timer_queue_logEv
#           TimerQueue::write_timer_queue_log()
# range [0x0863101e, 0x08631209]
0863101e +0x000:  push   %ebp
0863101f +0x001:  mov    %esp,%ebp
08631021 +0x003:  push   %esi
08631022 +0x004:  push   %ebx
08631023 +0x005:  sub    $0x60,%esp
08631026 +0x008:  lea    -0x30(%ebp),%eax
08631029 +0x00b:  mov    %eax,(%esp)
0863102c +0x00e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08631031 +0x013:  lea    -0x30(%ebp),%eax
08631034 +0x016:  mov    %eax,(%esp)
08631037 +0x019:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0863103c +0x01e:  mov    0x8(%ebp),%eax
0863103f +0x021:  lea    0x28(%eax),%edx
08631042 +0x024:  lea    -0x34(%ebp),%eax
08631045 +0x027:  mov    %edx,0x4(%esp)
08631049 +0x02b:  mov    %eax,(%esp)
0863104c +0x02e:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
08631051 +0x033:  sub    $0x4,%esp
08631054 +0x036:  mov    0x8(%ebp),%eax
08631057 +0x039:  lea    0x28(%eax),%edx
0863105a +0x03c:  lea    -0x38(%ebp),%eax
0863105d +0x03f:  mov    %edx,0x4(%esp)
08631061 +0x043:  mov    %eax,(%esp)
08631064 +0x046:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08631069 +0x04b:  sub    $0x4,%esp
0863106c +0x04e:  jmp    08631162 <+0x144>
08631071 +0x053:  movl   $0x0,-0x4c(%ebp)
08631078 +0x05a:  movl   $0x0,-0x48(%ebp)
0863107f +0x061:  movl   $0x0,-0x44(%ebp)
08631086 +0x068:  movl   $0x0,-0x40(%ebp)
0863108d +0x06f:  movl   $0x0,-0x3c(%ebp)
08631094 +0x076:  lea    -0x34(%ebp),%eax
08631097 +0x079:  mov    %eax,(%esp)
0863109a +0x07c:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0863109f +0x081:  mov    0x4(%eax),%ebx
086310a2 +0x084:  lea    -0x34(%ebp),%eax
086310a5 +0x087:  mov    %eax,(%esp)
086310a8 +0x08a:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
086310ad +0x08f:  mov    (%eax),%eax
086310af +0x091:  mov    %ebx,0xc(%esp)
086310b3 +0x095:  mov    %eax,0x8(%esp)
086310b7 +0x099:  movl   $"(%d %d) ",0x4(%esp)
086310bf +0x0a1:  lea    -0x4c(%ebp),%eax
086310c2 +0x0a4:  mov    %eax,(%esp)
086310c5 +0x0a7:  call   0807e440 <_init+0xd38>
086310ca +0x0ac:  lea    -0x4c(%ebp),%eax
086310cd +0x0af:  mov    %eax,0x4(%esp)
086310d1 +0x0b3:  lea    -0x30(%ebp),%eax
086310d4 +0x0b6:  mov    %eax,(%esp)
086310d7 +0x0b9:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
086310dc +0x0be:  lea    -0x30(%ebp),%eax
086310df +0x0c1:  mov    %eax,(%esp)
086310e2 +0x0c4:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
086310e7 +0x0c9:  cmp    $0x800,%eax
086310ec +0x0ce:  seta   %al
086310ef +0x0d1:  test   %al,%al
086310f1 +0x0d3:  je     08631145 <+0x127>
086310f3 +0x0d5:  lea    -0x30(%ebp),%eax
086310f6 +0x0d8:  mov    %eax,(%esp)
086310f9 +0x0db:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086310fe +0x0e0:  mov    %eax,%ebx
08631100 +0x0e2:  movl   $0x0,0xc(%esp)
08631108 +0x0ea:  movl   $0x101,0x8(%esp)
08631110 +0x0f2:  movl   $&_ZZN10TimerQueue21write_timer_queue_logEvE19__PRETTY_FUNCTION__,0x4(%esp)
08631118 +0x0fa:  lea    -0x2c(%ebp),%eax
0863111b +0x0fd:  mov    %eax,(%esp)
0863111e +0x100:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08631123 +0x105:  mov    %ebx,0x8(%esp)
08631127 +0x109:  movl   $"TIMER_QUEUE_LOG : %s",0x4(%esp)
0863112f +0x111:  lea    -0x2c(%ebp),%eax
08631132 +0x114:  mov    %eax,(%esp)
08631135 +0x117:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863113a +0x11c:  lea    -0x30(%ebp),%eax
0863113d +0x11f:  mov    %eax,(%esp)
08631140 +0x122:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08631145 +0x127:  lea    -0x1c(%ebp),%eax
08631148 +0x12a:  movl   $0x0,0x8(%esp)
08631150 +0x132:  lea    -0x34(%ebp),%edx
08631153 +0x135:  mov    %edx,0x4(%esp)
08631157 +0x139:  mov    %eax,(%esp)
0863115a +0x13c:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
0863115f +0x141:  sub    $0x4,%esp
08631162 +0x144:  lea    -0x38(%ebp),%eax
08631165 +0x147:  mov    %eax,0x4(%esp)
08631169 +0x14b:  lea    -0x34(%ebp),%eax
0863116c +0x14e:  mov    %eax,(%esp)
0863116f +0x151:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08631174 +0x156:  test   %al,%al
08631176 +0x158:  jne    08631071 <+0x53>
0863117c +0x15e:  lea    -0x30(%ebp),%eax
0863117f +0x161:  mov    %eax,(%esp)
08631182 +0x164:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08631187 +0x169:  test   %eax,%eax
08631189 +0x16b:  setne  %al
0863118c +0x16e:  test   %al,%al
0863118e +0x170:  je     086311f4 <+0x1d6>
08631190 +0x172:  lea    -0x30(%ebp),%eax
08631193 +0x175:  mov    %eax,(%esp)
08631196 +0x178:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0863119b +0x17d:  mov    %eax,%ebx
0863119d +0x17f:  movl   $0x0,0xc(%esp)
086311a5 +0x187:  movl   $0x107,0x8(%esp)
086311ad +0x18f:  movl   $&_ZZN10TimerQueue21write_timer_queue_logEvE19__PRETTY_FUNCTION__,0x4(%esp)
086311b5 +0x197:  lea    -0x18(%ebp),%eax
086311b8 +0x19a:  mov    %eax,(%esp)
086311bb +0x19d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086311c0 +0x1a2:  mov    %ebx,0x8(%esp)
086311c4 +0x1a6:  movl   $"TIMER_QUEUE_LOG : %s",0x4(%esp)
086311cc +0x1ae:  lea    -0x18(%ebp),%eax
086311cf +0x1b1:  mov    %eax,(%esp)
086311d2 +0x1b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086311d7 +0x1b9:  jmp    086311f4 <+0x1d6>
086311d9 +0x1bb:  mov    %edx,%ebx
086311db +0x1bd:  mov    %eax,%esi
086311dd +0x1bf:  lea    -0x30(%ebp),%eax
086311e0 +0x1c2:  mov    %eax,(%esp)
086311e3 +0x1c5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086311e8 +0x1ca:  mov    %esi,%eax
086311ea +0x1cc:  mov    %ebx,%edx
086311ec +0x1ce:  mov    %eax,(%esp)
086311ef +0x1d1:  call   08ae3750 <_Unwind_Resume>
086311f4 +0x1d6:  lea    -0x30(%ebp),%eax
086311f7 +0x1d9:  mov    %eax,(%esp)
086311fa +0x1dc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086311ff +0x1e1:  lea    -0x8(%ebp),%esp
08631202 +0x1e4:  add    $0x0,%esp
08631205 +0x1e7:  pop    %ebx
08631206 +0x1e8:  pop    %esi
08631207 +0x1e9:  pop    %ebp
08631208 +0x1ea:  ret
08631209 +0x1eb:  nop
```

## 反编译 C

```c
// TimerQueue::write_timer_queue_log @ 0x863101e

/* TimerQueue::write_timer_queue_log() */

void TimerQueue::write_timer_queue_log(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char local_50 [20];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  string local_34 [4];
  cMyTrace local_30 [16];
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  cMyTrace local_1c [16];
  
  std::string::string(local_34);
                    /* try { // try from 08631037 to 086311d6 has its CatchHandler @ 086311d9 */
  std::string::clear(local_34);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_38);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_3c);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_38,
                       (_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') break;
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_38);
    uVar5 = *(undefined4 *)(iVar4 + 4);
    puVar2 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_38);
    sprintf(local_50,"(%d %d) ",*puVar2,uVar5);
    std::string::operator+=(local_34,local_50);
    uVar3 = std::string::length(local_34);
    if (0x800 < uVar3) {
      uVar5 = std::string::c_str(local_34);
      cMyTrace::cMyTrace(local_30,"void TimerQueue::write_timer_queue_log()",0x101,0);
      cMyTrace::operator()(local_30,"TIMER_QUEUE_LOG : %s",uVar5);
      std::string::clear(local_34);
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_20,(int)local_38);
  }
  iVar4 = std::string::length(local_34);
  if (iVar4 != 0) {
    uVar5 = std::string::c_str(local_34);
    cMyTrace::cMyTrace(local_1c,"void TimerQueue::write_timer_queue_log()",0x107,0);
    cMyTrace::operator()(local_1c,"TIMER_QUEUE_LOG : %s",uVar5);
  }
  std::string::~string(local_34);
  return;
}
```
