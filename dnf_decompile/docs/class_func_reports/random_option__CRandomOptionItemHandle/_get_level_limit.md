# _get_level_limit

`_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi`

`random_option::CRandomOptionItemHandle::_get_level_limit(ENUM_RARITY, int)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f0f9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f0f9a  _ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi
#           random_option::CRandomOptionItemHandle::_get_level_limit(ENUM_RARITY, int)
# range [0x085f0f9a, 0x085f1087]
085f0f9a +0x00:  push   %ebp
085f0f9b +0x01:  mov    %esp,%ebp
085f0f9d +0x03:  push   %ebx
085f0f9e +0x04:  sub    $0x34,%esp
085f0fa1 +0x07:  mov    0x10(%ebp),%eax
085f0fa4 +0x0a:  movzbl %al,%edx
085f0fa7 +0x0d:  mov    0xc(%ebp),%eax
085f0faa +0x10:  movzbl %al,%eax
085f0fad +0x13:  mov    %edx,0x8(%esp)
085f0fb1 +0x17:  mov    %eax,0x4(%esp)
085f0fb5 +0x1b:  lea    -0x16(%ebp),%eax
085f0fb8 +0x1e:  mov    %eax,(%esp)
085f0fbb +0x21:  call   085f414e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x169>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x169
085f0fc0 +0x26:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f0fc5 +0x2b:  lea    0x18(%eax),%ecx
085f0fc8 +0x2e:  lea    -0x1c(%ebp),%eax
085f0fcb +0x31:  lea    -0x16(%ebp),%edx
085f0fce +0x34:  mov    %edx,0x8(%esp)
085f0fd2 +0x38:  mov    %ecx,0x4(%esp)
085f0fd6 +0x3c:  mov    %eax,(%esp)
085f0fd9 +0x3f:  call   085f4300 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x31b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x31b
085f0fde +0x44:  sub    $0x4,%esp
085f0fe1 +0x47:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f0fe6 +0x4c:  lea    0x18(%eax),%edx
085f0fe9 +0x4f:  lea    -0x14(%ebp),%eax
085f0fec +0x52:  mov    %edx,0x4(%esp)
085f0ff0 +0x56:  mov    %eax,(%esp)
085f0ff3 +0x59:  call   085f432c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x347>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x347
085f0ff8 +0x5e:  sub    $0x4,%esp
085f0ffb +0x61:  lea    -0x14(%ebp),%eax
085f0ffe +0x64:  mov    %eax,0x4(%esp)
085f1002 +0x68:  lea    -0x1c(%ebp),%eax
085f1005 +0x6b:  mov    %eax,(%esp)
085f1008 +0x6e:  call   085f4352 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x36d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x36d
085f100d +0x73:  test   %al,%al
085f100f +0x75:  je     085f107f <+0xe5>
085f1011 +0x77:  lea    -0x1c(%ebp),%eax
085f1014 +0x7a:  mov    %eax,(%esp)
085f1017 +0x7d:  call   085f4366 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x381>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x381
085f101c +0x82:  mov    0x4(%eax),%ebx
085f101f +0x85:  lea    -0x1c(%ebp),%eax
085f1022 +0x88:  mov    %eax,(%esp)
085f1025 +0x8b:  call   085f4366 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x381>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x381
085f102a +0x90:  mov    0x8(%eax),%eax
085f102d +0x93:  lea    (%ebx,%eax,1),%eax
085f1030 +0x96:  mov    %eax,-0x10(%ebp)
085f1033 +0x99:  mov    0x8(%ebp),%eax
085f1036 +0x9c:  mov    0x4(%eax),%eax
085f1039 +0x9f:  lea    0x9c8(%eax),%edx
085f103f +0xa5:  lea    -0x10(%ebp),%eax
085f1042 +0xa8:  mov    %eax,0x4(%esp)
085f1046 +0xac:  mov    %edx,(%esp)
085f1049 +0xaf:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f104e +0xb4:  mov    %eax,-0xc(%ebp)
085f1051 +0xb7:  lea    -0x1c(%ebp),%eax
085f1054 +0xba:  mov    %eax,(%esp)
085f1057 +0xbd:  call   085f4366 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x381>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x381
085f105c +0xc2:  mov    0x4(%eax),%eax
085f105f +0xc5:  cmp    -0xc(%ebp),%eax
085f1062 +0xc8:  setb   %al
085f1065 +0xcb:  test   %al,%al
085f1067 +0xcd:  je     085f107f <+0xe5>
085f1069 +0xcf:  cmpl   $0x1,0x10(%ebp)
085f106d +0xd3:  jne    085f1077 <+0xdd>
085f106f +0xd5:  mov    0x10(%ebp),%eax
085f1072 +0xd8:  add    $0x4,%eax
085f1075 +0xdb:  jmp    085f1082 <+0xe8>
085f1077 +0xdd:  mov    0x10(%ebp),%eax
085f107a +0xe0:  add    $0x5,%eax
085f107d +0xe3:  jmp    085f1082 <+0xe8>
085f107f +0xe5:  mov    0x10(%ebp),%eax
085f1082 +0xe8:  mov    -0x4(%ebp),%ebx
085f1085 +0xeb:  leave
085f1086 +0xec:  ret
085f1087 +0xed:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_get_level_limit @ 0x85f0f9a

/* random_option::CRandomOptionItemHandle::_get_level_limit(ENUM_RARITY, int) */

int __thiscall
random_option::CRandomOptionItemHandle::_get_level_limit
          (CRandomOptionItemHandle *this,uchar param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RandomApplicationKey local_20 [6];
  RandomApplicationKey local_1a [2];
  map<RandomApplicationKey,LevelLimitDecisionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>>
  local_18 [4];
  ulong local_14;
  uint local_10;
  
  RandomApplicationKey::RandomApplicationKey(local_1a,param_2,(uchar)param_3);
  GetRandomOption();
  std::
  map<RandomApplicationKey,LevelLimitDecisionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>>
  ::find(local_20);
  GetRandomOption();
  std::
  map<RandomApplicationKey,LevelLimitDecisionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>>
  ::end(local_18);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>::
          operator!=((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>
                      *)local_20,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>
                        *)local_20);
    iVar2 = *(int *)(iVar2 + 4);
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>
                        *)local_20);
    local_14 = iVar2 + *(int *)(iVar3 + 8);
    local_10 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x9c8),&local_14);
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>
                        *)local_20);
    if (*(uint *)(iVar2 + 4) < local_10) {
      if (param_3 == 1) {
        param_3 = 5;
      }
      else {
        param_3 = param_3 + 5;
      }
    }
  }
  return param_3;
}
```
