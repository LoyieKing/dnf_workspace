# setMailIterator

`_ZN8WongWork8CMailBox15setMailIteratorEv`

`WongWork::CMailBox::setMailIterator()`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox` | `0x0855232e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855232e  _ZN8WongWork8CMailBox15setMailIteratorEv
#           WongWork::CMailBox::setMailIterator()
# range [0x0855232e, 0x08552369]
0855232e +0x00:  push   %ebp
0855232f +0x01:  mov    %esp,%ebp
08552331 +0x03:  sub    $0x28,%esp
08552334 +0x06:  mov    0x8(%ebp),%eax
08552337 +0x09:  lea    0x40(%eax),%edx
0855233a +0x0c:  lea    -0xc(%ebp),%eax
0855233d +0x0f:  mov    %edx,0x4(%esp)
08552341 +0x13:  mov    %eax,(%esp)
08552344 +0x16:  call   085581cc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd2d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd2d
08552349 +0x1b:  sub    $0x4,%esp
0855234c +0x1e:  lea    -0xc(%ebp),%eax
0855234f +0x21:  mov    %eax,0x4(%esp)
08552353 +0x25:  lea    -0x10(%ebp),%eax
08552356 +0x28:  mov    %eax,(%esp)
08552359 +0x2b:  call   085586f8 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1259>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1259
0855235e +0x30:  mov    0x8(%ebp),%eax
08552361 +0x33:  mov    -0x10(%ebp),%edx
08552364 +0x36:  mov    %edx,0x60(%eax)
08552367 +0x39:  leave
08552368 +0x3a:  ret
08552369 +0x3b:  nop
```

## 反编译 C

```c
// WongWork::CMailBox::setMailIterator @ 0x855232e

/* WongWork::CMailBox::setMailIterator() */

void __thiscall WongWork::CMailBox::setMailIterator(CMailBox *this)

{
  undefined4 local_14;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::begin(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
  _Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
             &local_14,(_Rb_tree_iterator *)local_10);
  *(undefined4 *)(this + 0x60) = local_14;
  return;
}
```
