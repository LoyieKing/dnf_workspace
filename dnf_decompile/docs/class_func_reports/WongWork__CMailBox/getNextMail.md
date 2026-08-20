# getNextMail

`_ZN8WongWork8CMailBox11getNextMailEv`

`WongWork::CMailBox::getNextMail()`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox` | `0x0855236a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855236a  _ZN8WongWork8CMailBox11getNextMailEv
#           WongWork::CMailBox::getNextMail()
# range [0x0855236a, 0x085523e1]
0855236a +0x00:  push   %ebp
0855236b +0x01:  mov    %esp,%ebp
0855236d +0x03:  sub    $0x28,%esp
08552370 +0x06:  mov    0x8(%ebp),%eax
08552373 +0x09:  lea    0x40(%eax),%edx
08552376 +0x0c:  lea    -0x10(%ebp),%eax
08552379 +0x0f:  mov    %edx,0x4(%esp)
0855237d +0x13:  mov    %eax,(%esp)
08552380 +0x16:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
08552385 +0x1b:  sub    $0x4,%esp
08552388 +0x1e:  lea    -0x10(%ebp),%eax
0855238b +0x21:  mov    %eax,0x4(%esp)
0855238f +0x25:  lea    -0x14(%ebp),%eax
08552392 +0x28:  mov    %eax,(%esp)
08552395 +0x2b:  call   085586f8 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1259>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1259
0855239a +0x30:  mov    0x8(%ebp),%eax
0855239d +0x33:  lea    0x60(%eax),%edx
085523a0 +0x36:  lea    -0x14(%ebp),%eax
085523a3 +0x39:  mov    %eax,0x4(%esp)
085523a7 +0x3d:  mov    %edx,(%esp)
085523aa +0x40:  call   085586d6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1237>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1237
085523af +0x45:  test   %al,%al
085523b1 +0x47:  je     085523ba <+0x50>
085523b3 +0x49:  mov    $0x0,%eax
085523b8 +0x4e:  jmp    085523df <+0x75>
085523ba +0x50:  mov    0x8(%ebp),%eax
085523bd +0x53:  add    $0x60,%eax
085523c0 +0x56:  mov    %eax,(%esp)
085523c3 +0x59:  call   085586ea <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x124b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x124b
085523c8 +0x5e:  mov    0x4(%eax),%eax
085523cb +0x61:  mov    %eax,-0xc(%ebp)
085523ce +0x64:  mov    0x8(%ebp),%eax
085523d1 +0x67:  add    $0x60,%eax
085523d4 +0x6a:  mov    %eax,(%esp)
085523d7 +0x6d:  call   08558708 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1269>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1269
085523dc +0x72:  mov    -0xc(%ebp),%eax
085523df +0x75:  leave
085523e0 +0x76:  ret
085523e1 +0x77:  nop
```

## 反编译 C

```c
// WongWork::CMailBox::getNextMail @ 0x855236a

/* WongWork::CMailBox::getNextMail() */

undefined4 __thiscall WongWork::CMailBox::getNextMail(CMailBox *this)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_18 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_14 [4];
  undefined4 local_10;
  
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::end(local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
  _Rb_tree_const_iterator(local_18,(_Rb_tree_iterator *)local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
          operator==((_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                      *)(this + 0x60),(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                        *)(this + 0x60));
    local_10 = *(undefined4 *)(iVar2 + 4);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    operator++((_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
               (this + 0x60));
  }
  else {
    local_10 = 0;
  }
  return local_10;
}
```
