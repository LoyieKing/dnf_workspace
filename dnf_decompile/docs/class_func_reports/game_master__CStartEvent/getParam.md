# getParam

`_ZN11game_master11CStartEvent8getParamESs`

`game_master::CStartEvent::getParam(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `game_master::CStartEvent` | `0x084ab64e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab64e  _ZN11game_master11CStartEvent8getParamESs
#           game_master::CStartEvent::getParam(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x084ab64e, 0x084ab885]
084ab64e +0x000:  push   %ebp
084ab64f +0x001:  mov    %esp,%ebp
084ab651 +0x003:  push   %edi
084ab652 +0x004:  push   %esi
084ab653 +0x005:  push   %ebx
084ab654 +0x006:  sub    $0x7c,%esp
084ab657 +0x009:  movl   $0x0,-0x1c(%ebp)
084ab65e +0x010:  lea    -0x64(%ebp),%ebx
084ab661 +0x013:  mov    %ebx,%edi
084ab663 +0x015:  mov    $0xf,%esi
084ab668 +0x01a:  jmp    084ab678 <+0x2a>
084ab66a +0x01c:  mov    %edi,(%esp)
084ab66d +0x01f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
084ab672 +0x024:  add    $0x4,%edi
084ab675 +0x027:  sub    $0x1,%esi
084ab678 +0x02a:  cmp    $0xffffffff,%esi
084ab67b +0x02d:  setne  %al
084ab67e +0x030:  test   %al,%al
084ab680 +0x032:  jne    084ab66a <+0x1c>
084ab682 +0x034:  jmp    084ab6b8 <+0x6a>
084ab684 +0x036:  mov    %edx,%edi
084ab686 +0x038:  mov    %eax,-0x6c(%ebp)
084ab689 +0x03b:  test   %ebx,%ebx
084ab68b +0x03d:  je     084ab6ab <+0x5d>
084ab68d +0x03f:  mov    $0xf,%eax
084ab692 +0x044:  sub    %esi,%eax
084ab694 +0x046:  shl    $0x2,%eax
084ab697 +0x049:  lea    (%ebx,%eax,1),%esi
084ab69a +0x04c:  cmp    %ebx,%esi
084ab69c +0x04e:  je     084ab6ab <+0x5d>
084ab69e +0x050:  sub    $0x4,%esi
084ab6a1 +0x053:  mov    %esi,(%esp)
084ab6a4 +0x056:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab6a9 +0x05b:  jmp    084ab69a <+0x4c>
084ab6ab +0x05d:  mov    -0x6c(%ebp),%eax
084ab6ae +0x060:  mov    %edi,%edx
084ab6b0 +0x062:  mov    %eax,(%esp)
084ab6b3 +0x065:  call   08ae3750 <_Unwind_Resume>
084ab6b8 +0x06a:  jmp    084ab793 <+0x145>
084ab6bd +0x06f:  mov    -0x1c(%ebp),%edx
084ab6c0 +0x072:  lea    -0x24(%ebp),%eax
084ab6c3 +0x075:  mov    %edx,0xc(%esp)
084ab6c7 +0x079:  movl   $0x0,0x8(%esp)
084ab6cf +0x081:  mov    0xc(%ebp),%edx
084ab6d2 +0x084:  mov    %edx,0x4(%esp)
084ab6d6 +0x088:  mov    %eax,(%esp)
084ab6d9 +0x08b:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084ab6de +0x090:  sub    $0x4,%esp
084ab6e1 +0x093:  mov    0x8(%ebp),%eax
084ab6e4 +0x096:  mov    0x8(%eax),%edx
084ab6e7 +0x099:  lea    -0x64(%ebp),%eax
084ab6ea +0x09c:  shl    $0x2,%edx
084ab6ed +0x09f:  lea    (%eax,%edx,1),%edx
084ab6f0 +0x0a2:  lea    -0x24(%ebp),%eax
084ab6f3 +0x0a5:  mov    %eax,0x4(%esp)
084ab6f7 +0x0a9:  mov    %edx,(%esp)
084ab6fa +0x0ac:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084ab6ff +0x0b1:  jmp    084ab719 <+0xcb>
084ab701 +0x0b3:  mov    %edx,%ebx
084ab703 +0x0b5:  mov    %eax,%esi
084ab705 +0x0b7:  lea    -0x24(%ebp),%eax
084ab708 +0x0ba:  mov    %eax,(%esp)
084ab70b +0x0bd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab710 +0x0c2:  mov    %esi,%eax
084ab712 +0x0c4:  mov    %ebx,%edx
084ab714 +0x0c6:  jmp    084ab83d <+0x1ef>
084ab719 +0x0cb:  lea    -0x24(%ebp),%eax
084ab71c +0x0ce:  mov    %eax,(%esp)
084ab71f +0x0d1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab724 +0x0d6:  mov    -0x1c(%ebp),%eax
084ab727 +0x0d9:  add    $0x1,%eax
084ab72a +0x0dc:  mov    %eax,%edx
084ab72c +0x0de:  lea    -0x20(%ebp),%eax
084ab72f +0x0e1:  movl   $0xffffffff,0xc(%esp)
084ab737 +0x0e9:  mov    %edx,0x8(%esp)
084ab73b +0x0ed:  mov    0xc(%ebp),%edx
084ab73e +0x0f0:  mov    %edx,0x4(%esp)
084ab742 +0x0f4:  mov    %eax,(%esp)
084ab745 +0x0f7:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084ab74a +0x0fc:  sub    $0x4,%esp
084ab74d +0x0ff:  lea    -0x20(%ebp),%eax
084ab750 +0x102:  mov    %eax,0x4(%esp)
084ab754 +0x106:  mov    0xc(%ebp),%eax
084ab757 +0x109:  mov    %eax,(%esp)
084ab75a +0x10c:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084ab75f +0x111:  jmp    084ab779 <+0x12b>
084ab761 +0x113:  mov    %edx,%ebx
084ab763 +0x115:  mov    %eax,%esi
084ab765 +0x117:  lea    -0x20(%ebp),%eax
084ab768 +0x11a:  mov    %eax,(%esp)
084ab76b +0x11d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab770 +0x122:  mov    %esi,%eax
084ab772 +0x124:  mov    %ebx,%edx
084ab774 +0x126:  jmp    084ab83d <+0x1ef>
084ab779 +0x12b:  lea    -0x20(%ebp),%eax
084ab77c +0x12e:  mov    %eax,(%esp)
084ab77f +0x131:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab784 +0x136:  mov    0x8(%ebp),%eax
084ab787 +0x139:  mov    0x8(%eax),%eax
084ab78a +0x13c:  lea    0x1(%eax),%edx
084ab78d +0x13f:  mov    0x8(%ebp),%eax
084ab790 +0x142:  mov    %edx,0x8(%eax)
084ab793 +0x145:  movl   $0x0,0x8(%esp)
084ab79b +0x14d:  movl   $0x20,0x4(%esp)
084ab7a3 +0x155:  mov    0xc(%ebp),%eax
084ab7a6 +0x158:  mov    %eax,(%esp)
084ab7a9 +0x15b:  call   08707000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xc10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xc10
084ab7ae +0x160:  mov    %eax,-0x1c(%ebp)
084ab7b1 +0x163:  cmpl   $0xffffffff,-0x1c(%ebp)
084ab7b5 +0x167:  setne  %al
084ab7b8 +0x16a:  test   %al,%al
084ab7ba +0x16c:  jne    084ab6bd <+0x6f>
084ab7c0 +0x172:  mov    0x8(%ebp),%eax
084ab7c3 +0x175:  mov    0x8(%eax),%edx
084ab7c6 +0x178:  lea    -0x64(%ebp),%eax
084ab7c9 +0x17b:  shl    $0x2,%edx
084ab7cc +0x17e:  lea    (%eax,%edx,1),%edx
084ab7cf +0x181:  mov    0xc(%ebp),%eax
084ab7d2 +0x184:  mov    %eax,0x4(%esp)
084ab7d6 +0x188:  mov    %edx,(%esp)
084ab7d9 +0x18b:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084ab7de +0x190:  lea    -0x64(%ebp),%eax
084ab7e1 +0x193:  mov    %eax,(%esp)
084ab7e4 +0x196:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ab7e9 +0x19b:  mov    %eax,(%esp)
084ab7ec +0x19e:  call   0807e6f0 <_init+0xfe8>
084ab7f1 +0x1a3:  mov    0x8(%ebp),%edx
084ab7f4 +0x1a6:  mov    %eax,0xc(%edx)
084ab7f7 +0x1a9:  lea    -0x64(%ebp),%eax
084ab7fa +0x1ac:  add    $0x4,%eax
084ab7fd +0x1af:  mov    %eax,(%esp)
084ab800 +0x1b2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ab805 +0x1b7:  mov    %eax,(%esp)
084ab808 +0x1ba:  call   0807e6f0 <_init+0xfe8>
084ab80d +0x1bf:  mov    %eax,%edx
084ab80f +0x1c1:  mov    0x8(%ebp),%eax
084ab812 +0x1c4:  mov    %dx,0x10(%eax)
084ab816 +0x1c8:  lea    -0x64(%ebp),%eax
084ab819 +0x1cb:  add    $0x8,%eax
084ab81c +0x1ce:  mov    %eax,(%esp)
084ab81f +0x1d1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084ab824 +0x1d6:  mov    %eax,(%esp)
084ab827 +0x1d9:  call   0807e6f0 <_init+0xfe8>
084ab82c +0x1de:  mov    %eax,%edx
084ab82e +0x1e0:  mov    0x8(%ebp),%eax
084ab831 +0x1e3:  mov    %dx,0x12(%eax)
084ab835 +0x1e7:  lea    -0x64(%ebp),%eax
084ab838 +0x1ea:  lea    0x40(%eax),%ebx
084ab83b +0x1ed:  jmp    084ab867 <+0x219>
084ab83d +0x1ef:  mov    %edx,%esi
084ab83f +0x1f1:  mov    %eax,%edi
084ab841 +0x1f3:  lea    -0x64(%ebp),%eax
084ab844 +0x1f6:  lea    0x40(%eax),%ebx
084ab847 +0x1f9:  lea    -0x64(%ebp),%eax
084ab84a +0x1fc:  cmp    %eax,%ebx
084ab84c +0x1fe:  je     084ab85b <+0x20d>
084ab84e +0x200:  sub    $0x4,%ebx
084ab851 +0x203:  mov    %ebx,(%esp)
084ab854 +0x206:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab859 +0x20b:  jmp    084ab847 <+0x1f9>
084ab85b +0x20d:  mov    %edi,%eax
084ab85d +0x20f:  mov    %esi,%edx
084ab85f +0x211:  mov    %eax,(%esp)
084ab862 +0x214:  call   08ae3750 <_Unwind_Resume>
084ab867 +0x219:  lea    -0x64(%ebp),%eax
084ab86a +0x21c:  cmp    %eax,%ebx
084ab86c +0x21e:  je     084ab87b <+0x22d>
084ab86e +0x220:  sub    $0x4,%ebx
084ab871 +0x223:  mov    %ebx,(%esp)
084ab874 +0x226:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084ab879 +0x22b:  jmp    084ab867 <+0x219>
084ab87b +0x22d:  lea    -0xc(%ebp),%esp
084ab87e +0x230:  add    $0x0,%esp
084ab881 +0x233:  pop    %ebx
084ab882 +0x234:  pop    %esi
084ab883 +0x235:  pop    %edi
084ab884 +0x236:  pop    %ebp
084ab885 +0x237:  ret
```

## 反编译 C

```c
// game_master::CStartEvent::getParam @ 0x84ab64e

/* game_master::CStartEvent::getParam(std::string) */

void __thiscall game_master::CStartEvent::getParam(CStartEvent *this,string param_1)

{
  char *pcVar1;
  string *psVar2;
  int iVar3;
  string local_68 [4];
  string asStack_64 [4];
  string asStack_60 [56];
  string local_28 [4];
  string local_24 [4];
  int local_20;
  
  local_20 = 0;
  psVar2 = local_68;
  for (iVar3 = 0xf; iVar3 != -1; iVar3 = iVar3 + -1) {
                    /* try { // try from 084ab66d to 084ab671 has its CatchHandler @ 084ab684 */
    std::string::string(psVar2);
    psVar2 = psVar2 + 4;
  }
  while (local_20 = std::string::find((string *)param_1._M_dataplus._M_p,' ',0), local_20 != -1) {
                    /* try { // try from 084ab6d9 to 084ab6dd has its CatchHandler @ 084ab83d */
    std::string::substr((uint)local_28,(uint)param_1._M_dataplus._M_p);
                    /* try { // try from 084ab6fa to 084ab6fe has its CatchHandler @ 084ab701 */
    std::string::operator=(local_68 + *(int *)(this + 8) * 4,local_28);
                    /* try { // try from 084ab71f to 084ab749 has its CatchHandler @ 084ab83d */
    std::string::~string(local_28);
    std::string::substr((uint)local_24,(uint)param_1._M_dataplus._M_p);
                    /* try { // try from 084ab75a to 084ab75e has its CatchHandler @ 084ab761 */
    std::string::operator=((string *)param_1._M_dataplus._M_p,local_24);
                    /* try { // try from 084ab77f to 084ab823 has its CatchHandler @ 084ab83d */
    std::string::~string(local_24);
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  std::string::operator=(local_68 + *(int *)(this + 8) * 4,(string *)param_1._M_dataplus._M_p);
  pcVar1 = (char *)std::string::c_str(local_68);
  iVar3 = atoi(pcVar1);
  *(int *)(this + 0xc) = iVar3;
  pcVar1 = (char *)std::string::c_str(asStack_64);
  iVar3 = atoi(pcVar1);
  *(short *)(this + 0x10) = (short)iVar3;
  pcVar1 = (char *)std::string::c_str(asStack_60);
  iVar3 = atoi(pcVar1);
  *(short *)(this + 0x12) = (short)iVar3;
  psVar2 = local_28;
  while (psVar2 != local_68) {
    psVar2 = psVar2 + -4;
    std::string::~string(psVar2);
  }
  return;
}
```
