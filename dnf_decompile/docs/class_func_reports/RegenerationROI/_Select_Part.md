# _Select_Part

`_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE`

`RegenerationROI::_Select_Part(int, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f8ec2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f8ec2  _ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE
#           RegenerationROI::_Select_Part(int, std::vector<int, std::allocator<int> >&)
# range [0x085f8ec2, 0x085f9093]
085f8ec2 +0x000:  push   %ebp
085f8ec3 +0x001:  mov    %esp,%ebp
085f8ec5 +0x003:  push   %esi
085f8ec6 +0x004:  push   %ebx
085f8ec7 +0x005:  sub    $0x40,%esp
085f8eca +0x008:  mov    0x8(%ebp),%eax
085f8ecd +0x00b:  lea    0x4(%eax),%ecx
085f8ed0 +0x00e:  lea    -0x30(%ebp),%eax
085f8ed3 +0x011:  lea    0xc(%ebp),%edx
085f8ed6 +0x014:  mov    %edx,0x8(%esp)
085f8eda +0x018:  mov    %ecx,0x4(%esp)
085f8ede +0x01c:  mov    %eax,(%esp)
085f8ee1 +0x01f:  call   085f9a1a <_GLOBAL__I__Z16_GetRandomOptionv+0x34c>  ; global constructors keyed to _GetRandomOption()+0x34c
085f8ee6 +0x024:  sub    $0x4,%esp
085f8ee9 +0x027:  lea    -0x34(%ebp),%eax
085f8eec +0x02a:  mov    %eax,(%esp)
085f8eef +0x02d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
085f8ef4 +0x032:  mov    0x8(%ebp),%eax
085f8ef7 +0x035:  lea    0x4(%eax),%edx
085f8efa +0x038:  lea    -0x2c(%ebp),%eax
085f8efd +0x03b:  mov    %edx,0x4(%esp)
085f8f01 +0x03f:  mov    %eax,(%esp)
085f8f04 +0x042:  call   085f9a46 <_GLOBAL__I__Z16_GetRandomOptionv+0x378>  ; global constructors keyed to _GetRandomOption()+0x378
085f8f09 +0x047:  sub    $0x4,%esp
085f8f0c +0x04a:  lea    -0x30(%ebp),%eax
085f8f0f +0x04d:  mov    %eax,0x4(%esp)
085f8f13 +0x051:  lea    -0x2c(%ebp),%eax
085f8f16 +0x054:  mov    %eax,(%esp)
085f8f19 +0x057:  call   085f9a6c <_GLOBAL__I__Z16_GetRandomOptionv+0x39e>  ; global constructors keyed to _GetRandomOption()+0x39e
085f8f1e +0x05c:  test   %al,%al
085f8f20 +0x05e:  je     085f9014 <+0x152>
085f8f26 +0x064:  movl   $0x0,-0xc(%ebp)
085f8f2d +0x06b:  jmp    085f8fee <+0x12c>
085f8f32 +0x070:  lea    -0x30(%ebp),%eax
085f8f35 +0x073:  mov    %eax,(%esp)
085f8f38 +0x076:  call   085f9a80 <_GLOBAL__I__Z16_GetRandomOptionv+0x3b2>  ; global constructors keyed to _GetRandomOption()+0x3b2
085f8f3d +0x07b:  lea    0xc(%eax),%edx
085f8f40 +0x07e:  mov    -0xc(%ebp),%eax
085f8f43 +0x081:  mov    %eax,0x4(%esp)
085f8f47 +0x085:  mov    %edx,(%esp)
085f8f4a +0x088:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
085f8f4f +0x08d:  mov    %eax,0x4(%esp)
085f8f53 +0x091:  lea    -0x34(%ebp),%eax
085f8f56 +0x094:  mov    %eax,(%esp)
085f8f59 +0x097:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
085f8f5e +0x09c:  call   088c0409 <_Z21getItemGroupNameTablev>  ; getItemGroupNameTable()
085f8f63 +0x0a1:  lea    -0x28(%ebp),%edx
085f8f66 +0x0a4:  lea    -0x34(%ebp),%ecx
085f8f69 +0x0a7:  mov    %ecx,0x8(%esp)
085f8f6d +0x0ab:  mov    %eax,0x4(%esp)
085f8f71 +0x0af:  mov    %edx,(%esp)
085f8f74 +0x0b2:  call   0817cdb0 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1f7>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1f7
085f8f79 +0x0b7:  sub    $0x4,%esp
085f8f7c +0x0ba:  lea    -0x28(%ebp),%eax
085f8f7f +0x0bd:  mov    %eax,0x4(%esp)
085f8f83 +0x0c1:  lea    -0x38(%ebp),%eax
085f8f86 +0x0c4:  mov    %eax,(%esp)
085f8f89 +0x0c7:  call   0817d22c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x673>  ; global constructors keyed to Arad_Script::Arad_Script()+0x673
085f8f8e +0x0cc:  call   088c0409 <_Z21getItemGroupNameTablev>  ; getItemGroupNameTable()
085f8f93 +0x0d1:  lea    -0x20(%ebp),%edx
085f8f96 +0x0d4:  mov    %eax,0x4(%esp)
085f8f9a +0x0d8:  mov    %edx,(%esp)
085f8f9d +0x0db:  call   0817cddc <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x223>  ; global constructors keyed to Arad_Script::Arad_Script()+0x223
085f8fa2 +0x0e0:  sub    $0x4,%esp
085f8fa5 +0x0e3:  lea    -0x20(%ebp),%eax
085f8fa8 +0x0e6:  mov    %eax,0x4(%esp)
085f8fac +0x0ea:  lea    -0x24(%ebp),%eax
085f8faf +0x0ed:  mov    %eax,(%esp)
085f8fb2 +0x0f0:  call   0817d22c <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x673>  ; global constructors keyed to Arad_Script::Arad_Script()+0x673
085f8fb7 +0x0f5:  lea    -0x24(%ebp),%eax
085f8fba +0x0f8:  mov    %eax,0x4(%esp)
085f8fbe +0x0fc:  lea    -0x38(%ebp),%eax
085f8fc1 +0x0ff:  mov    %eax,(%esp)
085f8fc4 +0x102:  call   085f9a8e <_GLOBAL__I__Z16_GetRandomOptionv+0x3c0>  ; global constructors keyed to _GetRandomOption()+0x3c0
085f8fc9 +0x107:  test   %al,%al
085f8fcb +0x109:  je     085f8fea <+0x128>
085f8fcd +0x10b:  lea    -0x38(%ebp),%eax
085f8fd0 +0x10e:  mov    %eax,(%esp)
085f8fd3 +0x111:  call   085f9aa2 <_GLOBAL__I__Z16_GetRandomOptionv+0x3d4>  ; global constructors keyed to _GetRandomOption()+0x3d4
085f8fd8 +0x116:  add    $0x4,%eax
085f8fdb +0x119:  mov    %eax,0x4(%esp)
085f8fdf +0x11d:  mov    0x10(%ebp),%eax
085f8fe2 +0x120:  mov    %eax,(%esp)
085f8fe5 +0x123:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085f8fea +0x128:  addl   $0x1,-0xc(%ebp)
085f8fee +0x12c:  lea    -0x30(%ebp),%eax
085f8ff1 +0x12f:  mov    %eax,(%esp)
085f8ff4 +0x132:  call   085f9a80 <_GLOBAL__I__Z16_GetRandomOptionv+0x3b2>  ; global constructors keyed to _GetRandomOption()+0x3b2
085f8ff9 +0x137:  add    $0xc,%eax
085f8ffc +0x13a:  mov    %eax,(%esp)
085f8fff +0x13d:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
085f9004 +0x142:  cmp    -0xc(%ebp),%eax
085f9007 +0x145:  seta   %al
085f900a +0x148:  test   %al,%al
085f900c +0x14a:  jne    085f8f32 <+0x70>
085f9012 +0x150:  jmp    085f907f <+0x1bd>
085f9014 +0x152:  lea    -0x34(%ebp),%eax
085f9017 +0x155:  mov    %eax,(%esp)
085f901a +0x158:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085f901f +0x15d:  mov    %eax,%ebx
085f9021 +0x15f:  mov    0xc(%ebp),%esi
085f9024 +0x162:  movl   $0x5,0xc(%esp)
085f902c +0x16a:  movl   $0xd6,0x8(%esp)
085f9034 +0x172:  movl   $&_ZZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEEE19__PRETTY_FUNCTION__,0x4(%esp)
085f903c +0x17a:  lea    -0x1c(%ebp),%eax
085f903f +0x17d:  mov    %eax,(%esp)
085f9042 +0x180:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085f9047 +0x185:  mov    %ebx,0xc(%esp)
085f904b +0x189:  mov    %esi,0x8(%esp)
085f904f +0x18d:  movl   $"packet:%d groupName:%s\n",0x4(%esp)
085f9057 +0x195:  lea    -0x1c(%ebp),%eax
085f905a +0x198:  mov    %eax,(%esp)
085f905d +0x19b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085f9062 +0x1a0:  jmp    085f907f <+0x1bd>
085f9064 +0x1a2:  mov    %edx,%ebx
085f9066 +0x1a4:  mov    %eax,%esi
085f9068 +0x1a6:  lea    -0x34(%ebp),%eax
085f906b +0x1a9:  mov    %eax,(%esp)
085f906e +0x1ac:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f9073 +0x1b1:  mov    %esi,%eax
085f9075 +0x1b3:  mov    %ebx,%edx
085f9077 +0x1b5:  mov    %eax,(%esp)
085f907a +0x1b8:  call   08ae3750 <_Unwind_Resume>
085f907f +0x1bd:  lea    -0x34(%ebp),%eax
085f9082 +0x1c0:  mov    %eax,(%esp)
085f9085 +0x1c3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
085f908a +0x1c8:  lea    -0x8(%ebp),%esp
085f908d +0x1cb:  add    $0x0,%esp
085f9090 +0x1ce:  pop    %ebx
085f9091 +0x1cf:  pop    %esi
085f9092 +0x1d0:  pop    %ebp
085f9093 +0x1d1:  ret
```

## 反编译 C

```c
// RegenerationROI::_Select_Part @ 0x85f8ec2

/* RegenerationROI::_Select_Part(int, std::vector<int, std::allocator<int> >&) */

void __thiscall RegenerationROI::_Select_Part(RegenerationROI *this,int param_1,vector *param_2)

{
  char cVar1;
  string *psVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  _Rb_tree_const_iterator<std::pair<std::string_const,int>> local_3c [4];
  string local_38 [4];
  _Rb_tree_iterator local_34 [4];
  map<int,str_index_to_itemgroup,std::less<int>,std::allocator<std::pair<int_const,str_index_to_itemgroup>>>
  local_30 [4];
  string local_2c;
  _Rb_tree_const_iterator<std::pair<std::string_const,int>> local_28 [4];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_24 [4];
  cMyTrace local_20 [16];
  uint local_10;
  
  std::
  map<int,str_index_to_itemgroup,std::less<int>,std::allocator<std::pair<int_const,str_index_to_itemgroup>>>
  ::find((int *)local_34);
  std::string::string(local_38);
                    /* try { // try from 085f8f04 to 085f9061 has its CatchHandler @ 085f9064 */
  std::
  map<int,str_index_to_itemgroup,std::less<int>,std::allocator<std::pair<int_const,str_index_to_itemgroup>>>
  ::end(local_30);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>> *)local_30,
                     local_34);
  if (cVar1 == '\0') {
    uVar5 = std::string::c_str(local_38);
    cMyTrace::cMyTrace(local_20,
                       "void RegenerationROI::_Select_Part(int, std::vector<int, std::allocator<int> >&)"
                       ,0xd6,5);
    cMyTrace::operator()(local_20,"packet:%d groupName:%s\n",param_1,uVar5);
  }
  else {
    local_10 = 0;
    while( true ) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>> *)local_34)
      ;
      uVar4 = std::vector<std::string,std::allocator<std::string>>::size
                        ((vector<std::string,std::allocator<std::string>> *)(iVar3 + 0xc));
      if (uVar4 <= local_10) break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>> *)local_34)
      ;
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)(iVar3 + 0xc),local_10)
      ;
      std::string::operator=(local_38,psVar2);
      getItemGroupNameTable();
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      find(&local_2c);
      std::_Rb_tree_const_iterator<std::pair<std::string_const,int>>::_Rb_tree_const_iterator
                (local_3c,(_Rb_tree_iterator *)&local_2c);
      getItemGroupNameTable();
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      end(local_24);
      std::_Rb_tree_const_iterator<std::pair<std::string_const,int>>::_Rb_tree_const_iterator
                (local_28,(_Rb_tree_iterator *)local_24);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<std::string_const,int>>::operator!=
                        (local_3c,(_Rb_tree_const_iterator *)local_28);
      if (cVar1 != '\0') {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<std::string_const,int>>::operator->(local_3c)
        ;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_2,(int *)(iVar3 + 4));
      }
      local_10 = local_10 + 1;
    }
  }
  std::string::~string(local_38);
  return;
}
```
