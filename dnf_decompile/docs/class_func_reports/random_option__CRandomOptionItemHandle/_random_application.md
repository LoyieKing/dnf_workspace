# _random_application

`_ZN13random_option23CRandomOptionItemHandle19_random_applicationE11ENUM_RARITYi`

`random_option::CRandomOptionItemHandle::_random_application(ENUM_RARITY, int)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f0ec2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f0ec2  _ZN13random_option23CRandomOptionItemHandle19_random_applicationE11ENUM_RARITYi
#           random_option::CRandomOptionItemHandle::_random_application(ENUM_RARITY, int)
# range [0x085f0ec2, 0x085f0f99]
085f0ec2 +0x00:  push   %ebp
085f0ec3 +0x01:  mov    %esp,%ebp
085f0ec5 +0x03:  push   %ebx
085f0ec6 +0x04:  sub    $0x34,%esp
085f0ec9 +0x07:  mov    0x10(%ebp),%eax
085f0ecc +0x0a:  movzbl %al,%edx
085f0ecf +0x0d:  mov    0xc(%ebp),%eax
085f0ed2 +0x10:  movzbl %al,%eax
085f0ed5 +0x13:  mov    %edx,0x8(%esp)
085f0ed9 +0x17:  mov    %eax,0x4(%esp)
085f0edd +0x1b:  lea    -0x16(%ebp),%eax
085f0ee0 +0x1e:  mov    %eax,(%esp)
085f0ee3 +0x21:  call   085f414e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x169>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x169
085f0ee8 +0x26:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f0eed +0x2b:  mov    %eax,%edx
085f0eef +0x2d:  lea    -0x1c(%ebp),%eax
085f0ef2 +0x30:  lea    -0x16(%ebp),%ecx
085f0ef5 +0x33:  mov    %ecx,0x8(%esp)
085f0ef9 +0x37:  mov    %edx,0x4(%esp)
085f0efd +0x3b:  mov    %eax,(%esp)
085f0f00 +0x3e:  call   085f428c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x2a7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x2a7
085f0f05 +0x43:  sub    $0x4,%esp
085f0f08 +0x46:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f0f0d +0x4b:  mov    %eax,%edx
085f0f0f +0x4d:  lea    -0x14(%ebp),%eax
085f0f12 +0x50:  mov    %edx,0x4(%esp)
085f0f16 +0x54:  mov    %eax,(%esp)
085f0f19 +0x57:  call   085f42b8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x2d3>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x2d3
085f0f1e +0x5c:  sub    $0x4,%esp
085f0f21 +0x5f:  lea    -0x14(%ebp),%eax
085f0f24 +0x62:  mov    %eax,0x4(%esp)
085f0f28 +0x66:  lea    -0x1c(%ebp),%eax
085f0f2b +0x69:  mov    %eax,(%esp)
085f0f2e +0x6c:  call   085f42de <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x2f9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x2f9
085f0f33 +0x71:  test   %al,%al
085f0f35 +0x73:  je     085f0f90 <+0xce>
085f0f37 +0x75:  lea    -0x1c(%ebp),%eax
085f0f3a +0x78:  mov    %eax,(%esp)
085f0f3d +0x7b:  call   085f42f2 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x30d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x30d
085f0f42 +0x80:  mov    0x8(%eax),%ebx
085f0f45 +0x83:  lea    -0x1c(%ebp),%eax
085f0f48 +0x86:  mov    %eax,(%esp)
085f0f4b +0x89:  call   085f42f2 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x30d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x30d
085f0f50 +0x8e:  mov    0x4(%eax),%eax
085f0f53 +0x91:  lea    (%ebx,%eax,1),%eax
085f0f56 +0x94:  mov    %eax,-0x10(%ebp)
085f0f59 +0x97:  mov    0x8(%ebp),%eax
085f0f5c +0x9a:  mov    0x4(%eax),%eax
085f0f5f +0x9d:  lea    -0x10(%ebp),%edx
085f0f62 +0xa0:  mov    %edx,0x4(%esp)
085f0f66 +0xa4:  mov    %eax,(%esp)
085f0f69 +0xa7:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f0f6e +0xac:  mov    %eax,-0xc(%ebp)
085f0f71 +0xaf:  lea    -0x1c(%ebp),%eax
085f0f74 +0xb2:  mov    %eax,(%esp)
085f0f77 +0xb5:  call   085f42f2 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x30d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x30d
085f0f7c +0xba:  mov    0x8(%eax),%eax
085f0f7f +0xbd:  cmp    -0xc(%ebp),%eax
085f0f82 +0xc0:  setb   %al
085f0f85 +0xc3:  test   %al,%al
085f0f87 +0xc5:  je     085f0f90 <+0xce>
085f0f89 +0xc7:  mov    $0x1,%eax
085f0f8e +0xcc:  jmp    085f0f95 <+0xd3>
085f0f90 +0xce:  mov    $0x0,%eax
085f0f95 +0xd3:  mov    -0x4(%ebp),%ebx
085f0f98 +0xd6:  leave
085f0f99 +0xd7:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_random_application @ 0x85f0ec2

/* random_option::CRandomOptionItemHandle::_random_application(ENUM_RARITY, int) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_random_application
          (CRandomOptionItemHandle *this,uchar param_2,uchar param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RandomApplicationKey local_20 [6];
  RandomApplicationKey local_1a [2];
  map<RandomApplicationKey,RandomApplicationValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>>
  local_18 [4];
  ulong local_14;
  uint local_10;
  
  RandomApplicationKey::RandomApplicationKey(local_1a,param_2,param_3);
  GetRandomOption();
  std::
  map<RandomApplicationKey,RandomApplicationValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>>
  ::find(local_20);
  GetRandomOption();
  std::
  map<RandomApplicationKey,RandomApplicationValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
                        *)local_20,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
                        *)local_20);
    iVar2 = *(int *)(iVar2 + 8);
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
                        *)local_20);
    local_14 = iVar2 + *(int *)(iVar3 + 4);
    local_10 = CMTRand::randInt(*(CMTRand **)(this + 4),&local_14);
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
                        *)local_20);
    if (*(uint *)(iVar2 + 8) < local_10) {
      return 1;
    }
  }
  return 0;
}
```
