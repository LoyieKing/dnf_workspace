# is_last_field_item

`_ZN13CBattle_Field18is_last_field_itemEi`

`CBattle_Field::is_last_field_item(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830da6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830da6c  _ZN13CBattle_Field18is_last_field_itemEi
#           CBattle_Field::is_last_field_item(int)
# range [0x0830da6c, 0x0830daed]
0830da6c +0x00:  push   %ebp
0830da6d +0x01:  mov    %esp,%ebp
0830da6f +0x03:  sub    $0x38,%esp
0830da72 +0x06:  lea    -0x10(%ebp),%eax
0830da75 +0x09:  mov    %eax,(%esp)
0830da78 +0x0c:  call   08152524 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e59>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e59
0830da7d +0x11:  mov    0x8(%ebp),%eax
0830da80 +0x14:  mov    %eax,(%esp)
0830da83 +0x17:  call   0830eac8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x6ad>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x6ad
0830da88 +0x1c:  lea    0x24(%eax),%ecx
0830da8b +0x1f:  lea    -0x1c(%ebp),%eax
0830da8e +0x22:  lea    0xc(%ebp),%edx
0830da91 +0x25:  mov    %edx,0x8(%esp)
0830da95 +0x29:  mov    %ecx,0x4(%esp)
0830da99 +0x2d:  mov    %eax,(%esp)
0830da9c +0x30:  call   08152532 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e67
0830daa1 +0x35:  sub    $0x4,%esp
0830daa4 +0x38:  mov    -0x1c(%ebp),%eax
0830daa7 +0x3b:  mov    %eax,-0x10(%ebp)
0830daaa +0x3e:  mov    0x8(%ebp),%eax
0830daad +0x41:  mov    %eax,(%esp)
0830dab0 +0x44:  call   0830eac8 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x6ad>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x6ad
0830dab5 +0x49:  lea    0x24(%eax),%edx
0830dab8 +0x4c:  lea    -0xc(%ebp),%eax
0830dabb +0x4f:  mov    %edx,0x4(%esp)
0830dabf +0x53:  mov    %eax,(%esp)
0830dac2 +0x56:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
0830dac7 +0x5b:  sub    $0x4,%esp
0830daca +0x5e:  lea    -0xc(%ebp),%eax
0830dacd +0x61:  mov    %eax,0x4(%esp)
0830dad1 +0x65:  lea    -0x10(%ebp),%eax
0830dad4 +0x68:  mov    %eax,(%esp)
0830dad7 +0x6b:  call   0815494c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4281>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4281
0830dadc +0x70:  test   %al,%al
0830dade +0x72:  je     0830dae7 <+0x7b>
0830dae0 +0x74:  mov    $0x0,%eax
0830dae5 +0x79:  jmp    0830daec <+0x80>
0830dae7 +0x7b:  mov    $0x1,%eax
0830daec +0x80:  leave
0830daed +0x81:  ret
```

## 反编译 C

```c
// CBattle_Field::is_last_field_item @ 0x830da6c

/* CBattle_Field::is_last_field_item(int) */

bool CBattle_Field::is_last_field_item(int param_1)

{
  char cVar1;
  int local_20 [3];
  int local_14;
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_14);
  GetLastMapInfo((CBattle_Field *)param_1);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            (local_20);
  local_14 = local_20[0];
  GetLastMapInfo((CBattle_Field *)param_1);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_10)
  ;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  return cVar1 == '\0';
}
```
