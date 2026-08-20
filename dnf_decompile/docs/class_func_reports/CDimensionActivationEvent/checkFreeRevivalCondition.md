# checkFreeRevivalCondition

`_ZN25CDimensionActivationEvent25checkFreeRevivalConditionEi`

`CDimensionActivationEvent::checkFreeRevivalCondition(int)`

| 类 | 地址 |
|---|---|
| `CDimensionActivationEvent` | `0x080eeca4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eeca4  _ZN25CDimensionActivationEvent25checkFreeRevivalConditionEi
#           CDimensionActivationEvent::checkFreeRevivalCondition(int)
# range [0x080eeca4, 0x080eed24]
080eeca4 +0x00:  push   %ebp
080eeca5 +0x01:  mov    %esp,%ebp
080eeca7 +0x03:  sub    $0x28,%esp
080eecaa +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080eecaf +0x0b:  lea    0x4b1c(%eax),%ecx
080eecb5 +0x11:  lea    -0x10(%ebp),%eax
080eecb8 +0x14:  lea    0xc(%ebp),%edx
080eecbb +0x17:  mov    %edx,0x8(%esp)
080eecbf +0x1b:  mov    %ecx,0x4(%esp)
080eecc3 +0x1f:  mov    %eax,(%esp)
080eecc6 +0x22:  call   080eedb4 <_GLOBAL__I__ZN25CDimensionActivationEventC2Ev+0x4f>  ; global constructors keyed to CDimensionActivationEvent::CDimensionActivationEvent()+0x4f
080eeccb +0x27:  sub    $0x4,%esp
080eecce +0x2a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080eecd3 +0x2f:  lea    0x4b1c(%eax),%edx
080eecd9 +0x35:  lea    -0xc(%ebp),%eax
080eecdc +0x38:  mov    %edx,0x4(%esp)
080eece0 +0x3c:  mov    %eax,(%esp)
080eece3 +0x3f:  call   080eede0 <_GLOBAL__I__ZN25CDimensionActivationEventC2Ev+0x7b>  ; global constructors keyed to CDimensionActivationEvent::CDimensionActivationEvent()+0x7b
080eece8 +0x44:  sub    $0x4,%esp
080eeceb +0x47:  lea    -0xc(%ebp),%eax
080eecee +0x4a:  mov    %eax,0x4(%esp)
080eecf2 +0x4e:  lea    -0x10(%ebp),%eax
080eecf5 +0x51:  mov    %eax,(%esp)
080eecf8 +0x54:  call   080eee06 <_GLOBAL__I__ZN25CDimensionActivationEventC2Ev+0xa1>  ; global constructors keyed to CDimensionActivationEvent::CDimensionActivationEvent()+0xa1
080eecfd +0x59:  test   %al,%al
080eecff +0x5b:  je     080eed1e <+0x7a>
080eed01 +0x5d:  lea    -0x10(%ebp),%eax
080eed04 +0x60:  mov    %eax,(%esp)
080eed07 +0x63:  call   080eee1a <_GLOBAL__I__ZN25CDimensionActivationEventC2Ev+0xb5>  ; global constructors keyed to CDimensionActivationEvent::CDimensionActivationEvent()+0xb5
080eed0c +0x68:  movzbl 0x8(%eax),%eax
080eed10 +0x6c:  xor    $0x1,%eax
080eed13 +0x6f:  test   %al,%al
080eed15 +0x71:  je     080eed1e <+0x7a>
080eed17 +0x73:  mov    $0x1,%eax
080eed1c +0x78:  jmp    080eed23 <+0x7f>
080eed1e +0x7a:  mov    $0x0,%eax
080eed23 +0x7f:  leave
080eed24 +0x80:  ret
```

## 反编译 C

```c
// CDimensionActivationEvent::checkFreeRevivalCondition @ 0x80eeca4

/* CDimensionActivationEvent::checkFreeRevivalCondition(int) */

undefined4 CDimensionActivationEvent::checkFreeRevivalCondition(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,DimensionCoinInfo>> local_14 [4];
  map<int,DimensionCoinInfo,std::less<int>,std::allocator<std::pair<int_const,DimensionCoinInfo>>>
  local_10 [12];
  
  G_CDataManager();
  std::
  map<int,DimensionCoinInfo,std::less<int>,std::allocator<std::pair<int_const,DimensionCoinInfo>>>::
  find((int *)local_14);
  G_CDataManager();
  std::
  map<int,DimensionCoinInfo,std::less<int>,std::allocator<std::pair<int_const,DimensionCoinInfo>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,DimensionCoinInfo>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if ((cVar1 != '\0') &&
     (iVar2 = std::_Rb_tree_iterator<std::pair<int_const,DimensionCoinInfo>>::operator->(local_14),
     *(char *)(iVar2 + 8) != '\x01')) {
    return 1;
  }
  return 0;
}
```
