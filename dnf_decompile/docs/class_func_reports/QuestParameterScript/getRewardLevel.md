# getRewardLevel

`_ZN20QuestParameterScript14getRewardLevelEi`

`QuestParameterScript::getRewardLevel(int)`

| 类 | 地址 |
|---|---|
| `QuestParameterScript` | `0x08a6bdc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6bdc6  _ZN20QuestParameterScript14getRewardLevelEi
#           QuestParameterScript::getRewardLevel(int)
# range [0x08a6bdc6, 0x08a6be65]
08a6bdc6 +0x00:  push   %ebp
08a6bdc7 +0x01:  mov    %esp,%ebp
08a6bdc9 +0x03:  sub    $0x28,%esp
08a6bdcc +0x06:  movl   $0x0,-0xc(%ebp)
08a6bdd3 +0x0d:  mov    0x8(%ebp),%eax
08a6bdd6 +0x10:  lea    0x3c(%eax),%edx
08a6bdd9 +0x13:  lea    -0x18(%ebp),%eax
08a6bddc +0x16:  mov    %edx,0x4(%esp)
08a6bde0 +0x1a:  mov    %eax,(%esp)
08a6bde3 +0x1d:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
08a6bde8 +0x22:  sub    $0x4,%esp
08a6bdeb +0x25:  jmp    08a6be32 <+0x6c>
08a6bded +0x27:  lea    -0x18(%ebp),%eax
08a6bdf0 +0x2a:  mov    %eax,(%esp)
08a6bdf3 +0x2d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08a6bdf8 +0x32:  mov    0x4(%eax),%eax
08a6bdfb +0x35:  cmp    0xc(%ebp),%eax
08a6bdfe +0x38:  setle  %al
08a6be01 +0x3b:  test   %al,%al
08a6be03 +0x3d:  je     08a6be15 <+0x4f>
08a6be05 +0x3f:  lea    -0x18(%ebp),%eax
08a6be08 +0x42:  mov    %eax,(%esp)
08a6be0b +0x45:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08a6be10 +0x4a:  mov    (%eax),%eax
08a6be12 +0x4c:  mov    %eax,-0xc(%ebp)
08a6be15 +0x4f:  lea    -0x10(%ebp),%eax
08a6be18 +0x52:  movl   $0x0,0x8(%esp)
08a6be20 +0x5a:  lea    -0x18(%ebp),%edx
08a6be23 +0x5d:  mov    %edx,0x4(%esp)
08a6be27 +0x61:  mov    %eax,(%esp)
08a6be2a +0x64:  call   081b8d04 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x50b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x50b
08a6be2f +0x69:  sub    $0x4,%esp
08a6be32 +0x6c:  mov    0x8(%ebp),%eax
08a6be35 +0x6f:  lea    0x3c(%eax),%edx
08a6be38 +0x72:  lea    -0x14(%ebp),%eax
08a6be3b +0x75:  mov    %edx,0x4(%esp)
08a6be3f +0x79:  mov    %eax,(%esp)
08a6be42 +0x7c:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08a6be47 +0x81:  sub    $0x4,%esp
08a6be4a +0x84:  lea    -0x14(%ebp),%eax
08a6be4d +0x87:  mov    %eax,0x4(%esp)
08a6be51 +0x8b:  lea    -0x18(%ebp),%eax
08a6be54 +0x8e:  mov    %eax,(%esp)
08a6be57 +0x91:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08a6be5c +0x96:  test   %al,%al
08a6be5e +0x98:  jne    08a6bded <+0x27>
08a6be60 +0x9a:  mov    -0xc(%ebp),%eax
08a6be63 +0x9d:  leave
08a6be64 +0x9e:  ret
08a6be65 +0x9f:  nop
```

## 反编译 C

```c
// QuestParameterScript::getRewardLevel @ 0x8a6bdc6

/* QuestParameterScript::getRewardLevel(int) */

undefined4 __thiscall QuestParameterScript::getRewardLevel(QuestParameterScript *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_1c);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
    if (*(int *)(iVar2 + 4) <= param_1) {
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
      local_10 = *puVar3;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_14,(int)local_1c);
  }
  return local_10;
}
```
