# UnregisterUser

`_ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser`

`disconnect_detecter::CDisconnectDetecter::UnregisterUser(CUser*)`

| 类 | 地址 |
|---|---|
| `disconnect_detecter::CDisconnectDetecter` | `0x0847236a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847236a  _ZN19disconnect_detecter19CDisconnectDetecter14UnregisterUserEP5CUser
#           disconnect_detecter::CDisconnectDetecter::UnregisterUser(CUser*)
# range [0x0847236a, 0x08472407]
0847236a +0x00:  push   %ebp
0847236b +0x01:  mov    %esp,%ebp
0847236d +0x03:  push   %ebx
0847236e +0x04:  sub    $0x24,%esp
08472371 +0x07:  mov    0xc(%ebp),%eax
08472374 +0x0a:  mov    %eax,(%esp)
08472377 +0x0d:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0847237c +0x12:  movzwl %ax,%ebx
0847237f +0x15:  mov    0xc(%ebp),%eax
08472382 +0x18:  mov    %eax,(%esp)
08472385 +0x1b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0847238a +0x20:  mov    %ebx,0x8(%esp)
0847238e +0x24:  mov    %eax,0x4(%esp)
08472392 +0x28:  lea    -0x14(%ebp),%eax
08472395 +0x2b:  mov    %eax,(%esp)
08472398 +0x2e:  call   0847266e <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x61>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x61
0847239d +0x33:  mov    0x8(%ebp),%edx
084723a0 +0x36:  lea    -0x18(%ebp),%eax
084723a3 +0x39:  lea    -0x14(%ebp),%ecx
084723a6 +0x3c:  mov    %ecx,0x8(%esp)
084723aa +0x40:  mov    %edx,0x4(%esp)
084723ae +0x44:  mov    %eax,(%esp)
084723b1 +0x47:  call   08472742 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x135>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x135
084723b6 +0x4c:  sub    $0x4,%esp
084723b9 +0x4f:  mov    0x8(%ebp),%edx
084723bc +0x52:  lea    -0xc(%ebp),%eax
084723bf +0x55:  mov    %edx,0x4(%esp)
084723c3 +0x59:  mov    %eax,(%esp)
084723c6 +0x5c:  call   0847276e <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x161>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x161
084723cb +0x61:  sub    $0x4,%esp
084723ce +0x64:  lea    -0xc(%ebp),%eax
084723d1 +0x67:  mov    %eax,0x4(%esp)
084723d5 +0x6b:  lea    -0x18(%ebp),%eax
084723d8 +0x6e:  mov    %eax,(%esp)
084723db +0x71:  call   08472794 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x187>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x187
084723e0 +0x76:  test   %al,%al
084723e2 +0x78:  je     084723fd <+0x93>
084723e4 +0x7a:  mov    0x8(%ebp),%eax
084723e7 +0x7d:  mov    -0x18(%ebp),%edx
084723ea +0x80:  mov    %edx,0x4(%esp)
084723ee +0x84:  mov    %eax,(%esp)
084723f1 +0x87:  call   084727a8 <_GLOBAL__I__ZN19disconnect_detecter19CDisconnectDetecter10_IsTimeoutEi+0x19b>  ; global constructors keyed to disconnect_detecter::CDisconnectDetecter::_IsTimeout(int)+0x19b
084723f6 +0x8c:  mov    $0x1,%eax
084723fb +0x91:  jmp    08472402 <+0x98>
084723fd +0x93:  mov    $0x0,%eax
08472402 +0x98:  mov    -0x4(%ebp),%ebx
08472405 +0x9b:  leave
08472406 +0x9c:  ret
08472407 +0x9d:  nop
```

## 反编译 C

```c
// disconnect_detecter::CDisconnectDetecter::UnregisterUser @ 0x847236a

/* disconnect_detecter::CDisconnectDetecter::UnregisterUser(CUser*) */

bool __thiscall
disconnect_detecter::CDisconnectDetecter::UnregisterUser(CDisconnectDetecter *this,CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  DetectedObjectKey *pDVar4;
  undefined4 local_1c;
  DetectedObjectKey local_18 [8];
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  local_10 [8];
  
  uVar2 = CUser::get_unique_id(param_1);
  iVar3 = CUser::GetUID(param_1);
  DetectedObjectKey::DetectedObjectKey(local_18,iVar3,uVar2 & 0xffff);
  pDVar4 = local_18;
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::find((DetectedObjectKey *)&local_1c);
  std::
  map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>::
          operator!=((_Rb_tree_iterator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>
                      *)&local_1c,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::
    map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
    ::erase((map<disconnect_detecter::DetectedObjectKey,int,std::less<disconnect_detecter::DetectedObjectKey>,std::allocator<std::pair<disconnect_detecter::DetectedObjectKey_const,int>>>
             *)this,local_1c,pDVar4);
  }
  return cVar1 != '\0';
}
```
