# LexerInput

`_ZN25__slang_filter__FlexLexer10LexerInputEPci`

`__slang_filter__FlexLexer::LexerInput(char*, int)`

| 类 | 地址 |
|---|---|
| `__slang_filter__FlexLexer` | `0x08093a88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08093a88  _ZN25__slang_filter__FlexLexer10LexerInputEPci
#           __slang_filter__FlexLexer::LexerInput(char*, int)
# range [0x08093a88, 0x08093b5f]
08093a88 +0x00:  push   %ebp
08093a89 +0x01:  mov    %esp,%ebp
08093a8b +0x03:  sub    $0x18,%esp
08093a8e +0x06:  mov    0x8(%ebp),%eax
08093a91 +0x09:  mov    0x20(%eax),%eax
08093a94 +0x0c:  mov    %eax,%edx
08093a96 +0x0e:  mov    0x8(%ebp),%eax
08093a99 +0x11:  mov    0x20(%eax),%eax
08093a9c +0x14:  mov    (%eax),%eax
08093a9e +0x16:  sub    $0xc,%eax
08093aa1 +0x19:  mov    (%eax),%eax
08093aa3 +0x1b:  lea    (%edx,%eax,1),%eax
08093aa6 +0x1e:  mov    %eax,(%esp)
08093aa9 +0x21:  call   086e0740 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x6a0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x6a0
08093aae +0x26:  test   %al,%al
08093ab0 +0x28:  jne    08093ad6 <+0x4e>
08093ab2 +0x2a:  mov    0x8(%ebp),%eax
08093ab5 +0x2d:  mov    0x20(%eax),%eax
08093ab8 +0x30:  mov    %eax,%edx
08093aba +0x32:  mov    0x8(%ebp),%eax
08093abd +0x35:  mov    0x20(%eax),%eax
08093ac0 +0x38:  mov    (%eax),%eax
08093ac2 +0x3a:  sub    $0xc,%eax
08093ac5 +0x3d:  mov    (%eax),%eax
08093ac7 +0x3f:  lea    (%edx,%eax,1),%eax
08093aca +0x42:  mov    %eax,(%esp)
08093acd +0x45:  call   086e0750 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x6b0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x6b0
08093ad2 +0x4a:  test   %al,%al
08093ad4 +0x4c:  je     08093add <+0x55>
08093ad6 +0x4e:  mov    $0x1,%eax
08093adb +0x53:  jmp    08093ae2 <+0x5a>
08093add +0x55:  mov    $0x0,%eax
08093ae2 +0x5a:  test   %al,%al
08093ae4 +0x5c:  je     08093aed <+0x65>
08093ae6 +0x5e:  mov    $0x0,%eax
08093aeb +0x63:  jmp    08093b5d <+0xd5>
08093aed +0x65:  mov    0x8(%ebp),%eax
08093af0 +0x68:  mov    0x20(%eax),%eax
08093af3 +0x6b:  mov    0xc(%ebp),%edx
08093af6 +0x6e:  mov    %edx,0x4(%esp)
08093afa +0x72:  mov    %eax,(%esp)
08093afd +0x75:  call   086e7170 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x70d0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x70d0
08093b02 +0x7a:  mov    0x8(%ebp),%eax
08093b05 +0x7d:  mov    0x20(%eax),%eax
08093b08 +0x80:  mov    %eax,%edx
08093b0a +0x82:  mov    0x8(%ebp),%eax
08093b0d +0x85:  mov    0x20(%eax),%eax
08093b10 +0x88:  mov    (%eax),%eax
08093b12 +0x8a:  sub    $0xc,%eax
08093b15 +0x8d:  mov    (%eax),%eax
08093b17 +0x8f:  lea    (%edx,%eax,1),%eax
08093b1a +0x92:  mov    %eax,(%esp)
08093b1d +0x95:  call   086e0740 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x6a0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x6a0
08093b22 +0x9a:  test   %al,%al
08093b24 +0x9c:  je     08093b2d <+0xa5>
08093b26 +0x9e:  mov    $0x0,%eax
08093b2b +0xa3:  jmp    08093b5d <+0xd5>
08093b2d +0xa5:  mov    0x8(%ebp),%eax
08093b30 +0xa8:  mov    0x20(%eax),%eax
08093b33 +0xab:  mov    %eax,%edx
08093b35 +0xad:  mov    0x8(%ebp),%eax
08093b38 +0xb0:  mov    0x20(%eax),%eax
08093b3b +0xb3:  mov    (%eax),%eax
08093b3d +0xb5:  sub    $0xc,%eax
08093b40 +0xb8:  mov    (%eax),%eax
08093b42 +0xba:  lea    (%edx,%eax,1),%eax
08093b45 +0xbd:  mov    %eax,(%esp)
08093b48 +0xc0:  call   086e0760 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x6c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x6c0
08093b4d +0xc5:  test   %al,%al
08093b4f +0xc7:  je     08093b58 <+0xd0>
08093b51 +0xc9:  mov    $0xffffffff,%eax
08093b56 +0xce:  jmp    08093b5d <+0xd5>
08093b58 +0xd0:  mov    $0x1,%eax
08093b5d +0xd5:  leave
08093b5e +0xd6:  ret
08093b5f +0xd7:  nop
```

## 反编译 C

```c
// __slang_filter__FlexLexer::LexerInput @ 0x8093a88

/* __slang_filter__FlexLexer::LexerInput(char*, int) */

undefined4 __slang_filter__FlexLexer::LexerInput(char *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = std::ios::eof((ios *)(*(int *)(param_1 + 0x20) +
                               *(int *)(**(int **)(param_1 + 0x20) + -0xc)));
  if (cVar2 == '\0') {
    cVar2 = std::ios::fail((ios *)(*(int *)(param_1 + 0x20) +
                                  *(int *)(**(int **)(param_1 + 0x20) + -0xc)));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08093ae2;
    }
  }
  bVar1 = true;
LAB_08093ae2:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    std::istream::get(*(istream **)(param_1 + 0x20),(char *)param_2);
    cVar2 = std::ios::eof((ios *)(*(int *)(param_1 + 0x20) +
                                 *(int *)(**(int **)(param_1 + 0x20) + -0xc)));
    if (cVar2 == '\0') {
      cVar2 = std::ios::bad((ios *)(*(int *)(param_1 + 0x20) +
                                   *(int *)(**(int **)(param_1 + 0x20) + -0xc)));
      if (cVar2 == '\0') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
