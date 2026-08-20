# GetStartMap

`_ZNK8CDungeon11GetStartMapEi`

`CDungeon::GetStartMap(int) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834c75a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834c75a  _ZNK8CDungeon11GetStartMapEi
#           CDungeon::GetStartMap(int) const
# range [0x0834c75a, 0x0834c8bf]
0834c75a +0x000:  push   %ebp
0834c75b +0x001:  mov    %esp,%ebp
0834c75d +0x003:  sub    $0x48,%esp
0834c760 +0x006:  cmpl   $0xf,0xc(%ebp)
0834c764 +0x00a:  jg     0834c76c <+0x12>
0834c766 +0x00c:  cmpl   $0x0,0xc(%ebp)
0834c76a +0x010:  jns    0834c776 <+0x1c>
0834c76c +0x012:  mov    $0xffffffff,%eax
0834c771 +0x017:  jmp    0834c8be <+0x164>
0834c776 +0x01c:  mov    0xc(%ebp),%edx
0834c779 +0x01f:  mov    %edx,%eax
0834c77b +0x021:  shl    $0x2,%eax
0834c77e +0x024:  add    %edx,%eax
0834c780 +0x026:  shl    $0x2,%eax
0834c783 +0x029:  add    $0x60,%eax
0834c786 +0x02c:  add    0x8(%ebp),%eax
0834c789 +0x02f:  add    $0x4,%eax
0834c78c +0x032:  mov    %eax,(%esp)
0834c78f +0x035:  call   0838a2f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d98
0834c794 +0x03a:  test   %eax,%eax
0834c796 +0x03c:  sete   %al
0834c799 +0x03f:  test   %al,%al
0834c79b +0x041:  je     0834c7e4 <+0x8a>
0834c79d +0x043:  mov    0x8(%ebp),%eax
0834c7a0 +0x046:  mov    0x8(%eax),%eax
0834c7a3 +0x049:  mov    %eax,0x18(%esp)
0834c7a7 +0x04d:  mov    0xc(%ebp),%eax
0834c7aa +0x050:  mov    %eax,0x14(%esp)
0834c7ae +0x054:  movl   $"CDungeon::GetStartMap() : direction(%d), dungeon index(%d), start_maplist_[direction].size() == 0, May be Script Error!",0x10(%esp)
0834c7b6 +0x05c:  movl   $0x79a,0xc(%esp)
0834c7be +0x064:  movl   $&_ZZNK8CDungeon11GetStartMapEiE19__PRETTY_FUNCTION__,0x8(%esp)
0834c7c6 +0x06c:  movl   $"data_manager.cpp",0x4(%esp)
0834c7ce +0x074:  movl   $0x1,(%esp)
0834c7d5 +0x07b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0834c7da +0x080:  mov    $0xffffffff,%eax
0834c7df +0x085:  jmp    0834c8be <+0x164>
0834c7e4 +0x08a:  mov    0xc(%ebp),%edx
0834c7e7 +0x08d:  mov    %edx,%eax
0834c7e9 +0x08f:  shl    $0x2,%eax
0834c7ec +0x092:  add    %edx,%eax
0834c7ee +0x094:  shl    $0x2,%eax
0834c7f1 +0x097:  add    $0x60,%eax
0834c7f4 +0x09a:  add    0x8(%ebp),%eax
0834c7f7 +0x09d:  add    $0x4,%eax
0834c7fa +0x0a0:  mov    %eax,(%esp)
0834c7fd +0x0a3:  call   0838a2f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19d98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19d98
0834c802 +0x0a8:  mov    %eax,(%esp)
0834c805 +0x0ab:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0834c80a +0x0b0:  mov    %eax,-0x10(%ebp)
0834c80d +0x0b3:  mov    0xc(%ebp),%edx
0834c810 +0x0b6:  mov    %edx,%eax
0834c812 +0x0b8:  shl    $0x2,%eax
0834c815 +0x0bb:  add    %edx,%eax
0834c817 +0x0bd:  shl    $0x2,%eax
0834c81a +0x0c0:  add    $0x60,%eax
0834c81d +0x0c3:  add    0x8(%ebp),%eax
0834c820 +0x0c6:  lea    0x4(%eax),%edx
0834c823 +0x0c9:  lea    -0x28(%ebp),%eax
0834c826 +0x0cc:  mov    %edx,0x4(%esp)
0834c82a +0x0d0:  mov    %eax,(%esp)
0834c82d +0x0d3:  call   0838a30c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19dac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19dac
0834c832 +0x0d8:  sub    $0x4,%esp
0834c835 +0x0db:  movl   $0x0,-0xc(%ebp)
0834c83c +0x0e2:  jmp    0834c8a4 <+0x14a>
0834c83e +0x0e4:  lea    -0x20(%ebp),%eax
0834c841 +0x0e7:  movl   $0x0,0x8(%esp)
0834c849 +0x0ef:  lea    -0x28(%ebp),%edx
0834c84c +0x0f2:  mov    %edx,0x4(%esp)
0834c850 +0x0f6:  mov    %eax,(%esp)
0834c853 +0x0f9:  call   0838a332 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19dd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19dd2
0834c858 +0x0fe:  sub    $0x4,%esp
0834c85b +0x101:  mov    0xc(%ebp),%edx
0834c85e +0x104:  mov    %edx,%eax
0834c860 +0x106:  shl    $0x2,%eax
0834c863 +0x109:  add    %edx,%eax
0834c865 +0x10b:  shl    $0x2,%eax
0834c868 +0x10e:  add    $0x60,%eax
0834c86b +0x111:  add    0x8(%ebp),%eax
0834c86e +0x114:  lea    0x4(%eax),%edx
0834c871 +0x117:  lea    -0x18(%ebp),%eax
0834c874 +0x11a:  mov    %edx,0x4(%esp)
0834c878 +0x11e:  mov    %eax,(%esp)
0834c87b +0x121:  call   0838a368 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e08>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e08
0834c880 +0x126:  sub    $0x4,%esp
0834c883 +0x129:  lea    -0x18(%ebp),%eax
0834c886 +0x12c:  mov    %eax,0x4(%esp)
0834c88a +0x130:  lea    -0x28(%ebp),%eax
0834c88d +0x133:  mov    %eax,(%esp)
0834c890 +0x136:  call   0838a38e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e2e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e2e
0834c895 +0x13b:  test   %al,%al
0834c897 +0x13d:  je     0834c8a0 <+0x146>
0834c899 +0x13f:  mov    $0xffffffff,%eax
0834c89e +0x144:  jmp    0834c8be <+0x164>
0834c8a0 +0x146:  addl   $0x1,-0xc(%ebp)
0834c8a4 +0x14a:  mov    -0xc(%ebp),%eax
0834c8a7 +0x14d:  cmp    -0x10(%ebp),%eax
0834c8aa +0x150:  setl   %al
0834c8ad +0x153:  test   %al,%al
0834c8af +0x155:  jne    0834c83e <+0xe4>
0834c8b1 +0x157:  lea    -0x28(%ebp),%eax
0834c8b4 +0x15a:  mov    %eax,(%esp)
0834c8b7 +0x15d:  call   0838a3a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19e42>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19e42
0834c8bc +0x162:  mov    (%eax),%eax
0834c8be +0x164:  leave
0834c8bf +0x165:  ret
```

## 反编译 C

```c
// CDungeon::GetStartMap @ 0x834c75a

/* CDungeon::GetStartMap(int) const */

undefined4 __thiscall CDungeon::GetStartMap(CDungeon *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_2c [8];
  _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
  local_24 [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_1c [8];
  int local_14;
  int local_10;
  
  if ((param_1 < 0x10) && (-1 < param_1)) {
    iVar3 = __gnu_cxx::
            hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::size
                      ((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                        *)(this + param_1 * 0x14 + 100));
    if (iVar3 == 0) {
      LogManager::logFormat
                (1,"data_manager.cpp","int CDungeon::GetStartMap(int) const",0x79a,
                 "CDungeon::GetStartMap() : direction(%d), dungeon index(%d), start_maplist_[direction].size() == 0, May be Script Error!"
                 ,param_1,*(undefined4 *)(this + 8));
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = __gnu_cxx::
              hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
              size((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                    *)(this + param_1 * 0x14 + 100));
      local_14 = get_rand_int(iVar3);
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      begin(local_2c);
      for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
        __gnu_cxx::
        _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
        ::operator++(local_24,(int)local_2c);
        __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
        ::end(local_1c);
        cVar1 = __gnu_cxx::
                _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                ::operator==((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                              *)local_2c,(_Hashtable_const_iterator *)local_1c);
        if (cVar1 != '\0') {
          return 0xffffffff;
        }
      }
      puVar4 = (undefined4 *)
               __gnu_cxx::
               _Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
               ::operator->((_Hashtable_const_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                             *)local_2c);
      uVar2 = *puVar4;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
