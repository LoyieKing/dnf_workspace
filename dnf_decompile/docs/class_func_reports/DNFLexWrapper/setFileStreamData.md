# setFileStreamData

`_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc`

`DNFLexWrapper::setFileStreamData(DNFLex::stream_data_t*, char const*)`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08acede0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acede0  _ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc
#           DNFLexWrapper::setFileStreamData(DNFLex::stream_data_t*, char const*)
# range [0x08acede0, 0x08acf059]
08acede0 +0x000:  push   %ebp
08acede1 +0x001:  mov    %esp,%ebp
08acede3 +0x003:  sub    $0x48,%esp
08acede6 +0x006:  mov    %edi,-0x4(%ebp)
08acede9 +0x009:  mov    0x10(%ebp),%edi
08acedec +0x00c:  mov    %ebx,-0xc(%ebp)
08acedef +0x00f:  mov    %esi,-0x8(%ebp)
08acedf2 +0x012:  test   %edi,%edi
08acedf4 +0x014:  jne    08acee08 <+0x28>
08acedf6 +0x016:  xor    %eax,%eax
08acedf8 +0x018:  mov    -0xc(%ebp),%ebx
08acedfb +0x01b:  mov    -0x8(%ebp),%esi
08acedfe +0x01e:  mov    -0x4(%ebp),%edi
08acee01 +0x021:  mov    %ebp,%esp
08acee03 +0x023:  pop    %ebp
08acee04 +0x024:  ret
08acee05 +0x025:  lea    0x0(%esi),%esi
08acee08 +0x028:  mov    0xc(%ebp),%esi
08acee0b +0x02b:  test   %esi,%esi
08acee0d +0x02d:  je     08acedf6 <+0x16>
08acee0f +0x02f:  mov    0xc(%ebp),%eax
08acee12 +0x032:  mov    %eax,(%esp)
08acee15 +0x035:  call   08acd140 <_ZN6DNFLex13stream_data_t5clearEv>  ; DNFLex::stream_data_t::clear()
08acee1a +0x03a:  movl   $0x118,(%esp)
08acee21 +0x041:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08acee26 +0x046:  lea    0x90(%eax),%esi
08acee2c +0x04c:  mov    %eax,%ebx
08acee2e +0x04e:  mov    %esi,(%esp)
08acee31 +0x051:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
08acee36 +0x056:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%edx
08acee3c +0x05c:  movb   $0x0,0x74(%esi)
08acee40 +0x060:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
08acee46 +0x066:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x90(%ebx)
08acee50 +0x070:  movl   $0x0,0x70(%esi)
08acee57 +0x077:  mov    -0xc(%edx),%eax
08acee5a +0x07a:  mov    %edx,(%ebx)
08acee5c +0x07c:  movl   $0x0,0x4(%ebx)
08acee63 +0x083:  movb   $0x0,0x75(%esi)
08acee67 +0x087:  mov    %ecx,(%ebx,%eax,1)
08acee6a +0x08a:  movl   $0x0,0x78(%esi)
08acee71 +0x091:  movl   $0x0,0x7c(%esi)
08acee78 +0x098:  movl   $0x0,0x80(%esi)
08acee82 +0x0a2:  movl   $0x0,0x84(%esi)
08acee8c +0x0ac:  movl   $0x0,0x4(%esp)
08acee94 +0x0b4:  mov    (%ebx),%eax
08acee96 +0x0b6:  mov    -0xc(%eax),%eax
08acee99 +0x0b9:  lea    (%ebx,%eax,1),%eax
08acee9c +0x0bc:  mov    %eax,(%esp)
08acee9f +0x0bf:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08aceea4 +0x0c4:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0xc,(%ebx)
08aceeaa +0x0ca:  lea    0x8(%ebx),%edi
08aceead +0x0cd:  movl   $&_ZTVSt14basic_ifstreamIcSt11char_traitsIcEE+0x20,0x90(%ebx)
08aceeb7 +0x0d7:  mov    %edi,(%esp)
08aceeba +0x0da:  call   08727c40 <_ZSt17__verify_groupingPKcjRKSs+0x970>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x970
08aceebf +0x0df:  mov    %edi,0x4(%esp)
08aceec3 +0x0e3:  mov    %esi,(%esp)
08aceec6 +0x0e6:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
08aceecb +0x0eb:  mov    0x10(%ebp),%eax
08aceece +0x0ee:  movl   $0xc,0x8(%esp)
08aceed6 +0x0f6:  mov    %edi,(%esp)
08aceed9 +0x0f9:  mov    %eax,0x4(%esp)
08aceedd +0x0fd:  call   08728df0 <_ZSt17__verify_groupingPKcjRKSs+0x1b20>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x1b20
08aceee2 +0x102:  test   %eax,%eax
08aceee4 +0x104:  je     08acefd0 <+0x1f0>
08aceeea +0x10a:  movl   $0x0,0x4(%esp)
08aceef2 +0x112:  mov    (%ebx),%eax
08aceef4 +0x114:  mov    -0xc(%eax),%eax
08aceef7 +0x117:  lea    (%ebx,%eax,1),%eax
08aceefa +0x11a:  mov    %eax,(%esp)
08aceefd +0x11d:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08acef02 +0x122:  lea    0x40(%ebx),%eax
08acef05 +0x125:  mov    %eax,(%esp)
08acef08 +0x128:  call   08722580 <_ZNKSt12__basic_fileIcE7is_openEv>  ; std::__basic_file<char>::is_open() const
08acef0d +0x12d:  test   %al,%al
08acef0f +0x12f:  je     08acef28 <+0x148>
08acef11 +0x131:  mov    (%ebx),%eax
08acef13 +0x133:  mov    -0xc(%eax),%edx
08acef16 +0x136:  testb  $0x1,0x14(%ebx,%edx,1)
08acef1b +0x13b:  je     08acef30 <+0x150>
08acef1d +0x13d:  mov    %ebx,(%esp)
08acef20 +0x140:  call   *0x4(%eax)
08acef23 +0x143:  jmp    08acedf6 <+0x16>
08acef28 +0x148:  mov    (%ebx),%eax
08acef2a +0x14a:  jmp    08acef1d <+0x13d>
08acef2c +0x14c:  lea    0x0(%esi,%eiz,1),%esi
08acef30 +0x150:  movl   $0x2,0xc(%esp)
08acef38 +0x158:  movl   $0x0,0x4(%esp)
08acef40 +0x160:  movl   $0x0,0x8(%esp)
08acef48 +0x168:  mov    %ebx,(%esp)
08acef4b +0x16b:  call   086e29d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2930>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2930
08acef50 +0x170:  lea    -0x28(%ebp),%eax
08acef53 +0x173:  mov    %eax,(%esp)
08acef56 +0x176:  mov    %ebx,0x4(%esp)
08acef5a +0x17a:  call   086e2790 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x26f0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x26f0
08acef5f +0x17f:  mov    -0x28(%ebp),%esi
08acef62 +0x182:  sub    $0x4,%esp
08acef65 +0x185:  movl   $0x0,0xc(%esp)
08acef6d +0x18d:  movl   $0x0,0x4(%esp)
08acef75 +0x195:  movl   $0x0,0x8(%esp)
08acef7d +0x19d:  mov    %ebx,(%esp)
08acef80 +0x1a0:  call   086e29d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2930>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2930
08acef85 +0x1a5:  test   %esi,%esi
08acef87 +0x1a7:  jne    08acefb8 <+0x1d8>
08acef89 +0x1a9:  mov    (%ebx),%eax
08acef8b +0x1ab:  mov    %ebx,(%esp)
08acef8e +0x1ae:  call   *0x4(%eax)
08acef91 +0x1b1:  mov    0xc(%ebp),%edx
08acef94 +0x1b4:  mov    0x8(%ebp),%eax
08acef97 +0x1b7:  movl   $0x0,0xc(%esp)
08acef9f +0x1bf:  movl   $0x0,0x8(%esp)
08acefa7 +0x1c7:  mov    %edx,0x4(%esp)
08acefab +0x1cb:  mov    %eax,(%esp)
08acefae +0x1ce:  call   08ace9b0 <_ZN13DNFLexWrapper19setStringStreamDataEPN6DNFLex13stream_data_tEPcj>  ; DNFLexWrapper::setStringStreamData(DNFLex::stream_data_t*, char*, unsigned int)
08acefb3 +0x1d3:  jmp    08acedf8 <+0x18>
08acefb8 +0x1d8:  mov    0xc(%ebp),%eax
08acefbb +0x1db:  mov    %ebx,(%eax)
08acefbd +0x1dd:  mov    %esi,0x4(%eax)
08acefc0 +0x1e0:  mov    $0x1,%eax
08acefc5 +0x1e5:  jmp    08acedf8 <+0x18>
08acefca +0x1ea:  lea    0x0(%esi),%esi
08acefd0 +0x1f0:  mov    (%ebx),%eax
08acefd2 +0x1f2:  mov    -0xc(%eax),%edx
08acefd5 +0x1f5:  add    %ebx,%edx
08acefd7 +0x1f7:  mov    0x14(%edx),%eax
08acefda +0x1fa:  mov    %edx,(%esp)
08acefdd +0x1fd:  or     $0x4,%eax
08acefe0 +0x200:  mov    %eax,0x4(%esp)
08acefe4 +0x204:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
08acefe9 +0x209:  jmp    08acef02 <+0x122>
08acefee +0x20e:  cmp    $0xffffffff,%edx
08aceff1 +0x211:  je     08acf04e <+0x26e>
08aceff3 +0x213:  mov    %eax,(%esp)
08aceff6 +0x216:  call   08ae3750 <_Unwind_Resume>
08aceffb +0x21b:  mov    %eax,-0x2c(%ebp)
08aceffe +0x21e:  mov    %ebx,(%esp)
08acf001 +0x221:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acf006 +0x226:  mov    -0x2c(%ebp),%eax
08acf009 +0x229:  mov    %eax,(%esp)
08acf00c +0x22c:  call   08ae3750 <_Unwind_Resume>
08acf011 +0x231:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x4,%edx
08acf017 +0x237:  mov    &_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE+0x8,%ecx
08acf01d +0x23d:  mov    %edx,(%ebx)
08acf01f +0x23f:  mov    -0xc(%edx),%edx
08acf022 +0x242:  movl   $0x0,0x4(%ebx)
08acf029 +0x249:  mov    %ecx,(%ebx,%edx,1)
08acf02c +0x24c:  mov    %eax,-0x2c(%ebp)
08acf02f +0x24f:  mov    %esi,(%esp)
08acf032 +0x252:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
08acf037 +0x257:  mov    -0x2c(%ebp),%eax
08acf03a +0x25a:  jmp    08aceffb <+0x21b>
08acf03c +0x25c:  mov    %eax,-0x2c(%ebp)
08acf03f +0x25f:  mov    %edi,(%esp)
08acf042 +0x262:  call   087291d0 <_ZSt17__verify_groupingPKcjRKSs+0x1f00>  ; std::__verify_grouping(char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)+0x1f00
08acf047 +0x267:  mov    -0x2c(%ebp),%eax
08acf04a +0x26a:  jmp    08acf011 <+0x231>
08acf04c +0x26c:  jmp    08acf02c <+0x24c>
08acf04e +0x26e:  mov    %eax,(%esp)
08acf051 +0x271:  call   08723df0 <__cxa_call_unexpected>
08acf056 +0x276:  lea    0x0(%esi),%esi
08acf059 +0x279:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLexWrapper::setFileStreamData @ 0x8acede0

/* DWARF original prototype: bool setFileStreamData(DNFLexWrapper * this, stream_data_t * s, TCHAR *
   path) */

bool __thiscall DNFLexWrapper::setFileStreamData(DNFLexWrapper *this,stream_data_t *s,TCHAR *path)

{
  filebuf *this_00;
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  istream *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_2c;
  
                    /* Unresolved local var: ifstream * ifs@[???]
                       Unresolved local var: uint32 size@[???] */
  if ((path != (TCHAR *)0x0) && (s != (stream_data_t *)0x0)) {
    DNFLex::stream_data_t::clear(s);
    piVar5 = operator_new(0x118);
                    /* try { // try from 08acee31 to 08acee35 has its CatchHandler @ 08aceffb */
    std::ios_base::ios_base((ios_base *)(piVar5 + 0x90));
    puVar1 = PTR_PTR_08d0266c;
    piVar5[0x104] = (istream)0x0;
    puVar2 = PTR_PTR_08d02670;
    *(undefined ***)(piVar5 + 0x90) = &PTR__ios_08cfe970;
    *(int *)(piVar5 + 0x100) = 0;
    iVar6 = *(int *)(puVar1 + -0xc);
    *(undefined **)piVar5 = puVar1;
    *(int *)(piVar5 + 4) = 0;
    piVar5[0x105] = (istream)0x0;
    *(undefined **)(piVar5 + iVar6) = puVar2;
    *(int *)(piVar5 + 0x108) = 0;
    *(int *)(piVar5 + 0x10c) = 0;
    *(int *)(piVar5 + 0x110) = 0;
    *(int *)(piVar5 + 0x114) = 0;
                    /* try { // try from 08acee9f to 08aceea3 has its CatchHandler @ 08acf04c */
    std::ios::init((ios *)(piVar5 + *(int *)(*(int *)piVar5 + -0xc)),(streambuf *)0x0);
    *(undefined ***)piVar5 = &PTR__ifstream_08d0264c;
    this_00 = (filebuf *)(piVar5 + 8);
    *(undefined ***)(piVar5 + 0x90) = &PTR__ifstream_08d02660;
                    /* try { // try from 08aceeba to 08aceebe has its CatchHandler @ 08acf011 */
    std::filebuf::filebuf(this_00);
                    /* try { // try from 08aceec6 to 08acef01 has its CatchHandler @ 08acf03c */
    std::ios::init((ios *)(piVar5 + 0x90),(streambuf *)this_00);
    iVar6 = std::filebuf::open(this_00,path,_S_in|_S_bin);
    if (iVar6 == 0) {
                    /* try { // try from 08acefe4 to 08acefe8 has its CatchHandler @ 08acf03c */
      std::ios::clear((ios *)(piVar5 + *(int *)(*(int *)piVar5 + -0xc)),
                      *(_Ios_Iostate *)((ios *)(piVar5 + *(int *)(*(int *)piVar5 + -0xc)) + 0x14) |
                      _S_failbit);
    }
    else {
      std::ios::clear((ios *)(piVar5 + *(int *)(*(int *)piVar5 + -0xc)),_S_goodbit);
    }
                    /* try { // try from 08acef08 to 08acef0c has its CatchHandler @ 08acefee */
    cVar3 = std::__basic_file<char>::is_open((__basic_file<char> *)(piVar5 + 0x40));
    if (cVar3 == '\0') {
      iVar6 = *(int *)piVar5;
    }
    else {
      iVar6 = *(int *)piVar5;
      if (((byte)piVar5[*(int *)(iVar6 + -0xc) + 0x14] & 1) == 0) {
        std::istream::seekg(ZEXT48(piVar5),_S_beg);
        std::istream::tellg();
        uVar9 = 0;
        uVar7 = 0;
        uVar8 = 0;
        std::istream::seekg(ZEXT48(piVar5),_S_beg);
        if (local_2c == 0) {
          (**(code **)(*(int *)piVar5 + 4))(piVar5,uVar7,uVar8,uVar9);
          bVar4 = setStringStreamData(this,s,(char *)0x0,0);
          return bVar4;
        }
        s->stream = piVar5;
        s->size = local_2c;
        return true;
      }
    }
    (**(code **)(iVar6 + 4))(piVar5);
  }
  return false;
}
```
