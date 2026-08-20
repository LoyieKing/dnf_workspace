# DoDetectingDisconnect

`_ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv`

`disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect()`

| 类 | 地址 |
|---|---|
| `disconnect_detecter::CDisconnectDetecter` | `0x084724b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084724b0  _ZN19disconnect_detecter19CDisconnectDetecter21DoDetectingDisconnectEv
#           disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect()
# range [0x084724b0, 0x084725b9]
084724b0 +0x000:  push   %ebp
084724b1 +0x001:  mov    %esp,%ebp
084724b3 +0x003:  push   %ebx
084724b4 +0x004:  sub    $0x24,%esp
084724b7 +0x007:  mov    0x8(%ebp),%edx
084724ba +0x00a:  lea    -0x18(%ebp),%eax
084724bd +0x00d:  mov    %edx,0x4(%esp)
084724c1 +0x011:  mov    %eax,(%esp)
084724c4 +0x014:  call   084727d0 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x1c3>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x1c3
084724c9 +0x019:  sub    $0x4,%esp
084724cc +0x01c:  jmp    08472577 <+0xc7>
084724d1 +0x021:  lea    -0x18(%ebp),%eax
084724d4 +0x024:  mov    %eax,(%esp)
084724d7 +0x027:  call   084727c2 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x1b5>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x1b5
084724dc +0x02c:  mov    0x8(%eax),%eax
084724df +0x02f:  mov    %eax,0x4(%esp)
084724e3 +0x033:  mov    0x8(%ebp),%eax
084724e6 +0x036:  mov    %eax,(%esp)
084724e9 +0x039:  call   084721f4 <_ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi>  ; disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)
084724ee +0x03e:  test   %al,%al
084724f0 +0x040:  je     0847256c <+0xbc>
084724f2 +0x042:  lea    -0x18(%ebp),%eax
084724f5 +0x045:  mov    %eax,(%esp)
084724f8 +0x048:  call   084727c2 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x1b5>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x1b5
084724fd +0x04d:  mov    0x4(%eax),%ebx
08472500 +0x050:  lea    -0x18(%ebp),%eax
08472503 +0x053:  mov    %eax,(%esp)
08472506 +0x056:  call   084727c2 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x1b5>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x1b5
0847250b +0x05b:  mov    (%eax),%eax
0847250d +0x05d:  mov    %ebx,0x8(%esp)
08472511 +0x061:  mov    %eax,0x4(%esp)
08472515 +0x065:  mov    0x8(%ebp),%eax
08472518 +0x068:  mov    %eax,(%esp)
0847251b +0x06b:  call   08472222 <_ZN19disconnect_detecter19CDisconnectDetecter8_GetUserEii>  ; disconnect_detecter::CDisconnectDetecter::_GetUser(int, int)
08472520 +0x070:  mov    %eax,-0xc(%ebp)
08472523 +0x073:  cmpl   $0x0,-0xc(%ebp)
08472527 +0x077:  je     0847253b <+0x8b>
08472529 +0x079:  mov    -0xc(%ebp),%eax
0847252c +0x07c:  mov    %eax,0x4(%esp)
08472530 +0x080:  mov    0x8(%ebp),%eax
08472533 +0x083:  mov    %eax,(%esp)
08472536 +0x086:  call   084725ba <_ZN19disconnect_detecter19CDisconnectDetecter12OnDisconnectEP5CUser>  ; disconnect_detecter::CDisconnectDetecter::OnDisconnect(CUser*)
0847253b +0x08b:  lea    -0x10(%ebp),%eax
0847253e +0x08e:  movl   $0x0,0x8(%esp)
08472546 +0x096:  lea    -0x18(%ebp),%edx
08472549 +0x099:  mov    %edx,0x4(%esp)
0847254d +0x09d:  mov    %eax,(%esp)
08472550 +0x0a0:  call   084727f6 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x1e9>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x1e9
08472555 +0x0a5:  sub    $0x4,%esp
08472558 +0x0a8:  mov    0x8(%ebp),%eax
0847255b +0x0ab:  mov    -0x10(%ebp),%edx
0847255e +0x0ae:  mov    %edx,0x4(%esp)
08472562 +0x0b2:  mov    %eax,(%esp)
08472565 +0x0b5:  call   084727a8 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x19b>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x19b
0847256a +0x0ba:  jmp    08472577 <+0xc7>
0847256c +0x0bc:  lea    -0x18(%ebp),%eax
0847256f +0x0bf:  mov    %eax,(%esp)
08472572 +0x0c2:  call   08472834 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x227>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x227
08472577 +0x0c7:  mov    0x8(%ebp),%edx
0847257a +0x0ca:  lea    -0x14(%ebp),%eax
0847257d +0x0cd:  mov    %edx,0x4(%esp)
08472581 +0x0d1:  mov    %eax,(%esp)
08472584 +0x0d4:  call   0847276e <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x161>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x161
08472589 +0x0d9:  sub    $0x4,%esp
0847258c +0x0dc:  lea    -0x14(%ebp),%eax
0847258f +0x0df:  mov    %eax,0x4(%esp)
08472593 +0x0e3:  lea    -0x18(%ebp),%eax
08472596 +0x0e6:  mov    %eax,(%esp)
08472599 +0x0e9:  call   08472794 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x187>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x187
0847259e +0x0ee:  test   %al,%al
084725a0 +0x0f0:  jne    084724d1 <+0x21>
084725a6 +0x0f6:  mov    0x8(%ebp),%eax
084725a9 +0x0f9:  mov    %eax,(%esp)
084725ac +0x0fc:  call   08472852 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x245>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x245
084725b1 +0x101:  xor    $0x1,%eax
084725b4 +0x104:  mov    -0x4(%ebp),%ebx
084725b7 +0x107:  leave
084725b8 +0x108:  ret
084725b9 +0x109:  nop
```

## 反编译 C

```c
// disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect @ 0x84724b0

/* disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect() */

uint __thiscall
disconnect_detecter::CDisconnectDetecter::DoDetectingDisconnect(CDisconnectDetecter *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  local_1c [4];
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  local_18 [4];
  undefined4 local_14;
  CUser *local_10;
  
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
            operator!=((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                        *)local_1c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
            operator->((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                        *)local_1c);
    cVar1 = _IsTimeout(this,*(int *)(iVar2 + 8));
    if (cVar1 == '\0') {
      std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
      operator++((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>> *)
                 local_1c);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
              operator->((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                          *)local_1c);
      iVar2 = *(int *)(iVar2 + 4);
      piVar3 = (int *)std::
                      _Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                      ::operator->((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                                    *)local_1c);
      local_10 = (CUser *)_GetUser(this,*piVar3,iVar2);
      if (local_10 != (CUser *)0x0) {
        OnDisconnect(this,local_10);
      }
      uVar5 = 0;
      std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
      operator++((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>> *)
                 &local_14,(int)local_1c);
      std::
      map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
      ::erase((map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
               *)this,local_14,uVar5);
    }
  }
  uVar4 = std::
          map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
          ::empty((map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
                   *)this);
  return uVar4 ^ 1;
}
```
