# FindStoreBuyer

`_ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser`

`private_store::CPrivateStoreMgr::FindStoreBuyer(CUser*)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085ca2da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ca2da  _ZN13private_store16CPrivateStoreMgr14FindStoreBuyerEP5CUser
#           private_store::CPrivateStoreMgr::FindStoreBuyer(CUser*)
# range [0x085ca2da, 0x085ca357]
085ca2da +0x00:  push   %ebp
085ca2db +0x01:  mov    %esp,%ebp
085ca2dd +0x03:  sub    $0x28,%esp
085ca2e0 +0x06:  mov    0xc(%ebp),%eax
085ca2e3 +0x09:  test   %eax,%eax
085ca2e5 +0x0b:  jne    085ca2ee <+0x14>
085ca2e7 +0x0d:  mov    $0x0,%eax
085ca2ec +0x12:  jmp    085ca356 <+0x7c>
085ca2ee +0x14:  mov    0x8(%ebp),%eax
085ca2f1 +0x17:  lea    0xb0(%eax),%ecx
085ca2f7 +0x1d:  lea    -0x10(%ebp),%eax
085ca2fa +0x20:  lea    0xc(%ebp),%edx
085ca2fd +0x23:  mov    %edx,0x8(%esp)
085ca301 +0x27:  mov    %ecx,0x4(%esp)
085ca305 +0x2b:  mov    %eax,(%esp)
085ca308 +0x2e:  call   085cd3f4 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x210a>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x210a
085ca30d +0x33:  sub    $0x4,%esp
085ca310 +0x36:  mov    0x8(%ebp),%eax
085ca313 +0x39:  lea    0xb0(%eax),%edx
085ca319 +0x3f:  lea    -0xc(%ebp),%eax
085ca31c +0x42:  mov    %edx,0x4(%esp)
085ca320 +0x46:  mov    %eax,(%esp)
085ca323 +0x49:  call   085cd420 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2136>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2136
085ca328 +0x4e:  sub    $0x4,%esp
085ca32b +0x51:  lea    -0xc(%ebp),%eax
085ca32e +0x54:  mov    %eax,0x4(%esp)
085ca332 +0x58:  lea    -0x10(%ebp),%eax
085ca335 +0x5b:  mov    %eax,(%esp)
085ca338 +0x5e:  call   085cd446 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x215c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x215c
085ca33d +0x63:  test   %al,%al
085ca33f +0x65:  je     085ca351 <+0x77>
085ca341 +0x67:  lea    -0x10(%ebp),%eax
085ca344 +0x6a:  mov    %eax,(%esp)
085ca347 +0x6d:  call   085cd45a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x2170>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x2170
085ca34c +0x72:  mov    0x4(%eax),%eax
085ca34f +0x75:  jmp    085ca356 <+0x7c>
085ca351 +0x77:  mov    $0x0,%eax
085ca356 +0x7c:  leave
085ca357 +0x7d:  ret
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::FindStoreBuyer @ 0x85ca2da

/* private_store::CPrivateStoreMgr::FindStoreBuyer(CUser*) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::FindStoreBuyer(CPrivateStoreMgr *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>> local_14 [4];
  map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
  local_10 [12];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::find((CUser **)local_14);
    std::
    map<CUser*,private_store::CPrivateStore*,std::less<CUser*>,std::allocator<std::pair<CUser*const,private_store::CPrivateStore*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::operator!=
                      (local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<CUser*const,private_store::CPrivateStore*>>::
              operator->(local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  return uVar2;
}
```
