# getData

`_ZNK13BestClearTime7getDataEPc`

`BestClearTime::getData(char*) const`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c883c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c883c  _ZNK13BestClearTime7getDataEPc
#           BestClearTime::getData(char*) const
# range [0x080c883c, 0x080c8927]
080c883c +0x00:  push   %ebp
080c883d +0x01:  mov    %esp,%ebp
080c883f +0x03:  push   %ebx
080c8840 +0x04:  sub    $0x24,%esp
080c8843 +0x07:  mov    0xc(%ebp),%eax
080c8846 +0x0a:  mov    %eax,-0x10(%ebp)
080c8849 +0x0d:  movl   $0x0,-0xc(%ebp)
080c8850 +0x14:  mov    0x8(%ebp),%eax
080c8853 +0x17:  lea    0x8(%eax),%edx
080c8856 +0x1a:  lea    -0x18(%ebp),%eax
080c8859 +0x1d:  mov    %edx,0x4(%esp)
080c885d +0x21:  mov    %eax,(%esp)
080c8860 +0x24:  call   080c8e32 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x28a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x28a
080c8865 +0x29:  sub    $0x4,%esp
080c8868 +0x2c:  jmp    080c88e5 <+0xa9>
080c886a +0x2e:  cmpl   $0x3e7,-0xc(%ebp)
080c8871 +0x35:  jg     080c8922 <+0xe6>
080c8877 +0x3b:  mov    -0xc(%ebp),%ebx
080c887a +0x3e:  lea    -0x18(%ebp),%eax
080c887d +0x41:  mov    %eax,(%esp)
080c8880 +0x44:  call   080c8e92 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x2ea>  ; global constructors keyed to BestClearTime::BestClearTime()+0x2ea
080c8885 +0x49:  mov    (%eax),%ecx
080c8887 +0x4b:  mov    -0x10(%ebp),%edx
080c888a +0x4e:  mov    %ebx,%eax
080c888c +0x50:  add    %eax,%eax
080c888e +0x52:  add    %ebx,%eax
080c8890 +0x54:  shl    $0x3,%eax
080c8893 +0x57:  mov    %ecx,0x8(%eax,%edx,1)
080c8897 +0x5b:  mov    -0xc(%ebp),%ebx
080c889a +0x5e:  lea    -0x18(%ebp),%eax
080c889d +0x61:  mov    %eax,(%esp)
080c88a0 +0x64:  call   080c8e92 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x2ea>  ; global constructors keyed to BestClearTime::BestClearTime()+0x2ea
080c88a5 +0x69:  mov    %eax,%edx
080c88a7 +0x6b:  mov    -0x10(%ebp),%ecx
080c88aa +0x6e:  mov    %ebx,%eax
080c88ac +0x70:  add    %eax,%eax
080c88ae +0x72:  add    %ebx,%eax
080c88b0 +0x74:  shl    $0x3,%eax
080c88b3 +0x77:  mov    0x4(%edx),%ebx
080c88b6 +0x7a:  mov    %ebx,0xc(%eax,%ecx,1)
080c88ba +0x7e:  mov    0x8(%edx),%ebx
080c88bd +0x81:  mov    %ebx,0x10(%eax,%ecx,1)
080c88c1 +0x85:  mov    0xc(%edx),%ebx
080c88c4 +0x88:  mov    %ebx,0x14(%eax,%ecx,1)
080c88c8 +0x8c:  mov    0x10(%edx),%ebx
080c88cb +0x8f:  mov    %ebx,0x18(%eax,%ecx,1)
080c88cf +0x93:  mov    0x14(%edx),%edx
080c88d2 +0x96:  mov    %edx,0x1c(%eax,%ecx,1)
080c88d6 +0x9a:  lea    -0x18(%ebp),%eax
080c88d9 +0x9d:  mov    %eax,(%esp)
080c88dc +0xa0:  call   080c8ea0 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x2f8>  ; global constructors keyed to BestClearTime::BestClearTime()+0x2f8
080c88e1 +0xa5:  addl   $0x1,-0xc(%ebp)
080c88e5 +0xa9:  mov    0x8(%ebp),%eax
080c88e8 +0xac:  lea    0x8(%eax),%edx
080c88eb +0xaf:  lea    -0x14(%ebp),%eax
080c88ee +0xb2:  mov    %edx,0x4(%esp)
080c88f2 +0xb6:  mov    %eax,(%esp)
080c88f5 +0xb9:  call   080c8e58 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x2b0>  ; global constructors keyed to BestClearTime::BestClearTime()+0x2b0
080c88fa +0xbe:  sub    $0x4,%esp
080c88fd +0xc1:  lea    -0x14(%ebp),%eax
080c8900 +0xc4:  mov    %eax,0x4(%esp)
080c8904 +0xc8:  lea    -0x18(%ebp),%eax
080c8907 +0xcb:  mov    %eax,(%esp)
080c890a +0xce:  call   080c8e7e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x2d6>  ; global constructors keyed to BestClearTime::BestClearTime()+0x2d6
080c890f +0xd3:  test   %al,%al
080c8911 +0xd5:  jne    080c886a <+0x2e>
080c8917 +0xdb:  mov    -0x10(%ebp),%eax
080c891a +0xde:  mov    -0xc(%ebp),%edx
080c891d +0xe1:  mov    %edx,0x4(%eax)
080c8920 +0xe4:  jmp    080c8923 <+0xe7>
080c8922 +0xe6:  nop
080c8923 +0xe7:  mov    -0x4(%ebp),%ebx
080c8926 +0xea:  leave
080c8927 +0xeb:  ret
```

## 反编译 C

```c
// BestClearTime::getData @ 0x80c883c

/* BestClearTime::getData(char*) const */

void __thiscall BestClearTime::getData(BestClearTime *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  local_1c [4];
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  local_18 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = 0;
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
            operator!=((_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>
                        *)local_1c,(_Rb_tree_const_iterator *)local_18);
    iVar3 = local_10;
    if (cVar1 == '\0') {
      *(int *)(local_14 + 4) = local_10;
      return;
    }
    if (999 < local_10) break;
    puVar2 = (undefined4 *)
             std::_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
             operator->((_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>
                         *)local_1c);
    iVar4 = local_10;
    *(undefined4 *)(local_14 + iVar3 * 0x18 + 8) = *puVar2;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
            operator->((_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>
                        *)local_1c);
    iVar4 = iVar4 * 0x18;
    *(undefined4 *)(local_14 + iVar4 + 0xc) = *(undefined4 *)(iVar3 + 4);
    *(undefined4 *)(local_14 + iVar4 + 0x10) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(local_14 + iVar4 + 0x14) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(local_14 + iVar4 + 0x18) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)(local_14 + iVar4 + 0x1c) = *(undefined4 *)(iVar3 + 0x14);
    std::_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::operator++
              ((_Rb_tree_const_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>> *)
               local_1c);
    local_10 = local_10 + 1;
  }
  return;
}
```
