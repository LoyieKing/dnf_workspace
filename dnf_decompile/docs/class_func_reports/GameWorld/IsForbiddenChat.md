# IsForbiddenChat

`_ZN9GameWorld15IsForbiddenChatEPKc`

`GameWorld::IsForbiddenChat(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cd908` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cd908  _ZN9GameWorld15IsForbiddenChatEPKc
#           GameWorld::IsForbiddenChat(char const*)
# range [0x086cd908, 0x086cdab3]
086cd908 +0x000:  push   %ebp
086cd909 +0x001:  mov    %esp,%ebp
086cd90b +0x003:  push   %esi
086cd90c +0x004:  push   %ebx
086cd90d +0x005:  sub    $0x30,%esp
086cd910 +0x008:  cmpl   $0x0,0xc(%ebp)
086cd914 +0x00c:  jne    086cd920 <+0x18>
086cd916 +0x00e:  mov    $0x0,%ebx
086cd91b +0x013:  jmp    086cdaa8 <+0x1a0>
086cd920 +0x018:  mov    0xc(%ebp),%eax
086cd923 +0x01b:  mov    %eax,(%esp)
086cd926 +0x01e:  call   0807e3b0 <_init+0xca8>
086cd92b +0x023:  cmp    $0x1e,%eax
086cd92e +0x026:  jbe    086cd93a <+0x32>
086cd930 +0x028:  mov    $0x0,%ebx
086cd935 +0x02d:  jmp    086cdaa8 <+0x1a0>
086cd93a +0x032:  lea    -0x1d(%ebp),%eax
086cd93d +0x035:  mov    %eax,(%esp)
086cd940 +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cd945 +0x03d:  lea    -0x1d(%ebp),%eax
086cd948 +0x040:  mov    %eax,0x8(%esp)
086cd94c +0x044:  mov    0xc(%ebp),%eax
086cd94f +0x047:  mov    %eax,0x4(%esp)
086cd953 +0x04b:  lea    -0x24(%ebp),%eax
086cd956 +0x04e:  mov    %eax,(%esp)
086cd959 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cd95e +0x056:  jmp    086cd97b <+0x73>
086cd960 +0x058:  mov    %edx,%ebx
086cd962 +0x05a:  mov    %eax,%esi
086cd964 +0x05c:  lea    -0x1d(%ebp),%eax
086cd967 +0x05f:  mov    %eax,(%esp)
086cd96a +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cd96f +0x067:  mov    %esi,%eax
086cd971 +0x069:  mov    %ebx,%edx
086cd973 +0x06b:  mov    %eax,(%esp)
086cd976 +0x06e:  call   08ae3750 <_Unwind_Resume>
086cd97b +0x073:  lea    -0x1d(%ebp),%eax
086cd97e +0x076:  mov    %eax,(%esp)
086cd981 +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cd986 +0x07e:  mov    0x8(%ebp),%eax
086cd989 +0x081:  lea    0x8c(%eax),%ecx
086cd98f +0x087:  lea    -0x28(%ebp),%eax
086cd992 +0x08a:  lea    -0x24(%ebp),%edx
086cd995 +0x08d:  mov    %edx,0x8(%esp)
086cd999 +0x091:  mov    %ecx,0x4(%esp)
086cd99d +0x095:  mov    %eax,(%esp)
086cd9a0 +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086cd9a5 +0x09d:  sub    $0x4,%esp
086cd9a8 +0x0a0:  mov    0x8(%ebp),%eax
086cd9ab +0x0a3:  lea    0x8c(%eax),%edx
086cd9b1 +0x0a9:  lea    -0x1c(%ebp),%eax
086cd9b4 +0x0ac:  mov    %edx,0x4(%esp)
086cd9b8 +0x0b0:  mov    %eax,(%esp)
086cd9bb +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086cd9c0 +0x0b8:  sub    $0x4,%esp
086cd9c3 +0x0bb:  lea    -0x1c(%ebp),%eax
086cd9c6 +0x0be:  mov    %eax,0x4(%esp)
086cd9ca +0x0c2:  lea    -0x28(%ebp),%eax
086cd9cd +0x0c5:  mov    %eax,(%esp)
086cd9d0 +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086cd9d5 +0x0cd:  test   %al,%al
086cd9d7 +0x0cf:  je     086cd9e3 <+0xdb>
086cd9d9 +0x0d1:  mov    $0x0,%ebx
086cd9de +0x0d6:  jmp    086cda9d <+0x195>
086cd9e3 +0x0db:  mov    0x8(%ebp),%eax
086cd9e6 +0x0de:  lea    0x8c(%eax),%edx
086cd9ec +0x0e4:  lea    -0x24(%ebp),%eax
086cd9ef +0x0e7:  mov    %eax,0x4(%esp)
086cd9f3 +0x0eb:  mov    %edx,(%esp)
086cd9f6 +0x0ee:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cd9fb +0x0f3:  movzbl 0x4(%eax),%eax
086cd9ff +0x0f7:  test   %al,%al
086cda01 +0x0f9:  je     086cda7b <+0x173>
086cda03 +0x0fb:  mov    0xc(%ebp),%eax
086cda06 +0x0fe:  mov    %eax,0x4(%esp)
086cda0a +0x102:  mov    0x8(%ebp),%eax
086cda0d +0x105:  mov    %eax,(%esp)
086cda10 +0x108:  call   086ce73c <_ZN9GameWorld26GetLeftTimeOfForbiddenChatEPKc>  ; GameWorld::GetLeftTimeOfForbiddenChat(char const*)
086cda15 +0x10d:  test   %eax,%eax
086cda17 +0x10f:  sete   %al
086cda1a +0x112:  test   %al,%al
086cda1c +0x114:  je     086cda37 <+0x12f>
086cda1e +0x116:  mov    0xc(%ebp),%eax
086cda21 +0x119:  mov    %eax,0x4(%esp)
086cda25 +0x11d:  mov    0x8(%ebp),%eax
086cda28 +0x120:  mov    %eax,(%esp)
086cda2b +0x123:  call   086cdc60 <_ZN9GameWorld10EnableChatEPKc>  ; GameWorld::EnableChat(char const*)
086cda30 +0x128:  mov    $0x0,%ebx
086cda35 +0x12d:  jmp    086cda9d <+0x195>
086cda37 +0x12f:  movl   $0x0,0xc(%esp)
086cda3f +0x137:  movl   $0x153d,0x8(%esp)
086cda47 +0x13f:  movl   $&_ZZN9GameWorld15IsForbiddenChatEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
086cda4f +0x147:  lea    -0x18(%ebp),%eax
086cda52 +0x14a:  mov    %eax,(%esp)
086cda55 +0x14d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cda5a +0x152:  mov    0xc(%ebp),%eax
086cda5d +0x155:  mov    %eax,0x8(%esp)
086cda61 +0x159:  movl   $"%s is forbidden to chat\n",0x4(%esp)
086cda69 +0x161:  lea    -0x18(%ebp),%eax
086cda6c +0x164:  mov    %eax,(%esp)
086cda6f +0x167:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cda74 +0x16c:  mov    $0x1,%ebx
086cda79 +0x171:  jmp    086cda9d <+0x195>
086cda7b +0x173:  mov    $0x0,%ebx
086cda80 +0x178:  jmp    086cda9d <+0x195>
086cda82 +0x17a:  mov    %edx,%ebx
086cda84 +0x17c:  mov    %eax,%esi
086cda86 +0x17e:  lea    -0x24(%ebp),%eax
086cda89 +0x181:  mov    %eax,(%esp)
086cda8c +0x184:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cda91 +0x189:  mov    %esi,%eax
086cda93 +0x18b:  mov    %ebx,%edx
086cda95 +0x18d:  mov    %eax,(%esp)
086cda98 +0x190:  call   08ae3750 <_Unwind_Resume>
086cda9d +0x195:  lea    -0x24(%ebp),%eax
086cdaa0 +0x198:  mov    %eax,(%esp)
086cdaa3 +0x19b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cdaa8 +0x1a0:  mov    %ebx,%eax
086cdaaa +0x1a2:  lea    -0x8(%ebp),%esp
086cdaad +0x1a5:  add    $0x0,%esp
086cdab0 +0x1a8:  pop    %ebx
086cdab1 +0x1a9:  pop    %esi
086cdab2 +0x1aa:  pop    %ebp
086cdab3 +0x1ab:  ret
```

## 反编译 C

```c
// GameWorld::IsForbiddenChat @ 0x86cd908

/* GameWorld::IsForbiddenChat(char const*) */

undefined4 __thiscall GameWorld::IsForbiddenChat(GameWorld *this,char *param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  string local_2c;
  string local_28;
  allocator<char> local_21;
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  local_20 [4];
  cMyTrace local_1c [16];
  
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 < 0x1f) {
      std::allocator<char>::allocator();
                    /* try { // try from 086cd959 to 086cd95d has its CatchHandler @ 086cd960 */
      std::string::string((string *)&local_28,param_1,(allocator *)&local_21);
      std::allocator<char>::~allocator(&local_21);
                    /* try { // try from 086cd9a0 to 086cda73 has its CatchHandler @ 086cda82 */
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::find(&local_2c);
      std::
      map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
      ::end(local_20);
      cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>>::operator==
                        ((_Rb_tree_iterator<std::pair<std::string_const,SimpleInfo>> *)&local_2c,
                         (_Rb_tree_iterator *)local_20);
      if (cVar1 == '\0') {
        iVar3 = std::
                map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                ::operator[]((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
                              *)(this + 0x8c),&local_28);
        if (*(char *)(iVar3 + 4) == '\0') {
          uVar4 = 0;
        }
        else {
          iVar3 = GetLeftTimeOfForbiddenChat(this,param_1);
          if (iVar3 == 0) {
            EnableChat(this,param_1);
            uVar4 = 0;
          }
          else {
            cMyTrace::cMyTrace(local_1c,"bool GameWorld::IsForbiddenChat(const char*)",0x153d,0);
            cMyTrace::operator()(local_1c,"%s is forbidden to chat\n",param_1);
            uVar4 = 1;
          }
        }
      }
      else {
        uVar4 = 0;
      }
      std::string::~string((string *)&local_28);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
