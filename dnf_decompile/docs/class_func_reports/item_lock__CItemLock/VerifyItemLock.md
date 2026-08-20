# VerifyItemLock

`_ZN9item_lock9CItemLock14VerifyItemLockEP5CUser`

`item_lock::CItemLock::VerifyItemLock(CUser*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08542e98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08542e98  _ZN9item_lock9CItemLock14VerifyItemLockEP5CUser
#           item_lock::CItemLock::VerifyItemLock(CUser*)
# range [0x08542e98, 0x08542fdd]
08542e98 +0x000:  push   %ebp
08542e99 +0x001:  mov    %esp,%ebp
08542e9b +0x003:  sub    $0x38,%esp
08542e9e +0x006:  cmpl   $0x0,0xc(%ebp)
08542ea2 +0x00a:  je     08542fdb <+0x143>
08542ea8 +0x010:  movb   $0x0,-0xd(%ebp)
08542eac +0x014:  mov    0x8(%ebp),%eax
08542eaf +0x017:  lea    0x8(%eax),%edx
08542eb2 +0x01a:  lea    -0x1c(%ebp),%eax
08542eb5 +0x01d:  mov    %edx,0x4(%esp)
08542eb9 +0x021:  mov    %eax,(%esp)
08542ebc +0x024:  call   0854324e <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x230>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x230
08542ec1 +0x029:  sub    $0x4,%esp
08542ec4 +0x02c:  jmp    08542f96 <+0xfe>
08542ec9 +0x031:  lea    -0x1c(%ebp),%eax
08542ecc +0x034:  mov    %eax,(%esp)
08542ecf +0x037:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
08542ed4 +0x03c:  movzbl 0x8(%eax),%eax
08542ed8 +0x040:  movzbl %al,%eax
08542edb +0x043:  mov    %eax,-0xc(%ebp)
08542ede +0x046:  cmpl   $0x1,-0xc(%ebp)
08542ee2 +0x04a:  je     08542eee <+0x56>
08542ee4 +0x04c:  cmpl   $0x2,-0xc(%ebp)
08542ee8 +0x050:  jne    08542f8b <+0xf3>
08542eee +0x056:  lea    -0x1c(%ebp),%eax
08542ef1 +0x059:  mov    %eax,(%esp)
08542ef4 +0x05c:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
08542ef9 +0x061:  movzbl (%eax),%eax
08542efc +0x064:  movzbl %al,%eax
08542eff +0x067:  mov    %eax,0x4(%esp)
08542f03 +0x06b:  mov    0x8(%ebp),%eax
08542f06 +0x06e:  mov    %eax,(%esp)
08542f09 +0x071:  call   08542e12 <_ZN9item_lock9CItemLock9_findItemEh>  ; item_lock::CItemLock::_findItem(unsigned char)
08542f0e +0x076:  xor    $0x1,%eax
08542f11 +0x079:  test   %al,%al
08542f13 +0x07b:  je     08542f7e <+0xe6>
08542f15 +0x07d:  lea    -0x1c(%ebp),%eax
08542f18 +0x080:  mov    %eax,(%esp)
08542f1b +0x083:  call   085432cc <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x2ae>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x2ae
08542f20 +0x088:  mov    0x8(%ebp),%edx
08542f23 +0x08b:  add    $0x20,%edx
08542f26 +0x08e:  mov    %eax,0x4(%esp)
08542f2a +0x092:  mov    %edx,(%esp)
08542f2d +0x095:  call   0854350a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x4ec>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x4ec
08542f32 +0x09a:  lea    -0x14(%ebp),%eax
08542f35 +0x09d:  movl   $0x0,0x8(%esp)
08542f3d +0x0a5:  lea    -0x1c(%ebp),%edx
08542f40 +0x0a8:  mov    %edx,0x4(%esp)
08542f44 +0x0ac:  mov    %eax,(%esp)
08542f47 +0x0af:  call   08543524 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x506>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x506
08542f4c +0x0b4:  sub    $0x4,%esp
08542f4f +0x0b7:  mov    0x8(%ebp),%eax
08542f52 +0x0ba:  lea    0x8(%eax),%edx
08542f55 +0x0bd:  mov    -0x14(%ebp),%eax
08542f58 +0x0c0:  mov    %eax,0x4(%esp)
08542f5c +0x0c4:  mov    %edx,(%esp)
08542f5f +0x0c7:  call   08543562 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x544>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x544
08542f64 +0x0cc:  cmpl   $0x2,-0xc(%ebp)
08542f68 +0x0d0:  jne    08542f78 <+0xe0>
08542f6a +0x0d2:  mov    0x8(%ebp),%eax
08542f6d +0x0d5:  add    $0x54,%eax
08542f70 +0x0d8:  mov    %eax,(%esp)
08542f73 +0x0db:  call   085414f0 <_ZN9item_lock14CItemLockTimer21DecreaseItemLockTimerEv>  ; item_lock::CItemLockTimer::DecreaseItemLockTimer()
08542f78 +0x0e0:  movb   $0x1,-0xd(%ebp)
08542f7c +0x0e4:  jmp    08542f96 <+0xfe>
08542f7e +0x0e6:  lea    -0x1c(%ebp),%eax
08542f81 +0x0e9:  mov    %eax,(%esp)
08542f84 +0x0ec:  call   085432ae <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x290>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x290
08542f89 +0x0f1:  jmp    08542f96 <+0xfe>
08542f8b +0x0f3:  lea    -0x1c(%ebp),%eax
08542f8e +0x0f6:  mov    %eax,(%esp)
08542f91 +0x0f9:  call   085432ae <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x290>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x290
08542f96 +0x0fe:  mov    0x8(%ebp),%eax
08542f99 +0x101:  lea    0x8(%eax),%edx
08542f9c +0x104:  lea    -0x18(%ebp),%eax
08542f9f +0x107:  mov    %edx,0x4(%esp)
08542fa3 +0x10b:  mov    %eax,(%esp)
08542fa6 +0x10e:  call   08543274 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x256>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x256
08542fab +0x113:  sub    $0x4,%esp
08542fae +0x116:  lea    -0x18(%ebp),%eax
08542fb1 +0x119:  mov    %eax,0x4(%esp)
08542fb5 +0x11d:  lea    -0x1c(%ebp),%eax
08542fb8 +0x120:  mov    %eax,(%esp)
08542fbb +0x123:  call   0854329a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x27c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x27c
08542fc0 +0x128:  test   %al,%al
08542fc2 +0x12a:  jne    08542ec9 <+0x31>
08542fc8 +0x130:  cmpb   $0x0,-0xd(%ebp)
08542fcc +0x134:  je     08542fdc <+0x144>
08542fce +0x136:  mov    0x8(%ebp),%eax
08542fd1 +0x139:  mov    %eax,(%esp)
08542fd4 +0x13c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08542fd9 +0x141:  jmp    08542fdc <+0x144>
08542fdb +0x143:  nop
08542fdc +0x144:  leave
08542fdd +0x145:  ret
```

## 反编译 C

```c
// item_lock::CItemLock::VerifyItemLock @ 0x8542e98

/* item_lock::CItemLock::VerifyItemLock(CUser*) */

void __thiscall item_lock::CItemLock::VerifyItemLock(CItemLock *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  uchar *puVar3;
  undefined4 uVar4;
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_20 [4];
  map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
  local_1c [4];
  undefined4 local_18;
  char local_11;
  uint local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_11 = '\0';
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::begin(local_20);
    while( true ) {
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_20,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)
                         local_20);
      local_10 = (uint)*(byte *)(iVar2 + 8);
      if ((local_10 == 1) || (local_10 == 2)) {
        puVar3 = (uchar *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                          operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                      *)local_20);
        cVar1 = _findItem(this,*puVar3);
        if (cVar1 == '\x01') {
          std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_20);
        }
        else {
          puVar3 = (uchar *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::
                            operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>
                                        *)local_20);
          std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::push
                    ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *
                     )(this + 0x20),puVar3);
          uVar4 = 0;
          std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)&local_18,
                     (int)local_20);
          std::
          map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
          ::erase((map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
                   *)(this + 8),local_18,uVar4);
          if (local_10 == 2) {
            CItemLockTimer::DecreaseItemLockTimer((CItemLockTimer *)(this + 0x54));
          }
          local_11 = '\x01';
        }
      }
      else {
        std::_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_char_const,stItemLockInfo>> *)local_20);
      }
    }
    if (local_11 != '\0') {
      charac_expand::CData::alter((CData *)this);
    }
  }
  return;
}
```
