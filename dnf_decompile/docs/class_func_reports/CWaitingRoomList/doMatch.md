# doMatch

`_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE`

`CWaitingRoomList::doMatch(IMatch*, std::multimap<float, IMatch*, std::less<float>, std::allocator<std::pair<float const, IMatch*> > >&)`

| 类 | 地址 |
|---|---|
| `CWaitingRoomList` | `0x08566d9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08566d9c  _ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE
#           CWaitingRoomList::doMatch(IMatch*, std::multimap<float, IMatch*, std::less<float>, std::allocator<std::pair<float const, IMatch*> > >&)
# range [0x08566d9c, 0x08566efb]
08566d9c +0x000:  push   %ebp
08566d9d +0x001:  mov    %esp,%ebp
08566d9f +0x003:  sub    $0x48,%esp
08566da2 +0x006:  mov    0x8(%ebp),%eax
08566da5 +0x009:  mov    %eax,(%esp)
08566da8 +0x00c:  call   08569494 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xe5e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xe5e
08566dad +0x011:  xor    $0x1,%eax
08566db0 +0x014:  test   %al,%al
08566db2 +0x016:  je     08566ed7 <+0x13b>
08566db8 +0x01c:  movb   $0x0,-0xd(%ebp)
08566dbc +0x020:  mov    $0x0,%eax
08566dc1 +0x025:  mov    %eax,-0xc(%ebp)
08566dc4 +0x028:  mov    0x8(%ebp),%edx
08566dc7 +0x02b:  lea    -0x2c(%ebp),%eax
08566dca +0x02e:  mov    %edx,0x4(%esp)
08566dce +0x032:  mov    %eax,(%esp)
08566dd1 +0x035:  call   0856915e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xb28>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xb28
08566dd6 +0x03a:  sub    $0x4,%esp
08566dd9 +0x03d:  mov    0x8(%ebp),%edx
08566ddc +0x040:  lea    -0x30(%ebp),%eax
08566ddf +0x043:  mov    %edx,0x4(%esp)
08566de3 +0x047:  mov    %eax,(%esp)
08566de6 +0x04a:  call   085694a8 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xe72>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xe72
08566deb +0x04f:  sub    $0x4,%esp
08566dee +0x052:  jmp    08566ea6 <+0x10a>
08566df3 +0x057:  lea    -0x30(%ebp),%eax
08566df6 +0x05a:  mov    %eax,(%esp)
08566df9 +0x05d:  call   085694ec <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xeb6>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xeb6
08566dfe +0x062:  mov    (%eax),%eax
08566e00 +0x064:  mov    %eax,-0x34(%ebp)
08566e03 +0x067:  mov    -0x34(%ebp),%eax
08566e06 +0x06a:  cmp    0xc(%ebp),%eax
08566e09 +0x06d:  je     08566e97 <+0xfb>
08566e0f +0x073:  mov    0xc(%ebp),%eax
08566e12 +0x076:  mov    (%eax),%eax
08566e14 +0x078:  add    $0x78,%eax
08566e17 +0x07b:  mov    (%eax),%edx
08566e19 +0x07d:  mov    -0x34(%ebp),%eax
08566e1c +0x080:  mov    %eax,0x4(%esp)
08566e20 +0x084:  mov    0xc(%ebp),%eax
08566e23 +0x087:  mov    %eax,(%esp)
08566e26 +0x08a:  call   *%edx
08566e28 +0x08c:  xor    $0x1,%eax
08566e2b +0x08f:  test   %al,%al
08566e2d +0x091:  jne    08566e9a <+0xfe>
08566e2f +0x093:  mov    0xc(%ebp),%eax
08566e32 +0x096:  mov    (%eax),%eax
08566e34 +0x098:  add    $0xc,%eax
08566e37 +0x09b:  mov    (%eax),%edx
08566e39 +0x09d:  mov    -0x34(%ebp),%eax
08566e3c +0x0a0:  mov    %eax,0x4(%esp)
08566e40 +0x0a4:  mov    0xc(%ebp),%eax
08566e43 +0x0a7:  mov    %eax,(%esp)
08566e46 +0x0aa:  call   *%edx
08566e48 +0x0ac:  fstps  -0x38(%ebp)
08566e4b +0x0af:  lea    -0x18(%ebp),%eax
08566e4e +0x0b2:  lea    -0x34(%ebp),%edx
08566e51 +0x0b5:  mov    %edx,0x8(%esp)
08566e55 +0x0b9:  lea    -0x38(%ebp),%edx
08566e58 +0x0bc:  mov    %edx,0x4(%esp)
08566e5c +0x0c0:  mov    %eax,(%esp)
08566e5f +0x0c3:  call   085694f9 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xec3>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xec3
08566e64 +0x0c8:  sub    $0x4,%esp
08566e67 +0x0cb:  lea    -0x18(%ebp),%eax
08566e6a +0x0ce:  mov    %eax,0x4(%esp)
08566e6e +0x0d2:  lea    -0x20(%ebp),%eax
08566e71 +0x0d5:  mov    %eax,(%esp)
08566e74 +0x0d8:  call   08569538 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xf02>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xf02
08566e79 +0x0dd:  lea    -0x24(%ebp),%eax
08566e7c +0x0e0:  lea    -0x20(%ebp),%edx
08566e7f +0x0e3:  mov    %edx,0x8(%esp)
08566e83 +0x0e7:  mov    0x10(%ebp),%edx
08566e86 +0x0ea:  mov    %edx,0x4(%esp)
08566e8a +0x0ee:  mov    %eax,(%esp)
08566e8d +0x0f1:  call   08569568 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xf32>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xf32
08566e92 +0x0f6:  sub    $0x4,%esp
08566e95 +0x0f9:  jmp    08566e9b <+0xff>
08566e97 +0x0fb:  nop
08566e98 +0x0fc:  jmp    08566e9b <+0xff>
08566e9a +0x0fe:  nop
08566e9b +0x0ff:  lea    -0x30(%ebp),%eax
08566e9e +0x102:  mov    %eax,(%esp)
08566ea1 +0x105:  call   085694ce <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xe98>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xe98
08566ea6 +0x10a:  mov    0x8(%ebp),%edx
08566ea9 +0x10d:  lea    -0x28(%ebp),%eax
08566eac +0x110:  mov    %edx,0x4(%esp)
08566eb0 +0x114:  mov    %eax,(%esp)
08566eb3 +0x117:  call   0856915e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xb28>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xb28
08566eb8 +0x11c:  sub    $0x4,%esp
08566ebb +0x11f:  lea    -0x28(%ebp),%eax
08566ebe +0x122:  mov    %eax,0x4(%esp)
08566ec2 +0x126:  lea    -0x30(%ebp),%eax
08566ec5 +0x129:  mov    %eax,(%esp)
08566ec8 +0x12c:  call   08569184 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xb4e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xb4e
08566ecd +0x131:  test   %al,%al
08566ecf +0x133:  jne    08566df3 <+0x57>
08566ed5 +0x139:  jmp    08566ede <+0x142>
08566ed7 +0x13b:  mov    $0x0,%eax
08566edc +0x140:  jmp    08566ef9 <+0x15d>
08566ede +0x142:  mov    0x10(%ebp),%eax
08566ee1 +0x145:  mov    %eax,(%esp)
08566ee4 +0x148:  call   08569594 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xf5e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xf5e
08566ee9 +0x14d:  test   %al,%al
08566eeb +0x14f:  je     08566ef4 <+0x158>
08566eed +0x151:  mov    $0x0,%eax
08566ef2 +0x156:  jmp    08566ef9 <+0x15d>
08566ef4 +0x158:  mov    $0x1,%eax
08566ef9 +0x15d:  leave
08566efa +0x15e:  ret
08566efb +0x15f:  nop
```

## 反编译 C

```c
// CWaitingRoomList::doMatch @ 0x8566d9c

/* CWaitingRoomList::doMatch(IMatch*, std::multimap<float, IMatch*, std::less<float>,
   std::allocator<std::pair<float const, IMatch*> > >&) */

undefined4 __thiscall
CWaitingRoomList::doMatch(CWaitingRoomList *this,IMatch *param_1,multimap *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  longdouble lVar4;
  IMatch *local_3c;
  IMatch *local_38;
  set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>> local_34 [4];
  set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>> local_30 [4];
  set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>> local_2c [4];
  pair local_28 [4];
  pair<float_const,IMatch*> local_24 [8];
  float local_1c [2];
  undefined1 local_11;
  undefined4 local_10;
  
  cVar1 = std::set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>>::empty
                    ((set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>> *)this);
  if (cVar1 == '\x01') {
    uVar3 = 0;
  }
  else {
    local_11 = 0;
    local_10 = 0;
    std::set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>>::end(local_30);
    std::set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>>::begin(local_34);
    while( true ) {
      std::set<IMatch*,std::less<IMatch*>,std::allocator<IMatch*>>::end(local_2c);
      cVar1 = std::_Rb_tree_const_iterator<IMatch*>::operator!=
                        ((_Rb_tree_const_iterator<IMatch*> *)local_34,
                         (_Rb_tree_const_iterator *)local_2c);
      if (cVar1 == '\0') break;
      piVar2 = (int *)std::_Rb_tree_const_iterator<IMatch*>::operator*
                                ((_Rb_tree_const_iterator<IMatch*> *)local_34);
      local_38 = (IMatch *)*piVar2;
      if ((local_38 != param_1) &&
         (cVar1 = (**(code **)(*(int *)param_1 + 0x78))(param_1,local_38), cVar1 == '\x01')) {
        lVar4 = (longdouble)(**(code **)(*(int *)param_1 + 0xc))(param_1,local_38);
        local_3c = (IMatch *)(float)lVar4;
        std::make_pair<float&,IMatch*&>(local_1c,&local_3c);
        std::pair<float_const,IMatch*>::pair<float,IMatch*>(local_24,(pair *)local_1c);
        std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
        ::insert(local_28);
      }
      std::_Rb_tree_const_iterator<IMatch*>::operator++
                ((_Rb_tree_const_iterator<IMatch*> *)local_34);
    }
    cVar1 = std::
            multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
            ::empty((multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
                     *)param_2);
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
