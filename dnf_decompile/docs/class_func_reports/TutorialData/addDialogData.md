# addDialogData

`_ZN12TutorialData13addDialogDataEiiPKc`

`TutorialData::addDialogData(int, int, char const*)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab82dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab82dc  _ZN12TutorialData13addDialogDataEiiPKc
#           TutorialData::addDialogData(int, int, char const*)
# range [0x08ab82dc, 0x08ab8485]
08ab82dc +0x000:  push   %ebp
08ab82dd +0x001:  mov    %esp,%ebp
08ab82df +0x003:  push   %edi
08ab82e0 +0x004:  push   %esi
08ab82e1 +0x005:  push   %ebx
08ab82e2 +0x006:  sub    $0x5c,%esp
08ab82e5 +0x009:  mov    0x8(%ebp),%eax
08ab82e8 +0x00c:  lea    0x4(%eax),%ecx
08ab82eb +0x00f:  lea    -0x48(%ebp),%eax
08ab82ee +0x012:  lea    0xc(%ebp),%edx
08ab82f1 +0x015:  mov    %edx,0x8(%esp)
08ab82f5 +0x019:  mov    %ecx,0x4(%esp)
08ab82f9 +0x01d:  mov    %eax,(%esp)
08ab82fc +0x020:  call   08ab9af2 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x32d>  ; global constructors keyed to TutorialData::TutorialData()+0x32d
08ab8301 +0x025:  sub    $0x4,%esp
08ab8304 +0x028:  movl   $0x8,(%esp)
08ab830b +0x02f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ab8310 +0x034:  mov    %eax,%ebx
08ab8312 +0x036:  mov    %ebx,%eax
08ab8314 +0x038:  mov    %eax,(%esp)
08ab8317 +0x03b:  call   08ab981e <_GLOBAL__I__ZN12TutorialDataC2Ev+0x59>  ; global constructors keyed to TutorialData::TutorialData()+0x59
08ab831c +0x040:  jmp    08ab8336 <+0x5a>
08ab831e +0x042:  mov    %edx,%esi
08ab8320 +0x044:  mov    %eax,%edi
08ab8322 +0x046:  mov    %ebx,(%esp)
08ab8325 +0x049:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ab832a +0x04e:  mov    %edi,%eax
08ab832c +0x050:  mov    %esi,%edx
08ab832e +0x052:  mov    %eax,(%esp)
08ab8331 +0x055:  call   08ae3750 <_Unwind_Resume>
08ab8336 +0x05a:  mov    %ebx,%eax
08ab8338 +0x05c:  mov    %eax,-0x4c(%ebp)
08ab833b +0x05f:  mov    -0x4c(%ebp),%eax
08ab833e +0x062:  mov    0x10(%ebp),%edx
08ab8341 +0x065:  mov    %edx,0x4(%eax)
08ab8344 +0x068:  mov    -0x4c(%ebp),%eax
08ab8347 +0x06b:  mov    0x14(%ebp),%edx
08ab834a +0x06e:  mov    %edx,0x4(%esp)
08ab834e +0x072:  mov    %eax,(%esp)
08ab8351 +0x075:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08ab8356 +0x07a:  mov    0x8(%ebp),%eax
08ab8359 +0x07d:  lea    0x4(%eax),%edx
08ab835c +0x080:  lea    -0x44(%ebp),%eax
08ab835f +0x083:  mov    %edx,0x4(%esp)
08ab8363 +0x087:  mov    %eax,(%esp)
08ab8366 +0x08a:  call   08ab9b1e <_GLOBAL__I__ZN12TutorialDataC2Ev+0x359>  ; global constructors keyed to TutorialData::TutorialData()+0x359
08ab836b +0x08f:  sub    $0x4,%esp
08ab836e +0x092:  lea    -0x44(%ebp),%eax
08ab8371 +0x095:  mov    %eax,0x4(%esp)
08ab8375 +0x099:  lea    -0x48(%ebp),%eax
08ab8378 +0x09c:  mov    %eax,(%esp)
08ab837b +0x09f:  call   08ab9b44 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x37f>  ; global constructors keyed to TutorialData::TutorialData()+0x37f
08ab8380 +0x0a4:  test   %al,%al
08ab8382 +0x0a6:  je     08ab83a6 <+0xca>
08ab8384 +0x0a8:  lea    -0x48(%ebp),%eax
08ab8387 +0x0ab:  mov    %eax,(%esp)
08ab838a +0x0ae:  call   08ab9b58 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x393>  ; global constructors keyed to TutorialData::TutorialData()+0x393
08ab838f +0x0b3:  lea    0x4(%eax),%edx
08ab8392 +0x0b6:  lea    -0x4c(%ebp),%eax
08ab8395 +0x0b9:  mov    %eax,0x4(%esp)
08ab8399 +0x0bd:  mov    %edx,(%esp)
08ab839c +0x0c0:  call   08ab9b66 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x3a1>  ; global constructors keyed to TutorialData::TutorialData()+0x3a1
08ab83a1 +0x0c5:  jmp    08ab847a <+0x19e>
08ab83a6 +0x0ca:  lea    -0x58(%ebp),%eax
08ab83a9 +0x0cd:  mov    %eax,(%esp)
08ab83ac +0x0d0:  call   08ab9bda <_GLOBAL__I__ZN12TutorialDataC2Ev+0x415>  ; global constructors keyed to TutorialData::TutorialData()+0x415
08ab83b1 +0x0d5:  lea    -0x4c(%ebp),%eax
08ab83b4 +0x0d8:  mov    %eax,0x4(%esp)
08ab83b8 +0x0dc:  lea    -0x58(%ebp),%eax
08ab83bb +0x0df:  mov    %eax,(%esp)
08ab83be +0x0e2:  call   08ab9b66 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x3a1>  ; global constructors keyed to TutorialData::TutorialData()+0x3a1
08ab83c3 +0x0e7:  lea    -0x28(%ebp),%eax
08ab83c6 +0x0ea:  lea    -0x58(%ebp),%edx
08ab83c9 +0x0ed:  mov    %edx,0x8(%esp)
08ab83cd +0x0f1:  lea    0xc(%ebp),%edx
08ab83d0 +0x0f4:  mov    %edx,0x4(%esp)
08ab83d4 +0x0f8:  mov    %eax,(%esp)
08ab83d7 +0x0fb:  call   08ab9c4b <_GLOBAL__I__ZN12TutorialDataC2Ev+0x486>  ; global constructors keyed to TutorialData::TutorialData()+0x486
08ab83dc +0x100:  sub    $0x4,%esp
08ab83df +0x103:  lea    -0x28(%ebp),%eax
08ab83e2 +0x106:  mov    %eax,0x4(%esp)
08ab83e6 +0x10a:  lea    -0x38(%ebp),%eax
08ab83e9 +0x10d:  mov    %eax,(%esp)
08ab83ec +0x110:  call   08ab9c90 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x4cb>  ; global constructors keyed to TutorialData::TutorialData()+0x4cb
08ab83f1 +0x115:  mov    0x8(%ebp),%eax
08ab83f4 +0x118:  lea    0x4(%eax),%ecx
08ab83f7 +0x11b:  lea    -0x40(%ebp),%eax
08ab83fa +0x11e:  lea    -0x38(%ebp),%edx
08ab83fd +0x121:  mov    %edx,0x8(%esp)
08ab8401 +0x125:  mov    %ecx,0x4(%esp)
08ab8405 +0x129:  mov    %eax,(%esp)
08ab8408 +0x12c:  call   08ab9cca <_GLOBAL__I__ZN12TutorialDataC2Ev+0x505>  ; global constructors keyed to TutorialData::TutorialData()+0x505
08ab840d +0x131:  sub    $0x4,%esp
08ab8410 +0x134:  lea    -0x38(%ebp),%eax
08ab8413 +0x137:  mov    %eax,(%esp)
08ab8416 +0x13a:  call   08ab9848 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x83>  ; global constructors keyed to TutorialData::TutorialData()+0x83
08ab841b +0x13f:  jmp    08ab8447 <+0x16b>
08ab841d +0x141:  mov    %edx,%ebx
08ab841f +0x143:  mov    %eax,%esi
08ab8421 +0x145:  lea    -0x38(%ebp),%eax
08ab8424 +0x148:  mov    %eax,(%esp)
08ab8427 +0x14b:  call   08ab9848 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x83>  ; global constructors keyed to TutorialData::TutorialData()+0x83
08ab842c +0x150:  mov    %esi,%eax
08ab842e +0x152:  mov    %ebx,%edx
08ab8430 +0x154:  jmp    08ab8432 <+0x156>
08ab8432 +0x156:  mov    %edx,%ebx
08ab8434 +0x158:  mov    %eax,%esi
08ab8436 +0x15a:  lea    -0x28(%ebp),%eax
08ab8439 +0x15d:  mov    %eax,(%esp)
08ab843c +0x160:  call   08ab9832 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x6d>  ; global constructors keyed to TutorialData::TutorialData()+0x6d
08ab8441 +0x165:  mov    %esi,%eax
08ab8443 +0x167:  mov    %ebx,%edx
08ab8445 +0x169:  jmp    08ab8454 <+0x178>
08ab8447 +0x16b:  lea    -0x28(%ebp),%eax
08ab844a +0x16e:  mov    %eax,(%esp)
08ab844d +0x171:  call   08ab9832 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x6d>  ; global constructors keyed to TutorialData::TutorialData()+0x6d
08ab8452 +0x176:  jmp    08ab846f <+0x193>
08ab8454 +0x178:  mov    %edx,%ebx
08ab8456 +0x17a:  mov    %eax,%esi
08ab8458 +0x17c:  lea    -0x58(%ebp),%eax
08ab845b +0x17f:  mov    %eax,(%esp)
08ab845e +0x182:  call   08ab9bee <_GLOBAL__I__ZN12TutorialDataC2Ev+0x429>  ; global constructors keyed to TutorialData::TutorialData()+0x429
08ab8463 +0x187:  mov    %esi,%eax
08ab8465 +0x189:  mov    %ebx,%edx
08ab8467 +0x18b:  mov    %eax,(%esp)
08ab846a +0x18e:  call   08ae3750 <_Unwind_Resume>
08ab846f +0x193:  lea    -0x58(%ebp),%eax
08ab8472 +0x196:  mov    %eax,(%esp)
08ab8475 +0x199:  call   08ab9bee <_GLOBAL__I__ZN12TutorialDataC2Ev+0x429>  ; global constructors keyed to TutorialData::TutorialData()+0x429
08ab847a +0x19e:  lea    -0xc(%ebp),%esp
08ab847d +0x1a1:  add    $0x0,%esp
08ab8480 +0x1a4:  pop    %ebx
08ab8481 +0x1a5:  pop    %esi
08ab8482 +0x1a6:  pop    %edi
08ab8483 +0x1a7:  pop    %ebp
08ab8484 +0x1a8:  ret
08ab8485 +0x1a9:  nop
```

## 反编译 C

```c
// TutorialData::addDialogData @ 0x8ab82dc

/* TutorialData::addDialogData(int, int, char const*) */

void __thiscall
TutorialData::addDialogData(TutorialData *this,int param_1,int param_2,char *param_3)

{
  char cVar1;
  DialogData *this_00;
  int iVar2;
  vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>> local_5c [12];
  DialogData *local_50;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
  local_4c [4];
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  local_48 [4];
  pair local_44 [8];
  pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
  local_3c [16];
  pair<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
  local_2c [28];
  
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::find((int *)local_4c);
  this_00 = operator_new(8);
                    /* try { // try from 08ab8317 to 08ab831b has its CatchHandler @ 08ab831e */
  DialogData::DialogData(this_00);
  *(int *)(this_00 + 4) = param_2;
  local_50 = this_00;
  std::string::operator=((string *)this_00,param_3);
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::end(local_48);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
          ::operator!=(local_4c,(_Rb_tree_iterator *)local_48);
  if (cVar1 == '\0') {
    std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::vector
              (local_5c);
                    /* try { // try from 08ab83be to 08ab83db has its CatchHandler @ 08ab8454 */
    std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::push_back
              (local_5c,&local_50);
    std::
    make_pair<int&,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>&>
              ((int *)local_2c,(vector *)&param_1);
                    /* try { // try from 08ab83ec to 08ab83f0 has its CatchHandler @ 08ab8432 */
    std::
    pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
    ::pair<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
              (local_3c,local_2c);
                    /* try { // try from 08ab8408 to 08ab840c has its CatchHandler @ 08ab841d */
    std::
    map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
    ::insert(local_44);
                    /* try { // try from 08ab8416 to 08ab841a has its CatchHandler @ 08ab8432 */
    std::
    pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
    ::~pair(local_3c);
                    /* try { // try from 08ab844d to 08ab8451 has its CatchHandler @ 08ab8454 */
    std::pair<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>
    ::~pair(local_2c);
    std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::~vector
              (local_5c);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
            ::operator->(local_4c);
    std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::push_back
              ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>> *)
               (iVar2 + 4),&local_50);
  }
  return;
}
```
