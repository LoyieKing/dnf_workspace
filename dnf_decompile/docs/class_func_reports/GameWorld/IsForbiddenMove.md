# IsForbiddenMove

`_ZN9GameWorld15IsForbiddenMoveEPKc`

`GameWorld::IsForbiddenMove(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cdab4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cdab4  _ZN9GameWorld15IsForbiddenMoveEPKc
#           GameWorld::IsForbiddenMove(char const*)
# range [0x086cdab4, 0x086cdc5f]
086cdab4 +0x000:  push   %ebp
086cdab5 +0x001:  mov    %esp,%ebp
086cdab7 +0x003:  push   %esi
086cdab8 +0x004:  push   %ebx
086cdab9 +0x005:  sub    $0x30,%esp
086cdabc +0x008:  cmpl   $0x0,0xc(%ebp)
086cdac0 +0x00c:  jne    086cdacc <+0x18>
086cdac2 +0x00e:  mov    $0x0,%ebx
086cdac7 +0x013:  jmp    086cdc54 <+0x1a0>
086cdacc +0x018:  mov    0xc(%ebp),%eax
086cdacf +0x01b:  mov    %eax,(%esp)
086cdad2 +0x01e:  call   0807e3b0 <_init+0xca8>
086cdad7 +0x023:  cmp    $0x1e,%eax
086cdada +0x026:  jbe    086cdae6 <+0x32>
086cdadc +0x028:  mov    $0x0,%ebx
086cdae1 +0x02d:  jmp    086cdc54 <+0x1a0>
086cdae6 +0x032:  lea    -0x1d(%ebp),%eax
086cdae9 +0x035:  mov    %eax,(%esp)
086cdaec +0x038:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086cdaf1 +0x03d:  lea    -0x1d(%ebp),%eax
086cdaf4 +0x040:  mov    %eax,0x8(%esp)
086cdaf8 +0x044:  mov    0xc(%ebp),%eax
086cdafb +0x047:  mov    %eax,0x4(%esp)
086cdaff +0x04b:  lea    -0x24(%ebp),%eax
086cdb02 +0x04e:  mov    %eax,(%esp)
086cdb05 +0x051:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086cdb0a +0x056:  jmp    086cdb27 <+0x73>
086cdb0c +0x058:  mov    %edx,%ebx
086cdb0e +0x05a:  mov    %eax,%esi
086cdb10 +0x05c:  lea    -0x1d(%ebp),%eax
086cdb13 +0x05f:  mov    %eax,(%esp)
086cdb16 +0x062:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cdb1b +0x067:  mov    %esi,%eax
086cdb1d +0x069:  mov    %ebx,%edx
086cdb1f +0x06b:  mov    %eax,(%esp)
086cdb22 +0x06e:  call   08ae3750 <_Unwind_Resume>
086cdb27 +0x073:  lea    -0x1d(%ebp),%eax
086cdb2a +0x076:  mov    %eax,(%esp)
086cdb2d +0x079:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086cdb32 +0x07e:  mov    0x8(%ebp),%eax
086cdb35 +0x081:  lea    0x8c(%eax),%ecx
086cdb3b +0x087:  lea    -0x28(%ebp),%eax
086cdb3e +0x08a:  lea    -0x24(%ebp),%edx
086cdb41 +0x08d:  mov    %edx,0x8(%esp)
086cdb45 +0x091:  mov    %ecx,0x4(%esp)
086cdb49 +0x095:  mov    %eax,(%esp)
086cdb4c +0x098:  call   086d411a <_GLOBAL__I_MAX_VILLAGE_NUM+0x294b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x294b
086cdb51 +0x09d:  sub    $0x4,%esp
086cdb54 +0x0a0:  mov    0x8(%ebp),%eax
086cdb57 +0x0a3:  lea    0x8c(%eax),%edx
086cdb5d +0x0a9:  lea    -0x1c(%ebp),%eax
086cdb60 +0x0ac:  mov    %edx,0x4(%esp)
086cdb64 +0x0b0:  mov    %eax,(%esp)
086cdb67 +0x0b3:  call   086d4146 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2977>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2977
086cdb6c +0x0b8:  sub    $0x4,%esp
086cdb6f +0x0bb:  lea    -0x1c(%ebp),%eax
086cdb72 +0x0be:  mov    %eax,0x4(%esp)
086cdb76 +0x0c2:  lea    -0x28(%ebp),%eax
086cdb79 +0x0c5:  mov    %eax,(%esp)
086cdb7c +0x0c8:  call   086d42ca <_GLOBAL__I_MAX_VILLAGE_NUM+0x2afb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2afb
086cdb81 +0x0cd:  test   %al,%al
086cdb83 +0x0cf:  je     086cdb8f <+0xdb>
086cdb85 +0x0d1:  mov    $0x0,%ebx
086cdb8a +0x0d6:  jmp    086cdc49 <+0x195>
086cdb8f +0x0db:  mov    0x8(%ebp),%eax
086cdb92 +0x0de:  lea    0x8c(%eax),%edx
086cdb98 +0x0e4:  lea    -0x24(%ebp),%eax
086cdb9b +0x0e7:  mov    %eax,0x4(%esp)
086cdb9f +0x0eb:  mov    %edx,(%esp)
086cdba2 +0x0ee:  call   086d41a2 <_GLOBAL__I_MAX_VILLAGE_NUM+0x29d3>  ; global constructors keyed to MAX_VILLAGE_NUM+0x29d3
086cdba7 +0x0f3:  movzbl 0x5(%eax),%eax
086cdbab +0x0f7:  test   %al,%al
086cdbad +0x0f9:  je     086cdc27 <+0x173>
086cdbaf +0x0fb:  mov    0xc(%ebp),%eax
086cdbb2 +0x0fe:  mov    %eax,0x4(%esp)
086cdbb6 +0x102:  mov    0x8(%ebp),%eax
086cdbb9 +0x105:  mov    %eax,(%esp)
086cdbbc +0x108:  call   086ce958 <_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc>  ; GameWorld::GetLeftTimeOfForbiddenMove(char const*)
086cdbc1 +0x10d:  test   %eax,%eax
086cdbc3 +0x10f:  sete   %al
086cdbc6 +0x112:  test   %al,%al
086cdbc8 +0x114:  je     086cdbe3 <+0x12f>
086cdbca +0x116:  mov    0xc(%ebp),%eax
086cdbcd +0x119:  mov    %eax,0x4(%esp)
086cdbd1 +0x11d:  mov    0x8(%ebp),%eax
086cdbd4 +0x120:  mov    %eax,(%esp)
086cdbd7 +0x123:  call   086cde5a <_ZN9GameWorld10EnableMoveEPKc>  ; GameWorld::EnableMove(char const*)
086cdbdc +0x128:  mov    $0x0,%ebx
086cdbe1 +0x12d:  jmp    086cdc49 <+0x195>
086cdbe3 +0x12f:  movl   $0x0,0xc(%esp)
086cdbeb +0x137:  movl   $0x1557,0x8(%esp)
086cdbf3 +0x13f:  movl   $&_ZZN9GameWorld15IsForbiddenMoveEPKcE19__PRETTY_FUNCTION__,0x4(%esp)
086cdbfb +0x147:  lea    -0x18(%ebp),%eax
086cdbfe +0x14a:  mov    %eax,(%esp)
086cdc01 +0x14d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cdc06 +0x152:  mov    0xc(%ebp),%eax
086cdc09 +0x155:  mov    %eax,0x8(%esp)
086cdc0d +0x159:  movl   $"%s is forbidden to move\n",0x4(%esp)
086cdc15 +0x161:  lea    -0x18(%ebp),%eax
086cdc18 +0x164:  mov    %eax,(%esp)
086cdc1b +0x167:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cdc20 +0x16c:  mov    $0x1,%ebx
086cdc25 +0x171:  jmp    086cdc49 <+0x195>
086cdc27 +0x173:  mov    $0x0,%ebx
086cdc2c +0x178:  jmp    086cdc49 <+0x195>
086cdc2e +0x17a:  mov    %edx,%ebx
086cdc30 +0x17c:  mov    %eax,%esi
086cdc32 +0x17e:  lea    -0x24(%ebp),%eax
086cdc35 +0x181:  mov    %eax,(%esp)
086cdc38 +0x184:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cdc3d +0x189:  mov    %esi,%eax
086cdc3f +0x18b:  mov    %ebx,%edx
086cdc41 +0x18d:  mov    %eax,(%esp)
086cdc44 +0x190:  call   08ae3750 <_Unwind_Resume>
086cdc49 +0x195:  lea    -0x24(%ebp),%eax
086cdc4c +0x198:  mov    %eax,(%esp)
086cdc4f +0x19b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086cdc54 +0x1a0:  mov    %ebx,%eax
086cdc56 +0x1a2:  lea    -0x8(%ebp),%esp
086cdc59 +0x1a5:  add    $0x0,%esp
086cdc5c +0x1a8:  pop    %ebx
086cdc5d +0x1a9:  pop    %esi
086cdc5e +0x1aa:  pop    %ebp
086cdc5f +0x1ab:  ret
```

## 反编译 C

```c
// GameWorld::IsForbiddenMove @ 0x86cdab4

/* GameWorld::IsForbiddenMove(char const*) */

undefined4 __thiscall GameWorld::IsForbiddenMove(GameWorld *this,char *param_1)

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
                    /* try { // try from 086cdb05 to 086cdb09 has its CatchHandler @ 086cdb0c */
      std::string::string((string *)&local_28,param_1,(allocator *)&local_21);
      std::allocator<char>::~allocator(&local_21);
                    /* try { // try from 086cdb4c to 086cdc1f has its CatchHandler @ 086cdc2e */
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
        if (*(char *)(iVar3 + 5) == '\0') {
          uVar4 = 0;
        }
        else {
          iVar3 = GetLeftTimeOfForbiddenMove(this,param_1);
          if (iVar3 == 0) {
            EnableMove(this,param_1);
            uVar4 = 0;
          }
          else {
            cMyTrace::cMyTrace(local_1c,"bool GameWorld::IsForbiddenMove(const char*)",0x1557,0);
            cMyTrace::operator()(local_1c,"%s is forbidden to move\n",param_1);
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
