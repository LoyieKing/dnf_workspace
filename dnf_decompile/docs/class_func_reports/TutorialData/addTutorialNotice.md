# addTutorialNotice

`_ZN12TutorialData17addTutorialNoticeEiiiPKc`

`TutorialData::addTutorialNotice(int, int, int, char const*)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab8a86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8a86  _ZN12TutorialData17addTutorialNoticeEiiiPKc
#           TutorialData::addTutorialNotice(int, int, int, char const*)
# range [0x08ab8a86, 0x08ab8c4b]
08ab8a86 +0x000:  push   %ebp
08ab8a87 +0x001:  mov    %esp,%ebp
08ab8a89 +0x003:  push   %edi
08ab8a8a +0x004:  push   %esi
08ab8a8b +0x005:  push   %ebx
08ab8a8c +0x006:  sub    $0x5c,%esp
08ab8a8f +0x009:  mov    0x8(%ebp),%eax
08ab8a92 +0x00c:  lea    0x124(%eax),%ecx
08ab8a98 +0x012:  lea    -0x48(%ebp),%eax
08ab8a9b +0x015:  lea    0xc(%ebp),%edx
08ab8a9e +0x018:  mov    %edx,0x8(%esp)
08ab8aa2 +0x01c:  mov    %ecx,0x4(%esp)
08ab8aa6 +0x020:  mov    %eax,(%esp)
08ab8aa9 +0x023:  call   08ab9f88 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x7c3>  ; global constructors keyed to TutorialData::TutorialData()+0x7c3
08ab8aae +0x028:  sub    $0x4,%esp
08ab8ab1 +0x02b:  movl   $0x10,(%esp)
08ab8ab8 +0x032:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ab8abd +0x037:  mov    %eax,%ebx
08ab8abf +0x039:  mov    %ebx,%eax
08ab8ac1 +0x03b:  mov    %eax,(%esp)
08ab8ac4 +0x03e:  call   08ab985e <_GLOBAL__I__ZN12TutorialDataC2Ev+0x99>  ; global constructors keyed to TutorialData::TutorialData()+0x99
08ab8ac9 +0x043:  jmp    08ab8ae3 <+0x5d>
08ab8acb +0x045:  mov    %edx,%esi
08ab8acd +0x047:  mov    %eax,%edi
08ab8acf +0x049:  mov    %ebx,(%esp)
08ab8ad2 +0x04c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ab8ad7 +0x051:  mov    %edi,%eax
08ab8ad9 +0x053:  mov    %esi,%edx
08ab8adb +0x055:  mov    %eax,(%esp)
08ab8ade +0x058:  call   08ae3750 <_Unwind_Resume>
08ab8ae3 +0x05d:  mov    %ebx,%eax
08ab8ae5 +0x05f:  mov    %eax,-0x4c(%ebp)
08ab8ae8 +0x062:  mov    -0x4c(%ebp),%eax
08ab8aeb +0x065:  mov    0xc(%ebp),%edx
08ab8aee +0x068:  mov    %edx,(%eax)
08ab8af0 +0x06a:  mov    -0x4c(%ebp),%eax
08ab8af3 +0x06d:  lea    0x4(%eax),%edx
08ab8af6 +0x070:  mov    0x18(%ebp),%eax
08ab8af9 +0x073:  mov    %eax,0x4(%esp)
08ab8afd +0x077:  mov    %edx,(%esp)
08ab8b00 +0x07a:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
08ab8b05 +0x07f:  mov    -0x4c(%ebp),%eax
08ab8b08 +0x082:  mov    0x10(%ebp),%edx
08ab8b0b +0x085:  mov    %edx,0x8(%eax)
08ab8b0e +0x088:  mov    -0x4c(%ebp),%eax
08ab8b11 +0x08b:  mov    0x14(%ebp),%edx
08ab8b14 +0x08e:  mov    %edx,0xc(%eax)
08ab8b17 +0x091:  mov    0x8(%ebp),%eax
08ab8b1a +0x094:  lea    0x124(%eax),%edx
08ab8b20 +0x09a:  lea    -0x44(%ebp),%eax
08ab8b23 +0x09d:  mov    %edx,0x4(%esp)
08ab8b27 +0x0a1:  mov    %eax,(%esp)
08ab8b2a +0x0a4:  call   08ab9fb4 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x7ef>  ; global constructors keyed to TutorialData::TutorialData()+0x7ef
08ab8b2f +0x0a9:  sub    $0x4,%esp
08ab8b32 +0x0ac:  lea    -0x44(%ebp),%eax
08ab8b35 +0x0af:  mov    %eax,0x4(%esp)
08ab8b39 +0x0b3:  lea    -0x48(%ebp),%eax
08ab8b3c +0x0b6:  mov    %eax,(%esp)
08ab8b3f +0x0b9:  call   08ab9fda <_GLOBAL__I__ZN12TutorialDataC2Ev+0x815>  ; global constructors keyed to TutorialData::TutorialData()+0x815
08ab8b44 +0x0be:  test   %al,%al
08ab8b46 +0x0c0:  je     08ab8b6a <+0xe4>
08ab8b48 +0x0c2:  lea    -0x48(%ebp),%eax
08ab8b4b +0x0c5:  mov    %eax,(%esp)
08ab8b4e +0x0c8:  call   08ab9fee <_GLOBAL__I__ZN12TutorialDataC2Ev+0x829>  ; global constructors keyed to TutorialData::TutorialData()+0x829
08ab8b53 +0x0cd:  lea    0x4(%eax),%edx
08ab8b56 +0x0d0:  lea    -0x4c(%ebp),%eax
08ab8b59 +0x0d3:  mov    %eax,0x4(%esp)
08ab8b5d +0x0d7:  mov    %edx,(%esp)
08ab8b60 +0x0da:  call   08ab9ffc <_GLOBAL__I__ZN12TutorialDataC2Ev+0x837>  ; global constructors keyed to TutorialData::TutorialData()+0x837
08ab8b65 +0x0df:  jmp    08ab8c41 <+0x1bb>
08ab8b6a +0x0e4:  lea    -0x58(%ebp),%eax
08ab8b6d +0x0e7:  mov    %eax,(%esp)
08ab8b70 +0x0ea:  call   08aba070 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x8ab>  ; global constructors keyed to TutorialData::TutorialData()+0x8ab
08ab8b75 +0x0ef:  lea    -0x4c(%ebp),%eax
08ab8b78 +0x0f2:  mov    %eax,0x4(%esp)
08ab8b7c +0x0f6:  lea    -0x58(%ebp),%eax
08ab8b7f +0x0f9:  mov    %eax,(%esp)
08ab8b82 +0x0fc:  call   08ab9ffc <_GLOBAL__I__ZN12TutorialDataC2Ev+0x837>  ; global constructors keyed to TutorialData::TutorialData()+0x837
08ab8b87 +0x101:  lea    -0x28(%ebp),%eax
08ab8b8a +0x104:  lea    -0x58(%ebp),%edx
08ab8b8d +0x107:  mov    %edx,0x8(%esp)
08ab8b91 +0x10b:  lea    0xc(%ebp),%edx
08ab8b94 +0x10e:  mov    %edx,0x4(%esp)
08ab8b98 +0x112:  mov    %eax,(%esp)
08ab8b9b +0x115:  call   08aba0e1 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x91c>  ; global constructors keyed to TutorialData::TutorialData()+0x91c
08ab8ba0 +0x11a:  sub    $0x4,%esp
08ab8ba3 +0x11d:  lea    -0x28(%ebp),%eax
08ab8ba6 +0x120:  mov    %eax,0x4(%esp)
08ab8baa +0x124:  lea    -0x38(%ebp),%eax
08ab8bad +0x127:  mov    %eax,(%esp)
08ab8bb0 +0x12a:  call   08aba126 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x961>  ; global constructors keyed to TutorialData::TutorialData()+0x961
08ab8bb5 +0x12f:  mov    0x8(%ebp),%eax
08ab8bb8 +0x132:  lea    0x124(%eax),%ecx
08ab8bbe +0x138:  lea    -0x40(%ebp),%eax
08ab8bc1 +0x13b:  lea    -0x38(%ebp),%edx
08ab8bc4 +0x13e:  mov    %edx,0x8(%esp)
08ab8bc8 +0x142:  mov    %ecx,0x4(%esp)
08ab8bcc +0x146:  mov    %eax,(%esp)
08ab8bcf +0x149:  call   08aba160 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x99b>  ; global constructors keyed to TutorialData::TutorialData()+0x99b
08ab8bd4 +0x14e:  sub    $0x4,%esp
08ab8bd7 +0x151:  lea    -0x38(%ebp),%eax
08ab8bda +0x154:  mov    %eax,(%esp)
08ab8bdd +0x157:  call   08ab988a <_GLOBAL__I__ZN12TutorialDataC2Ev+0xc5>  ; global constructors keyed to TutorialData::TutorialData()+0xc5
08ab8be2 +0x15c:  jmp    08ab8c0e <+0x188>
08ab8be4 +0x15e:  mov    %edx,%ebx
08ab8be6 +0x160:  mov    %eax,%esi
08ab8be8 +0x162:  lea    -0x38(%ebp),%eax
08ab8beb +0x165:  mov    %eax,(%esp)
08ab8bee +0x168:  call   08ab988a <_GLOBAL__I__ZN12TutorialDataC2Ev+0xc5>  ; global constructors keyed to TutorialData::TutorialData()+0xc5
08ab8bf3 +0x16d:  mov    %esi,%eax
08ab8bf5 +0x16f:  mov    %ebx,%edx
08ab8bf7 +0x171:  jmp    08ab8bf9 <+0x173>
08ab8bf9 +0x173:  mov    %edx,%ebx
08ab8bfb +0x175:  mov    %eax,%esi
08ab8bfd +0x177:  lea    -0x28(%ebp),%eax
08ab8c00 +0x17a:  mov    %eax,(%esp)
08ab8c03 +0x17d:  call   08ab9874 <_GLOBAL__I__ZN12TutorialDataC2Ev+0xaf>  ; global constructors keyed to TutorialData::TutorialData()+0xaf
08ab8c08 +0x182:  mov    %esi,%eax
08ab8c0a +0x184:  mov    %ebx,%edx
08ab8c0c +0x186:  jmp    08ab8c1b <+0x195>
08ab8c0e +0x188:  lea    -0x28(%ebp),%eax
08ab8c11 +0x18b:  mov    %eax,(%esp)
08ab8c14 +0x18e:  call   08ab9874 <_GLOBAL__I__ZN12TutorialDataC2Ev+0xaf>  ; global constructors keyed to TutorialData::TutorialData()+0xaf
08ab8c19 +0x193:  jmp    08ab8c36 <+0x1b0>
08ab8c1b +0x195:  mov    %edx,%ebx
08ab8c1d +0x197:  mov    %eax,%esi
08ab8c1f +0x199:  lea    -0x58(%ebp),%eax
08ab8c22 +0x19c:  mov    %eax,(%esp)
08ab8c25 +0x19f:  call   08aba084 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x8bf>  ; global constructors keyed to TutorialData::TutorialData()+0x8bf
08ab8c2a +0x1a4:  mov    %esi,%eax
08ab8c2c +0x1a6:  mov    %ebx,%edx
08ab8c2e +0x1a8:  mov    %eax,(%esp)
08ab8c31 +0x1ab:  call   08ae3750 <_Unwind_Resume>
08ab8c36 +0x1b0:  lea    -0x58(%ebp),%eax
08ab8c39 +0x1b3:  mov    %eax,(%esp)
08ab8c3c +0x1b6:  call   08aba084 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x8bf>  ; global constructors keyed to TutorialData::TutorialData()+0x8bf
08ab8c41 +0x1bb:  lea    -0xc(%ebp),%esp
08ab8c44 +0x1be:  add    $0x0,%esp
08ab8c47 +0x1c1:  pop    %ebx
08ab8c48 +0x1c2:  pop    %esi
08ab8c49 +0x1c3:  pop    %edi
08ab8c4a +0x1c4:  pop    %ebp
08ab8c4b +0x1c5:  ret
```

## 反编译 C

```c
// TutorialData::addTutorialNotice @ 0x8ab8a86

/* TutorialData::addTutorialNotice(int, int, int, char const*) */

void __thiscall
TutorialData::addTutorialNotice
          (TutorialData *this,int param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  TutorialNotice *this_00;
  int iVar2;
  vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>> local_5c [12];
  TutorialNotice *local_50;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
  local_4c [4];
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  local_48 [4];
  pair local_44 [8];
  pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
  local_3c [16];
  pair<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
  local_2c [28];
  
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::find((int *)local_4c);
  this_00 = operator_new(0x10);
                    /* try { // try from 08ab8ac4 to 08ab8ac8 has its CatchHandler @ 08ab8acb */
  TutorialNotice::TutorialNotice(this_00);
  *(int *)this_00 = param_1;
  local_50 = this_00;
  std::string::operator=((string *)(this_00 + 4),param_4);
  *(int *)(local_50 + 8) = param_2;
  *(int *)(local_50 + 0xc) = param_3;
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::end(local_48);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
          ::operator!=(local_4c,(_Rb_tree_iterator *)local_48);
  if (cVar1 == '\0') {
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::vector
              (local_5c);
                    /* try { // try from 08ab8b82 to 08ab8b9f has its CatchHandler @ 08ab8c1b */
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::
    push_back(local_5c,&local_50);
    std::
    make_pair<int&,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>&>
              ((int *)local_2c,(vector *)&param_1);
                    /* try { // try from 08ab8bb0 to 08ab8bb4 has its CatchHandler @ 08ab8bf9 */
    std::
    pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
    ::
    pair<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
              (local_3c,local_2c);
                    /* try { // try from 08ab8bcf to 08ab8bd3 has its CatchHandler @ 08ab8be4 */
    std::
    map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
    ::insert(local_44);
                    /* try { // try from 08ab8bdd to 08ab8be1 has its CatchHandler @ 08ab8bf9 */
    std::
    pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
    ::~pair(local_3c);
                    /* try { // try from 08ab8c14 to 08ab8c18 has its CatchHandler @ 08ab8c1b */
    std::
    pair<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>
    ::~pair(local_2c);
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::
    ~vector(local_5c);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
            ::operator->(local_4c);
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::
    push_back((vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>> *
              )(iVar2 + 4),&local_50);
  }
  return;
}
```
