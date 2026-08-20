# Init

`_ZN8WongWork8CMailBox4InitEv`

`WongWork::CMailBox::Init()`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox` | `0x08551d98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08551d98  _ZN8WongWork8CMailBox4InitEv
#           WongWork::CMailBox::Init()
# range [0x08551d98, 0x08551f49]
08551d98 +0x000:  push   %ebp
08551d99 +0x001:  mov    %esp,%ebp
08551d9b +0x003:  sub    $0x48,%esp
08551d9e +0x006:  mov    0x8(%ebp),%eax
08551da1 +0x009:  movzbl (%eax),%eax
08551da4 +0x00c:  xor    $0x1,%eax
08551da7 +0x00f:  test   %al,%al
08551da9 +0x011:  jne    08551f47 <+0x1af>
08551daf +0x017:  lea    -0x10(%ebp),%eax
08551db2 +0x01a:  mov    %eax,(%esp)
08551db5 +0x01d:  call   08558198 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xcf9>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xcf9
08551dba +0x022:  mov    0x8(%ebp),%eax
08551dbd +0x025:  lea    0x40(%eax),%edx
08551dc0 +0x028:  lea    -0x14(%ebp),%eax
08551dc3 +0x02b:  mov    %edx,0x4(%esp)
08551dc7 +0x02f:  mov    %eax,(%esp)
08551dca +0x032:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
08551dcf +0x037:  sub    $0x4,%esp
08551dd2 +0x03a:  mov    0x8(%ebp),%eax
08551dd5 +0x03d:  lea    0x40(%eax),%edx
08551dd8 +0x040:  lea    -0x2c(%ebp),%eax
08551ddb +0x043:  mov    %edx,0x4(%esp)
08551ddf +0x047:  mov    %eax,(%esp)
08551de2 +0x04a:  call   085581cc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd2d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd2d
08551de7 +0x04f:  sub    $0x4,%esp
08551dea +0x052:  mov    -0x2c(%ebp),%eax
08551ded +0x055:  mov    %eax,-0x10(%ebp)
08551df0 +0x058:  jmp    08551e2e <+0x96>
08551df2 +0x05a:  lea    -0x10(%ebp),%eax
08551df5 +0x05d:  mov    %eax,(%esp)
08551df8 +0x060:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
08551dfd +0x065:  mov    0x4(%eax),%eax
08551e00 +0x068:  mov    %eax,-0xc(%ebp)
08551e03 +0x06b:  mov    -0xc(%ebp),%eax
08551e06 +0x06e:  mov    %eax,(%esp)
08551e09 +0x071:  call   085519fe <_ZN8WongWork8CMailBox5CMail12ResetPackageEv>  ; WongWork::CMailBox::CMail::ResetPackage()
08551e0e +0x076:  mov    0x8(%ebp),%eax
08551e11 +0x079:  lea    0x10(%eax),%edx
08551e14 +0x07c:  mov    -0xc(%ebp),%eax
08551e17 +0x07f:  mov    %eax,0x4(%esp)
08551e1b +0x083:  mov    %edx,(%esp)
08551e1e +0x086:  call   08558232 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd93>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd93
08551e23 +0x08b:  lea    -0x10(%ebp),%eax
08551e26 +0x08e:  mov    %eax,(%esp)
08551e29 +0x091:  call   08558206 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd67>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd67
08551e2e +0x096:  lea    -0x14(%ebp),%eax
08551e31 +0x099:  mov    %eax,0x4(%esp)
08551e35 +0x09d:  lea    -0x10(%ebp),%eax
08551e38 +0x0a0:  mov    %eax,(%esp)
08551e3b +0x0a3:  call   085581f2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd53>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd53
08551e40 +0x0a8:  test   %al,%al
08551e42 +0x0aa:  jne    08551df2 <+0x5a>
08551e44 +0x0ac:  mov    0x8(%ebp),%eax
08551e47 +0x0af:  add    $0x40,%eax
08551e4a +0x0b2:  mov    %eax,(%esp)
08551e4d +0x0b5:  call   0855838a <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xeeb>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xeeb
08551e52 +0x0ba:  mov    0x8(%ebp),%eax
08551e55 +0x0bd:  movb   $0x0,(%eax)
08551e58 +0x0c0:  mov    0x8(%ebp),%eax
08551e5b +0x0c3:  movl   $0x0,0x4(%eax)
08551e62 +0x0ca:  mov    0x8(%ebp),%eax
08551e65 +0x0cd:  movl   $0x0,0x8(%eax)
08551e6c +0x0d4:  mov    0x8(%ebp),%eax
08551e6f +0x0d7:  add    $0x58,%eax
08551e72 +0x0da:  mov    %eax,(%esp)
08551e75 +0x0dd:  call   0855839e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xeff>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xeff
08551e7a +0x0e2:  xor    $0x1,%eax
08551e7d +0x0e5:  test   %al,%al
08551e7f +0x0e7:  je     08551ef2 <+0x15a>
08551e81 +0x0e9:  mov    0x8(%ebp),%eax
08551e84 +0x0ec:  lea    0x58(%eax),%edx
08551e87 +0x0ef:  lea    -0x18(%ebp),%eax
08551e8a +0x0f2:  mov    %edx,0x4(%esp)
08551e8e +0x0f6:  mov    %eax,(%esp)
08551e91 +0x0f9:  call   085583b0 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf11>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf11
08551e96 +0x0fe:  sub    $0x4,%esp
08551e99 +0x101:  mov    0x8(%ebp),%eax
08551e9c +0x104:  lea    0x58(%eax),%edx
08551e9f +0x107:  lea    -0x1c(%ebp),%eax
08551ea2 +0x10a:  mov    %edx,0x4(%esp)
08551ea6 +0x10e:  mov    %eax,(%esp)
08551ea9 +0x111:  call   085583d6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf37>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf37
08551eae +0x116:  sub    $0x4,%esp
08551eb1 +0x119:  jmp    08551edc <+0x144>
08551eb3 +0x11b:  lea    -0x18(%ebp),%eax
08551eb6 +0x11e:  mov    %eax,(%esp)
08551eb9 +0x121:  call   08558422 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf83
08551ebe +0x126:  mov    (%eax),%edx
08551ec0 +0x128:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08551ec5 +0x12d:  mov    %edx,0x4(%esp)
08551ec9 +0x131:  mov    %eax,(%esp)
08551ecc +0x134:  call   0828fb28 <_ZN10StreamPool4FreeEP6Stream>  ; StreamPool::Free(Stream*)
08551ed1 +0x139:  lea    -0x18(%ebp),%eax
08551ed4 +0x13c:  mov    %eax,(%esp)
08551ed7 +0x13f:  call   0855840e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf6f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf6f
08551edc +0x144:  lea    -0x1c(%ebp),%eax
08551edf +0x147:  mov    %eax,0x4(%esp)
08551ee3 +0x14b:  lea    -0x18(%ebp),%eax
08551ee6 +0x14e:  mov    %eax,(%esp)
08551ee9 +0x151:  call   085583fa <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf5b>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf5b
08551eee +0x156:  test   %al,%al
08551ef0 +0x158:  jne    08551eb3 <+0x11b>
08551ef2 +0x15a:  mov    0x8(%ebp),%eax
08551ef5 +0x15d:  add    $0x58,%eax
08551ef8 +0x160:  mov    %eax,(%esp)
08551efb +0x163:  call   08558430 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf91>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf91
08551f00 +0x168:  mov    0x8(%ebp),%eax
08551f03 +0x16b:  add    $0x64,%eax
08551f06 +0x16e:  mov    %eax,(%esp)
08551f09 +0x171:  call   08557b9e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x6ff>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x6ff
08551f0e +0x176:  mov    0x8(%ebp),%eax
08551f11 +0x179:  movl   $0x0,0x7c(%eax)
08551f18 +0x180:  mov    0x8(%ebp),%eax
08551f1b +0x183:  movl   $0x0,0x80(%eax)
08551f25 +0x18d:  mov    0x8(%ebp),%eax
08551f28 +0x190:  add    $0x84,%eax
08551f2d +0x195:  mov    %eax,(%esp)
08551f30 +0x198:  call   08557bb2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x713>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x713
08551f35 +0x19d:  mov    0x8(%ebp),%eax
08551f38 +0x1a0:  add    $0x90,%eax
08551f3d +0x1a5:  mov    %eax,(%esp)
08551f40 +0x1a8:  call   0855844e <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xfaf>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xfaf
08551f45 +0x1ad:  jmp    08551f48 <+0x1b0>
08551f47 +0x1af:  nop
08551f48 +0x1b0:  leave
08551f49 +0x1b1:  ret
```

## 反编译 C

```c
// WongWork::CMailBox::Init @ 0x8551d98

/* WongWork::CMailBox::Init() */

void __thiscall WongWork::CMailBox::Init(CMailBox *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30 [4];
  _List_iterator local_20 [4];
  _List_iterator<Stream*> local_1c [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_18 [4];
  undefined4 local_14;
  CMail *local_10;
  
  if (*this == (CMailBox)0x1) {
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_iterator((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *
                      )&local_14);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::end(local_18);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::begin((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
             *)local_30);
    local_14 = local_30[0];
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
              operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                          *)&local_14,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                          *)&local_14);
      local_10 = *(CMail **)(iVar2 + 4);
      CMail::ResetPackage(local_10);
      StaticPool<WongWork::CMailBox::CMail,20>::Free
                ((StaticPool<WongWork::CMailBox::CMail,20> *)(this + 0x10),local_10);
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                 &local_14);
    }
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::clear((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
             *)(this + 0x40));
    *this = (CMailBox)0x0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    cVar1 = std::list<Stream*,std::allocator<Stream*>>::empty
                      ((list<Stream*,std::allocator<Stream*>> *)(this + 0x58));
    if (cVar1 != '\x01') {
      std::list<Stream*,std::allocator<Stream*>>::begin();
      std::list<Stream*,std::allocator<Stream*>>::end();
      while( true ) {
        cVar1 = std::_List_iterator<Stream*>::operator!=(local_1c,local_20);
        if (cVar1 == '\0') break;
        puVar3 = (undefined4 *)std::_List_iterator<Stream*>::operator*(local_1c);
        StreamPool::Free(GlobalData::s_stream_pool,(Stream *)*puVar3);
        std::_List_iterator<Stream*>::operator++(local_1c);
      }
    }
    std::list<Stream*,std::allocator<Stream*>>::clear
              ((list<Stream*,std::allocator<Stream*>> *)(this + 0x58));
    std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::clear
              ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
               (this + 100));
    *(undefined4 *)(this + 0x7c) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x84));
    std::
    map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
    ::clear((map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
             *)(this + 0x90));
  }
  return;
}
```
