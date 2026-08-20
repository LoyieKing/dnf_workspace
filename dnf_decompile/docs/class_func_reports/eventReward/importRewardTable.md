# importRewardTable

`_ZN11eventReward17importRewardTableEPKcS1_`

`eventReward::importRewardTable(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080ef29c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ef29c  _ZN11eventReward17importRewardTableEPKcS1_
#           eventReward::importRewardTable(char const*, char const*)
# range [0x080ef29c, 0x080ef3a1]
080ef29c +0x000:  push   %ebp
080ef29d +0x001:  mov    %esp,%ebp
080ef29f +0x003:  push   %esi
080ef2a0 +0x004:  push   %ebx
080ef2a1 +0x005:  sub    $0x30,%esp
080ef2a4 +0x008:  lea    -0x20(%ebp),%eax
080ef2a7 +0x00b:  mov    %eax,(%esp)
080ef2aa +0x00e:  call   088bacf8 <_ZN16STScriptFileListC1Ev>  ; STScriptFileList::STScriptFileList()
080ef2af +0x013:  movl   $0x0,0xc(%esp)
080ef2b7 +0x01b:  mov    0x10(%ebp),%eax
080ef2ba +0x01e:  mov    %eax,0x8(%esp)
080ef2be +0x022:  mov    0xc(%ebp),%eax
080ef2c1 +0x025:  mov    %eax,0x4(%esp)
080ef2c5 +0x029:  lea    -0x20(%ebp),%eax
080ef2c8 +0x02c:  mov    %eax,(%esp)
080ef2cb +0x02f:  call   088bbd77 <_Z22loadRDARScriptListFileP16STScriptFileListPKcS2_PSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; loadRDARScriptListFile(STScriptFileList*, char const*, char const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >*)
080ef2d0 +0x034:  test   %al,%al
080ef2d2 +0x036:  je     080ef368 <+0xcc>
080ef2d8 +0x03c:  lea    -0x24(%ebp),%eax
080ef2db +0x03f:  lea    -0x20(%ebp),%edx
080ef2de +0x042:  mov    %edx,0x4(%esp)
080ef2e2 +0x046:  mov    %eax,(%esp)
080ef2e5 +0x049:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
080ef2ea +0x04e:  sub    $0x4,%esp
080ef2ed +0x051:  lea    -0x28(%ebp),%eax
080ef2f0 +0x054:  lea    -0x20(%ebp),%edx
080ef2f3 +0x057:  mov    %edx,0x4(%esp)
080ef2f7 +0x05b:  mov    %eax,(%esp)
080ef2fa +0x05e:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
080ef2ff +0x063:  sub    $0x4,%esp
080ef302 +0x066:  jmp    080ef34b <+0xaf>
080ef304 +0x068:  lea    -0x24(%ebp),%eax
080ef307 +0x06b:  mov    %eax,(%esp)
080ef30a +0x06e:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
080ef30f +0x073:  add    $0x4,%eax
080ef312 +0x076:  mov    %eax,(%esp)
080ef315 +0x079:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
080ef31a +0x07e:  mov    %eax,0x8(%esp)
080ef31e +0x082:  mov    0xc(%ebp),%eax
080ef321 +0x085:  mov    %eax,0x4(%esp)
080ef325 +0x089:  mov    0x8(%ebp),%eax
080ef328 +0x08c:  mov    %eax,(%esp)
080ef32b +0x08f:  call   080ef3a2 <_ZN11eventReward18ImportRewardScriptEPKcS1_>  ; eventReward::ImportRewardScript(char const*, char const*)
080ef330 +0x094:  test   %eax,%eax
080ef332 +0x096:  sete   %al
080ef335 +0x099:  test   %al,%al
080ef337 +0x09b:  je     080ef340 <+0xa4>
080ef339 +0x09d:  mov    $0x71,%ebx
080ef33e +0x0a2:  jmp    080ef38a <+0xee>
080ef340 +0x0a4:  lea    -0x24(%ebp),%eax
080ef343 +0x0a7:  mov    %eax,(%esp)
080ef346 +0x0aa:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
080ef34b +0x0af:  lea    -0x28(%ebp),%eax
080ef34e +0x0b2:  mov    %eax,0x4(%esp)
080ef352 +0x0b6:  lea    -0x24(%ebp),%eax
080ef355 +0x0b9:  mov    %eax,(%esp)
080ef358 +0x0bc:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
080ef35d +0x0c1:  test   %al,%al
080ef35f +0x0c3:  jne    080ef304 <+0x68>
080ef361 +0x0c5:  mov    $0x0,%ebx
080ef366 +0x0ca:  jmp    080ef38a <+0xee>
080ef368 +0x0cc:  mov    $0x77,%ebx
080ef36d +0x0d1:  jmp    080ef38a <+0xee>
080ef36f +0x0d3:  mov    %edx,%ebx
080ef371 +0x0d5:  mov    %eax,%esi
080ef373 +0x0d7:  lea    -0x20(%ebp),%eax
080ef376 +0x0da:  mov    %eax,(%esp)
080ef379 +0x0dd:  call   080f1352 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3d4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3d4
080ef37e +0x0e2:  mov    %esi,%eax
080ef380 +0x0e4:  mov    %ebx,%edx
080ef382 +0x0e6:  mov    %eax,(%esp)
080ef385 +0x0e9:  call   08ae3750 <_Unwind_Resume>
080ef38a +0x0ee:  lea    -0x20(%ebp),%eax
080ef38d +0x0f1:  mov    %eax,(%esp)
080ef390 +0x0f4:  call   080f1352 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3d4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3d4
080ef395 +0x0f9:  mov    %ebx,%eax
080ef397 +0x0fb:  lea    -0x8(%ebp),%esp
080ef39a +0x0fe:  add    $0x0,%esp
080ef39d +0x101:  pop    %ebx
080ef39e +0x102:  pop    %esi
080ef39f +0x103:  pop    %ebp
080ef3a0 +0x104:  ret
080ef3a1 +0x105:  nop
```

## 反编译 C

```c
// eventReward::importRewardTable @ 0x80ef29c

/* eventReward::importRewardTable(char const*, char const*) */

undefined4 __thiscall eventReward::importRewardTable(eventReward *this,char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_2c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_28 [4];
  STScriptFileList local_24 [24];
  
  STScriptFileList::STScriptFileList(local_24);
                    /* try { // try from 080ef2cb to 080ef34a has its CatchHandler @ 080ef36f */
  cVar1 = loadRDARScriptListFile(local_24,param_1,param_2,(map *)0x0);
  if (cVar1 == '\0') {
    uVar4 = 0x77;
  }
  else {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_28);
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_2c);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_28,
                         (_Rb_tree_iterator *)local_2c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_28);
      pcVar3 = (char *)std::string::c_str((string *)(iVar2 + 4));
      iVar2 = ImportRewardScript(this,param_1,pcVar3);
      if (iVar2 == 0) {
        uVar4 = 0x71;
        goto LAB_080ef38a;
      }
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_28);
    }
    uVar4 = 0;
  }
LAB_080ef38a:
  STScriptFileList::~STScriptFileList(local_24);
  return uVar4;
}
```
