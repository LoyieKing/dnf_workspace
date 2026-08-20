# destory

`_ZN13StrikerScript7destoryEv`

`StrikerScript::destory()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9dcbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9dcbe  _ZN13StrikerScript7destoryEv
#           StrikerScript::destory()
# range [0x08a9dcbe, 0x08a9ddb1]
08a9dcbe +0x00:  push   %ebp
08a9dcbf +0x01:  mov    %esp,%ebp
08a9dcc1 +0x03:  push   %ebx
08a9dcc2 +0x04:  sub    $0x24,%esp
08a9dcc5 +0x07:  mov    0x8(%ebp),%eax
08a9dcc8 +0x0a:  mov    0x90(%eax),%eax
08a9dcce +0x10:  test   %eax,%eax
08a9dcd0 +0x12:  je     08a9dcef <+0x31>
08a9dcd2 +0x14:  mov    0x8(%ebp),%eax
08a9dcd5 +0x17:  mov    0x90(%eax),%ebx
08a9dcdb +0x1d:  test   %ebx,%ebx
08a9dcdd +0x1f:  je     08a9dcef <+0x31>
08a9dcdf +0x21:  mov    %ebx,(%esp)
08a9dce2 +0x24:  call   080f1352 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3d4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3d4
08a9dce7 +0x29:  mov    %ebx,(%esp)
08a9dcea +0x2c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a9dcef +0x31:  mov    0x8(%ebp),%eax
08a9dcf2 +0x34:  movl   $0x0,0x90(%eax)
08a9dcfc +0x3e:  mov    0x8(%ebp),%eax
08a9dcff +0x41:  lea    0x78(%eax),%edx
08a9dd02 +0x44:  lea    -0x10(%ebp),%eax
08a9dd05 +0x47:  mov    %edx,0x4(%esp)
08a9dd09 +0x4b:  mov    %eax,(%esp)
08a9dd0c +0x4e:  call   08a9f0b8 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x3cb>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x3cb
08a9dd11 +0x53:  sub    $0x4,%esp
08a9dd14 +0x56:  jmp    08a9dd6c <+0xae>
08a9dd16 +0x58:  lea    -0x10(%ebp),%eax
08a9dd19 +0x5b:  mov    %eax,(%esp)
08a9dd1c +0x5e:  call   08a9f136 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x449>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x449
08a9dd21 +0x63:  mov    0x4(%eax),%eax
08a9dd24 +0x66:  test   %eax,%eax
08a9dd26 +0x68:  setne  %al
08a9dd29 +0x6b:  test   %al,%al
08a9dd2b +0x6d:  je     08a9dd4f <+0x91>
08a9dd2d +0x6f:  lea    -0x10(%ebp),%eax
08a9dd30 +0x72:  mov    %eax,(%esp)
08a9dd33 +0x75:  call   08a9f136 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x449>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x449
08a9dd38 +0x7a:  mov    0x4(%eax),%ebx
08a9dd3b +0x7d:  test   %ebx,%ebx
08a9dd3d +0x7f:  je     08a9dd4f <+0x91>
08a9dd3f +0x81:  mov    %ebx,(%esp)
08a9dd42 +0x84:  call   08a9f144 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x457>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x457
08a9dd47 +0x89:  mov    %ebx,(%esp)
08a9dd4a +0x8c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a9dd4f +0x91:  lea    -0x10(%ebp),%eax
08a9dd52 +0x94:  mov    %eax,(%esp)
08a9dd55 +0x97:  call   08a9f136 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x449>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x449
08a9dd5a +0x9c:  movl   $0x0,0x4(%eax)
08a9dd61 +0xa3:  lea    -0x10(%ebp),%eax
08a9dd64 +0xa6:  mov    %eax,(%esp)
08a9dd67 +0xa9:  call   08a9f118 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x42b>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x42b
08a9dd6c +0xae:  mov    0x8(%ebp),%eax
08a9dd6f +0xb1:  lea    0x78(%eax),%edx
08a9dd72 +0xb4:  lea    -0xc(%ebp),%eax
08a9dd75 +0xb7:  mov    %edx,0x4(%esp)
08a9dd79 +0xbb:  mov    %eax,(%esp)
08a9dd7c +0xbe:  call   08a9f0de <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x3f1>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x3f1
08a9dd81 +0xc3:  sub    $0x4,%esp
08a9dd84 +0xc6:  lea    -0xc(%ebp),%eax
08a9dd87 +0xc9:  mov    %eax,0x4(%esp)
08a9dd8b +0xcd:  lea    -0x10(%ebp),%eax
08a9dd8e +0xd0:  mov    %eax,(%esp)
08a9dd91 +0xd3:  call   08a9f104 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x417>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x417
08a9dd96 +0xd8:  test   %al,%al
08a9dd98 +0xda:  jne    08a9dd16 <+0x58>
08a9dd9e +0xe0:  mov    0x8(%ebp),%eax
08a9dda1 +0xe3:  add    $0x78,%eax
08a9dda4 +0xe6:  mov    %eax,(%esp)
08a9dda7 +0xe9:  call   08a9f1a2 <_GLOBAL__I__ZN15TagSkillPenaltyC2Ev+0x4b5>  ; global constructors keyed to TagSkillPenalty::TagSkillPenalty()+0x4b5
08a9ddac +0xee:  mov    -0x4(%ebp),%ebx
08a9ddaf +0xf1:  leave
08a9ddb0 +0xf2:  ret
08a9ddb1 +0xf3:  nop
```

## 反编译 C

```c
// StrikerScript::destory @ 0x8a9dcbe

/* StrikerScript::destory() */

void __thiscall StrikerScript::destory(StrikerScript *this)

{
  STScriptFileList *this_00;
  vector<StrikerSkill,std::allocator<StrikerSkill>> *this_01;
  char cVar1;
  int iVar2;
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  local_14 [4];
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  local_10 [8];
  
  if ((*(int *)(this + 0x90) != 0) &&
     (this_00 = *(STScriptFileList **)(this + 0x90), this_00 != (STScriptFileList *)0x0)) {
    STScriptFileList::~STScriptFileList(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x90) = 0;
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                          *)local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                          *)local_14);
    if (*(int *)(iVar2 + 4) != 0) {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                            *)local_14);
      this_01 = *(vector<StrikerSkill,std::allocator<StrikerSkill>> **)(iVar2 + 4);
      if (this_01 != (vector<StrikerSkill,std::allocator<StrikerSkill>> *)0x0) {
        std::vector<StrikerSkill,std::allocator<StrikerSkill>>::~vector(this_01);
        operator_delete(this_01);
      }
    }
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                          *)local_14);
    *(undefined4 *)(iVar2 + 4) = 0;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>
                  *)local_14);
  }
  std::
  map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
  ::clear((map<int,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<StrikerSkill,std::allocator<StrikerSkill>>*>>>
           *)(this + 0x78));
  return;
}
```
