# init

`_ZN14CExpertJobList4initEv`

`CExpertJobList::init()`

| 类 | 地址 |
|---|---|
| `CExpertJobList` | `0x0896d8ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0896d8ec  _ZN14CExpertJobList4initEv
#           CExpertJobList::init()
# range [0x0896d8ec, 0x0896dac5]
0896d8ec +0x000:  push   %ebp
0896d8ed +0x001:  mov    %esp,%ebp
0896d8ef +0x003:  push   %edi
0896d8f0 +0x004:  push   %esi
0896d8f1 +0x005:  push   %ebx
0896d8f2 +0x006:  sub    $0x5c,%esp
0896d8f5 +0x009:  movl   $0x0,-0x1c(%ebp)
0896d8fc +0x010:  lea    -0x44(%ebp),%eax
0896d8ff +0x013:  mov    %eax,(%esp)
0896d902 +0x016:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
0896d907 +0x01b:  lea    -0x4c(%ebp),%eax
0896d90a +0x01e:  movl   $&g_expertJobScriptFileList,0x4(%esp)
0896d912 +0x026:  mov    %eax,(%esp)
0896d915 +0x029:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
0896d91a +0x02e:  sub    $0x4,%esp
0896d91d +0x031:  mov    -0x4c(%ebp),%eax
0896d920 +0x034:  mov    %eax,-0x44(%ebp)
0896d923 +0x037:  jmp    0896da4c <+0x160>
0896d928 +0x03c:  lea    -0x44(%ebp),%eax
0896d92b +0x03f:  mov    %eax,(%esp)
0896d92e +0x042:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
0896d933 +0x047:  add    $0x4,%eax
0896d936 +0x04a:  mov    %eax,(%esp)
0896d939 +0x04d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0896d93e +0x052:  mov    %eax,-0x1c(%ebp)
0896d941 +0x055:  cmpl   $0x0,-0x1c(%ebp)
0896d945 +0x059:  je     0896da7e <+0x192>
0896d94b +0x05f:  movl   $0x290,(%esp)
0896d952 +0x066:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0896d957 +0x06b:  mov    %eax,%ebx
0896d959 +0x06d:  mov    %ebx,%eax
0896d95b +0x06f:  mov    %eax,(%esp)
0896d95e +0x072:  call   0896e312 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x762>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x762
0896d963 +0x077:  jmp    0896d97d <+0x91>
0896d965 +0x079:  mov    %edx,%esi
0896d967 +0x07b:  mov    %eax,%edi
0896d969 +0x07d:  mov    %ebx,(%esp)
0896d96c +0x080:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0896d971 +0x085:  mov    %edi,%eax
0896d973 +0x087:  mov    %esi,%edx
0896d975 +0x089:  mov    %eax,(%esp)
0896d978 +0x08c:  call   08ae3750 <_Unwind_Resume>
0896d97d +0x091:  mov    %ebx,%eax
0896d97f +0x093:  mov    %eax,-0x48(%ebp)
0896d982 +0x096:  mov    -0x48(%ebp),%eax
0896d985 +0x099:  mov    -0x1c(%ebp),%edx
0896d988 +0x09c:  mov    %edx,0x4(%esp)
0896d98c +0x0a0:  mov    %eax,(%esp)
0896d98f +0x0a3:  call   0896b0e4 <_Z21ImportExpertJobScriptP17STExpertJobScriptPKc>  ; ImportExpertJobScript(STExpertJobScript*, char const*)
0896d994 +0x0a8:  xor    $0x1,%eax
0896d997 +0x0ab:  test   %al,%al
0896d999 +0x0ad:  je     0896d9cf <+0xe3>
0896d99b +0x0af:  mov    -0x1c(%ebp),%eax
0896d99e +0x0b2:  mov    %eax,0x4(%esp)
0896d9a2 +0x0b6:  movl   $"expert job Script Error: %s\n",(%esp)
0896d9a9 +0x0bd:  call   0807db60 <_init+0x458>
0896d9ae +0x0c2:  mov    -0x48(%ebp),%ebx
0896d9b1 +0x0c5:  test   %ebx,%ebx
0896d9b3 +0x0c7:  je     0896d9c5 <+0xd9>
0896d9b5 +0x0c9:  mov    %ebx,(%esp)
0896d9b8 +0x0cc:  call   0896e81c <_GLOBAL__I_g_expertJobScriptBaseDirectory+0xc6c>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0xc6c
0896d9bd +0x0d1:  mov    %ebx,(%esp)
0896d9c0 +0x0d4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0896d9c5 +0x0d9:  mov    $0x0,%eax
0896d9ca +0x0de:  jmp    0896dabb <+0x1cf>
0896d9cf +0x0e3:  mov    -0x1c(%ebp),%eax
0896d9d2 +0x0e6:  mov    %eax,0x4(%esp)
0896d9d6 +0x0ea:  movl   $&g_expertJobScriptFileList,(%esp)
0896d9dd +0x0f1:  call   088bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>  ; STScriptFileList::FindIndexByFullScan(char const*) const
0896d9e2 +0x0f6:  mov    %eax,-0x24(%ebp)
0896d9e5 +0x0f9:  lea    -0x2c(%ebp),%eax
0896d9e8 +0x0fc:  lea    -0x48(%ebp),%edx
0896d9eb +0x0ff:  mov    %edx,0x8(%esp)
0896d9ef +0x103:  lea    -0x24(%ebp),%edx
0896d9f2 +0x106:  mov    %edx,0x4(%esp)
0896d9f6 +0x10a:  mov    %eax,(%esp)
0896d9f9 +0x10d:  call   0896fdb7 <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x2207>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x2207
0896d9fe +0x112:  sub    $0x4,%esp
0896da01 +0x115:  lea    -0x2c(%ebp),%eax
0896da04 +0x118:  mov    %eax,0x4(%esp)
0896da08 +0x11c:  lea    -0x34(%ebp),%eax
0896da0b +0x11f:  mov    %eax,(%esp)
0896da0e +0x122:  call   0896fdfe <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x224e>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x224e
0896da13 +0x127:  mov    0x8(%ebp),%edx
0896da16 +0x12a:  lea    -0x3c(%ebp),%eax
0896da19 +0x12d:  lea    -0x34(%ebp),%ecx
0896da1c +0x130:  mov    %ecx,0x8(%esp)
0896da20 +0x134:  mov    %edx,0x4(%esp)
0896da24 +0x138:  mov    %eax,(%esp)
0896da27 +0x13b:  call   0896fe2e <_GLOBAL__I_g_expertJobScriptBaseDirectory+0x227e>  ; global constructors keyed to g_expertJobScriptBaseDirectory+0x227e
0896da2c +0x140:  sub    $0x4,%esp
0896da2f +0x143:  lea    -0x20(%ebp),%eax
0896da32 +0x146:  movl   $0x0,0x8(%esp)
0896da3a +0x14e:  lea    -0x44(%ebp),%edx
0896da3d +0x151:  mov    %edx,0x4(%esp)
0896da41 +0x155:  mov    %eax,(%esp)
0896da44 +0x158:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
0896da49 +0x15d:  sub    $0x4,%esp
0896da4c +0x160:  lea    -0x40(%ebp),%eax
0896da4f +0x163:  movl   $&g_expertJobScriptFileList,0x4(%esp)
0896da57 +0x16b:  mov    %eax,(%esp)
0896da5a +0x16e:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
0896da5f +0x173:  sub    $0x4,%esp
0896da62 +0x176:  lea    -0x40(%ebp),%eax
0896da65 +0x179:  mov    %eax,0x4(%esp)
0896da69 +0x17d:  lea    -0x44(%ebp),%eax
0896da6c +0x180:  mov    %eax,(%esp)
0896da6f +0x183:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
0896da74 +0x188:  test   %al,%al
0896da76 +0x18a:  jne    0896d928 <+0x3c>
0896da7c +0x190:  jmp    0896da7f <+0x193>
0896da7e +0x192:  nop
0896da7f +0x193:  mov    0x8(%ebp),%eax
0896da82 +0x196:  add    $0x18,%eax
0896da85 +0x199:  movl   $"expertjob.etc",0x4(%esp)
0896da8d +0x1a1:  mov    %eax,(%esp)
0896da90 +0x1a4:  call   0896ae21 <_Z24ImportExpertJobEtcScriptR20STExpertJobEtcScriptPKc>  ; ImportExpertJobEtcScript(STExpertJobEtcScript&, char const*)
0896da95 +0x1a9:  xor    $0x1,%eax
0896da98 +0x1ac:  test   %al,%al
0896da9a +0x1ae:  je     0896dab6 <+0x1ca>
0896da9c +0x1b0:  mov    -0x1c(%ebp),%eax
0896da9f +0x1b3:  mov    %eax,0x4(%esp)
0896daa3 +0x1b7:  movl   $"ExpertJob ETC Script Error : %s\n",(%esp)
0896daaa +0x1be:  call   0807db60 <_init+0x458>
0896daaf +0x1c3:  mov    $0x0,%eax
0896dab4 +0x1c8:  jmp    0896dabb <+0x1cf>
0896dab6 +0x1ca:  mov    $0x1,%eax
0896dabb +0x1cf:  lea    -0xc(%ebp),%esp
0896dabe +0x1d2:  add    $0x0,%esp
0896dac1 +0x1d5:  pop    %ebx
0896dac2 +0x1d6:  pop    %esi
0896dac3 +0x1d7:  pop    %edi
0896dac4 +0x1d8:  pop    %ebp
0896dac5 +0x1d9:  ret
```

## 反编译 C

```c
// CExpertJobList::init @ 0x896d8ec

/* CExpertJobList::init() */

bool __thiscall CExpertJobList::init(CExpertJobList *this)

{
  char cVar1;
  int iVar2;
  STExpertJobScript *pSVar3;
  undefined4 local_50;
  STExpertJobScript *local_4c;
  undefined4 local_48;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_44 [4];
  pair local_40 [8];
  pair<int_const,STExpertJobScript*> local_38 [8];
  int local_30 [2];
  STExpertJobScript *local_28;
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_24 [4];
  char *local_20;
  
  local_20 = (char *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_48);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )&local_50);
  local_48 = local_50;
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_44);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_48,
                       (_Rb_tree_iterator *)local_44);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_48);
    local_20 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_20 == (char *)0x0) break;
    pSVar3 = operator_new(0x290);
                    /* try { // try from 0896d95e to 0896d962 has its CatchHandler @ 0896d965 */
    STExpertJobScript::STExpertJobScript(pSVar3);
    local_4c = pSVar3;
    cVar1 = ImportExpertJobScript(pSVar3,local_20);
    if (cVar1 != '\x01') {
      printf("expert job Script Error: %s\n",local_20);
      pSVar3 = local_4c;
      if (local_4c != (STExpertJobScript *)0x0) {
        STExpertJobScript::~STExpertJobScript(local_4c);
        operator_delete(pSVar3);
      }
      return false;
    }
    local_28 = (STExpertJobScript *)
               STScriptFileList::FindIndexByFullScan
                         ((STScriptFileList *)g_expertJobScriptFileList,local_20);
    std::make_pair<int,STExpertJobScript*&>(local_30,&local_28);
    std::pair<int_const,STExpertJobScript*>::pair<int,STExpertJobScript*>(local_38,(pair *)local_30)
    ;
    std::
    map<int,STExpertJobScript*,std::less<int>,std::allocator<std::pair<int_const,STExpertJobScript*>>>
    ::insert(local_40);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_24,(int)&local_48);
  }
  cVar1 = ImportExpertJobEtcScript((STExpertJobEtcScript *)(this + 0x18),"expertjob.etc");
  if (cVar1 != '\x01') {
    printf("ExpertJob ETC Script Error : %s\n",local_20);
  }
  return cVar1 == '\x01';
}
```
