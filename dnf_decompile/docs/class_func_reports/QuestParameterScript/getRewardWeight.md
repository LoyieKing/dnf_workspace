# getRewardWeight

`_ZN20QuestParameterScript15getRewardWeightEc`

`QuestParameterScript::getRewardWeight(char)`

| 类 | 地址 |
|---|---|
| `QuestParameterScript` | `0x08a6bd1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6bd1c  _ZN20QuestParameterScript15getRewardWeightEc
#           QuestParameterScript::getRewardWeight(char)
# range [0x08a6bd1c, 0x08a6bd85]
08a6bd1c +0x00:  push   %ebp
08a6bd1d +0x01:  mov    %esp,%ebp
08a6bd1f +0x03:  sub    $0x38,%esp
08a6bd22 +0x06:  mov    0xc(%ebp),%eax
08a6bd25 +0x09:  mov    %al,-0x1c(%ebp)
08a6bd28 +0x0c:  mov    0x8(%ebp),%edx
08a6bd2b +0x0f:  lea    -0x10(%ebp),%eax
08a6bd2e +0x12:  lea    -0x1c(%ebp),%ecx
08a6bd31 +0x15:  mov    %ecx,0x8(%esp)
08a6bd35 +0x19:  mov    %edx,0x4(%esp)
08a6bd39 +0x1d:  mov    %eax,(%esp)
08a6bd3c +0x20:  call   08a6c3ac <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x283>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x283
08a6bd41 +0x25:  sub    $0x4,%esp
08a6bd44 +0x28:  mov    0x8(%ebp),%edx
08a6bd47 +0x2b:  lea    -0xc(%ebp),%eax
08a6bd4a +0x2e:  mov    %edx,0x4(%esp)
08a6bd4e +0x32:  mov    %eax,(%esp)
08a6bd51 +0x35:  call   08a6c3d8 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x2af>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x2af
08a6bd56 +0x3a:  sub    $0x4,%esp
08a6bd59 +0x3d:  lea    -0xc(%ebp),%eax
08a6bd5c +0x40:  mov    %eax,0x4(%esp)
08a6bd60 +0x44:  lea    -0x10(%ebp),%eax
08a6bd63 +0x47:  mov    %eax,(%esp)
08a6bd66 +0x4a:  call   08a6c3fe <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x2d5>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x2d5
08a6bd6b +0x4f:  test   %al,%al
08a6bd6d +0x51:  je     08a6bd7f <+0x63>
08a6bd6f +0x53:  lea    -0x10(%ebp),%eax
08a6bd72 +0x56:  mov    %eax,(%esp)
08a6bd75 +0x59:  call   08a6c412 <_GLOBAL__I__Z26importQuestParameterScriptP20QuestParameterScriptPKc+0x2e9>  ; global constructors keyed to importQuestParameterScript(QuestParameterScript*, char const*)+0x2e9
08a6bd7a +0x5e:  mov    0x4(%eax),%eax
08a6bd7d +0x61:  jmp    08a6bd84 <+0x68>
08a6bd7f +0x63:  mov    $0x64,%eax
08a6bd84 +0x68:  leave
08a6bd85 +0x69:  ret
```

## 反编译 C

```c
// QuestParameterScript::getRewardWeight @ 0x8a6bd1c

/* QuestParameterScript::getRewardWeight(char) */

undefined4 QuestParameterScript::getRewardWeight(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<char_const,int>> local_14 [4];
  map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>> local_10 [12];
  
  std::map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>::find
            ((char *)local_14);
  std::map<char,int,std::less<char>,std::allocator<std::pair<char_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<char_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 100;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<char_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
