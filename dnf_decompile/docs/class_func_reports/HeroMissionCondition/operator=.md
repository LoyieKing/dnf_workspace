# operator=

`_ZN20HeroMissionConditionaSERKS_`

`HeroMissionCondition::operator=(HeroMissionCondition const&)`

| 类 | 地址 |
|---|---|
| `HeroMissionCondition` | `0x08961234` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08961234  _ZN20HeroMissionConditionaSERKS_
#           HeroMissionCondition::operator=(HeroMissionCondition const&)
# range [0x08961234, 0x08961375]
08961234 +0x000:  push   %ebp
08961235 +0x001:  mov    %esp,%ebp
08961237 +0x003:  sub    $0x38,%esp
0896123a +0x006:  mov    0xc(%ebp),%eax
0896123d +0x009:  mov    (%eax),%edx
0896123f +0x00b:  mov    0x8(%ebp),%eax
08961242 +0x00e:  mov    %edx,(%eax)
08961244 +0x010:  mov    0xc(%ebp),%eax
08961247 +0x013:  mov    0x4(%eax),%edx
0896124a +0x016:  mov    0x8(%ebp),%eax
0896124d +0x019:  mov    %edx,0x4(%eax)
08961250 +0x01c:  mov    0xc(%ebp),%eax
08961253 +0x01f:  movzbl 0x8(%eax),%edx
08961257 +0x023:  mov    0x8(%ebp),%eax
0896125a +0x026:  mov    %dl,0x8(%eax)
0896125d +0x029:  mov    0xc(%ebp),%eax
08961260 +0x02c:  movzbl 0x9(%eax),%edx
08961264 +0x030:  mov    0x8(%ebp),%eax
08961267 +0x033:  mov    %dl,0x9(%eax)
0896126a +0x036:  mov    0xc(%ebp),%eax
0896126d +0x039:  lea    0xc(%eax),%edx
08961270 +0x03c:  mov    0x8(%ebp),%eax
08961273 +0x03f:  add    $0xc,%eax
08961276 +0x042:  mov    %edx,0x4(%esp)
0896127a +0x046:  mov    %eax,(%esp)
0896127d +0x049:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08961282 +0x04e:  mov    0xc(%ebp),%eax
08961285 +0x051:  lea    0x10(%eax),%edx
08961288 +0x054:  mov    0x8(%ebp),%eax
0896128b +0x057:  add    $0x10,%eax
0896128e +0x05a:  mov    %edx,0x4(%esp)
08961292 +0x05e:  mov    %eax,(%esp)
08961295 +0x061:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0896129a +0x066:  mov    0x8(%ebp),%eax
0896129d +0x069:  lea    0x14(%eax),%edx
089612a0 +0x06c:  lea    -0x24(%ebp),%eax
089612a3 +0x06f:  mov    %edx,0x4(%esp)
089612a7 +0x073:  mov    %eax,(%esp)
089612aa +0x076:  call   08963020 <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xc83>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xc83
089612af +0x07b:  sub    $0x4,%esp
089612b2 +0x07e:  mov    0xc(%ebp),%eax
089612b5 +0x081:  lea    0x14(%eax),%edx
089612b8 +0x084:  lea    -0x20(%ebp),%eax
089612bb +0x087:  mov    %edx,0x4(%esp)
089612bf +0x08b:  mov    %eax,(%esp)
089612c2 +0x08e:  call   08962ff4 <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xc57>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xc57
089612c7 +0x093:  sub    $0x4,%esp
089612ca +0x096:  mov    0xc(%ebp),%eax
089612cd +0x099:  lea    0x14(%eax),%edx
089612d0 +0x09c:  lea    -0x1c(%ebp),%eax
089612d3 +0x09f:  mov    %edx,0x4(%esp)
089612d7 +0x0a3:  mov    %eax,(%esp)
089612da +0x0a6:  call   08962fc8 <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xc2b>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xc2b
089612df +0x0ab:  sub    $0x4,%esp
089612e2 +0x0ae:  lea    -0x28(%ebp),%eax
089612e5 +0x0b1:  mov    -0x24(%ebp),%edx
089612e8 +0x0b4:  mov    %edx,0xc(%esp)
089612ec +0x0b8:  mov    -0x20(%ebp),%edx
089612ef +0x0bb:  mov    %edx,0x8(%esp)
089612f3 +0x0bf:  mov    -0x1c(%ebp),%edx
089612f6 +0x0c2:  mov    %edx,0x4(%esp)
089612fa +0x0c6:  mov    %eax,(%esp)
089612fd +0x0c9:  call   08963043 <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xca6>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xca6
08961302 +0x0ce:  sub    $0x4,%esp
08961305 +0x0d1:  mov    0x8(%ebp),%eax
08961308 +0x0d4:  lea    0x20(%eax),%edx
0896130b +0x0d7:  lea    -0x14(%ebp),%eax
0896130e +0x0da:  mov    %edx,0x4(%esp)
08961312 +0x0de:  mov    %eax,(%esp)
08961315 +0x0e1:  call   089630a0 <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xd03>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xd03
0896131a +0x0e6:  sub    $0x4,%esp
0896131d +0x0e9:  mov    0xc(%ebp),%eax
08961320 +0x0ec:  lea    0x20(%eax),%edx
08961323 +0x0ef:  lea    -0x10(%ebp),%eax
08961326 +0x0f2:  mov    %edx,0x4(%esp)
0896132a +0x0f6:  mov    %eax,(%esp)
0896132d +0x0f9:  call   08152122 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1a57>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1a57
08961332 +0x0fe:  sub    $0x4,%esp
08961335 +0x101:  mov    0xc(%ebp),%eax
08961338 +0x104:  lea    0x20(%eax),%edx
0896133b +0x107:  lea    -0xc(%ebp),%eax
0896133e +0x10a:  mov    %edx,0x4(%esp)
08961342 +0x10e:  mov    %eax,(%esp)
08961345 +0x111:  call   081520f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1a2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1a2b
0896134a +0x116:  sub    $0x4,%esp
0896134d +0x119:  lea    -0x18(%ebp),%eax
08961350 +0x11c:  mov    -0x14(%ebp),%edx
08961353 +0x11f:  mov    %edx,0xc(%esp)
08961357 +0x123:  mov    -0x10(%ebp),%edx
0896135a +0x126:  mov    %edx,0x8(%esp)
0896135e +0x12a:  mov    -0xc(%ebp),%edx
08961361 +0x12d:  mov    %edx,0x4(%esp)
08961365 +0x131:  mov    %eax,(%esp)
08961368 +0x134:  call   089630c3 <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xd26>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xd26
0896136d +0x139:  sub    $0x4,%esp
08961370 +0x13c:  mov    0x8(%ebp),%eax
08961373 +0x13f:  leave
08961374 +0x140:  ret
08961375 +0x141:  nop
```

## 反编译 C

```c
// HeroMissionCondition::operator= @ 0x8961234

/* HeroMissionCondition::TEMPNAMEPLACEHOLDERVALUE(HeroMissionCondition const&) */

HeroMissionCondition * __thiscall
HeroMissionCondition::operator=(HeroMissionCondition *this,HeroMissionCondition *param_1)

{
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  this[9] = param_1[9];
  std::string::operator=((string *)(this + 0xc),(string *)(param_1 + 0xc));
  std::string::operator=((string *)(this + 0x10),(string *)(param_1 + 0x10));
  std::
  back_inserter<std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
            ((vector *)&local_28);
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  end();
  std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
  begin();
  std::
  copy<__gnu_cxx::__normal_iterator<HeroMissionCondition::RewardData_const*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>,std::back_insert_iterator<std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>>
            (local_2c,local_20,local_24,local_28);
  std::back_inserter<std::vector<unsigned_short,std::allocator<unsigned_short>>>
            ((vector *)&local_18);
  std::vector<unsigned_short,std::allocator<unsigned_short>>::end();
  std::vector<unsigned_short,std::allocator<unsigned_short>>::begin();
  std::
  copy<__gnu_cxx::__normal_iterator<unsigned_short_const*,std::vector<unsigned_short,std::allocator<unsigned_short>>>,std::back_insert_iterator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
            (local_1c,local_10,local_14,local_18);
  return this;
}
```
